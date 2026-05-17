/*
 * XREFs of _RtlControlStackTraceDataBase@12 @ 0x4B368DBE
 * Callers:
 *     _RtlpSetProcessBacktraces@4 @ 0x4B337C27 (_RtlpSetProcessBacktraces@4.c)
 * Callees:
 *     _RtlpInitializeStackTraceDatabase@12 @ 0x4B369163 (_RtlpInitializeStackTraceDatabase@12.c)
 */

int __fastcall RtlControlStackTraceDataBase(unsigned int a1, int a2, int a3)
{
  if ( a1 >= 3 )
    return -1073741585;
  if ( a1 )
    return -1073741822;
  if ( a2 != 12 )
    return -1073741584;
  if ( a3 )
    return RtlpInitializeStackTraceDatabase(*(_DWORD *)(a3 + 8));
  return -1073741583;
}
