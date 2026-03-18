/*
 * XREFs of ExInitializeLeapSecondData @ 0x14079254C
 * Callers:
 *     Phase1InitializationDiscard @ 0x140A37B24 (Phase1InitializationDiscard.c)
 * Callees:
 *     MmMapLockedPagesSpecifyCache @ 0x14021BA60 (MmMapLockedPagesSpecifyCache.c)
 *     MmProbeAndLockPages @ 0x14024D8A0 (MmProbeAndLockPages.c)
 *     MmSizeOfMdl @ 0x140338590 (MmSizeOfMdl.c)
 *     Feature_Servicing_CorrectTimeAfterDST_33809459__private_IsEnabled @ 0x1403EC714 (Feature_Servicing_CorrectTimeAfterDST_33809459__private_IsEnabled.c)
 *     ZwClose @ 0x1403F37A0 (ZwClose.c)
 *     ZwCreateSection @ 0x1403F3F00 (ZwCreateSection.c)
 *     memset @ 0x14040A280 (memset.c)
 *     ObReferenceObjectByHandle @ 0x1405F5C90 (ObReferenceObjectByHandle.c)
 *     MmUnmapViewInSystemSpace @ 0x140605CC0 (MmUnmapViewInSystemSpace.c)
 *     MmMapViewInSystemSpace @ 0x14070D350 (MmMapViewInSystemSpace.c)
 *     ExpReadLeapSecondData @ 0x140792864 (ExpReadLeapSecondData.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

__int64 ExInitializeLeapSecondData()
{
  NTSTATUS v0; // ebx
  PVOID v1; // r12
  size_t v2; // r15
  SIZE_T v3; // rax
  struct _MDL *PoolWithTag; // rax
  struct _MDL *v5; // rbx
  __int16 v6; // dx
  PVOID v7; // rsi
  __int64 v8; // rdx
  LARGE_INTEGER v10[7]; // [rsp+40h] [rbp-38h] BYREF
  PVOID MappedBase; // [rsp+80h] [rbp+8h] BYREF
  HANDLE Handle; // [rsp+88h] [rbp+10h] BYREF
  PVOID Section; // [rsp+90h] [rbp+18h] BYREF
  ULONG_PTR ViewSize; // [rsp+98h] [rbp+20h] BYREF

  Handle = 0LL;
  v10[0].QuadPart = 4096LL;
  v0 = ZwCreateSection(&Handle, 6u, 0LL, v10, 4u, 0x8000000u, 0LL);
  if ( v0 >= 0 )
  {
    Section = 0LL;
    v0 = ObReferenceObjectByHandle(Handle, 6u, MmSectionObjectType, 0, &Section, 0LL);
    if ( v0 >= 0 )
    {
      MappedBase = 0LL;
      ViewSize = 0LL;
      v1 = Section;
      v0 = MmMapViewInSystemSpace(Section, &MappedBase, &ViewSize);
      if ( v0 >= 0 )
      {
        v2 = ViewSize;
        v3 = MmSizeOfMdl(MappedBase, ViewSize);
        PoolWithTag = (struct _MDL *)ExAllocatePoolWithTag(NonPagedPoolNx, v3, 0x6453704Cu);
        v5 = PoolWithTag;
        if ( !PoolWithTag )
          goto LABEL_5;
        PoolWithTag->Next = 0LL;
        v6 = (__int16)MappedBase;
        PoolWithTag->Size = 8 * (((((unsigned __int16)MappedBase & 0xFFF) + v2 + 4095) >> 12) + 6);
        PoolWithTag->MdlFlags = 0;
        PoolWithTag->StartVa = (PVOID)((unsigned __int64)MappedBase & 0xFFFFFFFFFFFFF000uLL);
        PoolWithTag->ByteOffset = v6 & 0xFFF;
        PoolWithTag->ByteCount = v2;
        MmProbeAndLockPages(PoolWithTag, 0, IoWriteAccess);
        v7 = MmMapLockedPagesSpecifyCache(v5, 0, MmCached, 0LL, 0, 0x40000010u);
        if ( v7 )
        {
          v0 = MmUnmapViewInSystemSpace(MappedBase);
          if ( v0 >= 0 )
          {
            ExpLeapSecondDataLock = 0LL;
            ExLeapSecondDataSectionPointer = (__int64)v1;
            memset(v7, 0, v2);
            LOBYTE(v8) = (unsigned int)Feature_Servicing_CorrectTimeAfterDST_33809459__private_IsEnabled() == 0;
            ExpReadLeapSecondData(v7, v8);
            ExLeapSecondData = v7;
          }
        }
        else
        {
LABEL_5:
          v0 = -1073741801;
        }
      }
    }
  }
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v0;
}
