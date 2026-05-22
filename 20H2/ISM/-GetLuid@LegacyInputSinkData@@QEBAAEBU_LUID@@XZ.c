/*
 * XREFs of ?GetLuid@LegacyInputSinkData@@QEBAAEBU_LUID@@XZ @ 0x180005500
 * Callers:
 *     ?GetInputSiteListFromDITCallbackStruct@InputSiteManager@@QEAA?AV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@AEBUtagDITCALLBACKSTRUCT@@@Z @ 0x180017200 (-GetInputSiteListFromDITCallbackStruct@InputSiteManager@@QEAA-AV-$vector@V-$ComPtr@VInputSite@@@.c)
 *     ?GetTargetFromInputSite@DWMInputRouter@@AEAA?AV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@AEBV?$ComPtr@VInputSite@@@34@W4InputType@@AEBUHitTestResult@@AEBU_LUID@@AEAV?$ComPtr@UIDCompInputTarget@@@34@@Z @ 0x180017EE0 (-GetTargetFromInputSite@DWMInputRouter@@AEAA-AV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@AEBV-$Com.c)
 *     ?GetInputSiteFromInputSinkData@InputSiteManager@@AEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@$$QEAVLegacyInputSinkData@@@Z @ 0x18001D02C (-GetInputSiteFromInputSinkData@InputSiteManager@@AEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@$$Q.c)
 *     ?IsSameByLuid@DWMInputTarget@@UEBA_NPEAX@Z @ 0x1800B6B30 (-IsSameByLuid@DWMInputTarget@@UEBA_NPEAX@Z.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x18003CC86 (_CxxThrowException_0.c)
 *     ?GetWeakInputSinkHandle@LegacyInputSinkData@@QEBAPEAXXZ @ 0x1800F0E1C (-GetWeakInputSinkHandle@LegacyInputSinkData@@QEBAPEAXXZ.c)
 */

const struct _LUID *__fastcall LegacyInputSinkData::GetLuid(LegacyInputSinkData *this)
{
  const struct _LUID *result; // rax
  void *WeakInputSinkHandle; // rax
  bool v4; // zf
  void **pExceptionObject; // [rsp+20h] [rbp-28h] BYREF
  __int128 v6; // [rsp+28h] [rbp-20h]
  __int64 v7; // [rsp+50h] [rbp+8h] BYREF

  if ( !*((_BYTE *)this + 36) )
  {
    v7 = 0LL;
    WeakInputSinkHandle = LegacyInputSinkData::GetWeakInputSinkHandle(this);
    NtQueryCompositionInputSinkLuid(WeakInputSinkHandle, &v7);
    v4 = *((_BYTE *)this + 36) == 0;
    *(_QWORD *)((char *)this + 28) = v7;
    if ( v4 )
      *((_BYTE *)this + 36) = 1;
  }
  result = (const struct _LUID *)((char *)this + 28);
  if ( !*((_BYTE *)this + 36) )
  {
    pExceptionObject = &std::bad_optional_access::`vftable';
    v6 = 0LL;
    throw (std::bad_optional_access *)&pExceptionObject;
  }
  return result;
}
