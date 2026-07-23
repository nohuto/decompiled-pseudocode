/*
 * XREFs of NtUmsThreadYield @ 0x1408B9550
 * Callers:
 *     <none>
 * Callees:
 *     KiIsPrimaryPresent @ 0x140520224 (KiIsPrimaryPresent.c)
 *     KiUmsExceptionFilter @ 0x1408B9524 (KiUmsExceptionFilter.c)
 */

NTSTATUS __cdecl NtUmsThreadYield(PVOID SchedulerParam)
{
  __int64 v1; // r8
  _DWORD *v2; // r9
  struct _KTHREAD *CurrentThread; // rdi
  struct _KTHREAD *v4; // rax
  NTSTATUS result; // eax
  _DWORD *Object; // rdi
  __int64 v7; // rbx
  __int64 v8; // rsi

  CurrentThread = KeGetCurrentThread();
  v4 = CurrentThread;
  if ( !CurrentThread )
    v4 = KeGetCurrentThread();
  if ( (v4->Header.Reserved1 & 0x40) == 0 )
    return -1073741637;
  Object = CurrentThread->WaitBlock[3].Object;
  v7 = *(_QWORD *)Object;
  v8 = *(_QWORD *)(*(_QWORD *)Object + 1272LL);
  *(_QWORD *)(*(_QWORD *)Object + 1272LL) = 1LL;
  if ( KiIsPrimaryPresent(v7, (__int64)SchedulerParam, v1, v2) )
  {
    Object[20] |= 1u;
    return 0;
  }
  else
  {
    result = -1073740004;
    *(_QWORD *)(v7 + 1272) = v8;
  }
  return result;
}
