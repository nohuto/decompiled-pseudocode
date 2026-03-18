/*
 * XREFs of IovCompleteRequest @ 0x1409C1F90
 * Callers:
 *     IofCompleteRequest @ 0x140284EB0 (IofCompleteRequest.c)
 * Callees:
 *     IopfCompleteRequest @ 0x140284EE0 (IopfCompleteRequest.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     IopPerfCompleteRequest @ 0x140502B4C (IopPerfCompleteRequest.c)
 *     IovpLogStackTrace @ 0x1409C2968 (IovpLogStackTrace.c)
 *     IovpCompleteRequest1 @ 0x1409CD4B0 (IovpCompleteRequest1.c)
 *     VerifierBugCheckIfAppropriate @ 0x1409CDD44 (VerifierBugCheckIfAppropriate.c)
 */

void __fastcall IovCompleteRequest(PIRP Irp, unsigned __int8 a2)
{
  __int64 v4; // rdx
  PDRIVER_CANCEL CancelRoutine; // r8
  ULONG_PTR Status; // rax
  __int64 v7; // r8
  _DWORD *v8; // r9
  bool v9; // sf
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  char Control; // al
  __int64 v12; // [rsp+30h] [rbp-59h] BYREF
  __int128 v13; // [rsp+38h] [rbp-51h]
  __int64 v14; // [rsp+48h] [rbp-41h]
  void *v15; // [rsp+50h] [rbp-39h]
  _QWORD v16[3]; // [rsp+58h] [rbp-31h] BYREF
  PIO_COMPLETION_ROUTINE CompletionRoutine; // [rsp+70h] [rbp-19h]
  __int128 v18; // [rsp+78h] [rbp-11h]
  __int128 v19; // [rsp+88h] [rbp-1h]
  __int128 v20; // [rsp+98h] [rbp+Fh]
  __int128 v21; // [rsp+A8h] [rbp+1Fh]
  PVOID Context; // [rsp+B8h] [rbp+2Fh]
  void *retaddr; // [rsp+E8h] [rbp+5Fh]

  v12 = 0LL;
  v14 = 0LL;
  v13 = 0LL;
  IovpLogStackTrace(Irp);
  if ( (MmVerifierData & 0x10) != 0 && !IovpDisabledWithoutReboot )
  {
    if ( Irp->CurrentLocation > (char)(Irp->StackCount + 1) || Irp->Type != 6 )
      VerifierBugCheckIfAppropriate(0x44u, (ULONG_PTR)Irp, 0x486uLL, 0LL, 0LL);
    CancelRoutine = Irp->CancelRoutine;
    if ( CancelRoutine )
      VerifierBugCheckIfAppropriate(0xC9u, 7uLL, (ULONG_PTR)CancelRoutine, (ULONG_PTR)Irp, 0LL);
    Status = Irp->IoStatus.Status;
    if ( (_DWORD)Status == 259 || (_DWORD)Status == -1 )
      VerifierBugCheckIfAppropriate(0xC9u, 6uLL, Status, (ULONG_PTR)Irp, 0LL);
    if ( KeGetCurrentIrql() > 2u )
      VerifierBugCheckIfAppropriate(0xC9u, 0xEuLL, KeGetCurrentIrql(), (ULONG_PTR)Irp, 0LL);
  }
  LOBYTE(v4) = a2;
  v15 = retaddr;
  IovpCompleteRequest1(Irp, v4, &v12);
  if ( (!IovpDisabledWithoutReboot || v12) && Irp->CurrentLocation <= Irp->StackCount )
  {
    v9 = Irp->IoStatus.Status < 0;
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    v16[2] = &v12;
    v16[1] = CurrentStackLocation->Context;
    v16[0] = CurrentStackLocation;
    v18 = *(_OWORD *)&CurrentStackLocation->MajorFunction;
    v19 = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
    v20 = *(_OWORD *)(&CurrentStackLocation->Parameters.SetQuota + 6);
    v21 = *(_OWORD *)&CurrentStackLocation->FileObject;
    Context = CurrentStackLocation->Context;
    Control = CurrentStackLocation->Control;
    if ( v9 )
    {
      if ( Control < 0 )
        goto LABEL_18;
    }
    else if ( (Control & 0x40) != 0 )
    {
      goto LABEL_18;
    }
    if ( !Irp->Cancel || (Control & 0x20) == 0 )
    {
      CompletionRoutine = 0LL;
      CurrentStackLocation->Control |= 0xE0u;
      goto LABEL_19;
    }
LABEL_18:
    CompletionRoutine = CurrentStackLocation->CompletionRoutine;
LABEL_19:
    CurrentStackLocation->CompletionRoutine = (PIO_COMPLETION_ROUTINE)IovpLocalCompletionRoutine;
    CurrentStackLocation->Context = v16;
  }
  if ( (IopFunctionPointerMask & 2) != 0 )
    IopPerfCompleteRequest(Irp, a2, v7, v8);
  else
    IopfCompleteRequest(Irp, a2, v7, v8);
}
