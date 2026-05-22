/*
 * XREFs of ?LazyInitialize@GameInputProcessor@@AEAAJXZ @ 0x18003779C
 * Callers:
 *     ?OnDeviceAttach@GameInputProcessor@@AEAAXPEAUDeviceInfo@@@Z @ 0x180037690 (-OnDeviceAttach@GameInputProcessor@@AEAAXPEAUDeviceInfo@@@Z.c)
 *     ?OnDeviceRemoval@GameInputProcessor@@AEAAXPEAUDeviceInfo@@@Z @ 0x18017BD60 (-OnDeviceRemoval@GameInputProcessor@@AEAAXPEAUDeviceInfo@@@Z.c)
 *     ?OnHitTest@GameInputProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x18017BDF0 (-OnHitTest@GameInputProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorIn.c)
 *     ?OnInput@GameInputProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x18017BE60 (-OnInput@GameInputProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorRespon.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800357E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ @ 0x18003B3CC (-_Tidy@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ.c)
 *     ?_FailFast_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800400D0 (-_FailFast_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetSingleton@GameInputServerProxy@@SAJPEAPEAV1@@Z @ 0x180042630 (-GetSingleton@GameInputServerProxy@@SAJPEAPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag0@details@wil@@YAXJ@Z @ 0x1800BEBB0 (-Return_Hr@in1diag0@details@wil@@YAXJ@Z.c)
 */

__int64 __fastcall GameInputProcessor::LazyInitialize(GameInputProcessor *this)
{
  int Singleton; // eax
  int v3; // edx
  unsigned int v4; // ebx
  struct GameInputServerProxy *v5; // rax
  unsigned int *v6; // rsi
  unsigned int *v7; // rbp
  int v8; // eax
  __int64 v9; // rdx
  int v11; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct GameInputServerProxy *v13; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_QWORD *)this + 4) )
    return 0LL;
  *((_QWORD *)this + 4) = 0LL;
  Singleton = GameInputServerProxy::GetSingleton(&v13);
  v4 = Singleton;
  if ( Singleton >= 0 )
  {
    v5 = v13;
    if ( v13 )
      v5 = (struct GameInputServerProxy *)((char *)v13 + 16);
    *((_QWORD *)this + 4) = v5;
    if ( v5 )
    {
      v6 = (unsigned int *)*((_QWORD *)this + 21);
      v7 = (unsigned int *)*((_QWORD *)this + 22);
      while ( v6 != v7 )
      {
        if ( (*(int (__fastcall **)(_QWORD, _QWORD, struct GameInputServerProxy **))(**((_QWORD **)this + 3) + 24LL))(
               *((_QWORD *)this + 3),
               *v6,
               &v13) >= 0 )
        {
          (*(void (__fastcall **)(_QWORD, char *, _QWORD))(**((_QWORD **)this + 4) + 24LL))(
            *((_QWORD *)this + 4),
            (char *)v13 + 76,
            *(unsigned int *)v13);
          if ( *((_DWORD *)v13 + 1) == 4 && !*((_BYTE *)this + 192) )
          {
            v8 = NtMITSetKeyboardInputRoutingPolicy(1LL);
            if ( v8 < 0 )
            {
              wil::details::in1diag3::_FailFast_NtStatus(
                retaddr,
                (void *)0x19B,
                (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\gameinput\\sys"
                              "tem\\lib\\gameinputprocessor.cpp",
                (const char *)(unsigned int)v8,
                v11);
              JUMPOUT(0x1800378EALL);
            }
            *((_BYTE *)this + 192) = 1;
          }
        }
        ++v6;
      }
      v9 = *((_QWORD *)this + 21);
      *((_QWORD *)this + 22) = v9;
      if ( *((_QWORD *)this + 23) != v9 )
        std::vector<Windows::UI::Color>::_Tidy((char *)this + 168);
    }
    return 0LL;
  }
  *((_QWORD *)this + 4) = 0LL;
  wil::details::in1diag0::Return_Hr((wil::details::in1diag0 *)(unsigned int)Singleton, v3);
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x187,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\gameinput\\system\\lib\\gameinputprocessor.cpp",
    (const char *)v4);
  return v4;
}
