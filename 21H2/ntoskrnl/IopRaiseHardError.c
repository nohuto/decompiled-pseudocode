/*
 * XREFs of IopRaiseHardError @ 0x140891D60
 * Callers:
 *     IopApcHardError @ 0x140890FF0 (IopApcHardError.c)
 * Callees:
 *     IopVerifierExAllocatePool @ 0x1402336E0 (IopVerifierExAllocatePool.c)
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     KiStackAttachProcess @ 0x14027D850 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1402AB900 (KiUnstackDetachProcess.c)
 *     IofCompleteRequest @ 0x1402E7CE0 (IofCompleteRequest.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     ObQueryNameStringMode @ 0x1406C7460 (ObQueryNameStringMode.c)
 *     ExRaiseHardError @ 0x1409562E0 (ExRaiseHardError.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall IopRaiseHardError(PIRP Irp, __int64 a2, char *a3)
{
  char v6; // r15
  UNICODE_STRING *Pool; // rax
  UNICODE_STRING *v8; // r14
  NTSTATUS v9; // esi
  _KPROCESS *Process; // rcx
  NTSTATUS Status; // r10d
  unsigned int v12; // r11d
  __int64 v13; // r8
  int v14; // edi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  int v16; // [rsp+30h] [rbp-39h] BYREF
  unsigned int v17; // [rsp+34h] [rbp-35h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-31h] BYREF
  _OWORD v19[3]; // [rsp+48h] [rbp-21h] BYREF
  UNICODE_STRING *p_DestinationString; // [rsp+78h] [rbp+Fh] BYREF
  struct _LIST_ENTRY *Flink; // [rsp+80h] [rbp+17h]
  struct _LIST_ENTRY *v22; // [rsp+88h] [rbp+1Fh]

  v16 = 0;
  v17 = 0;
  v6 = 0;
  memset(v19, 0, sizeof(v19));
  DestinationString = 0LL;
  ObQueryNameStringMode(a3, 0LL, 0, &v17, 0);
  Pool = (UNICODE_STRING *)IopVerifierExAllocatePool(PagedPool, v17);
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
  v9 = ObQueryNameStringMode(a3, (__int64)Pool, v17, &v16, 0);
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
    KiStackAttachProcess(Process, 0, (__int64)v19);
    v6 = 1;
  }
  Status = Irp->IoStatus.Status;
  if ( Status != -1073741806 )
  {
    if ( Status <= -1073741806 )
    {
LABEL_17:
      v12 = 0;
      v13 = 0LL;
      goto LABEL_19;
    }
    if ( Status <= -1073741804 )
    {
LABEL_16:
      v12 = 2;
      v22 = 0LL;
      p_DestinationString = v8;
      v13 = 1LL;
      Flink = KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink;
      goto LABEL_19;
    }
    if ( Status != -1073741662 )
    {
      if ( Status == -1073741661 || Status == -1073741643 )
        goto LABEL_16;
      goto LABEL_17;
    }
  }
  Flink = (struct _LIST_ENTRY *)v8;
  p_DestinationString = &DestinationString;
  v12 = 3;
  v13 = 3LL;
  v22 = KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink;
LABEL_19:
  if ( ExReadyForErrors )
  {
    v14 = ExRaiseHardError((unsigned int)Status, v12, v13, &p_DestinationString, 8, &v16);
  }
  else
  {
    v16 = 0;
    v14 = -1073741823;
  }
  if ( v6 )
    KiUnstackDetachProcess((__int64)v19, 0LL);
  ExFreePoolWithTag(v8, 0);
  if ( v14 >= 0 && v16 == 9 )
  {
    ((void (__fastcall *)(PDEVICE_OBJECT, PIRP))Irp->Tail.Overlay.CurrentStackLocation->DeviceObject->DriverObject->MajorFunction[Irp->Tail.Overlay.CurrentStackLocation->MajorFunction])(
      Irp->Tail.Overlay.CurrentStackLocation->DeviceObject,
      Irp);
    return;
  }
  if ( v16 == 3 )
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
