/*
 * XREFs of ?DisplaySettingsChange@CAltTabViewHost@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x18038CB70
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068BA4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?DismissView@?$CMultitaskingViewHostBase@UIAltTabViewHost@@@@UEAAJXZ @ 0x180311300 (-DismissView@-$CMultitaskingViewHostBase@UIAltTabViewHost@@@@UEAAJXZ.c)
 */

__int64 __fastcall CAltTabViewHost::DisplaySettingsChange(__int64 a1, __int64 a2, char a3)
{
  __int64 v6; // rdx
  int v7; // ebx
  __int64 v9; // rdx
  int v10; // edi
  __int64 v11; // rdx
  int v12; // eax
  __int64 v13; // rcx
  int v14; // [rsp+20h] [rbp-38h] BYREF
  int v15; // [rsp+24h] [rbp-34h] BYREF
  __int128 v16; // [rsp+28h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  if ( !*(_QWORD *)(a1 + 144) )
  {
    v6 = 307LL;
LABEL_3:
    v7 = -2147023728;
    goto LABEL_4;
  }
  v9 = *(_QWORD *)(a1 + 168);
  if ( !v9 )
  {
    v6 = 308LL;
    goto LABEL_3;
  }
  v10 = (*(__int64 (__fastcall **)(__int64, __int64, int *))(*(_QWORD *)a2 + 96LL))(a2, v9, &v15);
  if ( v10 < 0 )
  {
    v11 = 311LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\alttabviewhost.cpp",
      (const char *)(unsigned int)v10);
    return (unsigned int)v10;
  }
  if ( v15 )
  {
    v14 = 1;
    if ( (a3 & 0x20) != 0 )
    {
      v12 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)a2 + 48LL))(a2, &v14);
      if ( v12 < 0 )
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x13C,
          (__int64)"pcshell\\twinui\\multitaskingview\\lib\\alttabviewhost.cpp",
          (const char *)(unsigned int)v12);
LABEL_16:
        v7 = CMultitaskingViewHostBase<IAltTabViewHost>::DismissView(a1 - 8);
        if ( v7 >= 0 )
          return (unsigned int)v7;
        v6 = 319LL;
LABEL_4:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v6,
          (__int64)"pcshell\\twinui\\multitaskingview\\lib\\alttabviewhost.cpp",
          (const char *)(unsigned int)v7);
        return (unsigned int)v7;
      }
      if ( !v14 )
        goto LABEL_16;
    }
    if ( (a3 & 0x10) != 0 )
    {
      v13 = *(_QWORD *)(a1 + 168);
      v16 = 0LL;
      v10 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v13 + 88LL))(v13, &v16);
      if ( v10 < 0 )
      {
        v11 = 325LL;
        goto LABEL_10;
      }
      v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int128 *))(**(_QWORD **)(a1 + 144) + 72LL))(
             *(_QWORD *)(a1 + 144),
             0LL,
             &v16);
      if ( v7 < 0 )
      {
        v6 = 326LL;
        goto LABEL_4;
      }
    }
  }
  return 0LL;
}
