/*
 * XREFs of ?ReleaseAllResources@CConstraintModelResourceManager@@AEAAXXZ @ 0x1800F5464
 * Callers:
 *     ?Shutdown@CConstraintModelResourceManager@@AEAAXXZ @ 0x1800F5BBC (-Shutdown@CConstraintModelResourceManager@@AEAAXXZ.c)
 * Callees:
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x1800676D0 (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     ?GetAt@?$CAtlList@UResourceHandleInfo@@V?$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEAAAEAUResourceHandleInfo@@PEAU__POSITION@@@Z @ 0x1800B973C (-GetAt@-$CAtlList@UResourceHandleInfo@@V-$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEAAAE.c)
 *     ?GetNext@?$CAtlList@PEAVCVADServer@@V?$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAAEAPEAVCVADServer@@AEAPEAU__POSITION@@@Z @ 0x1800B9C10 (-GetNext@-$CAtlList@PEAVCVADServer@@V-$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAAEAPEAVCVA.c)
 *     ?RemoveAll@?$CAtlList@PEAUIPolicyRule@@V?$CElementTraits@PEAUIPolicyRule@@@ATL@@@ATL@@QEAAXXZ @ 0x1800BD0F8 (-RemoveAll@-$CAtlList@PEAUIPolicyRule@@V-$CElementTraits@PEAUIPolicyRule@@@ATL@@@ATL@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CConstraintModelResourceManager::ReleaseAllResources(CConstraintModelResourceManager *this)
{
  __int64 v2; // rcx
  _QWORD *v3; // rax
  _OWORD *v4; // rax
  __int64 *v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-4E8h] BYREF
  char v9; // [rsp+28h] [rbp-4E0h]
  __int64 v10; // [rsp+30h] [rbp-4D8h] BYREF
  _QWORD *v11; // [rsp+510h] [rbp+8h] BYREF

  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)&lpCriticalSection,
    (struct _RTL_CRITICAL_SECTION *)this + 3);
  v3 = (_QWORD *)*((_QWORD *)this + 20);
  v11 = v3;
  while ( v3 )
  {
    v4 = (_OWORD *)ATL::CAtlList<ResourceHandleInfo,ATL::CElementTraits<ResourceHandleInfo>>::GetAt(v2, (__int64)v3);
    v5 = &v10;
    v6 = 9LL;
    do
    {
      *(_OWORD *)v5 = *v4;
      *((_OWORD *)v5 + 1) = v4[1];
      *((_OWORD *)v5 + 2) = v4[2];
      *((_OWORD *)v5 + 3) = v4[3];
      *((_OWORD *)v5 + 4) = v4[4];
      *((_OWORD *)v5 + 5) = v4[5];
      *((_OWORD *)v5 + 6) = v4[6];
      v5 += 16;
      *((_OWORD *)v5 - 1) = v4[7];
      v4 += 8;
      --v6;
    }
    while ( v6 );
    *(_OWORD *)v5 = *v4;
    *((_OWORD *)v5 + 1) = v4[1];
    *((_OWORD *)v5 + 2) = v4[2];
    *((_OWORD *)v5 + 3) = v4[3];
    *((_OWORD *)v5 + 4) = v4[4];
    RmReleaseResources(v10);
    ATL::CAtlList<CVADServer *,ATL::CElementTraits<CVADServer *>>::GetNext(v7, &v11);
    v3 = v11;
  }
  ATL::CAtlList<IPolicyRule *,ATL::CElementTraits<IPolicyRule *>>::RemoveAll((__int64 *)this + 20);
  if ( v9 )
    LeaveCriticalSection(lpCriticalSection);
}
