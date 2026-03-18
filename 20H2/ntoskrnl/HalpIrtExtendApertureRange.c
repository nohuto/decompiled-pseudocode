/*
 * XREFs of HalpIrtExtendApertureRange @ 0x140867FEC
 * Callers:
 *     HalpIrtAllocateDeviceAperture @ 0x140867C20 (HalpIrtAllocateDeviceAperture.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14021ECD0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x140220130 (ExAcquireFastMutex.c)
 *     memset @ 0x140411300 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 HalpIrtExtendApertureRange()
{
  unsigned int v0; // ebp
  unsigned int v1; // ebx
  char v2; // si
  unsigned int v3; // r14d
  PVOID PoolWithTag; // rax
  void *v5; // rdi
  int v6; // r9d
  unsigned int v7; // r8d
  unsigned int i; // edx
  __int64 v9; // rcx
  __int64 *v10; // rax

  v0 = HalpIrtAperturesPerRange;
  v1 = 0;
  v2 = 0;
  v3 = 32 * HalpIrtAperturesPerRange;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)(32 * HalpIrtAperturesPerRange), 0x206C6148u);
  v5 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v3);
    v2 = 1;
  }
  ExAcquireFastMutex(&HalpIrtLock);
  v6 = HalpIrtAllocatedApertures;
  v7 = HalpIrtAllocatedApertures + v0;
  if ( HalpIrtAllocatedApertures + v0 <= HalpIrtAperturesPerRange || (HalpIrtAllocationFlags & 8) != 0 )
  {
    if ( v7 <= HalpIrtTotalApertures )
    {
      if ( v5 )
      {
        for ( i = 0; i < v0; qword_140C49998 = v9 )
        {
          v9 = (__int64)v5 + 32 * i;
          *(_DWORD *)(v9 + 16) = v6 + i;
          v10 = (__int64 *)qword_140C49998;
          if ( *(__int64 **)qword_140C49998 != &HalpIrtFreeDeviceAperturesHead )
            __fastfail(3u);
          *(_QWORD *)v9 = &HalpIrtFreeDeviceAperturesHead;
          ++i;
          *(_QWORD *)(v9 + 8) = v10;
          *v10 = v9;
        }
        HalpIrtAllocatedApertures = v7;
        v2 = 0;
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
  if ( v2 )
    ExFreePoolWithTag(v5, 0);
  return v1;
}
