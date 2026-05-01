/*
 * XREFs of ?StartDrag@CMultitaskingViewFrameElement@@UEAA_NW4DragEffects@@PEAUIMultitaskingViewElement@@PEAUIUnknown@@@Z @ 0x1803AB690
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062CC4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ElementDragData_CreateInstance@@YAJPEAUISwitchThumbnailFactory@@PEAUIMultitaskingViewElement@@1PEAUIUnknown@@AEBUDragMetrics@@W4DragEffects@@AEBU_GUID@@PEAPEAX@Z @ 0x1803BD4AC (-ElementDragData_CreateInstance@@YAJPEAUISwitchThumbnailFactory@@PEAUIMultitaskingViewElement@@1.c)
 */

char __fastcall CMultitaskingViewFrameElement::StartDrag(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rsi
  int Instance; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  if ( *(_DWORD *)(a1 - 132) != 1 )
    return 0;
  v8 = a1 + 168;
  if ( !*(_BYTE *)(a1 + 168) )
    return 0;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(a1 + 336));
  Instance = ElementDragData_CreateInstance(*(_QWORD *)(a1 + 248), a1 - 232, a3, a4, v8, a2);
  if ( Instance < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x25D,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\frameelement.cpp",
      (const char *)(unsigned int)Instance);
    return 0;
  }
  return 1;
}
