/*
 * XREFs of MiObtainSectionForDriver @ 0x14075C518
 * Callers:
 *     MmLoadSystemImageEx @ 0x14075BCBC (MmLoadSystemImageEx.c)
 *     MiApplyHotPatchToLoadedDriver @ 0x1408C9358 (MiApplyHotPatchToLoadedDriver.c)
 * Callees:
 *     MiSectionControlArea @ 0x14031FFB0 (MiSectionControlArea.c)
 *     ObDereferenceObjectDeferDelete @ 0x14034E290 (ObDereferenceObjectDeferDelete.c)
 *     MiGetSystemRegionType @ 0x1403556A0 (MiGetSystemRegionType.c)
 *     MmReleaseLoadLock @ 0x1406A83F0 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1406A8450 (MmAcquireLoadLock.c)
 *     RtlEqualUnicodeString @ 0x1406F0B70 (RtlEqualUnicodeString.c)
 *     MiAllocateTempLoaderEntry @ 0x14075DDB8 (MiAllocateTempLoaderEntry.c)
 *     MiCreateSectionForDriver @ 0x14075DE08 (MiCreateSectionForDriver.c)
 */

__int64 __fastcall MiObtainSectionForDriver(
        PCUNICODE_STRING String1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 *Object)
{
  __int64 *v5; // rsi
  struct _KTHREAD *CurrentThread; // r15
  __int64 *v9; // rdi
  PVOID *v12; // rbx
  int v13; // ebx
  __int64 v14; // rax
  __int16 v15; // r8
  __int64 TempLoaderEntry; // rax
  int SystemRegionType; // eax

  v5 = Object;
  CurrentThread = KeGetCurrentThread();
  Object = 0LL;
  v9 = 0LL;
  *v5 = 0LL;
  do
  {
    v12 = (PVOID *)PsLoadedModuleList;
    if ( PsLoadedModuleList != &PsLoadedModuleList )
    {
      while ( !RtlEqualUnicodeString(String1, (PCUNICODE_STRING)(v12 + 9), 1u) )
      {
        v12 = (PVOID *)*v12;
        if ( v12 == &PsLoadedModuleList )
          goto LABEL_5;
      }
      if ( v9 )
        ObDereferenceObjectDeferDelete(v9);
      SystemRegionType = MiGetSystemRegionType((unsigned __int64)v12[6]);
      if ( (a4 & 1) != 0 )
      {
        if ( SystemRegionType == 1 )
        {
LABEL_21:
          *v5 = (__int64)v12;
          return 272LL;
        }
      }
      else if ( SystemRegionType != 1 )
      {
        goto LABEL_21;
      }
      return 3221225496LL;
    }
LABEL_5:
    if ( v9 )
    {
      TempLoaderEntry = MiAllocateTempLoaderEntry(v9);
      if ( TempLoaderEntry )
      {
        *v5 = TempLoaderEntry;
        return 0LL;
      }
      v13 = -1073741670;
      goto LABEL_26;
    }
    if ( !a3 )
      MmReleaseLoadLock((__int64)CurrentThread);
    v13 = MiCreateSectionForDriver(a2, a3, a4, &Object);
    if ( !a3 )
      MmAcquireLoadLock();
    if ( v13 < 0 )
      return (unsigned int)v13;
    v9 = Object;
    v14 = *(_QWORD *)(*(_QWORD *)MiSectionControlArea((__int64)Object) + 56LL);
  }
  while ( *(__int16 *)(v14 + 46) >= v15 || *(_DWORD *)(v14 + 32) != 1 || (a4 & 1) != 0 );
  v13 = -1073741800;
LABEL_26:
  ObDereferenceObjectDeferDelete(v9);
  return (unsigned int)v13;
}
