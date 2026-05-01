/*
 * XREFs of ??$InvokeDelegates@V_lambda_6064947f4016cf83efe0bc3b582d8f17_@@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@@?$InvokeTraits@$0?1@WRL@Microsoft@@SAJV_lambda_6064947f4016cf83efe0bc3b582d8f17_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@12@@Z @ 0x180009B70
 * Callers:
 *     ??$DoInvoke@V_lambda_6064947f4016cf83efe0bc3b582d8f17_@@@?$EventSource@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJV_lambda_6064947f4016cf83efe0bc3b582d8f17_@@@Z @ 0x180002040 (--$DoInvoke@V_lambda_6064947f4016cf83efe0bc3b582d8f17_@@@-$EventSource@U-$IEventHandler@PEAUIIns.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800020F0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?InternalRelease@?$ComPtr@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180008B48 (-InternalRelease@-$ComPtr@U-$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@@WRL@Microsoft.c)
 *     ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@PEAVEventTargetArray@Details@12@@Z @ 0x180008E40 (--4-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@PEAVEventTarget.c)
 *     _guard_dispatch_icall_nop @ 0x18000AB50 (_guard_dispatch_icall_nop.c)
 *     ?Remove@?$EventSource@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x18000F43C (-Remove@-$EventSource@U-$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@U-$InvokeModeOptio.c)
 */

__int64 __fastcall Microsoft::WRL::InvokeTraits<-2>::InvokeDelegates<_lambda_6064947f4016cf83efe0bc3b582d8f17_,Windows::Foundation::IEventHandler<IInspectable *>>(
        _QWORD **a1,
        volatile int *a2,
        __int64 a3)
{
  unsigned int v3; // esi
  unsigned int v5; // edi
  volatile int *v7; // rdx
  __int64 v8; // rbx
  __int64 *v9; // r15
  _QWORD *i; // r14
  unsigned int v11; // eax
  int MatchingRestrictedErrorInfo; // ebx
  bool v14; // sf
  __int64 v15[7]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v16; // [rsp+78h] [rbp+20h] BYREF

  v3 = 0;
  v15[0] = 0LL;
  v5 = 0;
  Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(v15, a2);
  v8 = v15[0];
  v9 = *(__int64 **)(v15[0] + 32);
  for ( i = *(_QWORD **)(v15[0] + 16); i != *(_QWORD **)(v8 + 24); ++i )
  {
    v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)*i + 24LL))(*i, **a1, *a1[1]);
    v5 = v11;
    if ( v11 == -2147417848 || v11 == -2147023174 || v11 == -1996357631 || v11 == -2147418105 || v11 == -2147418094 )
    {
      RoTransformError(v11, 0LL, 0LL);
      Microsoft::WRL::EventSource<Windows::Foundation::IEventHandler<IInspectable *>,Microsoft::WRL::InvokeModeOptions<-2>>::Remove(
        a3,
        *i);
      v5 = 0;
    }
    if ( (v5 & 0x80000000) != 0 )
    {
      if ( (unsigned int)IsErrorPropagationEnabled() )
      {
        v15[1] = *v9;
        v16 = 0LL;
        Microsoft::WRL::ComPtr<Windows::Foundation::IEventHandler<IInspectable *>>::InternalRelease(&v16);
        MatchingRestrictedErrorInfo = RoGetMatchingRestrictedErrorInfo(v5, &v16);
        if ( MatchingRestrictedErrorInfo >= 0 )
          MatchingRestrictedErrorInfo = RoReportFailedDelegate(*i, v16);
        Microsoft::WRL::ComPtr<Windows::Foundation::IEventHandler<IInspectable *>>::InternalRelease(&v16);
        v14 = MatchingRestrictedErrorInfo < 0;
        v8 = v15[0];
        if ( v14 )
          v3 = v5;
        v5 = v3;
        break;
      }
      RoTransformError(v5, 0LL, 0LL);
      v5 = 0;
    }
    ++v9;
  }
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v8, v7);
  return v5;
}
