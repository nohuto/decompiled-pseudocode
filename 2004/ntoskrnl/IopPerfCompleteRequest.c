/*
 * XREFs of IopPerfCompleteRequest @ 0x140502B4C
 * Callers:
 *     IofCompleteRequest @ 0x140284EB0 (IofCompleteRequest.c)
 *     IovCompleteRequest @ 0x1409C1F90 (IovCompleteRequest.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140250918 (EtwTraceKernelEvent.c)
 *     IopfCompleteRequest @ 0x140284EE0 (IopfCompleteRequest.c)
 *     IopFreeIrpExtension @ 0x14032660C (IopFreeIrpExtension.c)
 *     IopIrpHasExtensionType @ 0x140326A20 (IopIrpHasExtensionType.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     IopProcessIoTracking @ 0x14050301C (IopProcessIoTracking.c)
 */

void __fastcall IopPerfCompleteRequest(PIRP Irp, unsigned __int8 a2, __int64 a3, _DWORD *a4)
{
  bool v4; // zf
  CHAR StackCount; // cl
  CHAR CurrentLocation; // dl
  PIO_COMPLETION_ROUTINE CompletionRoutine; // r14
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  __int64 v11; // rcx
  struct _DRIVER_OBJECT *DriverObject; // rcx
  __int64 MajorFunction; // rax
  signed __int32 v14; // esi
  __int64 v15; // r8
  _DWORD *v16; // r9
  bool v17; // sf
  char Control; // al
  __int128 v19; // [rsp+30h] [rbp-39h] BYREF
  __int128 v20; // [rsp+40h] [rbp-29h]
  PIRP v21; // [rsp+50h] [rbp-19h] BYREF
  signed __int32 v22; // [rsp+58h] [rbp-11h]
  _QWORD v23[2]; // [rsp+60h] [rbp-9h] BYREF
  signed __int32 v24; // [rsp+70h] [rbp+7h]
  _QWORD *v25; // [rsp+78h] [rbp+Fh] BYREF
  int v26; // [rsp+80h] [rbp+17h]
  int v27; // [rsp+84h] [rbp+1Bh]
  PIRP *v28; // [rsp+88h] [rbp+1Fh] BYREF
  int v29; // [rsp+90h] [rbp+27h]
  int v30; // [rsp+94h] [rbp+2Bh]

  v4 = Irp->Type == 6;
  v19 = 0LL;
  v20 = 0LL;
  if ( v4 )
  {
    StackCount = Irp->StackCount;
    CurrentLocation = Irp->CurrentLocation;
    if ( CurrentLocation <= (char)(StackCount + 1) )
    {
      CompletionRoutine = 0LL;
      CurrentStackLocation = 0LL;
      if ( CurrentLocation <= StackCount )
      {
        CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
        if ( CurrentStackLocation->DeviceObject )
        {
          if ( (IopPerfStatus & 2) != 0 && IopIrpHasExtensionType((__int64)Irp, 1u) && !IopIrpHasExtensionType(v11, 4u) )
          {
            IopProcessIoTracking(
              MEMORY[0xFFFFF78000000014] - *(_QWORD *)(*((_QWORD *)&Irp->Tail.CompletionKey + 10) + 40LL),
              CurrentStackLocation->DeviceObject->DeviceType);
            IopFreeIrpExtension((__int64)Irp, 1, 1);
          }
          DriverObject = CurrentStackLocation->DeviceObject->DriverObject;
          if ( DriverObject )
          {
            MajorFunction = CurrentStackLocation->MajorFunction;
            if ( (unsigned __int8)MajorFunction <= 0x1Bu )
              CompletionRoutine = (PIO_COMPLETION_ROUTINE)DriverObject->MajorFunction[MajorFunction];
          }
        }
        else
        {
          CompletionRoutine = CurrentStackLocation->CompletionRoutine;
        }
      }
      if ( (IopPerfStatus & 1) != 0 )
      {
        v27 = 0;
        v23[0] = CompletionRoutine;
        v23[1] = Irp;
        v14 = _InterlockedIncrement(&IopPerfDriverUniqueMatchId);
        v24 = v14;
        v25 = v23;
        v26 = 20;
        EtwTraceKernelEvent((int)&v25, 1, 0x20000010u, 308, 4200450);
        if ( !CurrentStackLocation )
        {
LABEL_19:
          IopfCompleteRequest(Irp, a2, v15, v16);
          v30 = 0;
          v28 = &v21;
          v21 = Irp;
          v22 = v14;
          v29 = 12;
          EtwTraceKernelEvent((int)&v28, 1, 0x20000010u, 309, 4200450);
          return;
        }
        v17 = Irp->IoStatus.Status < 0;
        *((_QWORD *)&v19 + 1) = CurrentStackLocation->Context;
        *(_QWORD *)&v19 = CurrentStackLocation;
        DWORD2(v20) = v14;
        BYTE12(v20) = CurrentStackLocation->Control;
        Control = CurrentStackLocation->Control;
        if ( v17 )
        {
          if ( Control < 0 )
            goto LABEL_17;
        }
        else if ( (Control & 0x40) != 0 )
        {
          goto LABEL_17;
        }
        if ( !Irp->Cancel || (Control & 0x20) == 0 )
        {
          CurrentStackLocation->Control = Control | 0xC0;
          goto LABEL_18;
        }
LABEL_17:
        *(_QWORD *)&v20 = CurrentStackLocation->CompletionRoutine;
        *((_QWORD *)&v19 + 1) = CurrentStackLocation->Context;
LABEL_18:
        CurrentStackLocation->CompletionRoutine = (PIO_COMPLETION_ROUTINE)IopPerfCompletionRoutine;
        CurrentStackLocation->Context = &v19;
        goto LABEL_19;
      }
    }
  }
  IopfCompleteRequest(Irp, a2, a3, a4);
}
