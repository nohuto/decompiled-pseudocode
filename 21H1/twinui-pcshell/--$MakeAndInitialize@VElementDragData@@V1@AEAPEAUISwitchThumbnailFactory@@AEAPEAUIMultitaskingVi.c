/*
 * XREFs of ??$MakeAndInitialize@VElementDragData@@V1@AEAPEAUISwitchThumbnailFactory@@AEAPEAUIMultitaskingViewElement@@AEAPEAU3@AEAPEAUIUnknown@@AEBUDragMetrics@@AEAW4DragEffects@@@Details@WRL@Microsoft@@YAJPEAPEAVElementDragData@@AEAPEAUISwitchThumbnailFactory@@AEAPEAUIMultitaskingViewElement@@2AEAPEAUIUnknown@@AEBUDragMetrics@@AEAW4DragEffects@@@Z @ 0x18039C2B8
 * Callers:
 *     ?ElementDragData_CreateInstance@@YAJPEAUISwitchThumbnailFactory@@PEAUIMultitaskingViewElement@@1PEAUIUnknown@@AEBUDragMetrics@@W4DragEffects@@AEBU_GUID@@PEAPEAX@Z @ 0x18039CD0C (-ElementDragData_CreateInstance@@YAJPEAUISwitchThumbnailFactory@@PEAUIMultitaskingViewElement@@1.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800767F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CA20 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0ElementDragData@@QEAA@XZ @ 0x18039C6B0 (--0ElementDragData@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@ElementDragData@@QEAAJPEAUISwitchThumbnailFactory@@PEAUIMultitaskingViewElement@@1PEAUIUnknown@@AEBUDragMetrics@@W4DragEffects@@@Z @ 0x18039D75C (-RuntimeClassInitialize@ElementDragData@@QEAAJPEAUISwitchThumbnailFactory@@PEAUIMultitaskingView.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<ElementDragData,ElementDragData,ISwitchThumbnailFactory * &,IMultitaskingViewElement * &,IMultitaskingViewElement * &,IUnknown * &,DragMetrics const &,enum DragEffects &>(
        ElementDragData **a1,
        _QWORD *a2,
        __int64 *a3,
        __int64 *a4,
        _QWORD *a5,
        __int64 a6,
        _DWORD *a7)
{
  ElementDragData *v11; // rax
  int v12; // ebx
  ElementDragData *v13; // rsi
  __int64 v14; // r9
  __int64 v15; // r8
  ElementDragData *v17; // [rsp+60h] [rbp+8h] BYREF

  *a1 = 0LL;
  v11 = (ElementDragData *)operator new(0x1F8uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v11 )
  {
    v13 = ElementDragData::ElementDragData(v11);
    v14 = *a4;
    v15 = *a3;
    v17 = v13;
    v12 = ElementDragData::RuntimeClassInitialize(v13, *a2, v15, v14, *a5, a6, *a7);
    if ( v12 >= 0 )
    {
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v17);
      v12 = 0;
      *a1 = v13;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v17);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v12;
}
