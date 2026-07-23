/*
 * XREFs of SepInitializeDebugOptions @ 0x140A73878
 * Callers:
 *     SeCodeIntegrityInitializePolicy @ 0x140A737D8 (SeCodeIntegrityInitializePolicy.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x1403F8830 (ZwQuerySystemInformation.c)
 */

int SepInitializeDebugOptions()
{
  int result; // eax
  __int128 SystemInformation; // [rsp+20h] [rbp-28h] BYREF
  __int64 v2; // [rsp+30h] [rbp-18h]

  result = 0;
  SystemInformation = 0LL;
  v2 = 0LL;
  if ( (_BYTE)KdDebuggerEnabled )
  {
    if ( !(_BYTE)KdDebuggerNotPresent )
    {
      result = SeCiDebugOptions;
      if ( (SeCiDebugOptions & 1) == 0 )
      {
        result = SeCiDebugOptions | 2;
        SeCiDebugOptions |= 2u;
      }
    }
  }
  if ( SeILSigningPolicy )
  {
    if ( (result = ZwQuerySystemInformation(SystemSecureBootPolicyInformation, &SystemInformation, 0x18u, 0LL),
          result >= 0)
      && (v2 & 0x1000000000LL) != 0
      || result == -2143092730 )
    {
      if ( (SeCiDebugOptions & 1) == 0 && (result < 0 || (v2 & 0x800000000000LL) == 0) )
        SeCiDebugOptions |= 4u;
    }
  }
  return result;
}
