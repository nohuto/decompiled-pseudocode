/*
 * XREFs of ?_IsMouseOnSearch@SearchAppExperienceManager@@AEAA_NXZ @ 0x180099414
 * Callers:
 *     _lambda_7d62eec1b3de4cef9f9423f9a8950082_::_lambda_invoker_cdecl_ @ 0x180098E30 (_lambda_7d62eec1b3de4cef9f9423f9a8950082_--_lambda_invoker_cdecl_.c)
 *     ?_TrackMouseMovement@SearchAppExperienceManager@@AEAAXXZ @ 0x180099550 (-_TrackMouseMovement@SearchAppExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_SearchBoxEverywhere_Top_SmallIcon@@@details@wil@@QEAA_NXZ @ 0x180097694 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_SearchBoxEverywhere_Top.c)
 */

bool __fastcall SearchAppExperienceManager::_IsMouseOnSearch(SearchAppExperienceManager *this)
{
  bool v2; // di
  bool v3; // zf
  LONG v4; // eax
  struct tagPOINT Point; // [rsp+20h] [rbp-28h] BYREF
  struct tagRECT Rect; // [rsp+28h] [rbp-20h] BYREF

  if ( !*((_QWORD *)this + 70) )
    return *((_BYTE *)this + 568);
  GetCursorPos(&Point);
  GetWindowRect(*((HWND *)this + 70), &Rect);
  if ( !PtInRect(&Rect, Point) )
  {
    v2 = 0;
    goto LABEL_12;
  }
  v2 = 1;
  v3 = wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_SearchBoxEverywhere_Top_SmallIcon>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_Servicing_SearchBoxEverywhere_Top_SmallIcon>::GetImpl'::`2'::impl) == 0;
  v4 = *((_DWORD *)this + 144);
  if ( v3 )
  {
    if ( Point.y >= v4 )
      v2 = PtInRect((const RECT *)((char *)this + 572), Point);
    goto LABEL_12;
  }
  if ( *((_DWORD *)this + 148) == v4 )
  {
    if ( Point.y < *((_DWORD *)this + 146) )
      goto LABEL_8;
  }
  else if ( Point.y >= v4 )
  {
LABEL_8:
    v2 = PtInRect((const RECT *)((char *)this + 572), Point);
  }
LABEL_12:
  *((_BYTE *)this + 568) = v2;
  return v2;
}
