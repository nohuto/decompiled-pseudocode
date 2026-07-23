/*
 * XREFs of MiInitializeLoadedModuleList @ 0x140A54214
 * Callers:
 *     MiInitSystem @ 0x140A521D4 (MiInitSystem.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x140213470 (ExInitializeResourceLite.c)
 *     MiConstructLoaderEntry @ 0x140748158 (MiConstructLoaderEntry.c)
 *     MiLockdownSections @ 0x1407488EC (MiLockdownSections.c)
 *     MiCaptureBootDriverRetpolineInfo @ 0x14078E730 (MiCaptureBootDriverRetpolineInfo.c)
 *     NtSetDebugFilterState @ 0x14078E860 (NtSetDebugFilterState.c)
 *     MiBuildImportsForBootDrivers @ 0x140A5439C (MiBuildImportsForBootDrivers.c)
 *     RtlCreateInvertedFunctionTableCacheEntry @ 0x140A546C4 (RtlCreateInvertedFunctionTableCacheEntry.c)
 *     MiLocateKernelSections @ 0x140A5477C (MiLocateKernelSections.c)
 */

__int64 __fastcall MiInitializeLoadedModuleList(__int64 a1)
{
  bool v2; // di
  __int64 *v3; // rsi
  __int64 v4; // rbx
  unsigned int *v5; // rcx
  unsigned int *v6; // rbp
  int v7; // eax
  unsigned int *v9; // [rsp+50h] [rbp+8h] BYREF

  v9 = 0LL;
  qword_140C4CAC8 = (__int64)&qword_140C4CAC0;
  qword_140C4CAC0 = (__int64)&qword_140C4CAC0;
  v2 = (KiSpeculationFeatures & 0x2000000) != 0 || (KiSpeculationFeatures & 0x4000000) != 0;
  ExInitializeResourceLite(&PsLoadedModuleResource);
  ExpCovPushLock = 0LL;
  *(&PsLoadedModuleList + 1) = &PsLoadedModuleList;
  PsLoadedModuleList = &PsLoadedModuleList;
  qword_140C16048 = (__int64)&ExpCovUnloadedModuleList;
  ExpCovUnloadedModuleList = (__int64)&ExpCovUnloadedModuleList;
  NtSetDebugFilterState(0x7Eu, 0, 1u);
  v3 = (__int64 *)(a1 + 16);
  v4 = *v3;
  MiLocateKernelSections(*v3);
  if ( (__int64 *)v4 == v3 )
  {
LABEL_11:
    MiBuildImportsForBootDrivers();
    return 1LL;
  }
  else
  {
    while ( (int)MiConstructLoaderEntry(v4, (const void **)(v4 + 88), (const void **)(v4 + 72), 0, 1, &v9) >= 0 )
    {
      v5 = v9;
      v6 = v9 + 40;
      if ( *((PVOID *)v9 + 6) == PsNtosImageBase && (MiFlags & 0x80000) == 0 )
      {
        RtlCreateInvertedFunctionTableCacheEntry(*((_QWORD *)v9 + 6), v9[16]);
        v5 = v9;
      }
      MiLockdownSections((__int64)v5);
      if ( v2 && (v9[26] & 0x800000) == 0 )
      {
        v7 = MiCaptureBootDriverRetpolineInfo(*((PVOID *)v9 + 6), v9[16], (_QWORD *)v6 + 17);
        if ( ((v7 + 0x80000000) & 0x80000000) == 0 && v7 != -1073741637 )
          break;
      }
      v4 = *(_QWORD *)v4;
      if ( (__int64 *)v4 == v3 )
        goto LABEL_11;
    }
    return 0LL;
  }
}
