/*
 * XREFs of RaidAdapterStorageSetPropertyIoctl @ 0x1C0030250
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x1C000B6F8 (RaidAdapterDeviceControlIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0008FD0 (RaidCompleteRequestEx.c)
 *     RaidSetStorageAdapterProtocolSpecificProperty @ 0x1C0032BA4 (RaidSetStorageAdapterProtocolSpecificProperty.c)
 */

__int64 __fastcall RaidAdapterStorageSetPropertyIoctl(__int64 a1, IRP *a2)
{
  _IRP *MasterIrp; // rdx
  int v4; // edx
  int v5; // eax
  unsigned int v6; // r8d
  unsigned __int64 Length; // [rsp+38h] [rbp+10h] BYREF

  MasterIrp = a2->AssociatedIrp.MasterIrp;
  Length = a2->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length;
  if ( Length >= 8 && *(_DWORD *)&MasterIrp->Type == 49 )
  {
    v4 = *(_DWORD *)(&MasterIrp->Size + 1);
    v5 = 0;
    if ( v4 )
    {
      if ( v4 != 1 )
      {
        a2->IoStatus.Information = 0LL;
        v5 = -1073741808;
      }
    }
    else
    {
      v5 = RaidSetStorageAdapterProtocolSpecificProperty(a1, a2, &Length);
      a2->IoStatus.Information = Length;
    }
    v6 = v5;
  }
  else
  {
    v6 = -1073741808;
    a2->IoStatus.Information = 0LL;
  }
  return RaidCompleteRequestEx(a2, 0, v6);
}
