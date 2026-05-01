/*
 * XREFs of ?Navigate@CMultitaskingViewFrame@@UEAAJW4MultitaskingViewControlFlags@@I@Z @ 0x18039A120
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18000BE8C (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18007256C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??4?$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x180083294 (--4-$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ??0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV?$ComPtr@UIDCompBatcher@@@WRL@Microsoft@@AEBU_GUID@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x18038D410 (--0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV-$ComPtr@UIDCompBatcher@@@WRL@Microsoft@.c)
 *     ??1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ @ 0x18038D494 (--1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ.c)
 *     ??$As@UIMultitaskingViewElementRoot@@@?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIMultitaskingViewElementRoot@@@WRL@Microsoft@@@Details@12@@Z @ 0x1803980E0 (--$As@UIMultitaskingViewElementRoot@@@-$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV.c)
 *     ?_SetFocusToControl@CMultitaskingViewFrame@@AEAAJW4MultitaskingViewControlFlags@@AEBU_GUID@@PEAPEAX@Z @ 0x18039B278 (-_SetFocusToControl@CMultitaskingViewFrame@@AEAAJW4MultitaskingViewControlFlags@@AEBU_GUID@@PEAP.c)
 */

__int64 __fastcall CMultitaskingViewFrame::Navigate(__int64 a1, unsigned int a2, unsigned int a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r9
  __int64 (__fastcall *v11)(__int64, __int64 *, _QWORD, __int64); // rax
  __int64 *v12; // rax
  __int64 *v13; // rax
  __int64 *v14; // rcx
  __int64 *v15; // rax
  __int64 v17; // [rsp+30h] [rbp-30h] BYREF
  __int64 v18; // [rsp+38h] [rbp-28h] BYREF
  __int64 v19; // [rsp+40h] [rbp-20h] BYREF
  __int64 v20[3]; // [rsp+48h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  __int64 v22; // [rsp+80h] [rbp+20h] BYREF
  __int64 *v23; // [rsp+98h] [rbp+38h] BYREF

  v22 = *(_QWORD *)(a1 + 2464);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v22);
  DCompThumbnailHelpers::CDCompFactoryBatcher::CDCompFactoryBatcher(v20, &v22, (__int64)&GUID_NULL, 0LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
  v18 = 0LL;
  Microsoft::WRL::ComPtr<IMultitaskingViewElement>::As<IMultitaskingViewElementRoot>((_QWORD *)(a1 + 2504), &v18);
  (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v18 + 24LL))(v18, 1LL, 1LL);
  v23 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v23);
  v6 = CMultitaskingViewFrame::_SetFocusToControl(a1, a2, &GUID_0bb549a1_eae6_47ed_b29e_ca24ee64ad8d, &v23);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x202,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\frame.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_17;
  }
  v22 = 0LL;
  v8 = *v23;
  if ( a3 - 7 <= 1 )
  {
    v15 = (__int64 *)(*(__int64 (__fastcall **)(__int64 *, __int64 *, _QWORD, _QWORD, _DWORD))(v8 + 272))(
                       v23,
                       &v19,
                       0LL,
                       a3,
                       0);
    Microsoft::WRL::ComPtr<WeakReference::IWeakReference>::operator=(&v22, v15);
    v14 = &v19;
    goto LABEL_13;
  }
  (*(void (__fastcall **)(__int64 *, __int64 *))(v8 + 280))(v23, &v17);
  v9 = (__int64)v23;
  v10 = a3;
  v11 = *(__int64 (__fastcall **)(__int64, __int64 *, _QWORD, __int64))(*v23 + 272);
  if ( !v17 )
  {
LABEL_9:
    v13 = (__int64 *)v11(v9, &v19, 0LL, v10);
    Microsoft::WRL::ComPtr<WeakReference::IWeakReference>::operator=(&v22, v13);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
    goto LABEL_10;
  }
  v12 = (__int64 *)((__int64 (__fastcall *)(__int64 *, __int64 *, __int64, _QWORD, _DWORD))v11)(v23, &v19, v17, a3, 0);
  Microsoft::WRL::ComPtr<WeakReference::IWeakReference>::operator=(&v22, v12);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
  if ( !v22 )
  {
    if ( a2 != 1 || a3 - 5 > 1 )
    {
      Microsoft::WRL::ComPtr<IApplicationView>::operator=(&v22, &v17);
      goto LABEL_10;
    }
    v9 = (__int64)v23;
    v10 = (unsigned int)(a3 != 5) + 7;
    v11 = *(__int64 (__fastcall **)(__int64, __int64 *, _QWORD, __int64))(*v23 + 272);
    goto LABEL_9;
  }
LABEL_10:
  v14 = &v17;
LABEL_13:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v14);
  if ( v22 )
  {
    (*(void (__fastcall **)(__int64 *, __int64))(*v23 + 288))(v23, v22);
    v7 = 0;
  }
  else
  {
    v7 = -2147023728;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
LABEL_17:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v23);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
  DCompThumbnailHelpers::CDCompFactoryBatcher::~CDCompFactoryBatcher((DCompThumbnailHelpers::CDCompFactoryBatcher *)v20);
  return v7;
}
