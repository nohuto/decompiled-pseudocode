/*
 * XREFs of ??0MPCInputProviderBase@@QEAA@XZ @ 0x18002AA0C
 * Callers:
 *     ??0MPCMouseProcessor@@QEAA@XZ @ 0x18001FE70 (--0MPCMouseProcessor@@QEAA@XZ.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VMPCInputProviderBase@@@WRL@Microsoft@@QEAA@XZ @ 0x18007D2A8 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VMPCInputProviderBase@@@WRL@Microsoft@.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIRawInputProvider@@VMPCInputProviderBase@@@WRL@Microsoft@@QEAA@XZ @ 0x180191B1C (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIRawInputProvider@@VMPCInputProviderB.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180012DA0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?CalculateMaximumSize@RayStabilizer@@AEAAXXZ @ 0x18002A9DC (-CalculateMaximumSize@RayStabilizer@@AEAAXXZ.c)
 *     memset_0 @ 0x18003C200 (memset_0.c)
 */

MPCInputProviderBase *__fastcall MPCInputProviderBase::MPCInputProviderBase(MPCInputProviderBase *this)
{
  _QWORD *v2; // rax
  MPCInputProviderBase *result; // rax

  *(_QWORD *)this = &MPCInputProviderBase::`vftable'{for `IInputProcessor'};
  *((_QWORD *)this + 1) = &MPCInputProviderBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IInputProcessorDeviceUpdate,IInputFocusListener,IMPCInputProviderBase>'};
  *((_QWORD *)this + 2) = &MPCInputProviderBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IInputProcessorDeviceUpdate,IInputFocusListener,IMPCInputProviderBase>'};
  *((_QWORD *)this + 3) = &MPCInputProviderBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IMPCInputProviderBase>'};
  memset_0((char *)this + 56, 0, 0x148uLL);
  *((_QWORD *)this + 48) = 0LL;
  *((_QWORD *)this + 49) = 0LL;
  *((_QWORD *)this + 50) = 0LL;
  *((_QWORD *)this + 51) = 0LL;
  *((_QWORD *)this + 52) = 0LL;
  v2 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x10uLL);
  v2[1] = 0LL;
  *((_QWORD *)this + 48) = v2;
  *v2 = (char *)this + 384;
  *((_OWORD *)this + 27) = 0LL;
  *((_DWORD *)this + 107) = 1;
  *((_OWORD *)this + 28) = 0LL;
  *((_BYTE *)this + 464) = 0;
  RayStabilizer::CalculateMaximumSize((MPCInputProviderBase *)((char *)this + 384));
  memset_0((char *)this + 472, 0, 0x7F0uLL);
  *((_DWORD *)this + 124) = 2032;
  memset_0((char *)this + 2504, 0, 0x7F0uLL);
  *((_DWORD *)this + 632) = 2032;
  result = this;
  *((_DWORD *)this + 1134) = 0;
  *((_WORD *)this + 2270) = 0;
  *((_OWORD *)this + 284) = 0LL;
  *((_OWORD *)this + 285) = 0LL;
  *((_OWORD *)this + 286) = 0LL;
  *((_DWORD *)this + 1136) = 1106247680;
  *((_BYTE *)this + 4548) = 0;
  *((_QWORD *)this + 569) = 0LL;
  *((_DWORD *)this + 1140) = 0;
  *((_QWORD *)this + 571) = 0LL;
  *((_QWORD *)this + 572) = 0LL;
  *((_QWORD *)this + 573) = 0LL;
  *((_QWORD *)this + 574) = 0LL;
  *((_QWORD *)this + 575) = 0LL;
  *((_QWORD *)this + 576) = 0LL;
  *((_BYTE *)this + 4616) = 0;
  *((_DWORD *)this + 1155) = 1;
  return result;
}
