/*
 * XREFs of MiUpdateSystemPdes @ 0x14052AEE0
 * Callers:
 *     KiInSwapProcesses @ 0x14030A250 (KiInSwapProcesses.c)
 *     MiSyncSystemPdes @ 0x1403351EC (MiSyncSystemPdes.c)
 * Callees:
 *     MiUnmapPageInHyperSpaceWorker @ 0x14021E940 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x140313F2C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140313F8C (MiPteHasShadow.c)
 *     MiCopyTopLevelMappings @ 0x1403352E8 (MiCopyTopLevelMappings.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140349980 (MiMapPageInHyperSpaceWorker.c)
 */

__int64 __fastcall MiUpdateSystemPdes(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rcx
  __int64 v6; // rbx
  unsigned __int64 v7; // r14
  int v8; // esi
  __int64 *v9; // rdi
  __int64 v10; // r8
  bool v11; // zf
  unsigned __int8 v13; // [rsp+30h] [rbp+8h] BYREF

  v13 = 0;
  v5 = *(_QWORD *)(a1 + 40) >> 12;
  v6 = MEMORY[0xFFFFF6FB7DBEDF68] ^ (MEMORY[0xFFFFF6FB7DBEDF68] ^ (v5 << 12)) & 0xFFFFFFFFF000LL;
  v7 = MiMapPageInHyperSpaceWorker(v5, &v13, 0x80000000, a4);
  MiCopyTopLevelMappings(a1, v7);
  v8 = 0;
  v9 = (__int64 *)(v7 + 3944);
  if ( MiPteInShadowRange(v7 + 3944) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v8 = 1;
      if ( HIBYTE(word_140C4DE88) )
        goto LABEL_9;
      v11 = (v6 & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_9;
      v11 = (v6 & 1) == 0;
    }
    if ( !v11 )
      v6 |= 0x8000000000000000uLL;
  }
LABEL_9:
  *v9 = v6;
  if ( v8 )
    MiWritePteShadow((__int64)v9, v6, v10);
  return MiUnmapPageInHyperSpaceWorker(v7, v13, 0x80000000);
}
