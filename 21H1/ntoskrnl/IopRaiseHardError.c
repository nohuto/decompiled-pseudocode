/*
 * XREFs of IopRaiseHardError @ 0x14088D860
 * Callers:
 *     IopApcHardError @ 0x14088CA50 (IopApcHardError.c)
 * Callees:
 *     IopVerifierExAllocatePool @ 0x1402033E4 (IopVerifierExAllocatePool.c)
 *     RtlInitUnicodeString @ 0x140206450 (RtlInitUnicodeString.c)
 *     IofCompleteRequest @ 0x140248710 (IofCompleteRequest.c)
 *     KiUnstackDetachProcess @ 0x14025E290 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402A88C0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     ObQueryNameStringMode @ 0x1405D9AA0 (ObQueryNameStringMode.c)
 *     ExRaiseHardError @ 0x1409517E0 (ExRaiseHardError.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

void __fastcall IopRaiseHardError(PIRP Irp, __int64 a2, char *a3)
{
  char v6; // r15
  UNICODE_STRING *Pool; // rax
  UNICODE_STRING *v8; // r14
  NTSTATUS v9; // esi
  _DWORD *v10; // r9
  _KPROCESS *Process; // rcx
  NTSTATUS Status; // r10d
  int v13; // r11d
  __int64 v14; // r8
  struct _LIST_ENTRY *Flink; // rax
  int v16; // edi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  int v18; // [rsp+30h] [rbp-39h] BYREF
  unsigned int v19; // [rsp+34h] [rbp-35h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-31h] BYREF
  _OWORD v21[3]; // [rsp+48h] [rbp-21h] BYREF
  UNICODE_STRING *p_DestinationString; // [rsp+78h] [rbp+Fh] BYREF
  struct _LIST_ENTRY *v23; // [rsp+80h] [rbp+17h]
  struct _LIST_ENTRY *v24; // [rsp+88h] [rbp+1Fh]

  v18 = 0;
  v19 = 0;
  v6 = 0;
  memset(v21, 0, sizeof(v21));
  DestinationString = 0LL;
  ObQueryNameStringMode(a3, 0LL, 0, &v19, 0);
  Pool = (UNICODE_STRING *)IopVerifierExAllocatePool(PagedPool, v19);
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
  v9 = ObQueryNameStringMode(a3, (__int64)Pool, v19, &v18, 0);
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
    KiStackAttachProcess(Process, 0LL, (__int64)v21, v10);
    v6 = 1;
  }
  Status = Irp->IoStatus.Status;
  if ( Status != -1073741806 )
  {
    if ( Status <= -1073741806 )
    {
LABEL_17:
      v13 = 0;
      v14 = 0LL;
      goto LABEL_19;
    }
    if ( Status <= -1073741804 )
    {
LABEL_16:
      p_DestinationString = v8;
      v13 = 2;
      v14 = 1LL;
      Flink = KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink;
      v24 = 0LL;
      v23 = Flink;
      goto LABEL_19;
    }
    if ( Status != -1073741662 )
    {
      if ( Status == -1073741661 || Status == -1073741643 )
        goto LABEL_16;
      goto LABEL_17;
    }
  }
  v23 = (struct _LIST_ENTRY *)v8;
  p_DestinationString = &DestinationString;
  v13 = 3;
  v14 = 3LL;
  v24 = KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink;
LABEL_19:
  if ( ExReadyForErrors )
  {
    v16 = ExRaiseHardError(Status, v13, v14, (unsigned int)&p_DestinationString, 8, (__int64)&v18);
  }
  else
  {
    v18 = 0;
    v16 = -1073741823;
  }
  if ( v6 )
    KiUnstackDetachProcess((__int64)v21, 0LL, v14, v10);
  ExFreePoolWithTag(v8, 0);
  if ( v16 >= 0 && v18 == 9 )
  {
    ((void (__fastcall *)(PDEVICE_OBJECT, PIRP))Irp->Tail.Overlay.CurrentStackLocation->DeviceObject->DriverObject->MajorFunction[Irp->Tail.Overlay.CurrentStackLocation->MajorFunction])(
      Irp->Tail.Overlay.CurrentStackLocation->DeviceObject,
      Irp);
    return;
  }
  if ( v18 == 3 )
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
