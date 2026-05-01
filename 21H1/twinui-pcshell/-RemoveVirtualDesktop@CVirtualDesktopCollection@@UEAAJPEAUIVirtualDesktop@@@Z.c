/*
 * XREFs of ?RemoveVirtualDesktop@CVirtualDesktopCollection@@UEAAJPEAUIVirtualDesktop@@@Z @ 0x180413DF0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800767F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     memmove_0 @ 0x1800CA4A3 (memmove_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ??$FindEx@VComPtrCompareHelper@@@?$CTSimpleFixedArray@V?$ComPtr@UIMultitaskingViewGridElement@@@WRL@Microsoft@@VComPtrCompareHelper@@@@QEBAJAEBVComPtrCompareHelper@@AEBV?$ComPtr@UIMultitaskingViewGridElement@@@WRL@Microsoft@@PEA_K_K@Z @ 0x1803722AC (--$FindEx@VComPtrCompareHelper@@@-$CTSimpleFixedArray@V-$ComPtr@UIMultitaskingViewGridElement@@@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVirtualDesktopCollection::RemoveVirtualDesktop(
        CVirtualDesktopCollection *this,
        struct IUnknown *a2)
{
  int v3; // ebx
  __int64 v4; // rdx
  _QWORD *v6; // rdi
  __int64 v7; // rdx
  unsigned __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IUnknown *v12; // [rsp+40h] [rbp+8h] BYREF
  unsigned __int64 v13; // [rsp+50h] [rbp+18h] BYREF

  if ( *((_QWORD *)this + 7) == 1LL )
  {
    v3 = -2147019873;
    v4 = 74LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcollection.cpp",
      (const char *)(unsigned int)v3);
    return (unsigned int)v3;
  }
  v6 = (_QWORD *)((char *)this + 48);
  v12 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v12);
  v3 = CTSimpleFixedArray<Microsoft::WRL::ComPtr<IMultitaskingViewGridElement>,ComPtrCompareHelper>::FindEx<ComPtrCompareHelper>(
         v6,
         v7,
         &v12,
         &v13);
  if ( v3 >= 0 )
  {
    v8 = v13;
    if ( v13 < v6[1] )
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(*v6 + 8 * v13));
      v9 = v6[1];
      if ( v8 != v9 - 1 )
      {
        memmove_0((void *)(*v6 + 8 * v8), (const void *)(*v6 + 8 * v8 + 8), 8 * (v9 - v8) - 8);
        v9 = v6[1];
      }
      v6[1] = v9 - 1;
      v3 = 0;
    }
    else
    {
      v3 = -2147316575;
    }
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
  if ( v3 < 0 )
  {
    v4 = 75LL;
    goto LABEL_3;
  }
  v10 = *((_QWORD *)this + 4);
  if ( v10 )
    (*(void (__fastcall **)(__int64, CVirtualDesktopCollection *))(*(_QWORD *)v10 + 24LL))(v10, this);
  return 0LL;
}
