/*
 * XREFs of ACPIInternalInterruptPolarityCacheStorePolarity @ 0x1C00160A0
 * Callers:
 *     ACPIInternalInterruptPolarityCacheStorePolaritiesFromList @ 0x1C00161D0 (ACPIInternalInterruptPolarityCacheStorePolaritiesFromList.c)
 *     ACPIFilterIrpFilterResourceRequirements @ 0x1C009B980 (ACPIFilterIrpFilterResourceRequirements.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ACPIInternalInterruptPolarityCacheStorePolarity(__int64 a1, int a2, int a3)
{
  unsigned int v3; // ebx
  __int64 **v6; // rdi
  KIRQL v7; // r14
  __int64 *i; // rax
  _DWORD *PoolWithTag; // rax
  __int64 ***v11; // rcx

  v3 = 0;
  if ( !gAcpiHonorBiosPolarities )
    return 0LL;
  v6 = (__int64 **)(a1 + 672);
  v7 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  for ( i = *v6; i != (__int64 *)v6; i = (__int64 *)*i )
  {
    if ( *((_DWORD *)i + 4) == a2 )
    {
      if ( *((_DWORD *)i + 5) != a3 )
        *((_DWORD *)i + 5) = -1;
      goto LABEL_7;
    }
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x43706341u);
  if ( PoolWithTag )
  {
    PoolWithTag[4] = a2;
    PoolWithTag[5] = a3;
    v11 = (__int64 ***)v6[1];
    if ( *v11 != v6 )
      __fastfail(3u);
    *(_QWORD *)PoolWithTag = v6;
    *((_QWORD *)PoolWithTag + 1) = v11;
    *v11 = (__int64 **)PoolWithTag;
    v6[1] = (__int64 *)PoolWithTag;
  }
  else
  {
    v3 = -1073741670;
  }
LABEL_7:
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v7);
  return v3;
}
