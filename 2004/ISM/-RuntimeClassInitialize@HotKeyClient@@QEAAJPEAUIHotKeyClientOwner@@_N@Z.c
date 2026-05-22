/*
 * XREFs of ?RuntimeClassInitialize@HotKeyClient@@QEAAJPEAUIHotKeyClientOwner@@_N@Z @ 0x1801485E8
 * Callers:
 *     ??$MakeAndInitialize@VHotKeyClient@@UIHotKeyClient@@PEAVPenEventsDispatcherPrincipal@@_N@Details@WRL@Microsoft@@YAJPEAPEAUIHotKeyClient@@$$QEAPEAVPenEventsDispatcherPrincipal@@$$QEA_N@Z @ 0x1801320AC (--$MakeAndInitialize@VHotKeyClient@@UIHotKeyClient@@PEAVPenEventsDispatcherPrincipal@@_N@Details.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EF94 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035770 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800375F0 (-InternalRelease@-$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VMessageProxyReconnectAdapter@@V1@AEBU_GUID@@AEBQEBGPEAVHotKeyClient@@@Details@WRL@Microsoft@@YAJPEAPEAVMessageProxyReconnectAdapter@@AEBU_GUID@@AEBQEBG$$QEAPEAVHotKeyClient@@@Z @ 0x1801479D8 (--$MakeAndInitialize@VMessageProxyReconnectAdapter@@V1@AEBU_GUID@@AEBQEBGPEAVHotKeyClient@@@Deta.c)
 *     ?Initialize@SharedMessagePortRefPtr@@QEAAJW4InputCapability@@@Z @ 0x180148B14 (-Initialize@SharedMessagePortRefPtr@@QEAAJW4InputCapability@@@Z.c)
 */

__int64 __fastcall HotKeyClient::RuntimeClassInitialize(HotKeyClient *this, struct IHotKeyClientOwner *a2, char a3)
{
  int v6; // ebx
  __int64 v7; // rdx
  __int64 result; // rax
  _QWORD *v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // rsi
  _QWORD *v12; // rbx
  __int64 v13; // rcx
  int v14; // esi
  __int64 v15; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  unsigned int v17; // [rsp+78h] [rbp+10h] BYREF
  HotKeyClient *v18; // [rsp+88h] [rbp+20h] BYREF

  if ( !a2 )
  {
    v6 = -2147024809;
    v7 = 48LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"mincore\\textinput\\dev\\sharedlibs\\hotkeyclient\\hotkeyclient.cpp",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  v9 = (_QWORD *)((char *)this + 80);
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease((__int64 *)this + 10);
  v6 = CoreUIFactoryCreate(v9);
  if ( v6 < 0 )
  {
    v7 = 51LL;
    goto LABEL_3;
  }
  v6 = SharedMessagePortRefPtr::Initialize((char *)this + 64);
  if ( v6 < 0 )
  {
    v7 = 54LL;
    goto LABEL_3;
  }
  v10 = *v9;
  v17 = 0;
  v6 = (*(__int64 (__fastcall **)(__int64, GUID *, unsigned int *))(*(_QWORD *)v10 + 24LL))(
         v10,
         &GUID_647859d8_5046_411b_bd66_e49c8745ad3d,
         &v17);
  if ( v6 < 0 )
  {
    v7 = 60LL;
    goto LABEL_3;
  }
  v18 = this;
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)this + 13);
  v6 = Microsoft::WRL::Details::MakeAndInitialize<MessageProxyReconnectAdapter,MessageProxyReconnectAdapter,_GUID const &,unsigned short const * const &,HotKeyClient *>(
         (MessageProxyReconnectAdapter **)this + 13,
         &GUID_647859d8_5046_411b_bd66_e49c8745ad3d,
         (const unsigned __int16 **)&c_wszHotKeyProcessorEndpointName,
         &v18);
  if ( v6 < 0 )
  {
    v7 = 68LL;
    goto LABEL_3;
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD, GUID *, unsigned int *))(*(_QWORD *)*v9 + 24LL))(
         *v9,
         &GUID_f17ab79d_12a5_4878_ac23_c0eb1c6e1572,
         &v17);
  if ( v6 < 0 )
  {
    v7 = 73LL;
    goto LABEL_3;
  }
  v11 = *v9;
  v12 = (_QWORD *)((char *)this + 88);
  v13 = *((_QWORD *)this + 11);
  if ( v13 )
  {
    *v12 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  v14 = (*(__int64 (__fastcall **)(__int64, char *, _QWORD, _QWORD, _QWORD, _QWORD, char *))(*(_QWORD *)v11 + 32LL))(
          v11,
          (char *)this + 8,
          0LL,
          v17,
          0LL,
          *((_QWORD *)this + 9),
          (char *)this + 88);
  if ( v14 < 0 )
  {
    v15 = 83LL;
LABEL_18:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (__int64)"mincore\\textinput\\dev\\sharedlibs\\hotkeyclient\\hotkeyclient.cpp",
      (const char *)(unsigned int)v14);
    return (unsigned int)v14;
  }
  v14 = (*(__int64 (__fastcall **)(_QWORD, char *))(*(_QWORD *)*v12 + 64LL))(*v12, (char *)this + 144);
  if ( v14 < 0 )
  {
    v15 = 85LL;
    goto LABEL_18;
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD, char *))(*(_QWORD *)*v12 + 48LL))(*v12, (char *)this + 184);
  if ( v6 < 0 )
  {
    v7 = 86LL;
    goto LABEL_3;
  }
  *((_QWORD *)this + 7) = a2;
  result = 0LL;
  *((_BYTE *)this + 136) = a3;
  return result;
}
