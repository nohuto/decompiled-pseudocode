/*
 * XREFs of NtGdiGetTextCharsetInfo @ 0x1C00A1A40
 * Callers:
 *     <none>
 * Callees:
 *     GreGetTextCharsetInfo @ 0x1C00A1AD4 (GreGetTextCharsetInfo.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 */

__int64 __fastcall NtGdiGetTextCharsetInfo(HDC a1, ULONG64 a2)
{
  __int64 result; // rax

  result = GreGetTextCharsetInfo(a1);
  if ( (_DWORD)result != -1 && a2 )
  {
    if ( a2 >= MmUserProbeAddress )
      a2 = MmUserProbeAddress;
    *(_OWORD *)a2 = 0LL;
    *(_QWORD *)(a2 + 16) = 0LL;
  }
  return result;
}
