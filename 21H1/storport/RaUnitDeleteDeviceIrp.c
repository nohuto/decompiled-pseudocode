/*
 * XREFs of RaUnitDeleteDeviceIrp @ 0x1C0019CD0
 * Callers:
 *     RaUnitRemoveDeviceIrp @ 0x1C0019C34 (RaUnitRemoveDeviceIrp.c)
 * Callees:
 *     RaidIsUnitControlSupported @ 0x1C0006D50 (RaidIsUnitControlSupported.c)
 *     RaidCompleteRequestEx @ 0x1C0009950 (RaidCompleteRequestEx.c)
 *     RaUnitReleaseRemoveLock @ 0x1C000BD50 (RaUnitReleaseRemoveLock.c)
 *     RaidDeleteUnit @ 0x1C001380C (RaidDeleteUnit.c)
 *     RaidAdapterRemoveUnit @ 0x1C0014D64 (RaidAdapterRemoveUnit.c)
 *     RaCallMiniportUnitControl @ 0x1C0016294 (RaCallMiniportUnitControl.c)
 *     RaUnitWaitForRemoveLock @ 0x1C0016DEC (RaUnitWaitForRemoveLock.c)
 *     RaidUnitUnRegisterInterfaces @ 0x1C001873C (RaidUnitUnRegisterInterfaces.c)
 *     RaidAdapterRemoveZombieUnit @ 0x1C0019DAC (RaidAdapterRemoveZombieUnit.c)
 *     __security_check_cookie @ 0x1C0019FC0 (__security_check_cookie.c)
 */

__int64 __fastcall RaUnitDeleteDeviceIrp(__int64 a1, IRP *a2)
{
  int v3; // eax
  unsigned int v5; // eax
  __int64 v6; // rsi
  unsigned int v7; // ebp
  char v8; // bl
  struct _DEVICE_OBJECT *v10; // rcx

  v3 = *(_DWORD *)(a1 + 48) - 5;
  *(_DWORD *)(a1 + 48) = 6;
  if ( (v3 & 0xFFFFFFFD) != 0 )
    RaidUnitUnRegisterInterfaces(a1);
  RaUnitReleaseRemoveLock(a1);
  v5 = RaUnitWaitForRemoveLock(a1);
  v6 = *(_QWORD *)(a1 + 24);
  v7 = v5;
  if ( *(_DWORD *)(v6 + 88) != 5 )
  {
    if ( RaidIsUnitControlSupported(a1, 9) )
      RaCallMiniportUnitControl(v6 + 304);
    if ( (*(_BYTE *)(a1 + 448) & 0x20) != 0 )
      RaidAdapterRemoveZombieUnit(v6, a1);
    else
      RaidAdapterRemoveUnit(v6, a1);
  }
  v8 = *(_BYTE *)(a1 + 448);
  RaidDeleteUnit(a1);
  if ( (v8 & 0x40) != 0 )
  {
    v10 = *(struct _DEVICE_OBJECT **)(v6 + 32);
    *(_BYTE *)(v6 + 106) = 1;
    IoInvalidateDeviceRelations(v10, BusRelations);
  }
  return RaidCompleteRequestEx(a2, 0, v7);
}
