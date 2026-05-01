/*
 * XREFs of ??0?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIRawElementProviderSimple@@UIDragProvider@@UIJointResizeAcc@@@Details@WRL@Microsoft@@IEAA@XZ @ 0x18041F2CC
 * Callers:
 *     ??0JointResizeAcc@@QEAA@XZ @ 0x18041F30C (--0JointResizeAcc@@QEAA@XZ.c)
 * Callees:
 *     ??0IApplicationViewChangeListener@@QEAA@XZ @ 0x1800CD498 (--0IApplicationViewChangeListener@@QEAA@XZ.c)
 */

_DWORD *__fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IRawElementProviderSimple,IDragProvider,IJointResizeAcc>::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IRawElementProviderSimple,IDragProvider,IJointResizeAcc>(
        _DWORD *a1)
{
  _DWORD *result; // rax

  IApplicationViewChangeListener::IApplicationViewChangeListener((IApplicationViewChangeListener *)a1);
  IApplicationViewChangeListener::IApplicationViewChangeListener((IApplicationViewChangeListener *)(a1 + 2));
  IApplicationViewChangeListener::IApplicationViewChangeListener((IApplicationViewChangeListener *)(a1 + 4));
  result = a1;
  a1[7] = 1;
  return result;
}
