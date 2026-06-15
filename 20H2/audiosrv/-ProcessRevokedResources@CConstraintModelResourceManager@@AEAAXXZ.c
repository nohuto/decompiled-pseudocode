/*
 * XREFs of ?ProcessRevokedResources@CConstraintModelResourceManager@@AEAAXXZ @ 0x1800F3D9C
 * Callers:
 *     ?AcquireResourceHandle@CConstraintModelResourceManager@@AEAAJPEAU_ResourceInfo@@KKHPEA_K@Z @ 0x1800F25D0 (-AcquireResourceHandle@CConstraintModelResourceManager@@AEAAJPEAU_ResourceInfo@@KKHPEA_K@Z.c)
 *     ?RevokeEndpointResources@CConstraintModelResourceManager@@AEAAJPEAVExclusiveEndpointInfo@@@Z @ 0x1800F4C80 (-RevokeEndpointResources@CConstraintModelResourceManager@@AEAAJPEAVExclusiveEndpointInfo@@@Z.c)
 * Callees:
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x180066B10 (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     __security_check_cookie @ 0x180069C20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 *     ?GetAt@?$CAtlList@UResourceHandleInfo@@V?$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEAAAEAUResourceHandleInfo@@PEAU__POSITION@@@Z @ 0x1800B8ACC (-GetAt@-$CAtlList@UResourceHandleInfo@@V-$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEAAAE.c)
 *     ?GetNext@?$CAtlList@PEAVCVADServer@@V?$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAAEAPEAVCVADServer@@AEAPEAU__POSITION@@@Z @ 0x1800B8FA0 (-GetNext@-$CAtlList@PEAVCVADServer@@V-$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAAEAPEAVCVA.c)
 *     ?AddTail@?$CAtlList@_KV?$CElementTraits@_K@ATL@@@ATL@@QEAAPEAU__POSITION@@_K@Z @ 0x1800F2894 (-AddTail@-$CAtlList@_KV-$CElementTraits@_K@ATL@@@ATL@@QEAAPEAU__POSITION@@_K@Z.c)
 *     ?RemoveAll@?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@QEAAXXZ @ 0x1800F4BAC (-RemoveAll@-$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@QEAAXXZ.c)
 *     ?SetAt@?$CAtlList@UResourceHandleInfo@@V?$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@AEBUResourceHandleInfo@@@Z @ 0x1800F4E80 (-SetAt@-$CAtlList@UResourceHandleInfo@@V-$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEAAXP.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CConstraintModelResourceManager::ProcessRevokedResources(struct _RTL_CRITICAL_SECTION *this)
{
  __int64 v2; // rcx
  _QWORD *p_Type; // rbx
  _OWORD *v4; // rax
  __int64 *v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // rcx
  char v10; // di
  _QWORD *v11; // rbx
  __int64 v12; // rdx
  _QWORD *v13; // [rsp+20h] [rbp-E0h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-D8h] BYREF
  char v15; // [rsp+30h] [rbp-D0h]
  __int128 v16; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v17; // [rsp+48h] [rbp-B8h]
  __int128 v18; // [rsp+50h] [rbp-B0h]
  int v19; // [rsp+60h] [rbp-A0h]
  __int64 v20[36]; // [rsp+70h] [rbp-90h] BYREF
  int v21; // [rsp+194h] [rbp+94h]
  __int128 v22; // [rsp+540h] [rbp+440h] BYREF

  do
  {
    v16 = 0LL;
    v17 = 0LL;
    v18 = 0LL;
    v19 = 10;
    ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
      (__int64)&lpCriticalSection,
      this + 3);
    p_Type = &this[4].DebugInfo->Type;
    v13 = p_Type;
    while ( p_Type )
    {
      v4 = (_OWORD *)ATL::CAtlList<ResourceHandleInfo,ATL::CElementTraits<ResourceHandleInfo>>::GetAt(
                       v2,
                       (__int64)p_Type);
      v5 = v20;
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
      v22 = 0LL;
      if ( v21 == 1 )
      {
        ATL::CAtlList<unsigned __int64,ATL::CElementTraits<unsigned __int64>>::AddTail((__int64 *)&v16, v20[0]);
      }
      else
      {
        v8 = v20[0];
        while ( (int)RmGetNotification(v8, &v22) >= 0 )
        {
          if ( (_DWORD)v22 == 1 )
          {
            ATL::CAtlList<unsigned __int64,ATL::CElementTraits<unsigned __int64>>::AddTail((__int64 *)&v16, v8);
            v21 = 1;
            ATL::CAtlList<ResourceHandleInfo,ATL::CElementTraits<ResourceHandleInfo>>::SetAt(v9, p_Type, v20);
          }
        }
      }
      ATL::CAtlList<CVADServer *,ATL::CElementTraits<CVADServer *>>::GetNext(v7, &v13);
      p_Type = v13;
    }
    if ( v15 )
    {
      LeaveCriticalSection(lpCriticalSection);
      v15 = 0;
    }
    if ( v17 )
    {
      v10 = 0;
      v11 = (_QWORD *)v16;
      while ( v11 )
      {
        v12 = v11[2];
        v11 = (_QWORD *)*v11;
        (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)&this[5].LockCount + 24LL))(
          *(_QWORD *)&this[5].LockCount,
          v12);
      }
    }
    else
    {
      v10 = 1;
    }
    ATL::CAtlList<_ResourceInfo,ResourceInfoTraits>::RemoveAll(&v16);
  }
  while ( !v10 );
}
