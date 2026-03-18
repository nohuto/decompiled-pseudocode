/*
 * XREFs of PiSwIrpInterfaceSetState @ 0x1407BC26C
 * Callers:
 *     PiSwDispatch @ 0x1407375D0 (PiSwDispatch.c)
 * Callees:
 *     IofCompleteRequest @ 0x140284EB0 (IofCompleteRequest.c)
 *     PiSwDeviceInterfaceSetState @ 0x140737074 (PiSwDeviceInterfaceSetState.c)
 *     PiSwUnlock @ 0x140737DA4 (PiSwUnlock.c)
 *     PiSwLock @ 0x140737DD0 (PiSwLock.c)
 *     PiSwDeviceOperationsAllowed @ 0x14075F348 (PiSwDeviceOperationsAllowed.c)
 *     PiSwDeviceFindInterfaceEntry @ 0x14075FB1C (PiSwDeviceFindInterfaceEntry.c)
 *     MIDL_user_free @ 0x14097CE30 (MIDL_user_free.c)
 */

__int64 __fastcall PiSwIrpInterfaceSetState(PIRP Irp)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  __int64 FsContext2; // rsi
  NTSTATUS v4; // ebx
  __int64 v5; // rcx
  __int64 *InterfaceEntry; // rdx
  void *v8; // [rsp+58h] [rbp+10h] BYREF
  __int64 v9; // [rsp+60h] [rbp+18h] BYREF
  __int64 v10; // [rsp+68h] [rbp+20h]

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  FsContext2 = (__int64)CurrentStackLocation->FileObject->FsContext2;
  v10 = FsContext2;
  v9 = 0LL;
  v8 = 0LL;
  if ( !Irp->AssociatedIrp.MasterIrp )
    goto LABEL_16;
  v4 = MesDecodeBufferHandleCreate(Irp->AssociatedIrp.MasterIrp, CurrentStackLocation->Parameters.Create.Options, &v9);
  if ( v4 < 0 )
    goto LABEL_9;
  NdrMesTypeDecode3(v9, "TP 3\a", &off_1409804F8, &off_140C01A60, 3, &v8);
  if ( v8 && *(_QWORD *)v8 )
  {
    PiSwLock();
    if ( PiSwDeviceOperationsAllowed(FsContext2) )
    {
      InterfaceEntry = PiSwDeviceFindInterfaceEntry(v5, *(const wchar_t **)v8);
      if ( InterfaceEntry )
        v4 = PiSwDeviceInterfaceSetState(FsContext2, (__int64)InterfaceEntry, *((_BYTE *)v8 + 8));
      else
        v4 = -1073741275;
    }
    else
    {
      v4 = -1073741637;
    }
    PiSwUnlock();
  }
  else
  {
LABEL_16:
    v4 = -1073741811;
  }
LABEL_9:
  if ( v8 )
    MIDL_user_free(v8);
  if ( v9 )
    MesHandleFree();
  Irp->IoStatus.Status = v4;
  IofCompleteRequest(Irp, 0);
  return (unsigned int)v4;
}
