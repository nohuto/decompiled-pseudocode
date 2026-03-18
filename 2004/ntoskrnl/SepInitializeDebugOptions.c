/*
 * XREFs of SepInitializeDebugOptions @ 0x140A6CF98
 * Callers:
 *     SeCodeIntegrityInitializePolicy @ 0x140A6CEF8 (SeCodeIntegrityInitializePolicy.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x1403F3C80 (ZwQuerySystemInformation.c)
 */

__int64 SepInitializeDebugOptions()
{
  __int64 result; // rax
  __int128 v1; // [rsp+20h] [rbp-28h] BYREF
  __int64 v2; // [rsp+30h] [rbp-18h]

  result = 0LL;
  v1 = 0LL;
  v2 = 0LL;
  if ( (_BYTE)KdDebuggerEnabled )
  {
    if ( !(_BYTE)KdDebuggerNotPresent )
    {
      result = (unsigned int)SeCiDebugOptions;
      if ( (SeCiDebugOptions & 1) == 0 )
      {
        result = SeCiDebugOptions | 2u;
        SeCiDebugOptions |= 2u;
      }
    }
  }
  if ( SeILSigningPolicy )
  {
    if ( (result = ZwQuerySystemInformation(143LL, (__int64)&v1), (int)result >= 0) && (v2 & 0x1000000000LL) != 0
      || (_DWORD)result == -2143092730 )
    {
      if ( (SeCiDebugOptions & 1) == 0 && ((int)result < 0 || (v2 & 0x800000000000LL) == 0) )
        SeCiDebugOptions |= 4u;
    }
  }
  return result;
}
