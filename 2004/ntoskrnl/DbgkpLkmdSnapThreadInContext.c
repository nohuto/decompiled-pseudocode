/*
 * XREFs of DbgkpLkmdSnapThreadInContext @ 0x14088555C
 * Callers:
 *     DbgkpLkmdSnapThreadApc @ 0x1408854E0 (DbgkpLkmdSnapThreadApc.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     RtlCaptureContext @ 0x1403FF110 (RtlCaptureContext.c)
 *     DbgkpLkmdSnapDataEx @ 0x1404E9004 (DbgkpLkmdSnapDataEx.c)
 *     DbgkpLkmdSnapKernelStack @ 0x1404E9118 (DbgkpLkmdSnapKernelStack.c)
 */

__int64 __fastcall DbgkpLkmdSnapThreadInContext(__int64 *a1, __int64 a2, _DWORD *a3)
{
  __int64 result; // rax
  char v7; // di
  __int64 v8; // rax
  _CONTEXT ContextRecord; // [rsp+40h] [rbp-4F8h] BYREF

  result = DbgkpLkmdSnapDataEx((__int64)a1);
  if ( (int)result >= 0 )
  {
    *a3 = 0;
    v7 = 1;
    a3[1] |= 1u;
    v8 = *a1;
    if ( *a1 )
    {
      if ( !*(_QWORD *)(v8 + 8) )
      {
        *(_QWORD *)(v8 + 8) = a2;
        v7 = 0;
        MEMORY[0x218] = 0;
      }
    }
    RtlCaptureContext(&ContextRecord);
    DbgkpLkmdSnapDataEx((__int64)a1);
    DbgkpLkmdSnapKernelStack((__int64)a1, a2, 0LL, v7, &ContextRecord, (__int64)a3);
    return 0LL;
  }
  else
  {
    *a3 = result;
  }
  return result;
}
