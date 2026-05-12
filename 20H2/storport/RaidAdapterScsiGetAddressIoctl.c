/*
 * XREFs of RaidAdapterScsiGetAddressIoctl @ 0x1C002E7E4
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x1C000B6F8 (RaidAdapterDeviceControlIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0008FD0 (RaidCompleteRequestEx.c)
 */

__int64 __fastcall RaidAdapterScsiGetAddressIoctl(__int64 a1, IRP *a2)
{
  _IRP *MasterIrp; // r8
  unsigned int v3; // r8d
  char v4; // al

  MasterIrp = a2->AssociatedIrp.MasterIrp;
  if ( a2->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length >= 8 )
  {
    *(_DWORD *)&MasterIrp->Type = 8;
    v4 = *(_BYTE *)(a1 + 56);
    *(unsigned __int16 *)((char *)&MasterIrp->Size + 3) = -1;
    *((_BYTE *)&MasterIrp->Size + 2) = v4;
    *((_BYTE *)&MasterIrp->Size + 5) = -1;
    v3 = 0;
    a2->IoStatus.Information = 8LL;
  }
  else
  {
    v3 = -1073741789;
  }
  return RaidCompleteRequestEx(a2, 0, v3);
}
