/*
 * XREFs of MiObtainSectionForDriver @ 0x1407603D4
 * Callers:
 *     MmLoadSystemImageEx @ 0x14075FC44 (MmLoadSystemImageEx.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x14027B080 (MiGetSystemRegionType.c)
 *     MiSectionControlArea @ 0x140287970 (MiSectionControlArea.c)
 *     ObDereferenceObjectDeferDelete @ 0x140348920 (ObDereferenceObjectDeferDelete.c)
 *     MmReleaseLoadLock @ 0x1406F5AF0 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1406F5B50 (MmAcquireLoadLock.c)
 *     MiCreateSectionForDriver @ 0x14076185C (MiCreateSectionForDriver.c)
 *     MiFindDataTableEntryBySection @ 0x140761C98 (MiFindDataTableEntryBySection.c)
 *     MiAllocateTempLoaderEntry @ 0x140761D10 (MiAllocateTempLoaderEntry.c)
 *     RtlEqualUnicodeString @ 0x1407CD6A0 (RtlEqualUnicodeString.c)
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
  unsigned __int64 v14; // rax
  __int64 v15; // rdx
  __int16 v16; // r8
  int SystemRegionType; // eax
  __int64 TempLoaderEntry; // rax
  __int64 DataTableEntryBySection; // rax

  v5 = Object;
  CurrentThread = KeGetCurrentThread();
  Object = 0LL;
  v9 = 0LL;
  *v5 = 0LL;
  while ( 1 )
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
LABEL_14:
      if ( v9 )
        ObDereferenceObjectDeferDelete(v9);
      SystemRegionType = MiGetSystemRegionType((unsigned __int64)v12[6]);
      if ( (a4 & 1) != 0 )
      {
        if ( SystemRegionType == 1 )
        {
LABEL_18:
          *v5 = (__int64)v12;
          return 272LL;
        }
      }
      else if ( SystemRegionType != 1 )
      {
        goto LABEL_18;
      }
      return 3221225496LL;
    }
LABEL_5:
    if ( v9 )
      break;
    if ( !a3 )
      MmReleaseLoadLock((__int64)CurrentThread);
    v13 = MiCreateSectionForDriver(a2, a3, a4, &Object);
    if ( !a3 )
      MmAcquireLoadLock();
    if ( v13 < 0 )
      return (unsigned int)v13;
    v9 = Object;
    v14 = MiSectionControlArea((__int64)Object);
    v15 = *(_QWORD *)(*(_QWORD *)v14 + 56LL);
    if ( *(__int16 *)(v15 + 46) < v16 && *(_DWORD *)(v15 + 32) == 1 && (a4 & 1) == 0 )
    {
      v13 = -1073741800;
LABEL_31:
      ObDereferenceObjectDeferDelete(v9);
      return (unsigned int)v13;
    }
    if ( (a4 & 0x40000000) != 0 )
    {
      DataTableEntryBySection = MiFindDataTableEntryBySection(v14);
      v12 = (PVOID *)DataTableEntryBySection;
      if ( DataTableEntryBySection )
        goto LABEL_14;
    }
  }
  TempLoaderEntry = MiAllocateTempLoaderEntry(v9);
  if ( !TempLoaderEntry )
  {
    v13 = -1073741670;
    goto LABEL_31;
  }
  *v5 = TempLoaderEntry;
  return 0LL;
}
