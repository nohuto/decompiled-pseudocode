/*
 * XREFs of ??0?$CMultitaskingViewHostBase@UIAltTabViewHost@@@@QEAA@XZ @ 0x18030EEC4
 * Callers:
 *     ??0XamlAltTabViewHost@@QEAA@XZ @ 0x18030F508 (--0XamlAltTabViewHost@@QEAA@XZ.c)
 *     ??0CAltTabViewHost@@QEAA@XZ @ 0x18038BFF8 (--0CAltTabViewHost@@QEAA@XZ.c)
 * Callees:
 *     ??0CObjectWithThreadUseDetection@@QEAA@W4ApartmentCheckEnum@@@Z @ 0x180146A78 (--0CObjectWithThreadUseDetection@@QEAA@W4ApartmentCheckEnum@@@Z.c)
 */

__int64 __fastcall CMultitaskingViewHostBase<IAltTabViewHost>::CMultitaskingViewHostBase<IAltTabViewHost>(__int64 a1)
{
  __int64 result; // rax

  CObjectWithThreadUseDetection::CObjectWithThreadUseDetection(a1 + 24, 0);
  *(_QWORD *)a1 = &CMultitaskingViewHostBase<IAltTabViewHost>::`vftable'{for `Microsoft::WRL::ChainInterfaces<IAltTabViewHost,IMultitaskingViewHost,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>'};
  *(_QWORD *)(a1 + 8) = &CMultitaskingViewHostBase<IAltTabViewHost>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IImmersiveMonitorNotification>'};
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_DWORD *)(a1 + 72) = 0;
  *(_QWORD *)(a1 + 96) = a1 + 8;
  result = a1;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_BYTE *)(a1 + 112) = 0;
  return result;
}
