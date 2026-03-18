/*
 * XREFs of PiSwIrpInterfacePropertySet @ 0x1407AA6A4
 * Callers:
 *     PiSwDispatch @ 0x1407375D0 (PiSwDispatch.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x140208540 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x140208CF0 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     IofCompleteRequest @ 0x140284EB0 (IofCompleteRequest.c)
 *     PiSwValidatePropertyArray @ 0x140738C30 (PiSwValidatePropertyArray.c)
 *     PiSwPropertySet @ 0x140759D5C (PiSwPropertySet.c)
 *     PiSwDeviceOperationsAllowed @ 0x14075F348 (PiSwDeviceOperationsAllowed.c)
 *     PiSwDeviceFindInterfaceEntry @ 0x14075FB1C (PiSwDeviceFindInterfaceEntry.c)
 *     PiSwUpdateArrayProperties @ 0x1407783B4 (PiSwUpdateArrayProperties.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiSwIrpInterfacePropertySet(PIRP Irp)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  __int64 FsContext2; // rsi
  NTSTATUS v4; // ebx
  unsigned int v5; // edx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v7; // rcx
  __int64 *InterfaceEntry; // rax
  PVOID P; // [rsp+58h] [rbp+10h] BYREF
  __int64 v11; // [rsp+60h] [rbp+18h] BYREF
  __int64 v12; // [rsp+68h] [rbp+20h]

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  FsContext2 = (__int64)CurrentStackLocation->FileObject->FsContext2;
  v12 = FsContext2;
  v11 = 0LL;
  P = 0LL;
  if ( !Irp->AssociatedIrp.MasterIrp )
    goto LABEL_20;
  v4 = MesDecodeBufferHandleCreate(Irp->AssociatedIrp.MasterIrp, CurrentStackLocation->Parameters.Create.Options, &v11);
  if ( v4 < 0 )
    goto LABEL_13;
  NdrMesTypeDecode3(v11, "TP 3\a", &off_1409804F8, &off_140C01A60, 4, &P);
  if ( P && *(_QWORD *)P && *((_QWORD *)P + 2) && (v5 = *((_DWORD *)P + 2)) != 0 )
  {
    v4 = PiSwValidatePropertyArray(*((_QWORD *)P + 2), v5);
    if ( v4 >= 0 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
      if ( PiSwDeviceOperationsAllowed(FsContext2) )
      {
        InterfaceEntry = PiSwDeviceFindInterfaceEntry(v7, *(const wchar_t **)P);
        v4 = InterfaceEntry
           ? PiSwUpdateArrayProperties(
               InterfaceEntry[3],
               *((_DWORD *)InterfaceEntry + 8),
               *((_QWORD *)P + 2),
               *((_DWORD *)P + 2))
           : -1073741275;
      }
      else
      {
        v4 = -1073741637;
      }
      ExReleaseResourceLite(&PiSwLockObj);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      if ( v4 >= 0 )
        v4 = PiSwPropertySet(*(const WCHAR **)P, 3u, *((_QWORD *)P + 2), *((_DWORD *)P + 2));
    }
  }
  else
  {
LABEL_20:
    v4 = -1073741811;
  }
LABEL_13:
  if ( P )
    ExFreePoolWithTag(P, 0x6370726Bu);
  if ( v11 )
    MesHandleFree();
  Irp->IoStatus.Status = v4;
  IofCompleteRequest(Irp, 0);
  return (unsigned int)v4;
}
