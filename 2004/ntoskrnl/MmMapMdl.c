/*
 * XREFs of MmMapMdl @ 0x1405320E0
 * Callers:
 *     <none>
 * Callees:
 *     MiReservePtes @ 0x14021B350 (MiReservePtes.c)
 *     MiFillSystemPtes @ 0x14021BC90 (MiFillSystemPtes.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiGetUltraMapping @ 0x14023D870 (MiGetUltraMapping.c)
 *     MiReleasePtes @ 0x140284720 (MiReleasePtes.c)
 *     MiMakeProtectionMask @ 0x1402ACEC0 (MiMakeProtectionMask.c)
 *     MiProtectionToCacheAttribute @ 0x1402B84B0 (MiProtectionToCacheAttribute.c)
 *     MiWritePteShadow @ 0x14032ECC0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 *     MiMappingHasIoReferences @ 0x140336F84 (MiMappingHasIoReferences.c)
 *     MiZeroAndFlushPtes @ 0x1403374F0 (MiZeroAndFlushPtes.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     MiInsertPteTracker @ 0x140559940 (MiInsertPteTracker.c)
 *     MiFreeUltraMdlContext @ 0x140559E34 (MiFreeUltraMdlContext.c)
 *     MiGetUltraMdlContext @ 0x140559EC8 (MiGetUltraMdlContext.c)
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
  __int64 v22; // r8
  bool v23; // zf
  int v24; // [rsp+30h] [rbp-48h] BYREF
  int v25; // [rsp+34h] [rbp-44h]

  v24 = 0;
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
    v14 = MiReservePtes((__int64)&qword_140C4ED40, v11, (__int64)v6, v7);
    if ( !v14 )
      return 3221225626LL;
  }
  v15 = *(unsigned int *)(a1 + 44) + ((__int64)(v14 << 25) >> 16);
  v25 = MiFillSystemPtes(v14, v10, a1 + 48, ProtectionMask, 0, &v24);
  if ( v25 >= 0 )
  {
    v16 = v24 & 1;
    if ( (v24 & 1) != 0 )
    {
      MiMappingHasIoReferences(v15);
      *(_WORD *)(a1 + 10) |= 0x800u;
    }
    if ( (dword_140CFB17C & 1) != 0 )
    {
      v17 = MiProtectionToCacheAttribute(ProtectionMask);
      MiInsertPteTracker(a1, 0LL, v18, v17);
    }
    v25 = 0;
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
            if ( !HIBYTE(word_140C4DE08) )
            {
              v23 = (ZeroPte & 1) == 0;
              goto LABEL_31;
            }
          }
          else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
          {
            v23 = (ZeroPte & 1) == 0;
LABEL_31:
            if ( !v23 )
              v20 = ZeroPte | 0x8000000000000000uLL;
          }
        }
        *(_QWORD *)v14 = v20;
        if ( v21 )
          MiWritePteShadow(v14, v20, v22);
        v14 += 8LL;
      }
    }
    MiFreeUltraMdlContext(v5);
    v14 = 0LL;
  }
  if ( v14 )
    MiReleasePtes((__int64)&qword_140C4ED40, (_QWORD *)v14, v11);
  return (unsigned int)v25;
}
