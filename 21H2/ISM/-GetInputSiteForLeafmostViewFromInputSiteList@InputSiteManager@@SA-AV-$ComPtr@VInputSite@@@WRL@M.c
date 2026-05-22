/*
 * XREFs of ?GetInputSiteForLeafmostViewFromInputSiteList@InputSiteManager@@SA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@AEBV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x180044FF0
 * Callers:
 *     ?HitTest@DWMInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@PEAVInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@@Z @ 0x1800164D0 (-HitTest@DWMInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@PEAVInputContex.c)
 *     ?GetViewInstanceIdFromInputSiteList@InputSiteManager@@SAIAEBV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x1800F1548 (-GetViewInstanceIdFromInputSiteList@InputSiteManager@@SAIAEBV-$vector@V-$ComPtr@VInputSite@@@WRL.c)
 *     ?HitTest@DragNDropProcessorLegacy@@AEAAJUtagPOINT@@W4InputType@@PEA_KPEAU2@23@Z @ 0x180175308 (-HitTest@DragNDropProcessorLegacy@@AEAAJUtagPOINT@@W4InputType@@PEA_KPEAU2@23@Z.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x18003C946 (_CxxThrowException_0.c)
 *     ?GetViewInstanceId@LegacyInputSinkData@@QEBAAEBIXZ @ 0x180044E44 (-GetViewInstanceId@LegacyInputSinkData@@QEBAAEBIXZ.c)
 *     ??4?$ComPtr@UIRawInputClient@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180044F88 (--4-$ComPtr@UIRawInputClient@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall InputSiteManager::GetInputSiteForLeafmostViewFromInputSiteList(__int64 *a1, __int64 **a2)
{
  __int64 *v3; // rbx
  __int64 *v4; // rsi

  *a1 = 0LL;
  v3 = *a2;
  v4 = a2[1];
  while ( v3 != v4 )
  {
    if ( *(_BYTE *)(*v3 + 392) && *LegacyInputSinkData::GetViewInstanceId((LegacyInputSinkData *)(*v3 + 32)) )
    {
      Microsoft::WRL::ComPtr<IRawInputClient>::operator=(a1, v3);
      return a1;
    }
    ++v3;
  }
  return a1;
}
