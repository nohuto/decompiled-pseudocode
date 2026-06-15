/*
 * XREFs of ??1?$ComPtr@VCAudioSessionManagerProvider@@@WRL@Microsoft@@QEAA@XZ @ 0x1800D1700
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_CAudioSessionManagerProvider_CAudioSessionManagerProvider__::_1_::dtor$1 @ 0x18007D16C (_Microsoft--WRL--Details--MakeAndInitialize_CAudioSessionManagerProvider_CAudioSessionManagerPro.c)
 *     _HandleAccessChangeNotification_::_1_::dtor$2 @ 0x1800D1CF0 (_HandleAccessChangeNotification_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<CAudioSessionManagerProvider>::~ComPtr<CAudioSessionManagerProvider>(
        __int64 *a1)
{
  return Microsoft::WRL::ComPtr<CAudioSessionManagerProvider>::InternalRelease(a1);
}
