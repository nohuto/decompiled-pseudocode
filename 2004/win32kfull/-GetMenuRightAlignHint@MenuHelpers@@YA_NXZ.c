/*
 * XREFs of ?GetMenuRightAlignHint@MenuHelpers@@YA_NXZ @ 0x1C0244570
 * Callers:
 *     ?xxxMNPositionHierarchy@@YAIAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1C0236D04 (-xxxMNPositionHierarchy@@YAIAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUt.c)
 *     xxxMNOpenHierarchy @ 0x1C023A484 (xxxMNOpenHierarchy.c)
 *     xxxTrackPopupMenuEx @ 0x1C024BC18 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     GetUserHandedness @ 0x1C01EEF40 (GetUserHandedness.c)
 */

bool __fastcall MenuHelpers::GetMenuRightAlignHint(MenuHelpers *this)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9

  if ( (unsigned int)CInputGlobals::GetLastInputType(gpInputGlobals) == 13
    || (unsigned int)CInputGlobals::GetLastInputType(gpInputGlobals) == 11 )
  {
    return (unsigned int)GetUserHandedness(v2, v1, v3, v4) == 1;
  }
  else
  {
    return (unsigned int)RIMIsDefaultUILanguageRTL(v2, v1, v3, v4) != 0;
  }
}
