/*
 * XREFs of VfDriverEnableVerifierForAll @ 0x1409C5798
 * Callers:
 *     VfAddVerifierEntry @ 0x1409E9958 (VfAddVerifierEntry.c)
 * Callees:
 *     KeReleaseMutex @ 0x1402486F0 (KeReleaseMutex.c)
 *     ExReleaseResourceLite @ 0x140261460 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140261FD0 (ExAcquireResourceSharedLite.c)
 *     RtlImageNtHeaderEx @ 0x14027DB10 (RtlImageNtHeaderEx.c)
 *     MmIsSessionAddress @ 0x14035ADE0 (MmIsSessionAddress.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     VfDriverLock @ 0x1409BF5A8 (VfDriverLock.c)
 *     VfUtilIsProtectedDriver @ 0x1409C386C (VfUtilIsProtectedDriver.c)
 *     VfDriverEnableVerifier @ 0x1409C5600 (VfDriverEnableVerifier.c)
 *     VfSuspectDriversAllocateEntry @ 0x1409D67B8 (VfSuspectDriversAllocateEntry.c)
 */

__int64 VfDriverEnableVerifierForAll()
{
  int v0; // edi
  PVOID *i; // rbx
  PVOID v2; // rbp
  int v3; // eax
  __int64 Entry; // rax
  void *v5; // rsi
  int v7; // [rsp+40h] [rbp+8h] BYREF
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+48h] [rbp+10h] BYREF

  OutHeaders = 0LL;
  v0 = 0;
  v7 = 0;
  VfDriverLock();
  ExAcquireResourceSharedLite(&PsLoadedModuleResource, 1u);
  for ( i = *(PVOID **)PsLoadedModuleList; i != &PsLoadedModuleList; i = (PVOID *)*i )
  {
    if ( !(unsigned int)VfUtilIsProtectedDriver((PCUNICODE_STRING)(i + 11)) )
    {
      v2 = i[6];
      LOBYTE(v3) = MmIsSessionAddress((unsigned __int64)v2);
      if ( v3 || RtlImageNtHeaderEx(1u, v2, 0LL, &OutHeaders) >= 0 )
      {
        Entry = VfSuspectDriversAllocateEntry(i + 11);
        v5 = (void *)Entry;
        if ( !Entry )
        {
          v0 = -1073741670;
          break;
        }
        v7 = 0;
        v0 = VfDriverEnableVerifier(Entry, (__int64)i, &v7);
        if ( !v7 )
          ExFreePoolWithTag(v5, 0);
        if ( v0 < 0 )
          break;
      }
    }
  }
  ExReleaseResourceLite(&PsLoadedModuleResource);
  ViDriversLoadLockOwner = 0LL;
  KeReleaseMutex(&ViDriversLoadLock, 0);
  return (unsigned int)v0;
}
