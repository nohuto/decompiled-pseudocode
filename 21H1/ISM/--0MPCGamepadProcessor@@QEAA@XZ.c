/*
 * XREFs of ??0MPCGamepadProcessor@@QEAA@XZ @ 0x180191C40
 * Callers:
 *     ??$MakeAndInitialize@VMPCGamepadProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Details@WRL@Microsoft@@YAJPEAPEAUIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Z @ 0x180191970 (--$MakeAndInitialize@VMPCGamepadProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@.c)
 * Callees:
 *     ?CalculateMaximumSize@RayStabilizer@@AEAAXXZ @ 0x18002AA2C (-CalculateMaximumSize@RayStabilizer@@AEAAXXZ.c)
 *     memset_0 @ 0x18003C460 (memset_0.c)
 *     ?Reset@RayStabilizer@@QEAAXXZ @ 0x180086748 (-Reset@RayStabilizer@@QEAAXXZ.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIRawInputProvider@@VMPCInputProviderBase@@@WRL@Microsoft@@QEAA@XZ @ 0x180191BBC (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIRawInputProvider@@VMPCInputProviderB.c)
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
  *((_DWORD *)this + 1166) = 0;
  *((_QWORD *)this + 4) = &MPCGamepadProcessor::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IMPCInputProviderBase>'};
  *(_OWORD *)((char *)this + 4668) = 0LL;
  *(_OWORD *)((char *)this + 4684) = 0LL;
  *(_OWORD *)((char *)this + 4700) = 0LL;
  *(_QWORD *)((char *)this + 4716) = 0LL;
  memset_0((char *)this + 4728, 0, 0x148uLL);
  *((_DWORD *)this + 1264) = 0;
  *((_WORD *)this + 2530) = 0;
  *((_BYTE *)this + 5062) = 0;
  *(_OWORD *)((char *)this + 5064) = 0LL;
  *(_OWORD *)((char *)this + 5080) = 0LL;
  *(_OWORD *)((char *)this + 5096) = 0LL;
  *((_QWORD *)this + 639) = 0LL;
  *((_QWORD *)this + 640) = 0x3FF0000000000000LL;
  *((_QWORD *)this + 641) = 0LL;
  *((_DWORD *)this + 1284) = 1065353216;
  *((_QWORD *)this + 643) = 0LL;
  *((_QWORD *)this + 644) = 0LL;
  *((_QWORD *)this + 645) = 0LL;
  *((_QWORD *)this + 646) = 0LL;
  *((_QWORD *)this + 647) = 0LL;
  *((_WORD *)this + 2592) = 0;
  *((_DWORD *)this + 1297) = 0;
  if ( *((_DWORD *)this + 109) )
  {
    *((_DWORD *)this + 109) = 0;
    RayStabilizer::CalculateMaximumSize((MPCGamepadProcessor *)((char *)this + 392));
    RayStabilizer::Reset(v2);
  }
  return this;
}
