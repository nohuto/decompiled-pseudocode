/*
 * XREFs of GetDCOrgOnScreen @ 0x1C003873C
 * Callers:
 *     _ExcludeUpdateRgn @ 0x1C00382A4 (_ExcludeUpdateRgn.c)
 *     xxxScrollWindowEx @ 0x1C0040D0C (xxxScrollWindowEx.c)
 *     ?InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z @ 0x1C0041CAC (-InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z.c)
 * Callees:
 *     UserGetRedirectedWindowOrigin @ 0x1C0091A10 (UserGetRedirectedWindowOrigin.c)
 */

__int64 __fastcall GetDCOrgOnScreen(__int64 a1, _DWORD *a2)
{
  __int64 v5; // [rsp+40h] [rbp+18h] BYREF

  if ( !(unsigned int)GreGetDCOrg() )
    return 0LL;
  v5 = 0LL;
  if ( !(unsigned int)UserGetRedirectedWindowOrigin(a1, &v5) )
    return 0LL;
  *a2 += v5;
  a2[1] += HIDWORD(v5);
  return 1LL;
}
