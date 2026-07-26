/*
 * XREFs of ?ndisGetRdmaCapabilities@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1C012043C
 * Callers:
 *     ?ndisDeviceControlHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1C0010F30 (-ndisDeviceControlHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 * Callees:
 *     ?ndisNDKWmiGetAdapterCapabilities@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_NDIS_WMI_NDK_CAPABILITIES@@@Z @ 0x1C01207F8 (-ndisNDKWmiGetAdapterCapabilities@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_NDIS_WMI_NDK_CAPABILITIES@.c)
 */

__int64 __fastcall ndisGetRdmaCapabilities(struct _NDIS_MINIPORT_BLOCK *a1, struct _IRP *a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // r9
  unsigned int v3; // edi
  unsigned int Length; // eax
  struct _NDIS_WMI_NDK_CAPABILITIES *MasterIrp; // r8
  unsigned int v7; // edx
  unsigned __int64 v8; // rbx

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v3 = 0;
  if ( *((_BYTE *)CurrentStackLocation->FileObject->FsContext + 24) )
  {
    if ( a1->NDKBlock )
    {
      Length = CurrentStackLocation->Parameters.Read.Length;
      if ( Length < 0x88 || CurrentStackLocation->Parameters.Create.Options )
      {
        return (unsigned int)-1073741811;
      }
      else
      {
        MasterIrp = (struct _NDIS_WMI_NDK_CAPABILITIES *)a2->AssociatedIrp.MasterIrp;
        v7 = Length < 0x90 ? 136 : 144;
        v8 = v7;
        ndisNDKWmiGetAdapterCapabilities(a1, v7, MasterIrp);
        a2->IoStatus.Information = v8;
      }
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
  return v3;
}
