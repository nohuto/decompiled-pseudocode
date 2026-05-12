/*
 * XREFs of RaUnitStorageDumpNotification @ 0x1C007A170
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x1C000B8F8 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaUnitStorageDumpNotification(__int64 a1, IRP *a2)
{
  unsigned int v2; // ebx
  _IRP *MasterIrp; // rax

  if ( a2->RequestorMode )
  {
    v2 = -1073741808;
  }
  else if ( a2->Tail.Overlay.CurrentStackLocation->Parameters.Create.Options >= 0x10 )
  {
    MasterIrp = a2->AssociatedIrp.MasterIrp;
    if ( MasterIrp && *(_DWORD *)&MasterIrp->Type == 1 && *(_DWORD *)(&MasterIrp->Size + 1) == 16 )
    {
      v2 = 0;
      *(_QWORD *)(a1 + 3352) = MasterIrp->MdlAddress;
    }
    else
    {
      v2 = -1073741811;
    }
  }
  else
  {
    v2 = -1073741789;
  }
  a2->IoStatus.Information = 0LL;
  a2->IoStatus.Status = v2;
  IofCompleteRequest(a2, 0);
  return v2;
}
