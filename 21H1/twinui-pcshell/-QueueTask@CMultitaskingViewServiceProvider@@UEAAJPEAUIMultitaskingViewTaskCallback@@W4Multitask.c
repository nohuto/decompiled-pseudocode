/*
 * XREFs of ?QueueTask@CMultitaskingViewServiceProvider@@UEAAJPEAUIMultitaskingViewTaskCallback@@W4MultitaskingViewTaskOptions@@@Z @ 0x18035CC90
 * Callers:
 *     <none>
 * Callees:
 *     ??$MakeAndInitialize@VCMarshalStream@CMarshaledInterface@@V12@AEBU_GUID@@AEAPEAUIUnknown@@AEAW4MARSHAL_KIND@@@Details@WRL@Microsoft@@YAJPEAPEAVCMarshalStream@CMarshaledInterface@@AEBU_GUID@@AEAPEAUIUnknown@@AEAW4MARSHAL_KIND@@@Z @ 0x180013444 (--$MakeAndInitialize@VCMarshalStream@CMarshaledInterface@@V12@AEBU_GUID@@AEAPEAUIUnknown@@AEAW4M.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800767F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18007AEDC (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x18007C124 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_1b237cfa226cb7a358646b393456f6b8__&_ @ 0x18035C2D4 (Windows--Internal--ComTaskPool--QueueTask__lambda_1b237cfa226cb7a358646b393456f6b8__-_.c)
 *     ?_EnsureForegroundRight@CMultitaskingViewServiceProvider@@AEAAJ_N@Z @ 0x18035D6BC (-_EnsureForegroundRight@CMultitaskingViewServiceProvider@@AEAAJ_N@Z.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CMultitaskingViewServiceProvider::QueueTask(__int64 a1, __int64 a2, char a3)
{
  struct _RTL_CRITICAL_SECTION *v6; // rsi
  int v7; // r12d
  unsigned int v8; // ebx
  __int64 v9; // r9
  __int64 v10; // rdx
  int v11; // eax
  int v12; // eax
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // eax
  __int64 v19; // [rsp+20h] [rbp-20h] BYREF
  __int64 v20; // [rsp+28h] [rbp-18h] BYREF
  __int64 v21[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  unsigned int v23; // [rsp+70h] [rbp+30h] BYREF
  __int64 v24; // [rsp+88h] [rbp+48h] BYREF

  v21[1] = -2LL;
  v6 = (struct _RTL_CRITICAL_SECTION *)((a1 + 16) & -(__int64)(a1 != 96));
  v7 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v6, 1);
  if ( !*(_QWORD *)(a1 + 64) )
  {
    v8 = -2147019873;
    v9 = 2147947423LL;
    v10 = 187LL;
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
      (const char *)v9);
    goto LABEL_17;
  }
  if ( (a3 & 3) != 0 )
  {
    v11 = CMultitaskingViewServiceProvider::_EnsureForegroundRight(
            (CMultitaskingViewServiceProvider *)(a1 - 96),
            (a3 & 2) != 0);
    v8 = v11;
    if ( v11 < 0 )
    {
      v9 = (unsigned int)v11;
      v10 = 191LL;
      goto LABEL_6;
    }
  }
  v19 = 0LL;
  v23 = 2;
  v20 = a2;
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v19);
  v12 = Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
          &v19,
          (__int64)&GUID_0d1b8579_c52e_4207_89b3_9726ce949410,
          &v20,
          &v23);
  v8 = v12;
  if ( v12 >= 0 )
  {
    v24 = 0LL;
    v13 = *(_QWORD *)(a1 + 64);
    v23 = 2;
    v20 = v13;
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v24);
    v14 = Microsoft::WRL::Details::MakeAndInitialize<CMarshaledInterface::CMarshalStream,CMarshaledInterface::CMarshalStream,_GUID const &,IUnknown * &,enum MARSHAL_KIND &>(
            &v24,
            (__int64)&GUID_537b455d_1240_433b_82af_10929138b8be,
            &v20,
            &v23);
    v8 = v14;
    if ( v14 >= 0 )
    {
      v20 = v19;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v20);
      v21[0] = v24;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v21);
      v17 = Windows::Internal::ComTaskPool::QueueTask__lambda_1b237cfa226cb7a358646b393456f6b8____(
              v16,
              v15,
              *(_DWORD *)(a1 + 152),
              &v20);
      v8 = v17;
      if ( v17 >= 0 )
        v8 = 0;
      else
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xD4,
          (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
          (const char *)(unsigned int)v17);
      Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(v21);
      Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v20);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xC7,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
        (const char *)(unsigned int)v14);
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v24);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC5,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewserviceprovider.cpp",
      (const char *)(unsigned int)v12);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v19);
LABEL_17:
  if ( v7 >= 0 )
    LeaveCriticalSection(v6);
  return v8;
}
