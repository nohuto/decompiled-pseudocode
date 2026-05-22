/*
 * XREFs of ?OnFocusRequest@GameInputProcessor@@UEAAJPEAUDeviceInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x18000BB80
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035710 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ @ 0x18003B2EC (-_Tidy@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003FAC8 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800404C4 (-_FailFast_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetSingleton@GameInputServerProxy@@SAJPEAPEAV1@@Z @ 0x180042CA4 (-GetSingleton@GameInputServerProxy@@SAJPEAPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GameInputProcessor::OnFocusRequest(
        GameInputProcessor *this,
        struct DeviceInfo *a2,
        struct InputContext *a3,
        struct ContextualProcessorInitialState *a4)
{
  int Singleton; // edi
  struct GameInputServerProxy *v8; // rax
  unsigned int *v9; // rdi
  unsigned int *v10; // rbp
  int v11; // eax
  __int64 v12; // rdx
  int v13; // eax
  struct GameInputServerProxy *v15[5]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( gbIsDWMNoRawGameController )
  {
    *(_DWORD *)a4 = 0;
    return 0LL;
  }
  if ( *((_QWORD *)this + 4) )
    goto LABEL_23;
  *((_QWORD *)this + 4) = 0LL;
  Singleton = GameInputServerProxy::GetSingleton(v15);
  if ( Singleton < 0 )
  {
    v8 = 0LL;
  }
  else
  {
    v8 = v15[0];
    if ( v15[0] )
      v8 = (struct GameInputServerProxy *)((char *)v15[0] + 16);
    Singleton = 0;
  }
  *((_QWORD *)this + 4) = v8;
  if ( Singleton >= 0 )
  {
    if ( v8 )
    {
      v9 = (unsigned int *)*((_QWORD *)this + 21);
      v10 = (unsigned int *)*((_QWORD *)this + 22);
      while ( v9 != v10 )
      {
        if ( (*(int (__fastcall **)(_QWORD, _QWORD, struct GameInputServerProxy **))(**((_QWORD **)this + 3) + 24LL))(
               *((_QWORD *)this + 3),
               *v9,
               v15) >= 0 )
        {
          (*(void (__fastcall **)(_QWORD, char *, _QWORD))(**((_QWORD **)this + 4) + 24LL))(
            *((_QWORD *)this + 4),
            (char *)v15[0] + 76,
            *(unsigned int *)v15[0]);
          if ( *((_DWORD *)v15[0] + 1) == 4 && !*((_BYTE *)this + 192) )
          {
            v11 = NtMITSetKeyboardInputRoutingPolicy(1LL);
            if ( v11 < 0 )
            {
              wil::details::in1diag3::_FailFast_NtStatus(
                retaddr,
                (void *)0x19B,
                (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\gameinput\\sys"
                              "tem\\lib\\gameinputprocessor.cpp",
                (const char *)(unsigned int)v11,
                (int)v15[0]);
              JUMPOUT(0x18000BD55LL);
            }
            *((_BYTE *)this + 192) = 1;
          }
        }
        ++v9;
      }
      v12 = *((_QWORD *)this + 21);
      *((_QWORD *)this + 22) = v12;
      if ( *((_QWORD *)this + 23) != v12 )
        std::vector<Windows::UI::Color>::_Tidy((char *)this + 168);
    }
LABEL_23:
    Singleton = 0;
    goto LABEL_24;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x187,
    (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\gameinput\\system\\lib\\ga"
                  "meinputprocessor.cpp",
    (const char *)(unsigned int)Singleton,
    (int)v15[0]);
LABEL_24:
  if ( Singleton < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xD8,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\gameinput\\system\\lib\\"
                    "gameinputprocessor.cpp",
      (const char *)(unsigned int)Singleton,
      (int)v15[0]);
  v13 = *((_DWORD *)a2 + 1);
  if ( (v13 & 0x40) != 0 )
  {
    *(_DWORD *)a4 = 2;
  }
  else if ( (v13 & 2) != 0 || *((_DWORD *)a2 + 2) >= 0x60Cu && *((_WORD *)a2 + 38) && v13 == 4 )
  {
    *(_DWORD *)a4 = 3;
  }
  else
  {
    *(_DWORD *)a4 = 0;
  }
  return 0LL;
}
