/*
 * XREFs of ExInitializeLeapSecondData @ 0x140A535D4
 * Callers:
 *     Phase1InitializationDiscard @ 0x140A382A8 (Phase1InitializationDiscard.c)
 * Callees:
 *     MmMapLockedPagesSpecifyCache @ 0x140274AB0 (MmMapLockedPagesSpecifyCache.c)
 *     MiProbeAndLockPages @ 0x1402A6910 (MiProbeAndLockPages.c)
 *     ZwClose @ 0x1403F2510 (ZwClose.c)
 *     ZwCreateSection @ 0x1403F2C70 (ZwCreateSection.c)
 *     memset @ 0x140408F80 (memset.c)
 *     ObReferenceObjectByHandle @ 0x14062B200 (ObReferenceObjectByHandle.c)
 *     MmUnmapViewInSystemSpace @ 0x14063AD00 (MmUnmapViewInSystemSpace.c)
 *     MmMapViewInSystemSpace @ 0x1406E94F0 (MmMapViewInSystemSpace.c)
 *     ExpReadLeapSecondData @ 0x1407901D4 (ExpReadLeapSecondData.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

__int64 ExInitializeLeapSecondData()
{
  NTSTATUS v0; // ebx
  PVOID v1; // r15
  size_t v2; // r12
  struct _MDL *PoolWithTag; // rax
  struct _MDL *v4; // rbx
  __int16 v5; // dx
  PVOID v6; // rsi
  LARGE_INTEGER v8[9]; // [rsp+40h] [rbp-48h] BYREF
  PVOID MappedBase; // [rsp+90h] [rbp+8h] BYREF
  HANDLE Handle; // [rsp+98h] [rbp+10h] BYREF
  PVOID Section; // [rsp+A0h] [rbp+18h] BYREF
  ULONG_PTR ViewSize; // [rsp+A8h] [rbp+20h] BYREF

  Handle = 0LL;
  v8[0].QuadPart = 4096LL;
  v0 = ZwCreateSection(&Handle, 6u, 0LL, v8, 4u, 0x8000000u, 0LL);
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
        PoolWithTag = (struct _MDL *)ExAllocatePoolWithTag(
                                       NonPagedPoolNx,
                                       8 * ((ViewSize + ((unsigned __int16)MappedBase & 0xFFF) + 4095LL) >> 12) + 48,
                                       0x6453704Cu);
        v4 = PoolWithTag;
        if ( !PoolWithTag )
          goto LABEL_11;
        PoolWithTag->Next = 0LL;
        v5 = (__int16)MappedBase;
        PoolWithTag->Size = 8 * (((((unsigned __int16)MappedBase & 0xFFF) + v2 + 4095) >> 12) + 6);
        PoolWithTag->MdlFlags = 0;
        PoolWithTag->StartVa = (PVOID)((unsigned __int64)MappedBase & 0xFFFFFFFFFFFFF000uLL);
        PoolWithTag->ByteOffset = v5 & 0xFFF;
        PoolWithTag->ByteCount = v2;
        MiProbeAndLockPages(PoolWithTag, 0, 1);
        v6 = MmMapLockedPagesSpecifyCache(v4, 0, MmCached, 0LL, 0, 0x40000010u);
        if ( v6 )
        {
          v0 = MmUnmapViewInSystemSpace(MappedBase);
          if ( v0 >= 0 )
          {
            ExpLeapSecondDataLock = 0LL;
            ExLeapSecondDataSectionPointer = (__int64)v1;
            memset(v6, 0, v2);
            ExpReadLeapSecondData((bool *)v6);
            ExLeapSecondData = v6;
          }
        }
        else
        {
LABEL_11:
          v0 = -1073741801;
        }
      }
    }
  }
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v0;
}
