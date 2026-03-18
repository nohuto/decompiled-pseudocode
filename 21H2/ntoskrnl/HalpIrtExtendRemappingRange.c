/*
 * XREFs of HalpIrtExtendRemappingRange @ 0x140909EB0
 * Callers:
 *     HalpInitializeInterruptRemappingBspLate @ 0x1409098C0 (HalpInitializeInterruptRemappingBspLate.c)
 *     HalpIrtAllocateIndex @ 0x140909B14 (HalpIrtAllocateIndex.c)
 * Callees:
 *     RtlClearAllBits @ 0x14020AE80 (RtlClearAllBits.c)
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall HalpIrtExtendRemappingRange(unsigned int a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rdi
  unsigned int *Pool2; // rbp
  char v4; // si
  RTL_BITMAP BitMapHeader; // [rsp+20h] [rbp-18h] BYREF

  v1 = 0;
  v2 = a1;
  *(&BitMapHeader.SizeOfBitMap + 1) = 0;
  if ( a1 >= 0x20 || a1 && (HalpIrtAllocationFlags & 8) == 0 )
  {
    return (unsigned int)-1073741637;
  }
  else
  {
    Pool2 = (unsigned int *)ExAllocatePool2(256LL, 4 * ((unsigned int)(HalpIrtEntriesPerRange + 31) >> 5), 1768710472LL);
    if ( Pool2 )
    {
      BitMapHeader.SizeOfBitMap = HalpIrtEntriesPerRange;
      v4 = 1;
      BitMapHeader.Buffer = Pool2;
      RtlClearAllBits(&BitMapHeader);
      ExAcquireFastMutex(&HalpIrtLock);
      if ( !*((_QWORD *)&HalpIrtRanges.Buffer + 2 * v2) )
      {
        ++HalpIrtAllocatedRanges;
        v4 = 0;
        *(&HalpIrtRanges + v2) = BitMapHeader;
      }
      KeReleaseGuardedMutex(&HalpIrtLock);
      if ( v4 )
        ExFreePoolWithTag(Pool2, 0);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return v1;
}
