/*
 * XREFs of ?_EvictItem@CAppLayoutOperation@@IEAAJIW4APP_LAYOUT_ANIMATION_TYPE@@@Z @ 0x180480348
 * Callers:
 *     ?QueryResizeApps@AppResizeOperation@@AEAAJW4ResizeAction@@AEBUtagPOINT@@@Z @ 0x18040956C (-QueryResizeApps@AppResizeOperation@@AEAAJW4ResizeAction@@AEBUtagPOINT@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?_EvictView@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@W4APP_LAYOUT_ANIMATION_TYPE@@@Z @ 0x180480484 (-_EvictView@CAppLayoutOperation@@IEAAJPEAUIApplicationView@@W4APP_LAYOUT_ANIMATION_TYPE@@@Z.c)
 */

__int64 __fastcall CAppLayoutOperation::_EvictItem(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v3; // rbx
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // rbx
  int v11; // eax
  __int64 v12; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v15; // [rsp+50h] [rbp+8h] BYREF
  __int64 v16; // [rsp+68h] [rbp+20h] BYREF

  v3 = *(_QWORD *)(a1 + 40);
  v15 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
  v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v3 + 96LL))(
         v3,
         a2,
         &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98,
         &v15);
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = 284LL;
LABEL_12:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"pcshell\\twinui\\applayout\\lib\\applayoutoperation.cpp",
      (const char *)(unsigned int)v7);
    goto LABEL_13;
  }
  if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v15 + 24LL))(v15) == 1 )
  {
    v16 = 0LL;
    v10 = v15;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
    v11 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v10 + 48LL))(
            v10,
            &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513,
            &v16);
    v8 = v11;
    if ( v11 >= 0 )
    {
      v11 = CAppLayoutOperation::_EvictView(a1, v16, a3);
      v8 = v11;
      if ( v11 >= 0 )
      {
LABEL_9:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
        goto LABEL_13;
      }
      v12 = 289LL;
    }
    else
    {
      v12 = 288LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"pcshell\\twinui\\applayout\\lib\\applayoutoperation.cpp",
      (const char *)(unsigned int)v11);
    goto LABEL_9;
  }
  v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 40) + 256LL))(*(_QWORD *)(a1 + 40), a2);
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = 294LL;
    goto LABEL_12;
  }
LABEL_13:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
  return v8;
}
