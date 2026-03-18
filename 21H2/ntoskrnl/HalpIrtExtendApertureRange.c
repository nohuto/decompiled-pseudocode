/*
 * XREFs of HalpIrtExtendApertureRange @ 0x140909D8C
 * Callers:
 *     HalpIrtAllocateDeviceAperture @ 0x1409099C0 (HalpIrtAllocateDeviceAperture.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 HalpIrtExtendApertureRange()
{
  unsigned int v0; // ebp
  unsigned int v1; // ebx
  void *Pool2; // rsi
  bool v3; // di
  int v4; // r9d
  unsigned int v5; // r8d
  unsigned int i; // edx
  __int64 v7; // rcx
  __int64 *v8; // rax

  v0 = HalpIrtAperturesPerRange;
  v1 = 0;
  Pool2 = (void *)ExAllocatePool2(256LL, (unsigned int)(32 * HalpIrtAperturesPerRange), 1768710472LL);
  v3 = Pool2 != 0LL;
  ExAcquireFastMutex(&HalpIrtLock);
  v4 = HalpIrtAllocatedApertures;
  v5 = HalpIrtAllocatedApertures + v0;
  if ( HalpIrtAllocatedApertures + v0 <= HalpIrtAperturesPerRange || (HalpIrtAllocationFlags & 8) != 0 )
  {
    if ( v5 <= HalpIrtTotalApertures )
    {
      if ( Pool2 )
      {
        for ( i = 0; i < v0; qword_140C4AFF8 = v7 )
        {
          v7 = (__int64)Pool2 + 32 * i;
          *(_DWORD *)(v7 + 16) = v4 + i;
          v8 = (__int64 *)qword_140C4AFF8;
          if ( *(__int64 **)qword_140C4AFF8 != &HalpIrtFreeDeviceAperturesHead )
            __fastfail(3u);
          *(_QWORD *)v7 = &HalpIrtFreeDeviceAperturesHead;
          ++i;
          *(_QWORD *)(v7 + 8) = v8;
          *v8 = v7;
        }
        HalpIrtAllocatedApertures = v5;
        v3 = 0;
      }
      else
      {
        v1 = -1073741670;
      }
    }
  }
  else
  {
    v1 = -1073741637;
  }
  KeReleaseGuardedMutex(&HalpIrtLock);
  if ( v3 )
    ExFreePoolWithTag(Pool2, 0);
  return v1;
}
