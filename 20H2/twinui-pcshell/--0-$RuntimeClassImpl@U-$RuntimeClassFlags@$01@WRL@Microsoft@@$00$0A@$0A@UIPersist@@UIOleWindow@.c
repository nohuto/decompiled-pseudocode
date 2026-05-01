/*
 * XREFs of ??0?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIPersist@@UIOleWindow@@@Details@WRL@Microsoft@@IEAA@XZ @ 0x1803825DC
 * Callers:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIMultitaskingViewGestureHandler@@UITouchpadGesture@@@WRL@Microsoft@@QEAA@XZ @ 0x180382590 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIMultitaskingViewGestureHandler@@UITo.c)
 *     ?TabletModeViewManagerProxy_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x180383FA4 (-TabletModeViewManagerProxy_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??0CMultitaskingViewHotKeyHandler@@QEAA@XZ @ 0x1803861D0 (--0CMultitaskingViewHotKeyHandler@@QEAA@XZ.c)
 *     ??0DummyUnknown@details@wil@@QEAA@XZ @ 0x18047DB04 (--0DummyUnknown@details@wil@@QEAA@XZ.c)
 * Callees:
 *     ??0IApplicationViewChangeListener@@QEAA@XZ @ 0x1800CEF78 (--0IApplicationViewChangeListener@@QEAA@XZ.c)
 */

_DWORD *__fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IPersist,IOleWindow>::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IPersist,IOleWindow>(
        _DWORD *a1)
{
  _DWORD *result; // rax

  IApplicationViewChangeListener::IApplicationViewChangeListener((IApplicationViewChangeListener *)a1);
  IApplicationViewChangeListener::IApplicationViewChangeListener((IApplicationViewChangeListener *)(a1 + 2));
  result = a1;
  a1[5] = 1;
  return result;
}
