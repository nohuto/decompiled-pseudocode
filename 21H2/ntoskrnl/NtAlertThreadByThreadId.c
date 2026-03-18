/*
 * XREFs of NtAlertThreadByThreadId @ 0x1407A7D20
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeAlertThreadByThreadId @ 0x1402F5FD0 (KeAlertThreadByThreadId.c)
 *     PsLookupThreadByThreadId @ 0x1407A7D90 (PsLookupThreadByThreadId.c)
 */

NTSTATUS __fastcall NtAlertThreadByThreadId(void *a1)
{
  struct _KTHREAD *CurrentThread; // rbx
  int v2; // edi
  NTSTATUS result; // eax
  __int64 v4; // rdx
  __int64 v5; // r8
  _DWORD *v6; // r9
  _KPROCESS *Process; // rax
  PETHREAD v8; // rbx
  PETHREAD Thread; // [rsp+38h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  v2 = 0;
  Thread = 0LL;
  result = PsLookupThreadByThreadId(a1, &Thread);
  if ( result >= 0 )
  {
    Process = CurrentThread->Process;
    v8 = Thread;
    if ( Thread->Process == Process )
      KeAlertThreadByThreadId((__int64)Thread, v4, v5, v6);
    else
      v2 = -1073741790;
    ObfDereferenceObject(v8);
    return v2;
  }
  return result;
}
