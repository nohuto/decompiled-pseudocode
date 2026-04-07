/*
 * XREFs of ?_IsPartOfGroup@CGroupingStoryboard@@IEAA_NPEAVCWindowData@@@Z @ 0x1800B1B60
 * Callers:
 *     ?_Create3DComponent@CGroupingStoryboard@@IEAAJPEAVCWindowData@@@Z @ 0x1800B0ABC (-_Create3DComponent@CGroupingStoryboard@@IEAAJPEAVCWindowData@@@Z.c)
 *     ?_HandleThumbnailTag@CAppArrangementImmediate@@AEAAJPEAVCWindowData@@_N@Z @ 0x1800B17E4 (-_HandleThumbnailTag@CAppArrangementImmediate@@AEAAJPEAVCWindowData@@_N@Z.c)
 *     ?_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800B2620 (-_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboar.c)
 *     ?_WindowEnumCallback@CAppArrangementImmediate@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800B3100 (-_WindowEnumCallback@CAppArrangementImmediate@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStorybo.c)
 * Callees:
 *     __security_check_cookie @ 0x180053520 (__security_check_cookie.c)
 *     ?_GetUnionRect@CGroupingStoryboard@@IEAAJW4DWMTRANSITION_TARGET@@PEAUtagRECT@@@Z @ 0x1800B16FC (-_GetUnionRect@CGroupingStoryboard@@IEAAJW4DWMTRANSITION_TARGET@@PEAUtagRECT@@@Z.c)
 */

char __fastcall CGroupingStoryboard::_IsPartOfGroup(CGroupingStoryboard *this, struct CWindowData *a2)
{
  __int64 v3; // rdx
  char v4; // bl
  RECT rc2; // [rsp+20h] [rbp-38h] BYREF
  RECT rc1; // [rsp+30h] [rbp-28h] BYREF

  v3 = *((unsigned int *)a2 + 154);
  rc2 = 0LL;
  rc1 = *(RECT *)((char *)a2 + ((v3 & 0x1000000) != 0 ? 0x24C : 0) + 48);
  v4 = 0;
  if ( (int)CGroupingStoryboard::_GetUnionRect((__int64)this, v3, &rc2) >= 0 )
    return !EqualRect(&rc1, &rc2);
  return v4;
}
