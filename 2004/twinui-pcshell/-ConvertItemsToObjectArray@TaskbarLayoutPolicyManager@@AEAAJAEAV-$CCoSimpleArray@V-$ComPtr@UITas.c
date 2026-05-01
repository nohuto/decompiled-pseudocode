/*
 * XREFs of ?ConvertItemsToObjectArray@TaskbarLayoutPolicyManager@@AEAAJAEAV?$CCoSimpleArray@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@@@PEAPEAUIObjectArray@@@Z @ 0x18019D138
 * Callers:
 *     ?GetTaskbarLayout@TaskbarLayoutPolicyManager@@UEAAJW4TaskbarLayoutType@@PEAPEAUIObjectArray@@@Z @ 0x18019E4F0 (-GetTaskbarLayout@TaskbarLayoutPolicyManager@@UEAAJW4TaskbarLayoutType@@PEAPEAUIObjectArray@@@Z.c)
 * Callees:
 *     ?CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z @ 0x18003E1A0 (-CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180076E9C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TaskbarLayoutPolicyManager::ConvertItemsToObjectArray(__int64 a1, __int64 a2, _QWORD *a3)
{
  const struct _GUID *v5; // rdx
  __int64 v6; // rcx
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 *v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // rbx
  int v13; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  void *v16; // [rsp+40h] [rbp+8h] BYREF
  __int64 v17; // [rsp+50h] [rbp+18h] BYREF

  *a3 = 0LL;
  v16 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
  v7 = CEnumerableObjectCollection::CreateInstance(v6, v5, &v16);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v10 = *(__int64 **)a2;
    v11 = *(_QWORD *)a2 + 8LL * *(_QWORD *)(a2 + 8);
    while ( v10 != (__int64 *)v11 )
    {
      v17 = *v10;
      v12 = v17;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v17);
      v13 = (*(__int64 (__fastcall **)(void *, __int64))(*(_QWORD *)v16 + 40LL))(v16, v12);
      v8 = v13;
      if ( v13 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2F0,
          (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
          (const char *)(unsigned int)v13);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
        goto LABEL_10;
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
      ++v10;
    }
    v7 = (**(__int64 (__fastcall ***)(void *, GUID *, _QWORD *))v16)(
           v16,
           &GUID_92ca9dcd_5622_4bba_a805_5e9f541bd8c9,
           a3);
    v8 = v7;
    if ( v7 >= 0 )
      goto LABEL_10;
    v9 = 754LL;
  }
  else
  {
    v9 = 749LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp",
    (const char *)(unsigned int)v7);
LABEL_10:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
  return v8;
}
