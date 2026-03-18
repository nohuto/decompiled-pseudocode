/*
 * XREFs of NtUmsThreadYield @ 0x1408C05D0
 * Callers:
 *     <none>
 * Callees:
 *     KiIsPrimaryPresent @ 0x140524244 (KiIsPrimaryPresent.c)
 *     KiUmsExceptionFilter @ 0x1408C05A4 (KiUmsExceptionFilter.c)
 */

__int64 __fastcall NtUmsThreadYield(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  struct _KTHREAD *CurrentThread; // rdi
  struct _KTHREAD *v5; // rax
  __int64 result; // rax
  _DWORD *Object; // rdi
  __int64 v8; // rbx
  __int64 v9; // rsi

  CurrentThread = KeGetCurrentThread();
  v5 = CurrentThread;
  if ( !CurrentThread )
    v5 = KeGetCurrentThread();
  if ( (v5->Header.Reserved1 & 0x40) == 0 )
    return 3221225659LL;
  Object = CurrentThread->WaitBlock[3].Object;
  v8 = *(_QWORD *)Object;
  v9 = *(_QWORD *)(*(_QWORD *)Object + 1272LL);
  *(_QWORD *)(*(_QWORD *)Object + 1272LL) = 1LL;
  if ( KiIsPrimaryPresent(v8, a1, a3, a4) )
  {
    Object[20] |= 1u;
    return 0LL;
  }
  else
  {
    result = 3221227292LL;
    *(_QWORD *)(v8 + 1272) = v9;
  }
  return result;
}
