/*
 * XREFs of ?GetEndpointStatus@CConstraintModelResourceManager@@AEAAXPEBVExclusiveEndpointInfo@@HPEAHPEAK@Z @ 0x1800F3EF4
 * Callers:
 *     ?InternalEnforceEndpointExclusivity@CConstraintModelResourceManager@@AEAAJPEBG0KKW4AUDIO_DIRECTION@@HK@Z @ 0x1800F4200 (-InternalEnforceEndpointExclusivity@CConstraintModelResourceManager@@AEAAJPEBG0KKW4_ea_1800F4200.c)
 * Callees:
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x1800676D0 (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     __security_check_cookie @ 0x18006A580 (__security_check_cookie.c)
 *     ?GetAt@?$CAtlList@UResourceHandleInfo@@V?$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEAAAEAUResourceHandleInfo@@PEAU__POSITION@@@Z @ 0x1800B973C (-GetAt@-$CAtlList@UResourceHandleInfo@@V-$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEAAAE.c)
 *     ?GetNext@?$CAtlList@PEAVCVADServer@@V?$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAAEAPEAVCVADServer@@AEAPEAU__POSITION@@@Z @ 0x1800B9C10 (-GetNext@-$CAtlList@PEAVCVADServer@@V-$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAAEAPEAVCVA.c)
 *     ??$CompareTo@UResourceHandleInfo@@@ExclusiveEndpointInfo@@QEBA_NAEBUResourceHandleInfo@@@Z @ 0x1800F2E24 (--$CompareTo@UResourceHandleInfo@@@ExclusiveEndpointInfo@@QEBA_NAEBUResourceHandleInfo@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CConstraintModelResourceManager::GetEndpointStatus(
        struct _RTL_CRITICAL_SECTION *this,
        const struct ExclusiveEndpointInfo *a2,
        int a3,
        int *a4,
        unsigned int *a5)
{
  __int64 v9; // rcx
  unsigned int v10; // edi
  _QWORD *p_Type; // rax
  _OWORD *v12; // rax
  __int64 v13; // r8
  unsigned __int64 v14; // r9
  __int16 *v15; // rcx
  __int64 v16; // rdx
  _QWORD *i; // [rsp+20h] [rbp-528h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-520h] BYREF
  char v19; // [rsp+30h] [rbp-518h]
  __int16 v20; // [rsp+40h] [rbp-508h] BYREF
  int v21; // [rsp+48h] [rbp-500h]
  unsigned int v22; // [rsp+508h] [rbp-40h]

  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)&lpCriticalSection,
    this + 3);
  v10 = -1;
  p_Type = &this[4].DebugInfo->Type;
  for ( i = p_Type; i; p_Type = i )
  {
    v12 = (_OWORD *)ATL::CAtlList<ResourceHandleInfo,ATL::CElementTraits<ResourceHandleInfo>>::GetAt(
                      v9,
                      (__int64)p_Type);
    v15 = &v20;
    v16 = 9LL;
    do
    {
      *(_OWORD *)v15 = *v12;
      *((_OWORD *)v15 + 1) = v12[1];
      *((_OWORD *)v15 + 2) = v12[2];
      *((_OWORD *)v15 + 3) = v12[3];
      *((_OWORD *)v15 + 4) = v12[4];
      *((_OWORD *)v15 + 5) = v12[5];
      *((_OWORD *)v15 + 6) = v12[6];
      v15 += 64;
      *((_OWORD *)v15 - 1) = v12[7];
      v12 += 8;
      --v16;
    }
    while ( v16 );
    *(_OWORD *)v15 = *v12;
    *((_OWORD *)v15 + 1) = v12[1];
    *((_OWORD *)v15 + 2) = v12[2];
    *((_OWORD *)v15 + 3) = v12[3];
    *((_OWORD *)v15 + 4) = v12[4];
    if ( (!a3 || v21 != 1)
      && ExclusiveEndpointInfo::CompareTo<ResourceHandleInfo>((__int64)a2, &v20, v13, v14)
      && v22 < v10 )
    {
      v10 = v22;
    }
    ATL::CAtlList<CVADServer *,ATL::CElementTraits<CVADServer *>>::GetNext((__int64)v15, &i);
  }
  *a4 = v10 != -1;
  *a5 = v10;
  if ( v19 )
    LeaveCriticalSection(lpCriticalSection);
}
