/*
 * XREFs of RtlOpenModernAppOptionsKey @ 0x1800E1CB8
 * Callers:
 *     LdrpInitializeExecutionOptions @ 0x1800D10CC (LdrpInitializeExecutionOptions.c)
 * Callees:
 *     NtClose @ 0x18009D290 (NtClose.c)
 *     NtOpenKey @ 0x18009D2F0 (NtOpenKey.c)
 */

__int64 __fastcall RtlOpenModernAppOptionsKey(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 result; // rax
  HANDLE Handle; // [rsp+78h] [rbp+20h]

  if ( RtlpModernAppKey )
  {
    *a3 = RtlpModernAppKey;
  }
  else
  {
    result = NtOpenKey();
    if ( (int)result < 0 )
      return result;
    if ( _InterlockedCompareExchange64(&RtlpModernAppKey, (signed __int64)Handle, 0LL) )
      NtClose(Handle);
    *a3 = RtlpModernAppKey;
  }
  return 0LL;
}
