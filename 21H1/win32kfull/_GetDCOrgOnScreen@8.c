/*
 * XREFs of _GetDCOrgOnScreen@8 @ 0xC3520
 * Callers:
 *     _xxxScrollWindowEx@32 @ 0x2B61E (_xxxScrollWindowEx@32.c)
 *     ?InternalScrollDC@@YGHPAUtagWND@@PAUHDC__@@HHPAUtagRECT@@2PAUHRGN__@@32H@Z @ 0x35B68 (-InternalScrollDC@@YGHPAUtagWND@@PAUHDC__@@HHPAUtagRECT@@2PAUHRGN__@@32H@Z.c)
 *     __ExcludeUpdateRgn@8 @ 0x1964AE (__ExcludeUpdateRgn@8.c)
 * Callees:
 *     _UserGetRedirectedWindowOrigin@8 @ 0x38754 (_UserGetRedirectedWindowOrigin@8.c)
 */

int __fastcall GetDCOrgOnScreen(int a1, _DWORD *a2)
{
  int v5; // [esp+8h] [ebp-8h] BYREF
  int v6; // [esp+Ch] [ebp-4h]

  if ( !GreGetDCOrg(a1, a2) )
    return 0;
  v5 = 0;
  v6 = 0;
  if ( !UserGetRedirectedWindowOrigin(a1, &v5) )
    return 0;
  *a2 += v5;
  a2[1] += v6;
  return 1;
}
