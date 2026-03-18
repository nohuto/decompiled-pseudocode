/*
 * XREFs of AcpiCreateDiscoveryDeleteParameters @ 0x1C005AF28
 * Callers:
 *     AcpiNotifyPlExtDiscoverDeviceAsync @ 0x1C002A74C (AcpiNotifyPlExtDiscoverDeviceAsync.c)
 *     AcpiNotifyPlExtDeleteDeviceAsync @ 0x1C005B3F0 (AcpiNotifyPlExtDeleteDeviceAsync.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AcpiCreateDiscoveryDeleteParameters(_QWORD *a1, char a2, _QWORD *a3)
{
  _OWORD *PoolWithTag; // rax
  unsigned int v7; // r9d

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x4E706341u);
  v7 = 0;
  if ( PoolWithTag )
  {
    *a3 = PoolWithTag;
    *PoolWithTag = 0LL;
    PoolWithTag[1] = 0LL;
    PoolWithTag[2] = 0LL;
    *a1 = PoolWithTag;
    a1[1] = PoolWithTag;
    *(_QWORD *)PoolWithTag = a1;
    *((_QWORD *)PoolWithTag + 1) = a1;
    *((_BYTE *)PoolWithTag + 16) = a2;
    *((_QWORD *)PoolWithTag + 3) = qword_1C0081BC8;
    *((_QWORD *)PoolWithTag + 4) = AcpiNotifyDiscoverDeleteMainCompletion;
    *((_QWORD *)PoolWithTag + 5) = PoolWithTag;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v7;
}
