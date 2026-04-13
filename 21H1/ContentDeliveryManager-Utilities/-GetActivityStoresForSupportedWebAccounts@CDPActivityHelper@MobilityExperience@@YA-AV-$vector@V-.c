/*
 * XREFs of ?GetActivityStoresForSupportedWebAccounts@CDPActivityHelper@MobilityExperience@@YA?AV?$vector@V?$com_ptr_t@VICDPActivityStore@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VICDPActivityStore@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@PEAU?$IVectorView@PEAVWebAccount@Credentials@Security@Windows@@@Collections@Foundation@Windows@@@Z @ 0x180049194
 * Callers:
 *     ??R_lambda_ff7cfae8cddf8b4979caf74bf72ddb07_@@QEBAXXZ @ 0x18004A1BC (--R_lambda_ff7cfae8cddf8b4979caf74bf72ddb07_@@QEBAXXZ.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005F48 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Xlen@?$vector@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@V?$allocator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@2@@std@@IEBAXXZ @ 0x180035184 (-_Xlen@-$vector@V-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@V-$all.c)
 *     ?TryGetSupportedCDPAccountFromWebAccount@CDPActivityHelper@MobilityExperience@@YA?AV?$com_ptr_t@VICDPAccount@@Uerr_exception_policy@wil@@@wil@@PEAUIWebAccount@Credentials@Security@Windows@@@Z @ 0x180048E48 (-TryGetSupportedCDPAccountFromWebAccount@CDPActivityHelper@MobilityExperience@@YA-AV-$com_ptr_t@.c)
 *     ?_Reallocate@?$vector@V?$com_ptr_t@VICDPActivityStore@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VICDPActivityStore@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@IEAAX_K@Z @ 0x18004CF98 (-_Reallocate@-$vector@V-$com_ptr_t@VICDPActivityStore@@Uerr_exception_policy@wil@@@wil@@V-$alloc.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6 #try_helpers=1
_QWORD *__fastcall MobilityExperience::CDPActivityHelper::GetActivityStoresForSupportedWebAccounts(
        _QWORD *a1,
        __int64 a2)
{
  int v4; // eax
  int v5; // r15d
  unsigned int v6; // r14d
  __int64 i; // rdx
  __int64 v8; // rbx
  __int64 (__fastcall *v9)(__int64, __int64, __int64 *); // r15
  _QWORD *v10; // rcx
  int v11; // eax
  wil::details::in1diag3 *v12; // rcx
  __int64 (__fastcall ***v13)(_QWORD, GUID *, _QWORD **); // rbx
  __int64 v14; // rcx
  int v15; // r14d
  unsigned int v16; // eax
  bool v17; // cl
  wil::details::in1diag3 *v18; // r10
  __int64 v19; // rcx
  unsigned __int64 v20; // rdx
  __int64 v21; // r15
  __int64 v22; // r9
  __int64 v23; // rdx
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // r9
  unsigned __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdx
  unsigned __int64 v29; // rdx
  unsigned __int64 v30; // r9
  unsigned __int64 v31; // r8
  __int64 v32; // rcx
  __int64 v34; // [rsp+28h] [rbp-80h] BYREF
  __int64 v35; // [rsp+30h] [rbp-78h]
  unsigned int v36; // [rsp+38h] [rbp-70h]
  __int64 v37; // [rsp+40h] [rbp-68h] BYREF
  __int64 v38[3]; // [rsp+48h] [rbp-60h] BYREF
  int v39; // [rsp+60h] [rbp-48h]
  __int64 v40; // [rsp+68h] [rbp-40h]
  __int64 v41; // [rsp+70h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]
  int v43; // [rsp+C0h] [rbp+18h]
  int v44; // [rsp+C8h] [rbp+20h] BYREF

  v41 = -2LL;
  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  v35 = a2;
  v36 = 0;
  v37 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)a2 + 56LL))(a2, &v44);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x4BA,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\winrt.h",
      (const char *)(unsigned int)v4);
LABEL_52:
    wil::details::in1diag3::Throw_Hr(
      v12,
      (void *)0x1577,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
      (const char *)(unsigned int)v11);
LABEL_53:
    wil::details::in1diag3::Throw_Hr(
      v18,
      (void *)0x45,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\CDPActivityHelper.h",
      (const char *)v16);
LABEL_54:
    std::vector<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>::_Xlen();
  }
  v38[2] = a2;
  v5 = v44;
  v43 = v44;
  v39 = v44;
  v40 = 0LL;
  v6 = 3;
  for ( i = v36; (_DWORD)i != v5; i = ++v36 )
  {
    v8 = v35;
    v9 = *(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v35 + 48LL);
    v10 = (_QWORD *)v37;
    if ( v37 )
    {
      v37 = 0LL;
      (*(void (__fastcall **)(_QWORD *, _QWORD))(*v10 + 16LL))(v10, *v10);
      i = v36;
    }
    v11 = v9(v8, i, &v37);
    v12 = retaddr;
    if ( v11 < 0 )
      goto LABEL_52;
    v13 = (__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD **))v37;
    v38[1] = v37;
    if ( v37 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 8LL))(v37);
    MobilityExperience::CDPActivityHelper::TryGetSupportedCDPAccountFromWebAccount(v38, v13);
    v14 = v38[0];
    if ( v38[0] )
    {
      v15 = v6 | 4;
      v34 = 0LL;
      v16 = CDPGetActivityStoreForAccount(v38[0], &v34);
      v17 = (int)(v16 + 0x80000000) >= 0 && v16 != -2147221243;
      v18 = retaddr;
      if ( v17 )
        goto LABEL_53;
      v19 = v34;
      if ( v34 )
      {
        v20 = a1[1];
        if ( (unsigned __int64)&v34 >= v20 || *a1 > (unsigned __int64)&v34 )
        {
          v27 = a1[2];
          if ( v20 == v27 && !((__int64)(v27 - v20) >> 3) )
          {
            v28 = (__int64)(v20 - *a1) >> 3;
            if ( v28 == 0x1FFFFFFFFFFFFFFFLL )
              std::vector<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>::_Xlen();
            v29 = v28 + 1;
            v30 = (v27 - *a1) >> 3;
            v31 = 0LL;
            if ( 0x1FFFFFFFFFFFFFFFLL - (v30 >> 1) >= v30 )
              v31 = v30 + (v30 >> 1);
            if ( v31 >= v29 )
              v29 = v31;
            std::vector<wil::com_ptr_t<ICDPActivityStore,wil::err_exception_policy>>::_Reallocate(a1, v29);
            v19 = v34;
          }
          *(_QWORD *)a1[1] = v19;
          v19 = v34;
          if ( v34 )
            goto LABEL_37;
        }
        else
        {
          v21 = ((__int64)&v34 - *a1) >> 3;
          v22 = a1[2];
          if ( v20 == v22 && !((__int64)(v22 - v20) >> 3) )
          {
            v23 = (__int64)(v20 - *a1) >> 3;
            if ( v23 == 0x1FFFFFFFFFFFFFFFLL )
              goto LABEL_54;
            v24 = v23 + 1;
            v25 = (v22 - *a1) >> 3;
            v26 = 0LL;
            if ( 0x1FFFFFFFFFFFFFFFLL - (v25 >> 1) >= v25 )
              v26 = v25 + (v25 >> 1);
            if ( v26 >= v24 )
              v24 = v26;
            std::vector<wil::com_ptr_t<ICDPActivityStore,wil::err_exception_policy>>::_Reallocate(a1, v24);
          }
          v19 = *(_QWORD *)(*a1 + 8 * v21);
          *(_QWORD *)a1[1] = v19;
          if ( v19 )
LABEL_37:
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 8LL))(v19);
          v19 = v34;
        }
        a1[1] += 8LL;
      }
      v6 = v15 & 0xFFFFFFFB;
      if ( v19 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
      v14 = v38[0];
    }
    v5 = v43;
    if ( v14 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    if ( v13 )
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD **)))(*v13)[2])(v13);
  }
  v32 = v37;
  if ( v37 )
  {
    v37 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
  }
  return a1;
}
