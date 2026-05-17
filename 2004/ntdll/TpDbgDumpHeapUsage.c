/*
 * XREFs of TpDbgDumpHeapUsage @ 0x180111F30
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18008C240 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A08F0 (_guard_dispatch_icall_nop.c)
 *     RtlQueryTagHeap @ 0x1800F2730 (RtlQueryTagHeap.c)
 */

void *__fastcall TpDbgDumpHeapUsage(
        char a1,
        __int64 (__fastcall *a2)(__int64, _QWORD, void *, _QWORD, _DWORD, __int64),
        __int64 a3)
{
  unsigned int i; // ebx
  void *result; // rax
  _DWORD v8[2]; // [rsp+40h] [rbp-38h] BYREF
  __int64 v9; // [rsp+48h] [rbp-30h]

  for ( i = 0; i < 0xE; ++i )
  {
    result = RtlQueryTagHeap(
               (__int64)NtCurrentPeb()->ProcessHeap,
               0,
               (unsigned __int16)(i + ((unsigned int)TppHeapTag >> 18)),
               a1,
               (__int64)v8);
    if ( result )
      result = (void *)a2(a3, i + TppHeapTag, result, v8[0], v8[1], v9);
  }
  return result;
}
