/*
 * XREFs of EtwTraceThreadWorkItem @ 0x1405A85F0
 * Callers:
 *     ExpWorkerThread @ 0x1402E66D0 (ExpWorkerThread.c)
 *     IopProcessWorkItem @ 0x1402F9DA0 (IopProcessWorkItem.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x14029BFE0 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ExIsSafeWorkItem @ 0x1403DBE90 (ExIsSafeWorkItem.c)
 */

struct _KTHREAD *(__fastcall *__fastcall EtwTraceThreadWorkItem(__int64 (__fastcall *a1)(), __int16 a2))(__int64 a1)
{
  struct _KTHREAD *(__fastcall *result)(__int64); // rax
  __int64 (__fastcall *v4)(); // [rsp+30h] [rbp-28h] BYREF
  __int64 (__fastcall **v5)(); // [rsp+38h] [rbp-20h] BYREF
  int v6; // [rsp+40h] [rbp-18h]
  int v7; // [rsp+44h] [rbp-14h]

  result = IopProcessWorkItem;
  v4 = a1;
  if ( (char *)a1 != (char *)IopProcessWorkItem )
  {
    result = (struct _KTHREAD *(__fastcall *)(__int64))ExIsSafeWorkItem(a1);
    if ( !(_DWORD)result )
    {
      v7 = 0;
      v5 = &v4;
      v6 = 8;
      return (struct _KTHREAD *(__fastcall *)(__int64))EtwTraceKernelEvent((int)&v5, 1, 0x48000000u, a2, 290461954);
    }
  }
  return result;
}
