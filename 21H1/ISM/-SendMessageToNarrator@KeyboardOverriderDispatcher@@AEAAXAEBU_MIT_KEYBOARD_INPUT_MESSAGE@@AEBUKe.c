/*
 * XREFs of ?SendMessageToNarrator@KeyboardOverriderDispatcher@@AEAAXAEBU_MIT_KEYBOARD_INPUT_MESSAGE@@AEBUKeyboardInputInfo@@@Z @ 0x1800B5934
 * Callers:
 *     ?AddMessage@KeyboardOverriderDispatcher@@QEAAXAEBU_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@AEAUKeyboardInputInfo@@@Z @ 0x1800B4DC8 (-AddMessage@KeyboardOverriderDispatcher@@QEAAXAEBU_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@AEAUKey.c)
 *     ?OnKeyProcessed@KeyboardOverriderDispatcher@@UEAAJ_N@Z @ 0x1800B5640 (-OnKeyProcessed@KeyboardOverriderDispatcher@@UEAAJ_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18003C480 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E3EC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 *     ?OnKey@SurrogateCharAccumulator@@QEAAXG_NAEA_NQEAGAEAH@Z @ 0x1800B5578 (-OnKey@SurrogateCharAccumulator@@QEAAXG_NAEA_NQEAGAEAH@Z.c)
 *     ?_Push_back_internal@?$deque@UKeyboardEvent@@V?$allocator@UKeyboardEvent@@@std@@@std@@AEAAXAEBUKeyboardEvent@@@Z @ 0x1800B62B8 (-_Push_back_internal@-$deque@UKeyboardEvent@@V-$allocator@UKeyboardEvent@@@std@@@std@@AEAAXAEBUK.c)
 *     ?CreateKeyboardEvent@InputServiceProcessor@@SA?AUKeyboardEvent@@QEBUKeyboardInputInfo@@@Z @ 0x180101B14 (-CreateKeyboardEvent@InputServiceProcessor@@SA-AUKeyboardEvent@@QEBUKeyboardInputInfo@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall KeyboardOverriderDispatcher::SendMessageToNarrator(
        KeyboardOverriderDispatcher *this,
        const struct _MIT_KEYBOARD_INPUT_MESSAGE *a2,
        const struct KeyboardInputInfo *a3)
{
  _OWORD *KeyboardEvent; // rax
  int *v7; // rcx
  __int64 v8; // rdx
  __int16 v9; // ax
  unsigned int v10; // edi
  __int64 **v11; // rsi
  _WORD *v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rax
  _OWORD *v15; // rax
  int *v16; // rcx
  __int64 v17; // r9
  unsigned __int64 v18; // rax
  int Shared; // eax
  int v20; // eax
  __int64 v21; // rcx
  int v22; // eax
  int v23; // eax
  int v24; // eax
  DWORD WindowThreadProcessId; // edi
  HWND ForegroundWindow; // rax
  HKL dwhkl; // rax
  __int16 v28; // di
  WCHAR v29; // cx
  __int64 v30; // r10
  __int64 (__fastcall *v31)(__int64, _QWORD, _QWORD, _QWORD, int, int *, _QWORD); // r11
  WCHAR *v32; // rax
  int v33; // edx
  int v34; // eax
  int cchBuff; // [rsp+20h] [rbp-E0h]
  int wFlags; // [rsp+28h] [rbp-D8h]
  WCHAR pwszBuff[2]; // [rsp+50h] [rbp-B0h] BYREF
  bool v38; // [rsp+54h] [rbp-ACh] BYREF
  int v39[2]; // [rsp+58h] [rbp-A8h] BYREF
  int v40[2]; // [rsp+60h] [rbp-A0h] BYREF
  WCHAR *v41; // [rsp+68h] [rbp-98h]
  _BYTE v42[304]; // [rsp+70h] [rbp-90h] BYREF
  int v43; // [rsp+1A0h] [rbp+A0h] BYREF
  unsigned __int16 v44; // [rsp+1A8h] [rbp+A8h]
  unsigned __int64 v45; // [rsp+1B0h] [rbp+B0h]
  __int64 v46; // [rsp+1B8h] [rbp+B8h]
  unsigned __int16 v47[4]; // [rsp+2D0h] [rbp+1D0h] BYREF
  _OWORD v48[2]; // [rsp+2D8h] [rbp+1D8h] BYREF
  __int64 v49; // [rsp+2F8h] [rbp+1F8h]
  wil::details::in1diag3 *retaddr; // [rsp+338h] [rbp+238h]

  if ( !*((_BYTE *)this + 728) )
  {
    *((_BYTE *)this + 728) = 1;
    KeyboardEvent = (_OWORD *)InputServiceProcessor::CreateKeyboardEvent(v42, a3);
    v7 = &v43;
    v8 = 2LL;
    do
    {
      *(_OWORD *)v7 = *KeyboardEvent;
      *((_OWORD *)v7 + 1) = KeyboardEvent[1];
      *((_OWORD *)v7 + 2) = KeyboardEvent[2];
      *((_OWORD *)v7 + 3) = KeyboardEvent[3];
      *((_OWORD *)v7 + 4) = KeyboardEvent[4];
      *((_OWORD *)v7 + 5) = KeyboardEvent[5];
      *((_OWORD *)v7 + 6) = KeyboardEvent[6];
      v7 += 32;
      *((_OWORD *)v7 - 1) = KeyboardEvent[7];
      KeyboardEvent += 8;
      --v8;
    }
    while ( v8 );
    *(_OWORD *)v7 = *KeyboardEvent;
    *((_OWORD *)v7 + 1) = KeyboardEvent[1];
    *((_QWORD *)v7 + 4) = *((_QWORD *)KeyboardEvent + 4);
    *(_QWORD *)v39 = 0LL;
    MsgBlobCreateShared((char *)this + 472, 256LL, v39);
    if ( v43 )
    {
      if ( v43 == 1 )
      {
        v24 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, _QWORD))(**((_QWORD **)this + 55) + 32LL))(
                *((_QWORD *)this + 55),
                v44,
                WORD1(v45),
                v46,
                *(_QWORD *)v39);
        if ( v24 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            248LL,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\keyboar"
                     "doverriderdispatcher.cpp",
            (const char *)(unsigned int)v24);
          __debugbreak();
        }
      }
      else if ( v43 == 2 )
      {
        v9 = *((_WORD *)a2 + 135);
        if ( (v9 & 0x100) != 0 )
        {
          std::deque<KeyboardEvent>::_Push_back_internal((char *)this + 736, &v43);
          (*(void (__fastcall **)(KeyboardOverriderDispatcher *, _QWORD))(*(_QWORD *)this + 32LL))(this, 0LL);
        }
        else
        {
          if ( (v9 & 0x200) != 0 )
          {
            memset(v48, 0, sizeof(v48));
            v49 = 0LL;
            v10 = 0;
            v11 = (__int64 **)((char *)this + 736);
            std::deque<KeyboardEvent>::_Push_back_internal((char *)this + 736, &v43);
            v12 = v48;
            while ( 1 )
            {
              v13 = *((_QWORD *)this + 96);
              if ( !v13 || v10 >= 0x14 )
                break;
              if ( *v11 )
                v14 = **v11;
              else
                v14 = 0LL;
              v15 = *(_OWORD **)(*(_QWORD *)(v14 + 8) + 8 * (*((_QWORD *)this + 95) & (*(_QWORD *)(v14 + 16) - 1LL)));
              v16 = &v43;
              v17 = 2LL;
              do
              {
                *(_OWORD *)v16 = *v15;
                *((_OWORD *)v16 + 1) = v15[1];
                *((_OWORD *)v16 + 2) = v15[2];
                *((_OWORD *)v16 + 3) = v15[3];
                *((_OWORD *)v16 + 4) = v15[4];
                *((_OWORD *)v16 + 5) = v15[5];
                *((_OWORD *)v16 + 6) = v15[6];
                v16 += 32;
                *((_OWORD *)v16 - 1) = v15[7];
                v15 += 8;
                --v17;
              }
              while ( v17 );
              *(_OWORD *)v16 = *v15;
              *((_OWORD *)v16 + 1) = v15[1];
              *((_QWORD *)v16 + 4) = *((_QWORD *)v15 + 4);
              *((_QWORD *)this + 96) = v13 - 1;
              if ( v13 == 1 )
                *((_QWORD *)this + 95) = 0LL;
              else
                ++*((_QWORD *)this + 95);
              LOWORD(v18) = 0;
              if ( v43 == 2 )
                v18 = HIDWORD(v45);
              if ( (v44 & 1) != 0 && (_WORD)v18 )
              {
                *v12 = v18;
                ++v10;
                ++v12;
              }
            }
            *(_QWORD *)v47 = 0LL;
            Shared = MsgStringCreateShared(v48, v10, v47);
            if ( Shared < 0 )
            {
              wil::details::in1diag3::FailFast_Hr(
                retaddr,
                200LL,
                (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\key"
                         "boardoverriderdispatcher.cpp",
                (const char *)(unsigned int)Shared);
              __debugbreak();
            }
            v20 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + 55) + 40LL))(
                    *((_QWORD *)this + 55),
                    5LL,
                    231LL);
            if ( v20 < 0 )
              wil::details::in1diag3::FailFast_Hr(
                retaddr,
                209LL,
                (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\key"
                         "boardoverriderdispatcher.cpp",
                (const char *)(unsigned int)v20);
            v21 = *(_QWORD *)v47;
          }
          else
          {
            *(_DWORD *)v47 = 0;
            v47[2] = 0;
            *(_DWORD *)pwszBuff = 0;
            SurrogateCharAccumulator::OnKey(
              (KeyboardOverriderDispatcher *)((char *)this + 434),
              *((_WORD *)a2 + 138),
              (v44 & 4) != 0,
              &v38,
              v47,
              (int *)pwszBuff);
            *(_QWORD *)v40 = 0LL;
            v22 = MsgStringCreateShared(v47, *(unsigned int *)pwszBuff, v40);
            if ( v22 < 0 )
            {
              wil::details::in1diag3::FailFast_Hr(
                retaddr,
                229LL,
                (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\key"
                         "boardoverriderdispatcher.cpp",
                (const char *)(unsigned int)v22);
              __debugbreak();
            }
            LOWORD(wFlags) = 0;
            v23 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD, _QWORD, int, _WORD, _QWORD))(**((_QWORD **)this + 55) + 40LL))(
                    *((_QWORD *)this + 55),
                    v44,
                    231LL,
                    (unsigned __int16)v45,
                    *(_QWORD *)v40,
                    wFlags,
                    0,
                    *(_QWORD *)v39);
            if ( v23 < 0 )
              wil::details::in1diag3::FailFast_Hr(
                retaddr,
                238LL,
                (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\key"
                         "boardoverriderdispatcher.cpp",
                (const char *)(unsigned int)v23);
            v21 = *(_QWORD *)v40;
          }
          if ( v21 )
            MsgRelease();
        }
      }
    }
    else
    {
      WindowThreadProcessId = 0;
      ForegroundWindow = GetForegroundWindow();
      if ( ForegroundWindow )
        WindowThreadProcessId = GetWindowThreadProcessId(ForegroundWindow, 0LL);
      dwhkl = GetKeyboardLayout(WindowThreadProcessId);
      *(_DWORD *)pwszBuff = 0;
      v28 = v45;
      if ( ToUnicodeEx(
             *((unsigned __int16 *)a3 + 18),
             (unsigned __int16)v45,
             (const BYTE *)this + 472,
             pwszBuff,
             1,
             4u,
             dwhkl) == 1 )
      {
        v29 = pwszBuff[0];
      }
      else
      {
        v29 = 0;
        pwszBuff[0] = 0;
      }
      v30 = *((_QWORD *)this + 55);
      v31 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, int, int *, _QWORD))(*(_QWORD *)v30 + 24LL);
      v32 = pwszBuff;
      v41 = pwszBuff;
      v33 = 0;
      if ( v29 )
      {
        do
        {
          ++v32;
          ++v33;
        }
        while ( *v32 );
      }
      v40[0] = v33 | 0x80000000;
      LOWORD(cchBuff) = v28;
      v34 = v31(v30, HIWORD(v45), v44, *((unsigned __int16 *)a3 + 18), cchBuff, v40, *(_QWORD *)v39);
      if ( v34 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          275LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\keyboardo"
                   "verriderdispatcher.cpp",
          (const char *)(unsigned int)v34);
        __debugbreak();
      }
    }
    if ( *(_QWORD *)v39 )
      MsgRelease();
  }
}
