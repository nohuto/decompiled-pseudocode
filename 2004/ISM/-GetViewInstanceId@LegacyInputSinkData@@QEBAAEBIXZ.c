/*
 * XREFs of ?GetViewInstanceId@LegacyInputSinkData@@QEBAAEBIXZ @ 0x180044004
 * Callers:
 *     ?PopulateInputSiteFromViewId@DWMFocusedInputTarget@@AEAAXXZ @ 0x1800282AC (-PopulateInputSiteFromViewId@DWMFocusedInputTarget@@AEAAXXZ.c)
 *     ?GetInputSiteForLeafmostViewFromInputSiteList@InputSiteManager@@SA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@AEBV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x1800441B0 (-GetInputSiteForLeafmostViewFromInputSiteList@InputSiteManager@@SA-AV-$ComPtr@VInputSite@@@WRL@M.c)
 *     ?GetViewInstanceIdFromInputSiteList@InputSiteManager@@SAIAEBV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x1800F1178 (-GetViewInstanceIdFromInputSiteList@InputSiteManager@@SAIAEBV-$vector@V-$ComPtr@VInputSite@@@WRL.c)
 *     ?HitTest@DragNDropProcessorLegacy@@AEAAJUtagPOINT@@W4InputType@@PEA_KPEAU2@23@Z @ 0x180174EE8 (-HitTest@DragNDropProcessorLegacy@@AEAAJUtagPOINT@@W4InputType@@PEA_KPEAU2@23@Z.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x18003CC06 (_CxxThrowException_0.c)
 *     ?GetWeakInputSinkHandle@LegacyInputSinkData@@QEBAPEAXXZ @ 0x1800F0EAC (-GetWeakInputSinkHandle@LegacyInputSinkData@@QEBAPEAXXZ.c)
 */

const unsigned int *__fastcall LegacyInputSinkData::GetViewInstanceId(LegacyInputSinkData *this)
{
  void *WeakInputSinkHandle; // rax
  const unsigned int *result; // rax
  void **pExceptionObject; // [rsp+20h] [rbp-28h] BYREF
  __int128 v5; // [rsp+28h] [rbp-20h]
  __int64 v6; // [rsp+50h] [rbp+8h] BYREF

  if ( !*((_BYTE *)this + 20) )
  {
    LODWORD(v6) = 0;
    WeakInputSinkHandle = LegacyInputSinkData::GetWeakInputSinkHandle(this);
    NtQueryCompositionInputSinkViewId(WeakInputSinkHandle, &v6);
    BYTE4(v6) = 1;
    *((_QWORD *)this + 2) = v6;
  }
  result = (const unsigned int *)((char *)this + 16);
  if ( !*((_BYTE *)this + 20) )
  {
    pExceptionObject = &std::bad_optional_access::`vftable';
    v5 = 0LL;
    throw (std::bad_optional_access *)&pExceptionObject;
  }
  return result;
}
