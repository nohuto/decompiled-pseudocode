/*
 * XREFs of VfDriverEnableVerifierForAll @ 0x1409CB7C8
 * Callers:
 *     VfAddVerifierEntry @ 0x1409EF9D8 (VfAddVerifierEntry.c)
 * Callees:
 *     MmIsSessionAddress @ 0x14021F1C0 (MmIsSessionAddress.c)
 *     ExReleaseResourceLite @ 0x1402214C0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140222030 (ExAcquireResourceSharedLite.c)
 *     KeReleaseMutex @ 0x140240290 (KeReleaseMutex.c)
 *     RtlImageNtHeaderEx @ 0x140297270 (RtlImageNtHeaderEx.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 *     VfDriverLock @ 0x1409C55C8 (VfDriverLock.c)
 *     VfUtilIsProtectedDriver @ 0x1409C989C (VfUtilIsProtectedDriver.c)
 *     VfDriverEnableVerifier @ 0x1409CB630 (VfDriverEnableVerifier.c)
 *     VfSuspectDriversAllocateEntry @ 0x1409DC838 (VfSuspectDriversAllocateEntry.c)
 */

__int64 VfDriverEnableVerifierForAll()
{
  int v0; // edi
  PVOID *i; // rbx
  PVOID v2; // rbp
  __int64 Entry; // rax
  void *v4; // rsi
  int v6; // [rsp+40h] [rbp+8h] BYREF
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+48h] [rbp+10h] BYREF

  OutHeaders = 0LL;
  v0 = 0;
  v6 = 0;
  VfDriverLock();
  ExAcquireResourceSharedLite(&PsLoadedModuleResource, 1u);
  for ( i = *(PVOID **)PsLoadedModuleList; i != &PsLoadedModuleList; i = (PVOID *)*i )
  {
    if ( !(unsigned int)VfUtilIsProtectedDriver((PCUNICODE_STRING)(i + 11)) )
    {
      v2 = i[6];
      if ( MmIsSessionAddress((unsigned __int64)v2) || RtlImageNtHeaderEx(1u, v2, 0LL, &OutHeaders) >= 0 )
      {
        Entry = VfSuspectDriversAllocateEntry(i + 11);
        v4 = (void *)Entry;
        if ( !Entry )
        {
          v0 = -1073741670;
          break;
        }
        v6 = 0;
        v0 = VfDriverEnableVerifier(Entry, (__int64)i, &v6);
        if ( !v6 )
          ExFreePoolWithTag(v4, 0);
        if ( v0 < 0 )
          break;
      }
    }
  }
  ExReleaseResourceLite(&PsLoadedModuleResource);
  ViDriversLoadLockOwner = 0LL;
  KeReleaseMutex((PRKMUTEX)&ViDriversLoadLock, 0);
  return (unsigned int)v0;
}
