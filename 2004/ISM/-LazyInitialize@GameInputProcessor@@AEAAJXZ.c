/*
 * XREFs of ?LazyInitialize@GameInputProcessor@@AEAAJXZ @ 0x18003772C
 * Callers:
 *     ?OnDeviceAttach@GameInputProcessor@@AEAAXPEAUDeviceInfo@@@Z @ 0x180037620 (-OnDeviceAttach@GameInputProcessor@@AEAAXPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceRemoval@GameInputProcessor@@AEAAXPEAUDeviceInfo@@@Z @ 0x18017BDF0 (-OnDeviceRemoval@GameInputProcessor@@AEAAXPEAUDeviceInfo@@@Z.c)
 *     ?OnHitTest@GameInputProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x18017BE80 (-OnHitTest@GameInputProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorIn.c)
 *     ?OnInput@GameInputProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x18017BEF0 (-OnInput@GameInputProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorRespon.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035770 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ @ 0x18003B34C (-_Tidy@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ.c)
 *     ?_FailFast_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180040160 (-_FailFast_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetSingleton@GameInputServerProxy@@SAJPEAPEAV1@@Z @ 0x180042694 (-GetSingleton@GameInputServerProxy@@SAJPEAPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GameInputProcessor::LazyInitialize(GameInputProcessor *this)
{
  int Singleton; // ebx
  struct GameInputServerProxy *v3; // rax
  unsigned int *v5; // rsi
  unsigned int *v6; // rbp
  int v7; // eax
  __int64 v8; // rdx
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct GameInputServerProxy *v11; // [rsp+30h] [rbp+8h] BYREF

  if ( !*((_QWORD *)this + 4) )
  {
    *((_QWORD *)this + 4) = 0LL;
    Singleton = GameInputServerProxy::GetSingleton(&v11);
    if ( Singleton < 0 )
    {
      v3 = 0LL;
    }
    else
    {
      v3 = v11;
      if ( v11 )
        v3 = (struct GameInputServerProxy *)((char *)v11 + 16);
      Singleton = 0;
    }
    *((_QWORD *)this + 4) = v3;
    if ( Singleton < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x187,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\gameinput\\system\\lib\\gam"
                 "einputprocessor.cpp",
        (const char *)(unsigned int)Singleton);
      return (unsigned int)Singleton;
    }
    if ( v3 )
    {
      v5 = (unsigned int *)*((_QWORD *)this + 21);
      v6 = (unsigned int *)*((_QWORD *)this + 22);
      while ( v5 != v6 )
      {
        if ( (*(int (__fastcall **)(_QWORD, _QWORD, struct GameInputServerProxy **))(**((_QWORD **)this + 3) + 24LL))(
               *((_QWORD *)this + 3),
               *v5,
               &v11) >= 0 )
        {
          (*(void (__fastcall **)(_QWORD, char *, _QWORD))(**((_QWORD **)this + 4) + 24LL))(
            *((_QWORD *)this + 4),
            (char *)v11 + 76,
            *(unsigned int *)v11);
          if ( *((_DWORD *)v11 + 1) == 4 && !*((_BYTE *)this + 192) )
          {
            v7 = NtMITSetKeyboardInputRoutingPolicy(1LL);
            if ( v7 < 0 )
            {
              wil::details::in1diag3::_FailFast_NtStatus(
                retaddr,
                (void *)0x19B,
                (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\gameinput\\sys"
                              "tem\\lib\\gameinputprocessor.cpp",
                (const char *)(unsigned int)v7,
                v9);
              JUMPOUT(0x180037876LL);
            }
            *((_BYTE *)this + 192) = 1;
          }
        }
        ++v5;
      }
      v8 = *((_QWORD *)this + 21);
      *((_QWORD *)this + 22) = v8;
      if ( *((_QWORD *)this + 23) != v8 )
        std::vector<Windows::UI::Color>::_Tidy((char *)this + 168);
    }
  }
  return 0LL;
}
