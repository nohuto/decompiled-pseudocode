/*
 * XREFs of ?ndisIovIoctlInvalidate@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1C0077D68
 * Callers:
 *     ?ndisDeviceControlHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1C0010E40 (-ndisDeviceControlHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisIovIoctlInvalidate(struct _NDIS_MINIPORT_BLOCK *a1, struct _IRP *a2)
{
  unsigned int v2; // ebx
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  _NDIS_SRIOV_CAPABILITIES *SriovCurrentCapabilities; // rax
  _IRP::<unnamed_type_AssociatedIrp> v7; // rcx
  UCHAR Irql; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  Irql = 0;
  if ( *((_BYTE *)CurrentStackLocation->FileObject->FsContext + 24) )
  {
    if ( CurrentStackLocation->Parameters.Read.Length >= 0x10 )
    {
      if ( ndisSystemSupportsSriov
        && (SriovCurrentCapabilities = a1->SriovCurrentCapabilities) != 0LL
        && (SriovCurrentCapabilities->SriovCapabilities & 3) == 3 )
      {
        IoAcquireCancelSpinLock(&Irql);
        if ( a1->InvalidateBlockMask )
        {
          v7.MasterIrp = (_IRP *)a2->AssociatedIrp;
          v7.MasterIrp->Type = a1->InvalidateVfId;
          v7.MasterIrp->MdlAddress = (_MDL *)a1->InvalidateBlockMask;
          a2->IoStatus.Information = 16LL;
          a1->InvalidateBlockMask = 0LL;
        }
        else
        {
          a1->InvalidateBlockIoctlPf = a2;
          v2 = 259;
          a2->Tail.Overlay.CurrentStackLocation->Control |= 1u;
          _InterlockedExchange64((volatile __int64 *)&a2->CancelRoutine, (__int64)ndisIovCancelIoctlInvalidate);
        }
        IoReleaseCancelSpinLock(Irql);
      }
      else
      {
        return (unsigned int)-1073741637;
      }
    }
    else
    {
      return (unsigned int)-1073741789;
    }
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return v2;
}
