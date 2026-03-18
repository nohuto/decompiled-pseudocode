/*
 * XREFs of AslEnvVerifyGuestProcessorSupport @ 0x140965CA8
 * Callers:
 *     SdbGuestTargetPlatformFlagsToRuntimePlatformFlags @ 0x140961CE4 (SdbGuestTargetPlatformFlagsToRuntimePlatformFlags.c)
 * Callees:
 *     AslEnvGetProcessWowInfo @ 0x14073CEA0 (AslEnvGetProcessWowInfo.c)
 *     AslLogCallPrintf @ 0x14073EA44 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslEnvVerifyGuestProcessorSupport(__int16 *a1, __int16 a2)
{
  __int16 v3; // r8
  int ProcessWowInfo; // ebx
  unsigned __int64 v5; // rax
  __int16 v7; // [rsp+40h] [rbp+8h] BYREF

  v7 = 0;
  if ( a1 )
  {
    v3 = *a1;
  }
  else
  {
    ProcessWowInfo = AslEnvGetProcessWowInfo(&v7, 0LL);
    if ( ProcessWowInfo < 0 )
    {
      AslLogCallPrintf(1LL);
      return (unsigned int)ProcessWowInfo;
    }
    v3 = v7;
  }
  v5 = 0LL;
  while ( *(_WORD *)((char *)&unk_140C048F0 + v5) != v3 || *(_WORD *)((char *)&unk_140C048F0 + v5 + 2) != a2 )
  {
    v5 += 16LL;
    if ( v5 >= 0x70 )
      return (unsigned int)-1073741637;
  }
  return 0;
}
