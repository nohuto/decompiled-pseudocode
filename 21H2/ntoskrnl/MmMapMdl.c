/*
 * XREFs of MmMapMdl @ 0x1405377F0
 * Callers:
 *     <none>
 * Callees:
 *     MiMappingHasIoReferences @ 0x140217B54 (MiMappingHasIoReferences.c)
 *     MiZeroAndFlushPtes @ 0x1402180C0 (MiZeroAndFlushPtes.c)
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiMakeProtectionMask @ 0x1402BF320 (MiMakeProtectionMask.c)
 *     MiReservePtes @ 0x1402CAEB0 (MiReservePtes.c)
 *     MiFillSystemPtes @ 0x1402CB7F0 (MiFillSystemPtes.c)
 *     MiGetUltraMapping @ 0x1402D8F50 (MiGetUltraMapping.c)
 *     MiProtectionToCacheAttribute @ 0x1402E6690 (MiProtectionToCacheAttribute.c)
 *     MiReleasePtes @ 0x1402EA050 (MiReleasePtes.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     MiInsertPteTracker @ 0x14055F020 (MiInsertPteTracker.c)
 *     MiFreeUltraMdlContext @ 0x14055F514 (MiFreeUltraMdlContext.c)
 *     MiGetUltraMdlContext @ 0x14055F5A8 (MiGetUltraMdlContext.c)
 */

__int64 __fastcall MmMapMdl(__int64 a1, unsigned int a2, void (__fastcall *a3)(__int64, unsigned __int64), __int64 a4)
{
  _SLIST_ENTRY *v5; // r13
  void (__fastcall *v6)(unsigned __int64, _QWORD); // r8
  unsigned __int64 v7; // r9
  unsigned int ProtectionMask; // r14d
  unsigned __int64 v10; // r12
  unsigned int v11; // esi
  __int64 UltraMdlContext; // rax
  unsigned __int64 UltraMapping; // rax
  ULONG_PTR v14; // rdi
  unsigned __int64 v15; // r15
  int v16; // ebp
  unsigned int v17; // eax
  __int64 v18; // r8
  __int64 i; // rbp
  unsigned __int64 v20; // rbx
  int v21; // r14d
  bool v22; // zf
  int v23; // [rsp+30h] [rbp-48h] BYREF
  int v24; // [rsp+34h] [rbp-44h]

  v23 = 0;
  v5 = 0LL;
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
    v6(v7, *(_QWORD *)(a1 + 24));
    return 0LL;
  }
  v10 = (((*(_DWORD *)(a1 + 44) + *(_DWORD *)(a1 + 32)) & 0xFFF) + (unsigned __int64)*(unsigned int *)(a1 + 40) + 4095) >> 12;
  v11 = v10;
  if ( MmProtectFreedNonPagedPool == 1 )
    v11 = v10 + 1;
  if ( v11 > 0x200
    || (UltraMdlContext = MiGetUltraMdlContext(), (v5 = (_SLIST_ENTRY *)UltraMdlContext) == 0LL)
    || (UltraMapping = MiGetUltraMapping((unsigned __int64 *)(UltraMdlContext + 8), 3u, v11, 0),
        v14 = ((UltraMapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
        ((UltraMapping >> 9) & 0x7FFFFFFFF8LL) == 0x98000000000LL) )
  {
    v14 = MiReservePtes((__int64)&qword_140C4EF80, v11, (__int64)v6, v7);
    if ( !v14 )
      return 3221225626LL;
  }
  v15 = *(unsigned int *)(a1 + 44) + ((__int64)(v14 << 25) >> 16);
  v24 = MiFillSystemPtes(v14, v10, a1 + 48, ProtectionMask, 0, &v23);
  if ( v24 >= 0 )
  {
    v16 = v23 & 1;
    if ( (v23 & 1) != 0 )
    {
      MiMappingHasIoReferences(v15);
      *(_WORD *)(a1 + 10) |= 0x800u;
    }
    if ( (dword_140CFB17C & 1) != 0 )
    {
      v17 = MiProtectionToCacheAttribute(ProtectionMask);
      MiInsertPteTracker(a1, 0LL, v18, v17);
    }
    v24 = 0;
    a3(a4, v15);
    if ( v16 )
      MiZeroAndFlushPtes(v15, v10);
  }
  if ( v5 )
  {
    if ( v11 )
    {
      for ( i = v11; i; --i )
      {
        v20 = ZeroPte;
        v21 = 0;
        if ( MiPteInShadowRange(v14) )
        {
          if ( (unsigned int)MiPteHasShadow() )
          {
            v21 = 1;
            if ( !HIBYTE(word_140C4E048) )
            {
              v22 = (ZeroPte & 1) == 0;
              goto LABEL_31;
            }
          }
          else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
          {
            v22 = (ZeroPte & 1) == 0;
LABEL_31:
            if ( !v22 )
              v20 = ZeroPte | 0x8000000000000000uLL;
          }
        }
        *(_QWORD *)v14 = v20;
        if ( v21 )
          MiWritePteShadow(v14, v20);
        v14 += 8LL;
      }
    }
    MiFreeUltraMdlContext(v5);
    v14 = 0LL;
  }
  if ( v14 )
    MiReleasePtes((__int64)&qword_140C4EF80, (_QWORD *)v14, v11);
  return (unsigned int)v24;
}
