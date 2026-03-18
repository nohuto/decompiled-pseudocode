/*
 * XREFs of MmMapMdl @ 0x140592400
 * Callers:
 *     <none>
 * Callees:
 *     MiMappingHasIoReferences @ 0x1402155C8 (MiMappingHasIoReferences.c)
 *     MiZeroAndFlushPtes @ 0x1402157EC (MiZeroAndFlushPtes.c)
 *     MiWritePteShadow @ 0x1402294F0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140229550 (MiPteHasShadow.c)
 *     MiReleasePtes @ 0x1402BB6D0 (MiReleasePtes.c)
 *     MiGetUltraMapping @ 0x1402C6260 (MiGetUltraMapping.c)
 *     MiFillSystemPtes @ 0x140308F00 (MiFillSystemPtes.c)
 *     MiReservePtes @ 0x1403095B0 (MiReservePtes.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 *     MiMakeProtectionMask @ 0x14032BCC0 (MiMakeProtectionMask.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     MiFreeUltraMdlContext @ 0x1405B7108 (MiFreeUltraMdlContext.c)
 *     MiGetUltraMdlContext @ 0x1405B719C (MiGetUltraMdlContext.c)
 */

__int64 __fastcall MmMapMdl(__int64 a1, unsigned int a2, void (__fastcall *a3)(__int64, unsigned __int64), __int64 a4)
{
  struct _SLIST_ENTRY *v6; // r13
  unsigned int ProtectionMask; // ebp
  void (__fastcall *v8)(__int64, _QWORD); // r8
  __int64 v9; // r9
  unsigned __int64 v11; // r15
  unsigned int v12; // ebx
  __int64 UltraMdlContext; // rax
  unsigned __int64 UltraMapping; // rax
  ULONG_PTR v15; // rdi
  unsigned __int64 v16; // r14
  int v17; // ebp
  __int64 i; // rsi
  unsigned __int64 v19; // rbx
  int v20; // ebp
  bool v21; // zf
  int v22; // [rsp+30h] [rbp-38h] BYREF
  int v23; // [rsp+34h] [rbp-34h]

  v22 = 0;
  v6 = 0LL;
  ProtectionMask = MiMakeProtectionMask(a2);
  if ( ProtectionMask == -1
    || ProtectionMask == 24
    || (ProtectionMask & 7) == 5
    || (ProtectionMask & 2) != 0
    || (ProtectionMask & 0xFFFFFFF8) == 0x10 )
  {
    return 3221225541LL;
  }
  if ( (*(_BYTE *)(a1 + 10) & 5) != 0 )
  {
    v8(v9, *(_QWORD *)(a1 + 24));
    return 0LL;
  }
  v11 = (((*(_DWORD *)(a1 + 44) + *(_DWORD *)(a1 + 32)) & 0xFFF) + (unsigned __int64)*(unsigned int *)(a1 + 40) + 4095) >> 12;
  v12 = v11;
  if ( MmProtectFreedNonPagedPool )
    v12 = v11 + 1;
  if ( v12 > 0x200
    || (UltraMdlContext = MiGetUltraMdlContext(), (v6 = (struct _SLIST_ENTRY *)UltraMdlContext) == 0LL)
    || (UltraMapping = MiGetUltraMapping((unsigned __int64 *)(UltraMdlContext + 8), 3u, v12, 0),
        v15 = ((UltraMapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
        ((UltraMapping >> 9) & 0x7FFFFFFFF8LL) == 0x98000000000LL) )
  {
    v15 = MiReservePtes((__int64)&qword_140C534C0, v12);
    if ( !v15 )
      return 3221225626LL;
  }
  v16 = *(unsigned int *)(a1 + 44) + ((__int64)(v15 << 25) >> 16);
  v23 = MiFillSystemPtes(v15, v11, a1 + 48, ProtectionMask, 0, &v22);
  if ( v23 >= 0 )
  {
    v17 = v22 & 1;
    if ( (v22 & 1) != 0 )
    {
      MiMappingHasIoReferences(v16);
      *(_WORD *)(a1 + 10) |= 0x800u;
    }
    v23 = 0;
    a3(a4, v16);
    if ( v17 )
      MiZeroAndFlushPtes(v16, v11, 0);
  }
  if ( v6 )
  {
    if ( v12 )
    {
      for ( i = v12; i; --i )
      {
        v19 = ZeroPte;
        v20 = 0;
        if ( MiPteInShadowRange(v15) )
        {
          if ( (unsigned int)MiPteHasShadow() )
          {
            v20 = 1;
            if ( !HIBYTE(word_140C51864) )
            {
              v21 = (ZeroPte & 1) == 0;
              goto LABEL_29;
            }
          }
          else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
          {
            v21 = (ZeroPte & 1) == 0;
LABEL_29:
            if ( !v21 )
              v19 = ZeroPte | 0x8000000000000000uLL;
          }
        }
        *(_QWORD *)v15 = v19;
        if ( v20 )
          MiWritePteShadow(v15, v19);
        v15 += 8LL;
      }
    }
    MiFreeUltraMdlContext(v6);
  }
  else if ( v15 )
  {
    MiReleasePtes((__int64)&qword_140C534C0, (_QWORD *)v15, v12);
  }
  return (unsigned int)v23;
}
