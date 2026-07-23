/*
 * XREFs of HalpIrtExtendRemappingRange @ 0x1408613D8
 * Callers:
 *     HalpInitializeInterruptRemappingBspLate @ 0x140860E00 (HalpInitializeInterruptRemappingBspLate.c)
 *     HalpIrtAllocateIndex @ 0x140861054 (HalpIrtAllocateIndex.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x1402600D0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x140263BB0 (KeReleaseGuardedMutex.c)
 *     RtlClearAllBits @ 0x1402E0FC0 (RtlClearAllBits.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall HalpIrtExtendRemappingRange(unsigned int a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rdi
  char v3; // si
  unsigned int *PoolWithTag; // rbp
  _RTL_BITMAP BitMapHeader; // [rsp+20h] [rbp-18h] BYREF

  v1 = 0;
  v2 = a1;
  *(&BitMapHeader.SizeOfBitMap + 1) = 0;
  if ( a1 >= 0x20 || a1 && (HalpIrtAllocationFlags & 8) == 0 )
  {
    return (unsigned int)-1073741637;
  }
  else
  {
    v3 = 1;
    PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(
                                    PagedPool,
                                    4 * ((unsigned int)(HalpIrtEntriesPerRange + 31) >> 5),
                                    0x206C6148u);
    if ( PoolWithTag )
    {
      BitMapHeader.SizeOfBitMap = HalpIrtEntriesPerRange;
      BitMapHeader.Buffer = PoolWithTag;
      RtlClearAllBits(&BitMapHeader);
      ExAcquireFastMutex(&HalpIrtLock);
      if ( !*((_QWORD *)&HalpIrtRanges.Buffer + 2 * v2) )
      {
        ++HalpIrtAllocatedRanges;
        v3 = 0;
        *(&HalpIrtRanges + v2) = BitMapHeader;
      }
      KeReleaseGuardedMutex(&HalpIrtLock);
      if ( v3 )
        ExFreePoolWithTag(PoolWithTag, 0);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return v1;
}
