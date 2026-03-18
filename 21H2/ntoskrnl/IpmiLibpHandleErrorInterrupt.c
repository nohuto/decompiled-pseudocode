/*
 * XREFs of IpmiLibpHandleErrorInterrupt @ 0x140653694
 * Callers:
 *     IpmiLibpKcsHandleError @ 0x140652FB8 (IpmiLibpKcsHandleError.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall IpmiLibpHandleErrorInterrupt(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  char v5; // [rsp+28h] [rbp-20h]

  if ( (dword_140C10CC0 & 1) == 0 )
    return 3221225474LL;
  if ( !qword_140C10CD0 )
    return 3221225485LL;
  v5 = 0;
  result = qword_140C10CD0(qword_140C10CD8, &WheaIpmiContext, a2, a3, a4, v5);
  if ( (int)result >= 0 )
    return 3221225485LL;
  return result;
}
