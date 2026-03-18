/*
 * XREFs of ACPIDeviceCompletePhase3Off @ 0x1C002D360
 * Callers:
 *     ACPIDevicePowerProcessPhase3 @ 0x1C001345C (ACPIDevicePowerProcessPhase3.c)
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x1C0019748 (WPP_RECORDER_SF_qD.c)
 *     ACPIDeviceCompletePhase3Common @ 0x1C001CAD0 (ACPIDeviceCompletePhase3Common.c)
 */

void __fastcall ACPIDeviceCompletePhase3Off(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  KIRQL v6; // si
  signed __int32 v7; // edx
  _QWORD **v8; // rbx
  _QWORD *i; // r8
  __int64 v10; // r10
  char v11; // al
  _QWORD *v12; // r9
  __int64 v13; // rcx
  char v14; // dl

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qD(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      0xAu,
      0xFu,
      (__int64)&WPP_095c070a05c4368bad966ca54a81e920_Traceguids,
      a4,
      a2);
  v6 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
  _InterlockedAnd64((volatile signed __int64 *)(a4 + 16), 0xFFFFFFFFFFFFF7FFuLL);
  if ( a2 < 0 )
  {
    _InterlockedOr64((volatile signed __int64 *)(a4 + 16), 0x10000uLL);
  }
  else
  {
    _InterlockedAnd64((volatile signed __int64 *)(a4 + 16), 0xFFFFFFFFFFFFFFEFuLL);
    _InterlockedAnd64((volatile signed __int64 *)(a4 + 16), 0xFFFFFFFFFFFEFFFFuLL);
  }
  _InterlockedAnd64((volatile signed __int64 *)(a4 + 16), 0xFFFFFFFFFFFFFFF7uLL);
  v7 = *(_DWORD *)(a4 + 68);
  --Phase3PendingOffWorkCount;
  ACPIDeviceCompletePhase3Common((volatile signed __int32 *)(a4 + 64), v7);
  v8 = (_QWORD **)(a4 + 48);
  for ( i = *v8; i != v8; i = (_QWORD *)*i )
  {
    v10 = *(i - 1);
    v11 = 1;
    v12 = *(_QWORD **)(v10 + 400);
    if ( v12 )
    {
      do
      {
        v13 = v12[1];
        v14 = 0;
        v12 = (_QWORD *)*v12;
        if ( !*(_DWORD *)(v13 + 24) )
          v14 = v11;
        v11 = v14;
      }
      while ( v12 );
      if ( v14 )
        *(_QWORD *)(v10 + 960) |= 0x10000uLL;
    }
  }
  KeReleaseSpinLock(&AcpiPowerLock, v6);
}
