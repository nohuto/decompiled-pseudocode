/*
 * XREFs of ?RegisterHotKeyClient@HotKeyProcessor@@UEAAJUtagMsgRoutingInfo@@_NU_GUID@@@Z @ 0x1801A1290
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EF94 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180037660 (-InternalRelease@-$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 *     ?FailFastWithHR@@YAXJ_K0@Z @ 0x1801489BC (-FailFastWithHR@@YAXJ_K0@Z.c)
 *     ??$MakeAndInitialize@VHotkeyClientRegistration@@V1@PEAUIMessageProxy@@AEA_NAEAU_GUID@@@Details@WRL@Microsoft@@YAJPEAPEAVHotkeyClientRegistration@@$$QEAPEAUIMessageProxy@@AEA_NAEAU_GUID@@@Z @ 0x18019CE38 (--$MakeAndInitialize@VHotkeyClientRegistration@@V1@PEAUIMessageProxy@@AEA_NAEAU_GUID@@@Details@W.c)
 *     ??$_Insert@AEBV?$ComPtr@VHotkeyClientRegistration@@@WRL@Microsoft@@@?$list@V?$ComPtr@VHotkeyClientRegistration@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VHotkeyClientRegistration@@@WRL@Microsoft@@@std@@@std@@QEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@V?$ComPtr@VHotkeyClientRegistration@@@WRL@Microsoft@@@std@@@std@@U_Iterator_base0@2@@1@AEBV?$ComPtr@VHotkeyClientRegistration@@@WRL@Microsoft@@@Z @ 0x18019D89C (--$_Insert@AEBV-$ComPtr@VHotkeyClientRegistration@@@WRL@Microsoft@@@-$list@V-$ComPtr@VHotkeyClie.c)
 *     ?FindRegisteredClient@HotKeyProcessor@@AEAAJAEBUMessageObjectID@@PEAPEAVHotkeyClientRegistration@@@Z @ 0x1801A018C (-FindRegisteredClient@HotKeyProcessor@@AEAAJAEBUMessageObjectID@@PEAPEAVHotkeyClientRegistration.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall HotKeyProcessor::RegisterHotKeyClient(unsigned __int64 a1, __int64 a2, bool a3, struct _GUID *a4)
{
  int v7; // eax
  int v8; // ebx
  ULONG_PTR v9; // r8
  __int64 v10; // rbx
  int v11; // eax
  int RegisteredClient; // eax
  int v13; // eax
  int v14; // eax
  __int64 v15; // rcx
  __int64 v17; // [rsp+0h] [rbp-98h] BYREF
  bool v18; // [rsp+30h] [rbp-68h] BYREF
  struct HotkeyClientRegistration *v19; // [rsp+38h] [rbp-60h] BYREF
  struct IMessageProxy *v20; // [rsp+40h] [rbp-58h] BYREF
  unsigned int v21; // [rsp+48h] [rbp-50h] BYREF
  struct IMessageProxy *v22; // [rsp+50h] [rbp-48h] BYREF
  __int64 v23; // [rsp+58h] [rbp-40h] BYREF
  int v24; // [rsp+60h] [rbp-38h]
  ULONG_PTR retaddr; // [rsp+98h] [rbp+0h]

  v18 = a3;
  v21 = 0;
  v23 = 0LL;
  v24 = 0;
  v20 = 0LL;
  v19 = 0LL;
  v7 = (*(__int64 (__fastcall **)(_QWORD, GUID *, unsigned int *))(**(_QWORD **)(a1 + 128) + 24LL))(
         *(_QWORD *)(a1 + 128),
         &GUID_f17ab79d_12a5_4878_ac23_c0eb1c6e1572,
         &v21);
  v8 = v7;
  if ( v7 < 0 )
  {
    if ( v7 == -2147024882 )
      FailFastWithHR(-2147024882, retaddr, 0x81uLL);
    v9 = 129LL;
LABEL_5:
    FailFastWithHR(v8, retaddr, v9);
    goto LABEL_31;
  }
  v10 = *(_QWORD *)(a1 + 128);
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease((__int64 *)&v20);
  v8 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, struct IMessageProxy **))(*(_QWORD *)v10 + 48LL))(
         v10,
         a2,
         v21,
         &v20);
  if ( ((v8 + 2018375679) & 0xFFFFFFF3) == 0 && v8 != -2018375667 )
  {
    v8 = 0;
    goto LABEL_31;
  }
  if ( v8 < 0 )
  {
    if ( v8 == -2147024882 )
      FailFastWithHR(-2147024882, retaddr, 0x96uLL);
    v9 = 150LL;
    goto LABEL_5;
  }
  v11 = (*(__int64 (__fastcall **)(struct IMessageProxy *, __int64 *))(*(_QWORD *)v20 + 24LL))(v20, &v23);
  v8 = v11;
  if ( v11 < 0 )
  {
    if ( v11 == -2147024882 )
      FailFastWithHR(-2147024882, retaddr, 0x9CuLL);
    v9 = 156LL;
    goto LABEL_5;
  }
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v19);
  RegisteredClient = HotKeyProcessor::FindRegisteredClient(
                       (HotKeyProcessor *)a1,
                       (const struct MessageObjectID *)&v23,
                       &v19);
  v8 = RegisteredClient;
  if ( RegisteredClient < 0 )
  {
    if ( RegisteredClient == -2147024882 )
      FailFastWithHR(-2147024882, retaddr, 0x9DuLL);
    v9 = 157LL;
    goto LABEL_5;
  }
  if ( v19 )
  {
    Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease((__int64 *)&v20);
    goto LABEL_31;
  }
  v13 = (*(__int64 (__fastcall **)(struct IMessageProxy *, _QWORD))(*(_QWORD *)v20 + 56LL))(
          v20,
          (a1 + 8) & ((unsigned __int128)-(__int128)a1 >> 64));
  v8 = v13;
  if ( v13 < 0 )
  {
    if ( v13 == -2147024882 )
      FailFastWithHR(-2147024882, retaddr, 0xA5uLL);
    v9 = 165LL;
    goto LABEL_5;
  }
  v22 = v20;
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v19);
  v14 = Microsoft::WRL::Details::MakeAndInitialize<HotkeyClientRegistration,HotkeyClientRegistration,IMessageProxy *,bool &,_GUID &>(
          (__int64 *)&v19,
          &v22,
          &v18,
          a4);
  v8 = v14;
  if ( v14 < 0 )
  {
    if ( v14 == -2147024882 )
      FailFastWithHR(-2147024882, retaddr, 0xAAuLL);
    v9 = 170LL;
    goto LABEL_5;
  }
  try
  {
    std::list<Microsoft::WRL::ComPtr<HotkeyClientRegistration>>::_Insert<Microsoft::WRL::ComPtr<HotkeyClientRegistration> const &>(
      a1 + 24,
      *(_QWORD *)(a1 + 24),
      &v19);
  }
  catch ( std::bad_alloc )
  {
    LODWORD(v22) = -2147024882;
    if ( (Microsoft_WindowsPhone_InputEnableBits & 1) != 0 )
      McTemplateU0sqq_EventWriteTransfer(v15, (__int64)&v17, "HotKeyProcessor::RegisterHotKeyClient", 172LL, 14);
    v8 = (int)v22;
  }
LABEL_31:
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v19);
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease((__int64 *)&v20);
  return (unsigned int)v8;
}
