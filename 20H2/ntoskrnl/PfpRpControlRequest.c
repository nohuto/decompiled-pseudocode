/*
 * XREFs of PfpRpControlRequest @ 0x1406F3804
 * Callers:
 *     PfSetSuperfetchInformation @ 0x1406F4480 (PfSetSuperfetchInformation.c)
 * Callees:
 *     PfpRpControlRequestVerify @ 0x14033BC48 (PfpRpControlRequestVerify.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     PfpRpControlRequestPerform @ 0x1406F38D0 (PfpRpControlRequestPerform.c)
 *     PfpRpControlRequestCopy @ 0x1406F394C (PfpRpControlRequestCopy.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PfpRpControlRequest(__int64 a1, char a2)
{
  int v2; // ebx
  __int128 v4; // [rsp+38h] [rbp-40h]
  __int128 v5; // [rsp+48h] [rbp-30h]
  __int64 v6; // [rsp+58h] [rbp-20h]

  v4 = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  if ( (dword_140C50270 & 1) != 0 )
  {
    if ( *(_DWORD *)(a1 + 24) < 0x18u )
    {
      return (unsigned int)-1073741306;
    }
    else
    {
      v2 = PfpRpControlRequestCopy(*(void **)(a1 + 16), a2);
      if ( v2 >= 0 )
      {
        if ( (unsigned int)PfpRpControlRequestVerify(0LL) )
          return (unsigned int)-1073741701;
        else
          return (unsigned int)PfpRpControlRequestPerform(&unk_140C501D8, 0LL);
      }
    }
  }
  else
  {
    return (unsigned int)-1073741696;
  }
  return (unsigned int)v2;
}
