/*
 * XREFs of _lambda_bd3fbba3910f4f0e915bc6f22fc5c4d2_::operator() @ 0x1802A1860
 * Callers:
 *     ?_ChangePopupUIShowingCount@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@W4PopupCountOperation@@_K@Z @ 0x1802AAF10 (-_ChangePopupUIShowingCount@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@W4PopupCountOper.c)
 *     std::_Func_impl_no_alloc__lambda_d8948fd6d7e0860ee61eefbc8dea15cc__void_Windows::Internal::OneCore::ViewEventHandlers::tagHostIdentifier_const_&_::_Do_call @ 0x1802AB370 (std--_Func_impl_no_alloc__lambda_d8948fd6d7e0860ee61eefbc8dea15cc__void_Windows--In_ea_1802AB370.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068BA4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180076E9C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x180140B30 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_399ff948cc697693e8bab0cf770e6371___ @ 0x18029F108 (Windows--Internal--ComTaskPool--QueueTask__lambda_399ff948cc697693e8bab0cf770e6371___.c)
 *     ?InternalRelease@?$ComPtr@VViewEventDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x1802A43A8 (-InternalRelease@-$ComPtr@VViewEventDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall lambda_bd3fbba3910f4f0e915bc6f22fc5c4d2_::operator()(unsigned int **a1, _QWORD *a2)
{
  unsigned int *v4; // rdx
  signed __int64 v5; // rax
  signed __int64 v6; // rtt
  unsigned int *v7; // rax
  __int64 v8; // rcx
  int v9; // eax
  int v11[2]; // [rsp+20h] [rbp-28h] BYREF
  unsigned int *v12; // [rsp+28h] [rbp-20h] BYREF
  __int64 v13[3]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned int *v15; // [rsp+50h] [rbp+8h] BYREF

  if ( (*(unsigned int (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)*a2 + 960LL))(*a2, **a1, *(_QWORD *)a1[1]) == 1 )
  {
    v4 = a1[2];
    v15 = v4;
    if ( v4 )
    {
      v5 = *((_QWORD *)v4 + 32);
      while ( v5 >= 0 )
      {
        if ( (_DWORD)v5 != 0x7FFFFFFF )
        {
          v6 = v5;
          v5 = _InterlockedCompareExchange64((volatile signed __int64 *)v4 + 32, v5 + 1, v5);
          if ( v6 != v5 )
            continue;
        }
        goto LABEL_9;
      }
      Microsoft::WRL::Details::StrongReference::IncrementStrongReference(
        (Microsoft::WRL::Details *)(2 * v5 + 16),
        (volatile int *)v4);
    }
LABEL_9:
    *(_QWORD *)v11 = a1[2];
    v7 = v15;
    v15 = 0LL;
    v12 = v7;
    v13[0] = *a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v13);
    v9 = Windows::Internal::ComTaskPool::QueueTask__lambda_399ff948cc697693e8bab0cf770e6371___(v8, v11);
    if ( v9 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x44D,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
        (const char *)(unsigned int)v9);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v13);
    Microsoft::WRL::ComPtr<ViewEventDispatcher>::InternalRelease(&v12);
    Microsoft::WRL::ComPtr<ViewEventDispatcher>::InternalRelease(&v15);
  }
  return 0LL;
}
