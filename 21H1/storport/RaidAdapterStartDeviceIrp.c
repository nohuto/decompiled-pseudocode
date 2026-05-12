/*
 * XREFs of RaidAdapterStartDeviceIrp @ 0x1C002E9B4
 * Callers:
 *     RaidAdapterPnpIrp @ 0x1C0013AB4 (RaidAdapterPnpIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0009950 (RaidCompleteRequestEx.c)
 *     RaForwardIrpSynchronous @ 0x1C0011DF0 (RaForwardIrpSynchronous.c)
 *     memset @ 0x1C001B4C0 (memset.c)
 *     RaidAdapterStartDevice @ 0x1C002E41C (RaidAdapterStartDevice.c)
 */

__int64 __fastcall RaidAdapterStartDeviceIrp(PVOID Context, PIRP Irp)
{
  __int64 v4; // rbx
  char *Pool; // rax
  char *v6; // r14
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  unsigned int v8; // ebx
  _IO_STACK_LOCATION *v9; // rax
  signed int v10; // eax
  unsigned int started; // eax

  if ( StorageAsyncStart
    && (v4 = IoSizeofWorkItem(), Pool = (char *)ExAllocatePool(NonPagedPoolNx, v4 + 16), (v6 = Pool) != 0LL) )
  {
    memset(Pool, 0, v4 + 16);
    IoInitializeWorkItem(*((PVOID *)Context + 1), (PIO_WORKITEM)(v6 + 16));
    *(_QWORD *)v6 = v6 + 16;
    *((_QWORD *)v6 + 1) = Irp;
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    v8 = 259;
    *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
    *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
    *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.SetQuota
                                                                               + 6);
    CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
    CurrentStackLocation[-1].Control = 0;
    v9 = Irp->Tail.Overlay.CurrentStackLocation;
    v9[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))&RaidPnPAsyncStartComplete;
    v9[-1].Context = v6;
    v9[-1].Control = -32;
    Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
    IofCallDriver(*((PDEVICE_OBJECT *)Context + 3), Irp);
  }
  else
  {
    v10 = RaForwardIrpSynchronous(*((struct _DEVICE_OBJECT **)Context + 3), Irp);
    v8 = v10;
    if ( v10 >= 0 )
    {
      started = RaidAdapterStartDevice((char *)Context, (__int64)Irp);
      return (unsigned int)RaidCompleteRequestEx(Irp, 0, started);
    }
    else
    {
      RaidCompleteRequestEx(Irp, 0, v10);
    }
  }
  return v8;
}
