/*
 * XREFs of _lambda_f762a111a87cc3672fab2d2d37f8e7d5_::operator() @ 0x18027FD74
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_f762a111a87cc3672fab2d2d37f8e7d5__void_Windows::Internal::OneCore::ViewEventHandlers::tagHostIdentifier_const_&_::_Do_call @ 0x180289800 (std--_Func_impl_no_alloc__lambda_f762a111a87cc3672fab2d2d37f8e7d5__void_Windows--In_ea_180289800.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?_ViewFromViewInstanceId@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@@Z @ 0x18028C0B8 (-_ViewFromViewInstanceId@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall lambda_f762a111a87cc3672fab2d2d37f8e7d5_::operator()(unsigned int **a1, _DWORD *a2)
{
  unsigned __int64 v4; // rbp
  ViewEventDispatcher *v5; // rbx
  unsigned int Ancestor; // eax
  HWND PropW; // rax
  struct IViewWrapperInternal *v8; // [rsp+38h] [rbp+10h] BYREF

  if ( *a2 )
  {
    if ( *a2 == 1 )
    {
      v4 = (int)(*a1)[1];
      if ( !(*a1)[1] && **a1 != (_DWORD)v4 )
      {
        v8 = (struct IViewWrapperInternal *)(v4 & (unsigned __int64)v8);
        v5 = (ViewEventDispatcher *)a1[1];
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v8);
        if ( (int)ViewEventDispatcher::_ViewFromViewInstanceId(v5, **a1, &v8) >= 0 )
          v4 = (*(__int64 (__fastcall **)(struct IViewWrapperInternal *))(*(_QWORD *)v8 + 768LL))(v8);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v8);
      }
      Ancestor = 0;
      if ( v4 )
      {
        PropW = (HWND)GetPropW((HWND)v4, L"CrossProcessParentHWND");
        Ancestor = (unsigned int)GetAncestor(PropW, 2u);
      }
      **a1 = 0;
      (*a1)[1] = Ancestor;
      (*a1)[2] = a2[2];
    }
  }
  else
  {
    **a1 = a2[1];
    (*a1)[1] = 0;
    (*a1)[2] = 0;
  }
}
