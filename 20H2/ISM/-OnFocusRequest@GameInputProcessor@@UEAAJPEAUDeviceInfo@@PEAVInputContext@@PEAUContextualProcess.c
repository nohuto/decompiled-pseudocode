/*
 * XREFs of ?OnFocusRequest@GameInputProcessor@@UEAAJPEAUDeviceInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x18000BB80
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800357E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ @ 0x18003B3CC (-_Tidy@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003FA98 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800400D0 (-_FailFast_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetSingleton@GameInputServerProxy@@SAJPEAPEAV1@@Z @ 0x180042630 (-GetSingleton@GameInputServerProxy@@SAJPEAPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag0@details@wil@@YAXJ@Z @ 0x1800BEBB0 (-Return_Hr@in1diag0@details@wil@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GameInputProcessor::OnFocusRequest(
        GameInputProcessor *this,
        struct DeviceInfo *a2,
        struct InputContext *a3,
        struct ContextualProcessorInitialState *a4)
{
  int Singleton; // eax
  int v8; // edx
  int v9; // edi
  struct GameInputServerProxy *v10; // rax
  unsigned int *v11; // rdi
  unsigned int *v12; // rbp
  int v13; // eax
  __int64 v14; // rdx
  int v15; // eax
  struct GameInputServerProxy *v17[5]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( gbIsDWMNoRawGameController )
  {
    *(_DWORD *)a4 = 0;
    return 0LL;
  }
  if ( !*((_QWORD *)this + 4) )
  {
    *((_QWORD *)this + 4) = 0LL;
    Singleton = GameInputServerProxy::GetSingleton(v17);
    v9 = Singleton;
    if ( Singleton < 0 )
    {
      *((_QWORD *)this + 4) = 0LL;
      wil::details::in1diag0::Return_Hr((wil::details::in1diag0 *)(unsigned int)Singleton, v8);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x187,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\gameinput\\system\\lib"
                      "\\gameinputprocessor.cpp",
        (const char *)(unsigned int)v9,
        (int)v17[0]);
      goto LABEL_19;
    }
    v10 = v17[0];
    if ( v17[0] )
      v10 = (struct GameInputServerProxy *)((char *)v17[0] + 16);
    *((_QWORD *)this + 4) = v10;
    if ( v10 )
    {
      v11 = (unsigned int *)*((_QWORD *)this + 21);
      v12 = (unsigned int *)*((_QWORD *)this + 22);
      while ( v11 != v12 )
      {
        if ( (*(int (__fastcall **)(_QWORD, _QWORD, struct GameInputServerProxy **))(**((_QWORD **)this + 3) + 24LL))(
               *((_QWORD *)this + 3),
               *v11,
               v17) >= 0 )
        {
          (*(void (__fastcall **)(_QWORD, char *, _QWORD))(**((_QWORD **)this + 4) + 24LL))(
            *((_QWORD *)this + 4),
            (char *)v17[0] + 76,
            *(unsigned int *)v17[0]);
          if ( *((_DWORD *)v17[0] + 1) == 4 && !*((_BYTE *)this + 192) )
          {
            v13 = NtMITSetKeyboardInputRoutingPolicy(1LL);
            if ( v13 < 0 )
            {
              wil::details::in1diag3::_FailFast_NtStatus(
                retaddr,
                (void *)0x19B,
                (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\gameinput\\sys"
                              "tem\\lib\\gameinputprocessor.cpp",
                (const char *)(unsigned int)v13,
                (int)v17[0]);
              JUMPOUT(0x18000BD58LL);
            }
            *((_BYTE *)this + 192) = 1;
          }
        }
        ++v11;
      }
      v14 = *((_QWORD *)this + 21);
      *((_QWORD *)this + 22) = v14;
      if ( *((_QWORD *)this + 23) != v14 )
        std::vector<Windows::UI::Color>::_Tidy((char *)this + 168);
    }
  }
  v9 = 0;
LABEL_19:
  if ( v9 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xD8,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\gameinput\\system\\lib\\"
                    "gameinputprocessor.cpp",
      (const char *)(unsigned int)v9,
      (int)v17[0]);
  v15 = *((_DWORD *)a2 + 1);
  if ( (v15 & 0x40) != 0 )
  {
    *(_DWORD *)a4 = 2;
  }
  else if ( (v15 & 2) != 0 || *((_DWORD *)a2 + 2) >= 0x60Cu && *((_WORD *)a2 + 38) && v15 == 4 )
  {
    *(_DWORD *)a4 = 3;
  }
  else
  {
    *(_DWORD *)a4 = 0;
  }
  return 0LL;
}
