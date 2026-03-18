/*
 * XREFs of IopRaiseHardError @ 0x140894640
 * Callers:
 *     IopApcHardError @ 0x1408938C0 (IopApcHardError.c)
 * Callees:
 *     IopVerifierExAllocatePool @ 0x14020AC94 (IopVerifierExAllocatePool.c)
 *     RtlInitUnicodeString @ 0x140210D50 (RtlInitUnicodeString.c)
 *     KiUnstackDetachProcess @ 0x140268320 (KiUnstackDetachProcess.c)
 *     IofCompleteRequest @ 0x140292560 (IofCompleteRequest.c)
 *     KiStackAttachProcess @ 0x1402D6FA0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     ObQueryNameStringMode @ 0x1406350A0 (ObQueryNameStringMode.c)
 *     ExRaiseHardError @ 0x140958940 (ExRaiseHardError.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void __fastcall IopRaiseHardError(PIRP Irp, __int64 a2, char *a3)
{
  char v6; // r15
  UNICODE_STRING *Pool; // rax
  UNICODE_STRING *v8; // r14
  NTSTATUS v9; // esi
  _KPROCESS *Process; // rcx
  NTSTATUS Status; // r10d
  int v12; // r11d
  int v13; // r8d
  struct _LIST_ENTRY *Flink; // rax
  int v15; // edi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  int v17; // [rsp+30h] [rbp-39h] BYREF
  unsigned int v18; // [rsp+34h] [rbp-35h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-31h] BYREF
  _OWORD v20[3]; // [rsp+48h] [rbp-21h] BYREF
  UNICODE_STRING *p_DestinationString; // [rsp+78h] [rbp+Fh] BYREF
  struct _LIST_ENTRY *v22; // [rsp+80h] [rbp+17h]
  struct _LIST_ENTRY *v23; // [rsp+88h] [rbp+1Fh]

  v17 = 0;
  v18 = 0;
  v6 = 0;
  memset(v20, 0, sizeof(v20));
  DestinationString = 0LL;
  ObQueryNameStringMode(a3, 0LL, 0, &v18, 0);
  Pool = (UNICODE_STRING *)IopVerifierExAllocatePool(PagedPool, v18);
  v8 = Pool;
  if ( !Pool )
  {
    v9 = -1073741670;
LABEL_35:
    Irp->IoStatus.Status = v9;
LABEL_36:
    Irp->IoStatus.Information = 0LL;
    goto LABEL_37;
  }
  v9 = ObQueryNameStringMode(a3, (__int64)Pool, v18, &v17, 0);
  if ( v9 < 0 )
  {
    ExFreePoolWithTag(v8, 0);
    goto LABEL_35;
  }
  if ( a2 && (*(_BYTE *)(a2 + 4) & 1) != 0 )
  {
    DestinationString.MaximumLength = 64;
    DestinationString.Buffer = (wchar_t *)(a2 + 32);
    DestinationString.Length = *(_WORD *)(a2 + 6);
  }
  else
  {
    RtlInitUnicodeString(&DestinationString, 0LL);
  }
  Process = Irp->Tail.Overlay.Thread->Process;
  if ( Process != KeGetCurrentThread()->ApcState.Process )
  {
    KiStackAttachProcess(Process, 0, (__int64)v20);
    v6 = 1;
  }
  Status = Irp->IoStatus.Status;
  if ( Status != -1073741806 )
  {
    if ( Status <= -1073741806 )
    {
LABEL_17:
      v12 = 0;
      v13 = 0;
      goto LABEL_19;
    }
    if ( Status <= -1073741804 )
    {
LABEL_16:
      p_DestinationString = v8;
      v12 = 2;
      v13 = 1;
      Flink = KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink;
      v23 = 0LL;
      v22 = Flink;
      goto LABEL_19;
    }
    if ( Status != -1073741662 )
    {
      if ( Status == -1073741661 || Status == -1073741643 )
        goto LABEL_16;
      goto LABEL_17;
    }
  }
  v22 = (struct _LIST_ENTRY *)v8;
  p_DestinationString = &DestinationString;
  v12 = 3;
  v13 = 3;
  v23 = KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink;
LABEL_19:
  if ( ExReadyForErrors )
  {
    v15 = ExRaiseHardError(Status, v12, v13, (unsigned int)&p_DestinationString, 8, (__int64)&v17);
  }
  else
  {
    v17 = 0;
    v15 = -1073741823;
  }
  if ( v6 )
    KiUnstackDetachProcess((__int64)v20, 0);
  ExFreePoolWithTag(v8, 0);
  if ( v15 >= 0 && v17 == 9 )
  {
    ((void (__fastcall *)(PDEVICE_OBJECT, PIRP))Irp->Tail.Overlay.CurrentStackLocation->DeviceObject->DriverObject->MajorFunction[Irp->Tail.Overlay.CurrentStackLocation->MajorFunction])(
      Irp->Tail.Overlay.CurrentStackLocation->DeviceObject,
      Irp);
    return;
  }
  if ( v17 == 3 )
  {
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    if ( CurrentStackLocation->MajorFunction == 13 && CurrentStackLocation->MinorFunction == 1 )
      Irp->IoStatus.Information = 1LL;
    else
      Irp->IoStatus.Status = -1073741248;
  }
  if ( (Irp->Flags & 0x40) != 0 )
    goto LABEL_36;
LABEL_37:
  IofCompleteRequest(Irp, 1);
}
