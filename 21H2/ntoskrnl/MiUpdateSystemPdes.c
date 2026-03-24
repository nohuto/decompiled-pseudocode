/*
 * XREFs of MiUpdateSystemPdes @ 0x14052C9E0
 * Callers:
 *     KiInSwapProcesses @ 0x14024A538 (KiInSwapProcesses.c)
 *     MiSyncSystemPdes @ 0x1402E430C (MiSyncSystemPdes.c)
 * Callees:
 *     MiWritePteShadow @ 0x1402B69BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402B6A1C (MiPteHasShadow.c)
 *     MiCopyTopLevelMappings @ 0x1402E4408 (MiCopyTopLevelMappings.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140331AB0 (MiMapPageInHyperSpaceWorker.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x140348910 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
 */

char __fastcall MiUpdateSystemPdes(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rbx
  unsigned __int64 v4; // r14
  int v5; // esi
  __int64 *v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // r8
  bool v9; // zf
  unsigned __int8 v11; // [rsp+30h] [rbp+8h] BYREF

  v11 = 0;
  v2 = *(_QWORD *)(a1 + 40) >> 12;
  v3 = MEMORY[0xFFFFF6FB7DBEDF68] ^ (MEMORY[0xFFFFF6FB7DBEDF68] ^ (v2 << 12)) & 0xFFFFFFFFF000LL;
  v4 = MiMapPageInHyperSpaceWorker(v2, &v11, 0x80000000);
  MiCopyTopLevelMappings(a1, v4);
  v5 = 0;
  v6 = (__int64 *)(v4 + 3944);
  if ( MiPteInShadowRange(v4 + 3944) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v5 = 1;
      if ( HIBYTE(word_140C4E008) )
        goto LABEL_9;
      v9 = (v3 & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_9;
      v9 = (v3 & 1) == 0;
    }
    if ( !v9 )
      v3 |= 0x8000000000000000uLL;
  }
LABEL_9:
  *v6 = v3;
  if ( v5 )
    MiWritePteShadow((__int64)v6, v3, v8);
  LOBYTE(v7) = v11;
  return MiUnmapPageInHyperSpaceWorker(v4, v7, 0x80000000);
}
