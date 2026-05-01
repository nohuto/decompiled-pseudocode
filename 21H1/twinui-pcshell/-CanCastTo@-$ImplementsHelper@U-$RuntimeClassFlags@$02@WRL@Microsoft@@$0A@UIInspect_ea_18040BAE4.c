/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$0A@UIInspectable@@VFtmBase@23@UIWeakReferenceSource@@UIScreenClippingBroker@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18040BAE4
 * Callers:
 *     ?QueryInterface@ScreenClippingBrokerImpl@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18040BE60 (-QueryInterface@ScreenClippingBrokerImpl@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18003C4F0 (InlineIsEqualGUID.c)
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18003C6B0 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,0,IInspectable,Microsoft::WRL::FtmBase,IWeakReferenceSource,IScreenClippingBroker>::CanCastTo(
        __int64 a1,
        _DWORD *a2)
{
  void **v2; // r8
  __int64 v3; // r9
  const struct _GUID *v4; // r10
  __int64 result; // rax
  _DWORD *v6; // r10
  _DWORD *v7; // rcx
  _QWORD *v8; // r8
  __int64 v9; // r9
  unsigned int v10; // r11d

  if ( InlineIsEqualGUID(a2, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
    goto LABEL_4;
  result = Microsoft::WRL::FtmBase::CanCastTo((Microsoft::WRL::FtmBase *)(v3 + 8), v4, v2);
  if ( (_DWORD)result != -2147467262 )
    return result;
  if ( InlineIsEqualGUID(v6, &GUID_00000038_0000_0000_c000_000000000046) )
  {
LABEL_4:
    *v2 = (void *)v3;
    return 0LL;
  }
  if ( InlineIsEqualGUID(v7, &GUID_2122b709_0b82_4a83_a1f9_c4b90e09cb4c) )
  {
    *v8 = v9 + 8;
    return 0LL;
  }
  return v10;
}
