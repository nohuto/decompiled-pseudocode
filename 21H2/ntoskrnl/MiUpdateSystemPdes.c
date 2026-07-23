/*
 * XREFs of MiUpdateSystemPdes @ 0x14052CC20
 * Callers:
 *     MiSyncSystemPdes @ 0x14029565C (MiSyncSystemPdes.c)
 *     KiInSwapProcesses @ 0x1402EED88 (KiInSwapProcesses.c)
 * Callees:
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiCopyTopLevelMappings @ 0x140295758 (MiCopyTopLevelMappings.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14033C800 (MiMapPageInHyperSpaceWorker.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x140353660 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 */

char __fastcall MiUpdateSystemPdes(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rbx
  unsigned __int64 v4; // r14
  int v5; // esi
  __int64 *v6; // rdi
  bool v7; // zf
  unsigned __int8 v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = 0;
  v2 = *(_QWORD *)(a1 + 40) >> 12;
  v3 = MEMORY[0xFFFFF6FB7DBEDF68] ^ (MEMORY[0xFFFFF6FB7DBEDF68] ^ (v2 << 12)) & 0xFFFFFFFFF000LL;
  v4 = MiMapPageInHyperSpaceWorker(v2, &v9, 0x80000000);
  MiCopyTopLevelMappings(a1, v4);
  v5 = 0;
  v6 = (__int64 *)(v4 + 3944);
  if ( MiPteInShadowRange(v4 + 3944) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v5 = 1;
      if ( HIBYTE(word_140C4E048) )
        goto LABEL_9;
      v7 = (v3 & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_9;
      v7 = (v3 & 1) == 0;
    }
    if ( !v7 )
      v3 |= 0x8000000000000000uLL;
  }
LABEL_9:
  *v6 = v3;
  if ( v5 )
    MiWritePteShadow((__int64)v6, v3);
  return MiUnmapPageInHyperSpaceWorker(v4, v9, 0x80000000);
}
