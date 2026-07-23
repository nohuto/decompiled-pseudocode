/*
 * XREFs of MiInitializeLoadedModuleList @ 0x140A56E9C
 * Callers:
 *     MiInitSystem @ 0x140A54E5C (MiInitSystem.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x1402C1550 (ExInitializeResourceLite.c)
 *     MiConstructLoaderEntry @ 0x14075DF90 (MiConstructLoaderEntry.c)
 *     MiLockdownSections @ 0x14075E724 (MiLockdownSections.c)
 *     MiCaptureBootDriverRetpolineInfo @ 0x1407A5590 (MiCaptureBootDriverRetpolineInfo.c)
 *     NtSetDebugFilterState @ 0x1407A56C0 (NtSetDebugFilterState.c)
 *     MiBuildImportsForBootDrivers @ 0x140A57038 (MiBuildImportsForBootDrivers.c)
 *     RtlCreateInvertedFunctionTableCacheEntry @ 0x140A57360 (RtlCreateInvertedFunctionTableCacheEntry.c)
 *     MiLocateKernelSections @ 0x140A57418 (MiLocateKernelSections.c)
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
  qword_140C4CD08 = (__int64)&qword_140C4CD00;
  qword_140C4CD00 = (__int64)&qword_140C4CD00;
  v2 = (KiSpeculationFeatures & 0x20000000000LL) != 0 || (KiSpeculationFeatures & 0x40000000000LL) != 0;
  ExInitializeResourceLite(&PsLoadedModuleResource);
  ExpCovPushLock = 0LL;
  *(&PsLoadedModuleList + 1) = &PsLoadedModuleList;
  PsLoadedModuleList = &PsLoadedModuleList;
  qword_140C16268 = (__int64)&ExpCovUnloadedModuleList;
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
