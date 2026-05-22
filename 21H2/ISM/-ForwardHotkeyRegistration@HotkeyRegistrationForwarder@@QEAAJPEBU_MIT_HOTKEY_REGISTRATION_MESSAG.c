/*
 * XREFs of ?ForwardHotkeyRegistration@HotkeyRegistrationForwarder@@QEAAJPEBU_MIT_HOTKEY_REGISTRATION_MESSAGE@@@Z @ 0x1800BB2E0
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_2e2a86d711a7dc5ea8b0521d0b687de5__void__MIT_HOTKEY_REGISTRATION_MESSAGE_const___::_Do_call @ 0x1800B31D0 (std--_Func_impl_no_alloc__lambda_2e2a86d711a7dc5ea8b0521d0b687de5__void__MIT_HOTKEY_ea_1800B31D0.c)
 *     ?NotifyHotkeyRegistrationChanged@PenEventsDispatcherPrincipal@@QEAAJPEAVBamoPenEventsClientProxy@@W4PenHotkeyId@@_N@Z @ 0x180133650 (-NotifyHotkeyRegistrationChanged@PenEventsDispatcherPrincipal@@QEAAJPEAVBamoPenEventsClientProxy.c)
 * Callees:
 *     __security_check_cookie @ 0x18003C220 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180040458 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memmove_0 @ 0x18004B267 (memmove_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ??$_Emplace_reallocate@AEBUHotKeyRegistrationData@@@?$vector@UHotKeyRegistrationData@@V?$allocator@UHotKeyRegistrationData@@@std@@@std@@QEAAPEAUHotKeyRegistrationData@@QEAU2@AEBU2@@Z @ 0x1800BB144 (--$_Emplace_reallocate@AEBUHotKeyRegistrationData@@@-$vector@UHotKeyRegistrationData@@V-$allocat.c)
 */

__int64 __fastcall HotkeyRegistrationForwarder::ForwardHotkeyRegistration(
        HotkeyRegistrationForwarder *this,
        const struct _MIT_HOTKEY_REGISTRATION_MESSAGE *a2,
        __int64 a3,
        const char *a4)
{
  _DWORD *v6; // rdx
  const void **v7; // rcx
  _WORD *v8; // rbx
  __int64 v9; // xmm1_8
  __int64 v10; // r8
  __int64 *v11; // rcx
  __int64 v12; // rax
  int v13; // eax
  __int64 *v14; // rcx
  __int64 v15; // rax
  int v16; // eax
  __int64 v18; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v19; // [rsp+38h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v6 = (_DWORD *)*((_QWORD *)this + 3);
  v7 = (const void **)((char *)this + 16);
  v8 = *v7;
  if ( *v7 != v6 )
  {
    a4 = (const char *)*((unsigned int *)a2 + 1);
    do
    {
      if ( *(_QWORD *)((char *)a2 + 4) == *(_QWORD *)v8
        && *((unsigned __int8 *)a2 + 14) == v8[5]
        && ((*((_BYTE *)a2 + 12) ^ *((_BYTE *)v8 + 8)) & 0xF) == 0 )
      {
        break;
      }
      v8 += 6;
    }
    while ( v8 != (_WORD *)v6 );
  }
  if ( *(_DWORD *)a2 )
  {
    if ( v8 == (_WORD *)v6 )
    {
      try
      {
        v18 = *(_QWORD *)((char *)a2 + 4);
        LOWORD(v19) = *((_WORD *)a2 + 6);
        HIWORD(v19) = *((unsigned __int8 *)a2 + 14);
        if ( v7[2] == v6 )
        {
          std::vector<HotKeyRegistrationData>::_Emplace_reallocate<HotKeyRegistrationData const &>(
            v7,
            v6,
            (__int64)&v18);
          v10 = v19;
          v9 = v18;
        }
        else
        {
          v9 = v18;
          *(_QWORD *)v6 = v18;
          v10 = v19;
          v6[2] = v19;
          v7[1] = (char *)v7[1] + 12;
        }
        v11 = (__int64 *)*((_QWORD *)this + 6);
        if ( v11 )
        {
          v12 = *v11;
          v18 = v9;
          v19 = v10;
          LOBYTE(v10) = 1;
          v13 = (*(__int64 (__fastcall **)(__int64 *, __int64 *, __int64))(v12 + 488))(v11, &v18, v10);
          if ( v13 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              61LL,
              (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\hotkeyregistrationforwarder\\hotkeyregistrat"
                       "ionforwarder.cpp",
              (const char *)(unsigned int)v13);
        }
      }
      catch ( ... )
      {
        return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                               retaddr,
                               (void *)0x40,
                               (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\hotkeyregistrationforwarder"
                                        "\\hotkeyregistrationforwarder.cpp",
                               a4);
      }
    }
  }
  else if ( v8 != (_WORD *)v6 )
  {
    v14 = (__int64 *)*((_QWORD *)this + 6);
    if ( v14 )
    {
      v15 = *v14;
      v18 = *(_QWORD *)v8;
      v19 = *((_DWORD *)v8 + 2);
      v16 = (*(__int64 (__fastcall **)(__int64 *, __int64 *, _QWORD))(v15 + 488))(v14, &v18, 0LL);
      if ( v16 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          74LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\hotkeyregistrationforwarder\\hotkeyregistrationforwarder.cpp",
          (const char *)(unsigned int)v16);
    }
    memmove_0(v8, v8 + 6, *((_QWORD *)this + 3) - (_QWORD)(v8 + 6));
    *((_QWORD *)this + 3) -= 12LL;
  }
  return 0LL;
}
