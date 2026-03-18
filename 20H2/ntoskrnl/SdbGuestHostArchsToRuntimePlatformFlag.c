/*
 * XREFs of SdbGuestHostArchsToRuntimePlatformFlag @ 0x140968DA8
 * Callers:
 *     SdbGuestTargetPlatformFlagsToRuntimePlatformFlags @ 0x140968E54 (SdbGuestTargetPlatformFlagsToRuntimePlatformFlags.c)
 * Callees:
 *     AslEnvGetProcessWowInfo @ 0x14074D604 (AslEnvGetProcessWowInfo.c)
 *     AslLogCallPrintf @ 0x14074F1A4 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbGuestHostArchsToRuntimePlatformFlag(__int16 a1, __int16 *a2)
{
  __int64 v3; // rbx
  __int16 v4; // dx
  __int16 *i; // rax
  __int16 v7; // [rsp+40h] [rbp+8h] BYREF

  if ( a1 == -1 )
    return 0LL;
  v3 = 0LL;
  v7 = -1;
  if ( !a2 || (v4 = *a2, v7 = v4, v4 == -1) )
  {
    if ( (int)AslEnvGetProcessWowInfo(&v7, 0LL) < 0 )
    {
      AslLogCallPrintf(1LL);
      return 0LL;
    }
    v4 = v7;
  }
  for ( i = &word_14003CDD6; a1 != *(i - 1) || v4 != *i; i += 8 )
  {
    if ( (unsigned __int64)++v3 >= 7 )
      return 0LL;
  }
  return LODWORD(qword_14003CDD8[2 * v3]);
}
