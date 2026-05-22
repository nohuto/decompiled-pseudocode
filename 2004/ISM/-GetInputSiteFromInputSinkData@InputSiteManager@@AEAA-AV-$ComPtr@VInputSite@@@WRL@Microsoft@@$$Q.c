/*
 * XREFs of ?GetInputSiteFromInputSinkData@InputSiteManager@@AEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@$$QEAVLegacyInputSinkData@@@Z @ 0x18001CFFC
 * Callers:
 *     ?GetInputSiteFromInputSinkHandle@InputSiteManager@@QEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@PEAX@Z @ 0x1800F1114 (-GetInputSiteFromInputSinkHandle@InputSiteManager@@QEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@P.c)
 * Callees:
 *     ?CreateInputSiteFromId@InputSiteManager@@AEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSiteIdNamespace@@_K@Z @ 0x180004DD4 (-CreateInputSiteFromId@InputSiteManager@@AEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSite.c)
 *     ?GetLuid@LegacyInputSinkData@@QEBAAEBU_LUID@@XZ @ 0x180005510 (-GetLuid@LegacyInputSinkData@@QEBAAEBU_LUID@@XZ.c)
 *     ??4?$ComPtr@VInputSite@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x180011C50 (--4-$ComPtr@VInputSite@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ??0LegacyInputSinkData@@QEAA@$$QEAV0@@Z @ 0x180014E58 (--0LegacyInputSinkData@@QEAA@$$QEAV0@@Z.c)
 *     ?GetCompositionInputQueue@LegacyInputSinkData@@QEBAAEBUCOMPOSITION_INPUT_QUEUE@@W4CompositionInputType@@@Z @ 0x180018060 (-GetCompositionInputQueue@LegacyInputSinkData@@QEBAAEBUCOMPOSITION_INPUT_QUEUE@@W4CompositionInp.c)
 *     __security_check_cookie @ 0x18003C4E0 (__security_check_cookie.c)
 *     ??1?$variant@PEAXV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@@wil@@@std@@QEAA@XZ @ 0x180043C94 (--1-$variant@PEAXV-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AJPEAX@Z$1-N.c)
 *     ?CreateOwningRefOfInputSink@LegacyInputSinkData@@QEAAXXZ @ 0x180043F18 (-CreateOwningRefOfInputSink@LegacyInputSinkData@@QEAAXXZ.c)
 *     ?GetInputSiteFromId@InputSiteManager@@QEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSiteIdNamespace@@_KK@Z @ 0x180044280 (-GetInputSiteFromId@InputSiteManager@@QEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSiteIdN.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall InputSiteManager::GetInputSiteFromInputSinkData(__int64 a1, __int64 *a2, LegacyInputSinkData *a3)
{
  __int64 v6; // rax
  int v7; // ecx
  unsigned int *v8; // rbx
  char *CompositionInputQueue; // rcx
  char *InputSiteFromId; // rax
  __int64 v11; // rcx
  char *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v16; // [rsp+30h] [rbp-30h] BYREF
  int v17; // [rsp+38h] [rbp-28h]
  __int64 *v18; // [rsp+40h] [rbp-20h]
  _QWORD v19[2]; // [rsp+48h] [rbp-18h] BYREF
  __int64 v20; // [rsp+58h] [rbp-8h] BYREF

  v18 = a2;
  v17 = 0;
  v16 = (__int64)*LegacyInputSinkData::GetLuid(a3);
  InputSiteManager::GetInputSiteFromId(a1, (_DWORD)a2, 0, v16, 0);
  v17 = 1;
  if ( !*a2 )
  {
    v6 = 0LL;
    v7 = 1;
    do
      *((_DWORD *)v19 + v6++) = v7++;
    while ( v6 < 4 );
    v8 = (unsigned int *)v19;
    while ( 1 )
    {
      CompositionInputQueue = LegacyInputSinkData::GetCompositionInputQueue(a3, *v8);
      if ( (unsigned int)(*(_DWORD *)CompositionInputQueue - 2) <= 1 )
      {
        InputSiteFromId = (char *)InputSiteManager::GetInputSiteFromId(
                                    a1,
                                    (unsigned int)&v16,
                                    1,
                                    *((_DWORD *)CompositionInputQueue + 2),
                                    *((_DWORD *)CompositionInputQueue + 4));
        Microsoft::WRL::ComPtr<InputSite>::operator=(a2, InputSiteFromId);
        v11 = v16;
        if ( v16 )
        {
          v16 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
        }
        if ( *a2 )
          break;
      }
      if ( ++v8 == (unsigned int *)&v20 )
      {
        if ( !*a2 )
        {
          v16 = (__int64)*LegacyInputSinkData::GetLuid(a3);
          v12 = (char *)InputSiteManager::CreateInputSiteFromId(a1, v19, 0, v16);
          Microsoft::WRL::ComPtr<InputSite>::operator=(a2, v12);
          v13 = v19[0];
          if ( v19[0] )
          {
            v19[0] = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
          }
        }
        break;
      }
    }
  }
  if ( !*(_BYTE *)(*a2 + 392) )
  {
    LegacyInputSinkData::CreateOwningRefOfInputSink(a3);
    v14 = *a2;
    if ( *(_BYTE *)(*a2 + 392) )
    {
      std::variant<void *,wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>>>::~variant<void *,wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>>>(v14 + 32);
      *(_BYTE *)(v14 + 392) = 0;
    }
    LegacyInputSinkData::LegacyInputSinkData(v14 + 32, (__int64)a3);
    *(_BYTE *)(v14 + 392) = 1;
  }
  return a2;
}
