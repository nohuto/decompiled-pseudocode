/*
 * XREFs of ??0MPCGamepadProcessor@@QEAA@XZ @ 0x180191BA0
 * Callers:
 *     ??$MakeAndInitialize@VMPCGamepadProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Details@WRL@Microsoft@@YAJPEAPEAUIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Z @ 0x1801918D0 (--$MakeAndInitialize@VMPCGamepadProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@.c)
 * Callees:
 *     ?CalculateMaximumSize@RayStabilizer@@AEAAXXZ @ 0x18002A9DC (-CalculateMaximumSize@RayStabilizer@@AEAAXXZ.c)
 *     memset_0 @ 0x18003C200 (memset_0.c)
 *     ?Reset@RayStabilizer@@QEAAXXZ @ 0x180086618 (-Reset@RayStabilizer@@QEAAXXZ.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIRawInputProvider@@VMPCInputProviderBase@@@WRL@Microsoft@@QEAA@XZ @ 0x180191B1C (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIRawInputProvider@@VMPCInputProviderB.c)
 */

MPCGamepadProcessor *__fastcall MPCGamepadProcessor::MPCGamepadProcessor(MPCGamepadProcessor *this)
{
  RayStabilizer *v2; // rcx

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IRawInputProvider,MPCInputProviderBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IRawInputProvider,MPCInputProviderBase>((__int64)this);
  *(_QWORD *)this = &MPCGamepadProcessor::`vftable';
  *((_QWORD *)this + 580) = 0LL;
  *((_QWORD *)this + 1) = &MPCGamepadProcessor::`vftable'{for `IInputProcessor'};
  *((_QWORD *)this + 581) = 0LL;
  *((_QWORD *)this + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IRawInputProvider,MPCInputProviderBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IInputProcessorDeviceUpdate,IInputFocusListener,IMPCInputProviderBase>'};
  *((_QWORD *)this + 582) = 0LL;
  *((_QWORD *)this + 3) = &MPCGamepadProcessor::`vftable'{for `IInputFocusListener'};
  *((_QWORD *)this + 583) = 0LL;
  *((_QWORD *)this + 4) = &MPCGamepadProcessor::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IMPCInputProviderBase>'};
  *((_DWORD *)this + 1168) = 0;
  *(_OWORD *)((char *)this + 4676) = 0LL;
  *(_OWORD *)((char *)this + 4692) = 0LL;
  *(_OWORD *)((char *)this + 4708) = 0LL;
  *(_QWORD *)((char *)this + 4724) = 0LL;
  memset_0((char *)this + 4736, 0, 0x148uLL);
  *((_DWORD *)this + 1266) = 0;
  *((_WORD *)this + 2534) = 0;
  *((_BYTE *)this + 5070) = 0;
  *((_OWORD *)this + 317) = 0LL;
  *((_OWORD *)this + 318) = 0LL;
  *((_OWORD *)this + 319) = 0LL;
  *((_QWORD *)this + 640) = 0LL;
  *((_QWORD *)this + 641) = 0x3FF0000000000000LL;
  *((_QWORD *)this + 642) = 0LL;
  *((_DWORD *)this + 1286) = 1065353216;
  *((_QWORD *)this + 644) = 0LL;
  *((_QWORD *)this + 645) = 0LL;
  *((_QWORD *)this + 646) = 0LL;
  *((_QWORD *)this + 647) = 0LL;
  *((_QWORD *)this + 648) = 0LL;
  *((_WORD *)this + 2596) = 0;
  *((_DWORD *)this + 1299) = 0;
  if ( *((_DWORD *)this + 109) )
  {
    *((_DWORD *)this + 109) = 0;
    RayStabilizer::CalculateMaximumSize((MPCGamepadProcessor *)((char *)this + 392));
    RayStabilizer::Reset(v2);
  }
  return this;
}
