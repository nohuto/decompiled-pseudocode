/*
 * XREFs of ?GetAdjacentVirtualDesktop@CVirtualDesktopCollection@@UEAAJPEAUIVirtualDesktop@@IAEBU_GUID@@PEAPEAX@Z @ 0x180436D00
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18000BE8C (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18007256C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ??$FindEx@VComPtrCompareHelper@@@?$CTSimpleFixedArray@V?$ComPtr@UIMultitaskingViewGridElement@@@WRL@Microsoft@@VComPtrCompareHelper@@@@QEBAJAEBVComPtrCompareHelper@@AEBV?$ComPtr@UIMultitaskingViewGridElement@@@WRL@Microsoft@@PEA_K_K@Z @ 0x180392C3C (--$FindEx@VComPtrCompareHelper@@@-$CTSimpleFixedArray@V-$ComPtr@UIMultitaskingViewGridElement@@@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVirtualDesktopCollection::GetAdjacentVirtualDesktop(
        CVirtualDesktopCollection *this,
        void **a2,
        int a3,
        const struct _GUID *a4,
        void **a5)
{
  void **v6; // r14
  int v7; // r8d
  int v8; // r8d
  int v9; // r8d
  unsigned int v10; // ebx
  __int64 v11; // rdx
  char v12; // bl
  _QWORD *v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // rdx
  int v16; // edi
  unsigned __int64 v18; // rcx
  int v19; // eax
  _QWORD v20[3]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v6 = a5;
  *a5 = 0LL;
  v7 = a3 - 3;
  if ( v7 )
  {
    v8 = v7 - 1;
    if ( v8 )
    {
      v9 = v8 - 1;
      if ( v9 )
      {
        if ( v9 != 1 )
        {
          v10 = -2147024809;
          v11 = 103LL;
LABEL_6:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v11,
            (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcollection.cpp",
            (const char *)v10);
          return v10;
        }
        v12 = 0;
      }
      else
      {
        v12 = 1;
      }
    }
    else
    {
      v12 = *((_BYTE *)this + 16) == 0;
    }
  }
  else
  {
    v12 = *((_BYTE *)this + 16);
  }
  v13 = (_QWORD *)((char *)this + 48);
  if ( !a2 )
  {
    if ( v12 )
      v14 = 0LL;
    else
      v14 = *((_QWORD *)this + 7) - 1LL;
    v10 = (***(__int64 (__fastcall ****)(_QWORD, const struct _GUID *, void **))(*v13 + 8 * v14))(
            *(_QWORD *)(*v13 + 8 * v14),
            a4,
            v6);
    if ( (v10 & 0x80000000) == 0 )
      return v10;
    v11 = 109LL;
    goto LABEL_6;
  }
  a5 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&a5);
  v16 = CTSimpleFixedArray<Microsoft::WRL::ComPtr<IMultitaskingViewGridElement>,ComPtrCompareHelper>::FindEx<ComPtrCompareHelper>(
          v13,
          v15,
          (struct IUnknown **)&a5,
          v20);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&a5);
  if ( v16 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x71,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcollection.cpp",
      (const char *)(unsigned int)v16);
    return (unsigned int)v16;
  }
  v18 = v20[0] + (v12 != 0 ? 1LL : -1LL);
  a5 = 0LL;
  if ( v18 >= v13[1] )
  {
    v10 = -2147316575;
  }
  else
  {
    Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)&a5, (__int64 *)(*v13 + 8 * v18));
    v19 = (*(__int64 (__fastcall **)(void **, const struct _GUID *, void **))*a5)(a5, a4, v6);
    v10 = v19;
    if ( v19 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x76,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopcollection.cpp",
        (const char *)(unsigned int)v19);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&a5);
  return v10;
}
