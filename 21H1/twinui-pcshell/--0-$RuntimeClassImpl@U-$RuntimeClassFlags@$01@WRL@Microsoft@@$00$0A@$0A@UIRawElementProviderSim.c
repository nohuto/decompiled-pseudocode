/*
 * XREFs of ??0?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIRawElementProviderSimple@@UIRawElementProviderFragment@@UIRawElementProviderFragmentRoot@@UIDragProvider@@UIDragVisualAcc@@@Details@WRL@Microsoft@@IEAA@XZ @ 0x1803E2A74
 * Callers:
 *     ??0ScreenManager@@QEAA@XZ @ 0x1803E2AC8 (--0ScreenManager@@QEAA@XZ.c)
 *     ??0CDragVisualAcc@@QEAA@PEAUIDragVisual@@@Z @ 0x180409678 (--0CDragVisualAcc@@QEAA@PEAUIDragVisual@@@Z.c)
 * Callees:
 *     ??0IApplicationViewChangeListener@@QEAA@XZ @ 0x1800BAF18 (--0IApplicationViewChangeListener@@QEAA@XZ.c)
 */

_DWORD *__fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IRawElementProviderSimple,IRawElementProviderFragment,IRawElementProviderFragmentRoot,IDragProvider,IDragVisualAcc>::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IRawElementProviderSimple,IRawElementProviderFragment,IRawElementProviderFragmentRoot,IDragProvider,IDragVisualAcc>(
        _DWORD *a1)
{
  _DWORD *result; // rax

  IApplicationViewChangeListener::IApplicationViewChangeListener((IApplicationViewChangeListener *)a1);
  IApplicationViewChangeListener::IApplicationViewChangeListener((IApplicationViewChangeListener *)(a1 + 2));
  IApplicationViewChangeListener::IApplicationViewChangeListener((IApplicationViewChangeListener *)(a1 + 4));
  IApplicationViewChangeListener::IApplicationViewChangeListener((IApplicationViewChangeListener *)(a1 + 6));
  IApplicationViewChangeListener::IApplicationViewChangeListener((IApplicationViewChangeListener *)(a1 + 8));
  result = a1;
  a1[11] = 1;
  return result;
}
