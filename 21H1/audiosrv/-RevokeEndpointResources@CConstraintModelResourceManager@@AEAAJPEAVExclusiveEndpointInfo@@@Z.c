/*
 * XREFs of ?RevokeEndpointResources@CConstraintModelResourceManager@@AEAAJPEAVExclusiveEndpointInfo@@@Z @ 0x1800F5850
 * Callers:
 *     ?InternalEnforceEndpointExclusivity@CConstraintModelResourceManager@@AEAAJPEBG0KKW4AUDIO_DIRECTION@@HK@Z @ 0x1800F4140 (-InternalEnforceEndpointExclusivity@CConstraintModelResourceManager@@AEAAJPEBG0KKW4_ea_1800F4140.c)
 * Callees:
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x1800675D0 (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     __security_check_cookie @ 0x18006A480 (__security_check_cookie.c)
 *     ?GetAt@?$CAtlList@UResourceHandleInfo@@V?$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEAAAEAUResourceHandleInfo@@PEAU__POSITION@@@Z @ 0x1800B967C (-GetAt@-$CAtlList@UResourceHandleInfo@@V-$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEAAAE.c)
 *     ?GetNext@?$CAtlList@PEAVCVADServer@@V?$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAAEAPEAVCVADServer@@AEAPEAU__POSITION@@@Z @ 0x1800B9B50 (-GetNext@-$CAtlList@PEAVCVADServer@@V-$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAAEAPEAVCVA.c)
 *     WPP_SF_d @ 0x1800BBF6C (WPP_SF_d.c)
 *     ??$CompareTo@UResourceHandleInfo@@@ExclusiveEndpointInfo@@QEBA_NAEBUResourceHandleInfo@@@Z @ 0x1800F2D64 (--$CompareTo@UResourceHandleInfo@@@ExclusiveEndpointInfo@@QEBA_NAEBUResourceHandleInfo@@@Z.c)
 *     ?ProcessRevokedResources@CConstraintModelResourceManager@@AEAAXXZ @ 0x1800F496C (-ProcessRevokedResources@CConstraintModelResourceManager@@AEAAXXZ.c)
 *     ?SetAt@?$CAtlList@UResourceHandleInfo@@V?$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@AEBUResourceHandleInfo@@@Z @ 0x1800F5A50 (-SetAt@-$CAtlList@UResourceHandleInfo@@V-$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEAAXP.c)
 *     WPP_SF_SSd @ 0x1800F6088 (WPP_SF_SSd.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CConstraintModelResourceManager::RevokeEndpointResources(
        struct _RTL_CRITICAL_SECTION *this,
        struct ExclusiveEndpointInfo *a2)
{
  int v4; // ebp
  const wchar_t *v5; // r9
  __int64 v6; // rcx
  _QWORD *p_Type; // rbx
  _OWORD *v8; // rax
  __int64 v9; // r8
  unsigned __int64 v10; // r9
  _OWORD *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  _QWORD *v15; // [rsp+30h] [rbp-528h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-520h] BYREF
  char v17; // [rsp+40h] [rbp-518h]
  _WORD v18[146]; // [rsp+50h] [rbp-508h] BYREF
  int v19; // [rsp+174h] [rbp-3E4h]

  v4 = 0;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v5 = L"n/a";
    if ( *(_WORD *)a2 )
      LODWORD(v5) = (_DWORD)a2;
    WPP_SF_SSd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      (_DWORD)a2,
      (_DWORD)WPP_GLOBAL_Control,
      (_DWORD)v5,
      (__int64)a2 + 402,
      *((_DWORD *)a2 + 231));
  }
  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)&lpCriticalSection,
    this + 3);
  p_Type = &this[4].DebugInfo->Type;
  v15 = p_Type;
  while ( p_Type )
  {
    v8 = (_OWORD *)ATL::CAtlList<ResourceHandleInfo,ATL::CElementTraits<ResourceHandleInfo>>::GetAt(v6, (__int64)p_Type);
    v11 = v18;
    v12 = 9LL;
    do
    {
      *v11 = *v8;
      v11[1] = v8[1];
      v11[2] = v8[2];
      v11[3] = v8[3];
      v11[4] = v8[4];
      v11[5] = v8[5];
      v11[6] = v8[6];
      v11 += 8;
      *(v11 - 1) = v8[7];
      v8 += 8;
      --v12;
    }
    while ( v12 );
    *v11 = *v8;
    v11[1] = v8[1];
    v11[2] = v8[2];
    v11[3] = v8[3];
    v11[4] = v8[4];
    if ( ExclusiveEndpointInfo::CompareTo<ResourceHandleInfo>((__int64)a2, v18, v9, v10) )
    {
      ++v4;
      v19 = 1;
      ATL::CAtlList<ResourceHandleInfo,ATL::CElementTraits<ResourceHandleInfo>>::SetAt(v13, p_Type, v18);
    }
    ATL::CAtlList<CVADServer *,ATL::CElementTraits<CVADServer *>>::GetNext(v13, &v15);
    p_Type = v15;
  }
  if ( v17 )
    LeaveCriticalSection(lpCriticalSection);
  CConstraintModelResourceManager::ProcessRevokedResources(this);
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xDu, (__int64)&WPP_4eb83dabec2331805ae9d1ae37e3a182_Traceguids, v4);
  }
  return 0LL;
}
