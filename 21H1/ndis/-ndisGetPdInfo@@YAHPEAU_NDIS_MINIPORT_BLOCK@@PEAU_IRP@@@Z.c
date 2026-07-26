/*
 * XREFs of ?ndisGetPdInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1C007CD58
 * Callers:
 *     ?ndisDeviceControlHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1C0010E40 (-ndisDeviceControlHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0006E48 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     memmove @ 0x1C003F400 (memmove.c)
 */

__int64 __fastcall ndisGetPdInfo(struct _NDIS_MINIPORT_BLOCK *a1, struct _IRP *a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rdi
  unsigned int v5; // ebx
  _IRP::<unnamed_type_AssociatedIrp> v6; // rbx
  struct _NDIS_PD_BLOCK *PDBlock; // rdx
  unsigned int v8; // r14d
  KIRQL NewIrql; // [rsp+48h] [rbp+10h] BYREF

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  NewIrql = 0;
  if ( *((_BYTE *)CurrentStackLocation->FileObject->FsContext + 24) )
  {
    if ( CurrentStackLocation->Parameters.Create.Options || CurrentStackLocation->Parameters.Read.Length < 0x18 )
    {
      return (unsigned int)-1073741811;
    }
    else
    {
      v6.MasterIrp = (_IRP *)a2->AssociatedIrp;
      *(_DWORD *)&v6.MasterIrp->Type = 1573248;
      NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, &NewIrql);
      PDBlock = a1->PDBlock;
      if ( PDBlock )
      {
        v8 = *((_DWORD *)PDBlock + 8) + 24;
        if ( v8 < 0x18 )
        {
          v5 = -1073741675;
        }
        else
        {
          *(_DWORD *)&v6.MasterIrp->AllocationProcessorNumber = v8;
          if ( CurrentStackLocation->Parameters.Read.Length >= v8 )
          {
            *(&v6.MasterIrp->Flags + 1) = *((_DWORD *)PDBlock + 2);
            LOBYTE(v6.MasterIrp->Flags) = *((_BYTE *)PDBlock + 20);
            LODWORD(v6.MasterIrp->MdlAddress) = 24;
            HIDWORD(v6.MasterIrp->MdlAddress) = *((_DWORD *)PDBlock + 8);
            memmove(&v6.MasterIrp->AssociatedIrp, *((const void **)PDBlock + 3), *((unsigned int *)PDBlock + 8));
            v5 = 0;
            a2->IoStatus.Information = v8;
          }
          else
          {
            v5 = -1073676268;
            a2->IoStatus.Information = 24LL;
          }
        }
      }
      else
      {
        v5 = -1073741808;
      }
      a1->MiniportThread = 0LL;
      KeReleaseSpinLock(&a1->Lock, NewIrql);
    }
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return v5;
}
