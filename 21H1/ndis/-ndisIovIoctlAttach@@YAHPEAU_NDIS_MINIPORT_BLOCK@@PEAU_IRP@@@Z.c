/*
 * XREFs of ?ndisIovIoctlAttach@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1C0077D10
 * Callers:
 *     ?ndisDeviceControlHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1C0010E40 (-ndisDeviceControlHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisIovIoctlAttach(struct _NDIS_MINIPORT_BLOCK *a1, struct _IRP *a2)
{
  unsigned int v2; // r8d
  _NDIS_SRIOV_CAPABILITIES *SriovCurrentCapabilities; // rax

  v2 = 0;
  if ( *((_BYTE *)a2->Tail.Overlay.CurrentStackLocation->FileObject->FsContext + 24) )
  {
    if ( ndisSystemSupportsSriov
      && (SriovCurrentCapabilities = a1->SriovCurrentCapabilities) != 0LL
      && (SriovCurrentCapabilities->SriovCapabilities & 3) == 3 )
    {
      a2->IoStatus.Information = 0LL;
    }
    else
    {
      return (unsigned int)-1073741637;
    }
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return v2;
}
