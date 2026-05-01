/*
 * XREFs of ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@V?$VirtualDesktopNotificationForwarderHelper@VCVirtualDesktopNotifications@@@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@V?$VirtualDesktopNotificationForwarderHelper@VCVirtualDesktopNotifications@@@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x18040ECB4
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@V?$VirtualDesktopNotificationForwarderHelper@VCVirtualDesktopNotifications@@@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18040FD10 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_18040FD10.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18003C4F0 (InlineIsEqualGUID.c)
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18003C6B0 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,VirtualDesktopNotificationForwarderHelper<CVirtualDesktopNotifications>>>(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  _DWORD *v3; // rcx
  _QWORD *v4; // r8
  __int64 v5; // r9
  _DWORD *v6; // rcx
  void **v7; // r8
  void *v8; // r9
  _DWORD *v9; // rcx
  BOOL IsEqualGUID; // eax
  _DWORD *v11; // rcx
  __int64 v12; // r9
  int v13; // r11d
  const struct _GUID *v14; // r10
  int CanCastTo; // ebx

  *a3 = 0LL;
  if ( InlineIsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    *v4 = v5;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    return 0LL;
  }
  else
  {
    if ( InlineIsEqualGUID(v3, &GUID_81ae09de_340b_4b9f_9cba_61bb8e6a8a68)
      || InlineIsEqualGUID(v6, &GUID_0cd45e71_d927_4f15_8b0a_8fef525337bf) )
    {
      *v7 = v8;
      CanCastTo = 0;
    }
    else
    {
      IsEqualGUID = InlineIsEqualGUID(v9, &GUID_1ba7cf30_3591_43fa_abfa_4aaf7abeedb7);
      v13 = -2147467262;
      if ( IsEqualGUID || InlineIsEqualGUID(v11, &GUID_c179334c_4295_40d3_bea1_c654d965605a) )
      {
        *v7 = (void *)v12;
        CanCastTo = 0;
      }
      else
      {
        CanCastTo = Microsoft::WRL::FtmBase::CanCastTo((Microsoft::WRL::FtmBase *)(v12 + 8), v14, v7);
        if ( CanCastTo == v13 )
          CanCastTo = v13;
      }
      if ( CanCastTo == v13 )
        CanCastTo = v13;
    }
    if ( CanCastTo >= 0 )
      (*(void (__fastcall **)(void *))(*(_QWORD *)*v7 + 8LL))(*v7);
    return (unsigned int)CanCastTo;
  }
}
