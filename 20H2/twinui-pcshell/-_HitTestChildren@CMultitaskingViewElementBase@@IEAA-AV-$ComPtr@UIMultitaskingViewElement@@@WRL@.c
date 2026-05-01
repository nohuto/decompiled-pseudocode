/*
 * XREFs of ?_HitTestChildren@CMultitaskingViewElementBase@@IEAA?AV?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@AEBUCPoint@Geometry@@@Z @ 0x1803A4048
 * Callers:
 *     ?DragOver@CMultitaskingViewElementBase@@UEAA?AW4DropEffect@@PEAVDragAndDropArgs@@AEBVMultitaskingViewPointerInputArgs@@@Z @ 0x1803A23B0 (-DragOver@CMultitaskingViewElementBase@@UEAA-AW4DropEffect@@PEAVDragAndDropArgs@@AEBVMultitaskin.c)
 *     ?GetElementFromPoint@CMultitaskingViewElementBase@@UEAA?AV?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@AEBUCPoint@Geometry@@@Z @ 0x1803A29B0 (-GetElementFromPoint@CMultitaskingViewElementBase@@UEAA-AV-$ComPtr@UIMultitaskingViewElement@@@W.c)
 *     ?_PointerMove@CMultitaskingViewElementBase@@IEAAXAEBVMultitaskingViewPointerInputArgs@@@Z @ 0x1803A41F8 (-_PointerMove@CMultitaskingViewElementBase@@IEAAXAEBVMultitaskingViewPointerInputArgs@@@Z.c)
 *     ?HitTest@CScrollButtonContainer@@UEAA_NAEBUCPoint@Geometry@@@Z @ 0x1803A6B60 (-HitTest@CScrollButtonContainer@@UEAA_NAEBUCPoint@Geometry@@@Z.c)
 *     ?HitTest@CVirtualDesktopBarElement@@UEAA_NAEBUCPoint@Geometry@@@Z @ 0x1803ADE50 (-HitTest@CVirtualDesktopBarElement@@UEAA_NAEBUCPoint@Geometry@@@Z.c)
 *     ?HitTest@CScrollViewer@@UEAA_NAEBUCPoint@Geometry@@@Z @ 0x1803BAF40 (-HitTest@CScrollViewer@@UEAA_NAEBUCPoint@Geometry@@@Z.c)
 *     ?HitTest@CVirtualDesktopContainerElement@@UEAA_NAEBUCPoint@Geometry@@@Z @ 0x1803BFBD0 (-HitTest@CVirtualDesktopContainerElement@@UEAA_NAEBUCPoint@Geometry@@@Z.c)
 * Callees:
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18000BE8C (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

__int64 *__fastcall CMultitaskingViewElementBase::_HitTestChildren(_QWORD *a1, __int64 *a2, __int64 *a3)
{
  _DWORD *v6; // rax
  __int64 v7; // rcx
  __int64 *v8; // rbx
  __int64 v9; // rax
  __int64 *v10; // rsi
  __int64 v12; // [rsp+30h] [rbp+8h] BYREF
  char v13; // [rsp+38h] [rbp+10h] BYREF

  *a2 = 0LL;
  if ( a1[3] )
  {
    v6 = (_DWORD *)(*(__int64 (__fastcall **)(_QWORD *, char *))(*a1 + 120LL))(a1, &v13);
    v7 = *a3;
    v8 = (__int64 *)a1[2];
    v12 = v7;
    LODWORD(v7) = v6[1];
    LODWORD(v12) = *v6 + v12;
    v9 = a1[3];
    HIDWORD(v12) += v7;
    v10 = &v8[v9];
    while ( v8 != v10 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)*v8 + 152LL))(*v8)
        && (*(unsigned __int8 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)*v8 + 112LL))(*v8, &v12) )
      {
        Microsoft::WRL::ComPtr<IApplicationView>::operator=(a2, v8);
        return a2;
      }
      ++v8;
    }
  }
  return a2;
}
