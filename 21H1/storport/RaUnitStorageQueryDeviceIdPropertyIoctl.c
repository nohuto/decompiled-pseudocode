/*
 * XREFs of RaUnitStorageQueryDeviceIdPropertyIoctl @ 0x1C0074420
 * Callers:
 *     RaUnitStorageQueryPropertyIoctl @ 0x1C00711A0 (RaUnitStorageQueryPropertyIoctl.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0009950 (RaidCompleteRequestEx.c)
 *     RaGetUnitStorageDeviceIdProperty @ 0x1C0074490 (RaGetUnitStorageDeviceIdProperty.c)
 */

__int64 __fastcall RaUnitStorageQueryDeviceIdPropertyIoctl(__int64 a1, IRP *a2)
{
  bool v2; // zf
  _IRP *MasterIrp; // rdx
  unsigned int v6; // r8d
  int v8; // ecx
  int UnitStorageDeviceIdProperty; // eax
  unsigned int Length; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 136) == 0LL;
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  Length = a2->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length;
  if ( v2 )
  {
    v6 = -1073741637;
  }
  else
  {
    v8 = *(_DWORD *)(&MasterIrp->Size + 1);
    if ( v8 )
    {
      if ( v8 == 1 )
        UnitStorageDeviceIdProperty = 0;
      else
        UnitStorageDeviceIdProperty = -1073741637;
    }
    else
    {
      UnitStorageDeviceIdProperty = RaGetUnitStorageDeviceIdProperty(a1, MasterIrp, &Length);
      if ( UnitStorageDeviceIdProperty >= 0 )
        a2->IoStatus.Information = Length;
    }
    v6 = UnitStorageDeviceIdProperty;
  }
  return RaidCompleteRequestEx(a2, 0, v6);
}
