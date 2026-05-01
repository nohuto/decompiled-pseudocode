/*
 * XREFs of ?EvictApp@AppSwitchOperation@@UEAAJPEAUIApplicationView@@W4EVICT_APP_FLAGS@@@Z @ 0x1803E5440
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180014EB0 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x18007C124 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?QueryEvictApp@AppSwitchOperation@@AEAAJPEAUIApplicationView@@W4EVICT_APP_FLAGS@@@Z @ 0x1803E59C0 (-QueryEvictApp@AppSwitchOperation@@AEAAJPEAUIApplicationView@@W4EVICT_APP_FLAGS@@@Z.c)
 *     ?_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z @ 0x18045C48C (-_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z.c)
 *     ?_VerifyAndPrepareLayout@CAppLayoutOperation@@IEAAJPEAUIAppLayout@@_N@Z @ 0x18045CE08 (-_VerifyAndPrepareLayout@CAppLayoutOperation@@IEAAJPEAUIAppLayout@@_N@Z.c)
 */

__int64 __fastcall AppSwitchOperation::EvictApp(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rbp
  struct _RTL_CRITICAL_SECTION *v7; // r15
  CAppLayoutOperation *v8; // r12
  int v9; // r13d
  int EvictApp; // eax
  unsigned int v11; // ebx
  __int64 v12; // rdx
  int v13; // eax
  char v14; // bl
  __int64 v15; // rbx
  __int64 v16; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v19; // [rsp+70h] [rbp+8h] BYREF
  __int64 v20; // [rsp+88h] [rbp+20h] BYREF

  v3 = a1 - 176;
  v7 = (struct _RTL_CRITICAL_SECTION *)((a1 + 16) & -(__int64)(a1 != 176));
  v8 = (CAppLayoutOperation *)(a1 - 152);
  v9 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v7, 1);
  EvictApp = CAppLayoutOperation::_VerifyAndPrepareLayout(v8, 0LL, 0);
  v11 = EvictApp;
  if ( EvictApp < 0 )
  {
    v12 = 146LL;
LABEL_24:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\appswitchoperation.cpp",
      (const char *)(unsigned int)EvictApp);
    goto LABEL_26;
  }
  EvictApp = AppSwitchOperation::QueryEvictApp(v3, a2, a3);
  v11 = EvictApp;
  if ( EvictApp < 0 )
  {
    v12 = 149LL;
    goto LABEL_24;
  }
  *(_DWORD *)(a1 - 72) = 1;
  if ( (a3 & 1) != 0 )
  {
    v13 = 524353;
    *(_DWORD *)(a1 - 72) = 524353;
  }
  else
  {
    v13 = 1;
  }
  if ( (a3 & 4) != 0 )
  {
    v13 |= 0x20u;
    v14 = 1;
    *(_DWORD *)(a1 - 72) = v13;
  }
  else
  {
    v14 = 0;
  }
  if ( (a3 & 8) == 0 )
    *(_DWORD *)(a1 - 72) = v13 | 0x10000;
  if ( (a3 & 2) == 0
    && (*(unsigned int (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 - 112) + 80LL))(*(_QWORD *)(a1 - 112), 1LL)
    && (!(*(unsigned int (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 - 112) + 80LL))(*(_QWORD *)(a1 - 112), 4LL)
     || v14) )
  {
    v20 = 0LL;
    v15 = *(_QWORD *)(a1 - 112);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
    if ( (*(int (__fastcall **)(__int64, _QWORD, __int64, GUID *, __int64 *))(*(_QWORD *)v15 + 104LL))(
           v15,
           0LL,
           1LL,
           &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98,
           &v20) >= 0 )
    {
      v19 = 0LL;
      v16 = v20;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
      if ( (*(int (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v16 + 48LL))(
             v16,
             &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513,
             &v19) >= 0 )
      {
        Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)(a1 - 88), &v19);
        *(_DWORD *)(a1 - 72) |= 2u;
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
  }
  EvictApp = CAppLayoutOperation::_FinalizeLayout(a1 - 152, 0LL);
  v11 = EvictApp;
  if ( EvictApp < 0 )
  {
    v12 = 195LL;
    goto LABEL_24;
  }
  v11 = 0;
LABEL_26:
  if ( v9 >= 0 )
    LeaveCriticalSection(v7);
  return v11;
}
