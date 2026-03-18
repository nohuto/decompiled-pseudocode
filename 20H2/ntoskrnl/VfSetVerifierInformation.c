/*
 * XREFs of VfSetVerifierInformation @ 0x1409EFBEC
 * Callers:
 *     NtSetSystemInformation @ 0x1406F5A80 (NtSetSystemInformation.c)
 *     VfFaultsSetParameters @ 0x1409DF9D8 (VfFaultsSetParameters.c)
 * Callees:
 *     KeReleaseMutex @ 0x140240290 (KeReleaseMutex.c)
 *     VfDriverLock @ 0x1409C55C8 (VfDriverLock.c)
 *     VfInitSystemNoRebootNeeded @ 0x1409C9D50 (VfInitSystemNoRebootNeeded.c)
 *     VfSettingsCheckForChanges @ 0x1409E348C (VfSettingsCheckForChanges.c)
 */

__int64 __fastcall VfSetVerifierInformation(unsigned int *a1, unsigned int a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rcx
  int v6; // edx
  int v7; // ebx
  unsigned int v8; // esi

  if ( a2 < 4 )
    return 3221225476LL;
  if ( VfSafeMode )
    return 3221226335LL;
  v4 = *a1;
  VfDriverLock();
  if ( !MmVerifierData )
    MmVerifyDriverLevel = 0;
  VfInitSystemNoRebootNeeded(v5, 0);
  v6 = v4 & VerifierModifyableOptions;
  v7 = VerifierModifyableOptions & ~v4;
  v8 = ~v7 & (v6 | MmVerifierData);
  if ( v8 != MmVerifierData )
  {
    VfSettingsCheckForChanges(MmVerifierData, v6, v7, v8);
    ++dword_140C2A758;
    MmVerifierData = v8;
    *a1 = v8;
  }
  ViDriversLoadLockOwner = 0LL;
  KeReleaseMutex((PRKMUTEX)&ViDriversLoadLock, 0);
  return 0LL;
}
