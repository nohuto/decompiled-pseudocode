/*
 * XREFs of NtGdiGetBoundsRect @ 0x1C009EEE0
 * Callers:
 *     <none>
 * Callees:
 *     GreGetBoundsRect @ 0x1C009EF48 (GreGetBoundsRect.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 */

__int64 __fastcall NtGdiGetBoundsRect(HDC a1, _OWORD *a2)
{
  __int64 result; // rax
  struct _POINTL v4[2]; // [rsp+20h] [rbp-28h] BYREF

  *(_OWORD *)&v4[0].x = 0LL;
  result = GreGetBoundsRect(a1, v4);
  if ( (_DWORD)result )
  {
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      a2 = (_OWORD *)MmUserProbeAddress;
    *a2 = *(_OWORD *)&v4[0].x;
  }
  return result;
}
