/*
 * XREFs of IovCompleteRequest @ 0x1409C5FA0
 * Callers:
 *     IofCompleteRequest @ 0x1402E7CE0 (IofCompleteRequest.c)
 * Callees:
 *     IopfCompleteRequest @ 0x1402E7D10 (IopfCompleteRequest.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     IopPerfCompleteRequest @ 0x140508014 (IopPerfCompleteRequest.c)
 *     IovpLogStackTrace @ 0x1409C6978 (IovpLogStackTrace.c)
 *     IovpCompleteRequest1 @ 0x1409D14C0 (IovpCompleteRequest1.c)
 *     VerifierBugCheckIfAppropriate @ 0x1409D1D54 (VerifierBugCheckIfAppropriate.c)
 */

void __fastcall IovCompleteRequest(IRP *BugCheckParameter1, unsigned __int8 a2)
{
  __int64 v4; // rdx
  ULONG_PTR CancelRoutine; // r8
  ULONG_PTR Status; // rax
  bool v7; // sf
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  char Control; // al
  __int64 v10; // [rsp+30h] [rbp-59h] BYREF
  __int128 v11; // [rsp+38h] [rbp-51h]
  __int64 v12; // [rsp+48h] [rbp-41h]
  void *v13; // [rsp+50h] [rbp-39h]
  _QWORD v14[3]; // [rsp+58h] [rbp-31h] BYREF
  PIO_COMPLETION_ROUTINE CompletionRoutine; // [rsp+70h] [rbp-19h]
  __int128 v16; // [rsp+78h] [rbp-11h]
  __int128 v17; // [rsp+88h] [rbp-1h]
  __int128 v18; // [rsp+98h] [rbp+Fh]
  __int128 v19; // [rsp+A8h] [rbp+1Fh]
  PVOID Context; // [rsp+B8h] [rbp+2Fh]
  void *retaddr; // [rsp+E8h] [rbp+5Fh]

  v10 = 0LL;
  v12 = 0LL;
  v11 = 0LL;
  IovpLogStackTrace(BugCheckParameter1);
  if ( (MmVerifierData & 0x10) != 0 && !IovpDisabledWithoutReboot )
  {
    if ( BugCheckParameter1->CurrentLocation > (char)(BugCheckParameter1->StackCount + 1)
      || BugCheckParameter1->Type != 6 )
    {
      VerifierBugCheckIfAppropriate(0x44u, (ULONG_PTR)BugCheckParameter1, 0x486uLL, 0LL, 0LL);
    }
    CancelRoutine = (ULONG_PTR)BugCheckParameter1->CancelRoutine;
    if ( CancelRoutine )
      VerifierBugCheckIfAppropriate(0xC9u, 7uLL, CancelRoutine, (ULONG_PTR)BugCheckParameter1, 0LL);
    Status = BugCheckParameter1->IoStatus.Status;
    if ( (_DWORD)Status == 259 || (_DWORD)Status == -1 )
      VerifierBugCheckIfAppropriate(0xC9u, 6uLL, Status, (ULONG_PTR)BugCheckParameter1, 0LL);
    if ( KeGetCurrentIrql() > 2u )
      VerifierBugCheckIfAppropriate(0xC9u, 0xEuLL, KeGetCurrentIrql(), (ULONG_PTR)BugCheckParameter1, 0LL);
  }
  LOBYTE(v4) = a2;
  v13 = retaddr;
  IovpCompleteRequest1(BugCheckParameter1, v4, &v10);
  if ( (!IovpDisabledWithoutReboot || v10) && BugCheckParameter1->CurrentLocation <= BugCheckParameter1->StackCount )
  {
    v7 = BugCheckParameter1->IoStatus.Status < 0;
    CurrentStackLocation = BugCheckParameter1->Tail.Overlay.CurrentStackLocation;
    v14[2] = &v10;
    v14[1] = CurrentStackLocation->Context;
    v14[0] = CurrentStackLocation;
    v16 = *(_OWORD *)&CurrentStackLocation->MajorFunction;
    v17 = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
    v18 = *(_OWORD *)(&CurrentStackLocation->Parameters.SetQuota + 6);
    v19 = *(_OWORD *)&CurrentStackLocation->FileObject;
    Context = CurrentStackLocation->Context;
    Control = CurrentStackLocation->Control;
    if ( v7 )
    {
      if ( Control < 0 )
        goto LABEL_18;
    }
    else if ( (Control & 0x40) != 0 )
    {
      goto LABEL_18;
    }
    if ( !BugCheckParameter1->Cancel || (Control & 0x20) == 0 )
    {
      CompletionRoutine = 0LL;
      CurrentStackLocation->Control |= 0xE0u;
      goto LABEL_19;
    }
LABEL_18:
    CompletionRoutine = CurrentStackLocation->CompletionRoutine;
LABEL_19:
    CurrentStackLocation->CompletionRoutine = (PIO_COMPLETION_ROUTINE)IovpLocalCompletionRoutine;
    CurrentStackLocation->Context = v14;
  }
  if ( (IopFunctionPointerMask & 2) != 0 )
    IopPerfCompleteRequest((__int64)BugCheckParameter1, a2);
  else
    IopfCompleteRequest(BugCheckParameter1, a2);
}
