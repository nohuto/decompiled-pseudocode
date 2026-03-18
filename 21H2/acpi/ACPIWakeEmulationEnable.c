/*
 * XREFs of ACPIWakeEmulationEnable @ 0x1C0062C34
 * Callers:
 *     ACPIDeviceInitializePowerRequest @ 0x1C0008B20 (ACPIDeviceInitializePowerRequest.c)
 * Callees:
 *     ACPIAssociateWakeInterrupt @ 0x1C0061F5C (ACPIAssociateWakeInterrupt.c)
 */

__int64 __fastcall ACPIWakeEmulationEnable(__int64 a1)
{
  unsigned int v1; // esi
  _QWORD *v2; // r14
  int v3; // ebp
  __int64 v5; // rbx
  KIRQL v6; // al

  v1 = *(_DWORD *)(a1 + 116);
  v2 = (_QWORD *)(a1 + 152);
  v3 = 0;
  if ( v1 <= 1 )
  {
    if ( !v1 )
    {
LABEL_7:
      v6 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
      *(_DWORD *)(a1 + 108) |= 1u;
      KeReleaseSpinLock(&AcpiPowerLock, v6);
      return (unsigned int)v3;
    }
  }
  else
  {
    v2 = (_QWORD *)*v2;
  }
  v5 = 0LL;
  while ( 1 )
  {
    v3 = ACPIAssociateWakeInterrupt((__int64)&v2[5 * v5]);
    if ( v3 < 0 )
      return (unsigned int)v3;
    v5 = (unsigned int)(v5 + 1);
    if ( (unsigned int)v5 >= v1 )
      goto LABEL_7;
  }
}
