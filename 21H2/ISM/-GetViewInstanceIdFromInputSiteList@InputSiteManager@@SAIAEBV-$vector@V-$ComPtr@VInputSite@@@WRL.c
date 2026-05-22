/*
 * XREFs of ?GetViewInstanceIdFromInputSiteList@InputSiteManager@@SAIAEBV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x1800F1548
 * Callers:
 *     ?HitTest@DragNDropProcessor@@AEAAXUtagPOINT@@W4InputType@@U_GUID@@PEAUHitTestResult@@PEAU2@PEA_KPEAPEAXPEAPEAVBamoDragSourceClientProxy@@PEAPEAVBamoDragManagerClientProxy@@PEAPEAVInputSite@@9@Z @ 0x1800F9AF0 (-HitTest@DragNDropProcessor@@AEAAXUtagPOINT@@W4InputType@@U_GUID@@PEAUHitTestResult@@PEAU2@PEA_K.c)
 *     ?HitTest@DWMInputRouter@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUIInputTarget@@PEAPEAU4@@Z @ 0x180138770 (-HitTest@DWMInputRouter@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUIInputTarget@@PEAPEAU4@@Z.c)
 *     ?RequestViewHitTestHelper@DWMInputRouter@@IEAAXUViewHitTestInfo@@PEAI@Z @ 0x180139764 (-RequestViewHitTestHelper@DWMInputRouter@@IEAAXUViewHitTestInfo@@PEAI@Z.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x18003C946 (_CxxThrowException_0.c)
 *     ?GetViewInstanceId@LegacyInputSinkData@@QEBAAEBIXZ @ 0x180044E44 (-GetViewInstanceId@LegacyInputSinkData@@QEBAAEBIXZ.c)
 *     ?GetInputSiteForLeafmostViewFromInputSiteList@InputSiteManager@@SA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@AEBV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x180044FF0 (-GetInputSiteForLeafmostViewFromInputSiteList@InputSiteManager@@SA-AV-$ComPtr@VInputSite@@@WRL@M.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall InputSiteManager::GetViewInstanceIdFromInputSiteList(__int64 **a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rcx
  void **pExceptionObject; // [rsp+20h] [rbp-28h] BYREF
  __int128 v5; // [rsp+28h] [rbp-20h]
  __int64 v6; // [rsp+58h] [rbp+10h] BYREF

  v1 = 0;
  InputSiteManager::GetInputSiteForLeafmostViewFromInputSiteList(&v6, a1);
  v2 = v6;
  if ( v6 )
  {
    if ( !*(_BYTE *)(v6 + 392) )
    {
      v5 = 0LL;
      pExceptionObject = &std::bad_optional_access::`vftable';
      throw (std::bad_optional_access *)&pExceptionObject;
    }
    v1 = *LegacyInputSinkData::GetViewInstanceId((LegacyInputSinkData *)(v6 + 32));
    v2 = v6;
  }
  if ( v2 )
  {
    v6 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return v1;
}
