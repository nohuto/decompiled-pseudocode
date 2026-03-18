/*
 * XREFs of xxxBroadcastMessageEx @ 0x1C0038FD0
 * Callers:
 *     ?xxxSystemBroadcastMessage@@YAXI_K_JIPEATtagBROADCASTMSG@@HI@Z @ 0x1C0018F34 (-xxxSystemBroadcastMessage@@YAXI_K_JIPEATtagBROADCASTMSG@@HI@Z.c)
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C004F5A0 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0053BA0 (xxxSendTransformableMessageTimeout.c)
 *     xxxSetInformationThread @ 0x1C007DA60 (xxxSetInformationThread.c)
 *     xxxBroadcastDisplaySettingsChange @ 0x1C01064C0 (xxxBroadcastDisplaySettingsChange.c)
 *     xxxBroadcastMessage @ 0x1C012B6A4 (xxxBroadcastMessage.c)
 *     EditionxxxBroadcastSPIChange @ 0x1C01D7090 (EditionxxxBroadcastSPIChange.c)
 * Callees:
 *     ?xxxSystemBroadcastMessage@@YAXI_K_JIPEATtagBROADCASTMSG@@HI@Z @ 0x1C0018F34 (-xxxSystemBroadcastMessage@@YAXI_K_JIPEATtagBROADCASTMSG@@HI@Z.c)
 *     _PostTransformableMessageIL @ 0x1C001A1A0 (_PostTransformableMessageIL.c)
 *     xxxSendNotifyMessage @ 0x1C00399D0 (xxxSendNotifyMessage.c)
 *     xxxSendMessageCallback @ 0x1C0039C44 (xxxSendMessageCallback.c)
 *     GetPrimaryMonitorRectForWindow @ 0x1C003A034 (GetPrimaryMonitorRectForWindow.c)
 *     FreeHwndList @ 0x1C0049620 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C00496B0 (BuildHwndList.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0053BA0 (xxxSendTransformableMessageTimeout.c)
 *     HMValidateHandleNoSecure @ 0x1C00B3898 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C00B9A60 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C00B9AE0 (PushW32ThreadLock.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C00BE818 (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     ?CaptureBroadcastString@@YAHPEAU_LARGE_UNICODE_STRING@@PEAU_LARGE_STRING@@@Z @ 0x1C0129DA0 (-CaptureBroadcastString@@YAHPEAU_LARGE_UNICODE_STRING@@PEAU_LARGE_STRING@@@Z.c)
 */

__int64 __fastcall xxxBroadcastMessageEx(
        __int64 a1,
        unsigned int a2,
        unsigned __int64 a3,
        struct _LARGE_STRING *a4,
        unsigned int a5,
        union tagBROADCASTMSG *a6,
        int a7,
        unsigned int a8)
{
  int v12; // r14d
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rsi
  __int64 *v17; // r13
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rsi
  __int64 v22; // r8
  __int16 v23; // ax
  __int64 ThreadWin32Thread; // rax
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rdx
  __int64 v28; // r13
  __m128i *PrimaryMonitorRectForWindow; // rax
  __m128i v30; // xmm0
  __int64 v31; // rdx
  unsigned __int64 v32; // r9
  __int64 v34; // rax
  _WORD *v35; // rcx
  unsigned __int16 v36; // ax
  __int64 v37; // rax
  __int64 v38; // [rsp+58h] [rbp-59h]
  __int64 CurrentProcessWin32Process; // [rsp+60h] [rbp-51h]
  __int64 v40; // [rsp+68h] [rbp-49h]
  __int128 v41; // [rsp+70h] [rbp-41h] BYREF
  __int128 v42; // [rsp+80h] [rbp-31h] BYREF
  __int64 v43; // [rsp+90h] [rbp-21h]
  __int128 v44; // [rsp+98h] [rbp-19h] BYREF
  __int64 v45; // [rsp+A8h] [rbp-9h]
  _BYTE v46[24]; // [rsp+B0h] [rbp-1h] BYREF
  __int64 *v47; // [rsp+F8h] [rbp+47h]

  v43 = 0LL;
  v45 = 0LL;
  v42 = 0LL;
  v44 = 0LL;
  if ( a2 - 1024 <= 0xBBFF )
  {
    v38 = 1LL;
    UserSetLastError(87LL);
  }
  else
  {
    v38 = 0LL;
  }
  v12 = a7;
  if ( !a7 && (a2 == 26 || a2 == 21 || a2 == 29 || a2 == 295 || a2 == 794 || a2 - 804 <= 1) )
    v12 = 1;
  if ( !a1 )
  {
    v41 = 0LL;
    if ( a2 >= 0x1A )
    {
      if ( a2 <= 0x1B )
      {
        if ( a4 )
        {
          if ( !(unsigned int)CaptureBroadcastString((struct _LARGE_UNICODE_STRING *)&v41, a4) )
            return 0LL;
          PushW32ThreadLock(*((_QWORD *)&v41 + 1), &v44, Win32FreePool);
          a4 = (struct _LARGE_STRING *)&v41;
        }
        xxxSystemBroadcastMessage(a2, a3, (__int64)a4, a5, a6, v12, a8);
        if ( a4 )
          PopAndFreeAlwaysW32ThreadLock(&v44);
        return 1LL;
      }
      if ( a2 == 30 )
      {
        if ( (*(_DWORD *)(gptiCurrent + 488LL) & 4) == 0 )
          return 0LL;
      }
      else
      {
        if ( a2 == 42 )
        {
          xxxSystemBroadcastMessage(0x2Au, a3, (__int64)a4, a5, a6, v12, a8);
          return 1LL;
        }
        if ( a2 - 712 <= 1 )
        {
          xxxSystemBroadcastMessage(a2, a3, (__int64)a4, a5, a6, v12, a8);
          return 1LL;
        }
      }
    }
    a1 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 456LL) + 8LL) + 24LL);
    if ( !a1 )
    {
      UserSetLastError(5LL);
      return 0LL;
    }
  }
  v40 = BuildHwndList(*(struct tagWND **)(a1 + 112));
  v16 = v40;
  if ( !v40 )
    return 0LL;
  v17 = (__int64 *)(v40 + 32);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v14, v13, v15);
  v19 = *(_QWORD *)(v40 + 32);
  v47 = (__int64 *)(v40 + 32);
  if ( v19 == 1 )
    goto LABEL_26;
  do
  {
    LOBYTE(v18) = 1;
    v20 = HMValidateHandleNoSecure(v19, v18);
    v21 = v20;
    if ( v20 )
    {
      v22 = *(_QWORD *)(v20 + 40);
      if ( (*(_WORD *)(v22 + 42) & 0x2FFF) != 0x29C )
      {
        v23 = **(_WORD **)(*(_QWORD *)(v20 + 136) + 8LL);
        v18 = gpsi;
        if ( *(_WORD *)(gpsi + 908LL) != v23
          && gaOleMainThreadWndClass != v23
          && (!v38 || (*(_BYTE *)(v22 + 21) & 2) == 0)
          && (a2 - 784 > 1
           || (*(_BYTE *)(v22 + 31) & 0x10) != 0
           || (*(_DWORD *)(*(_QWORD *)(v21 + 16) + 488LL) & 0x800) != 0) )
        {
          if ( a8 == 1 )
          {
            if ( *(_DWORD *)(v22 + 236) == 1 )
              goto LABEL_15;
          }
          else if ( a8 != 2 || *(_DWORD *)(v22 + 236) != 1 || (*(_BYTE *)(v22 + 234) & 0x20) != 0 )
          {
LABEL_15:
            ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
            *(_QWORD *)&v42 = *(_QWORD *)(ThreadWin32Thread + 416);
            *(_QWORD *)(ThreadWin32Thread + 416) = &v42;
            *((_QWORD *)&v42 + 1) = v21;
            HMLockObject(v21);
            v27 = 0LL;
            if ( a5 )
            {
              switch ( a5 )
              {
                case 1u:
                  goto LABEL_17;
                case 2u:
                  if ( !*(_QWORD *)(v21 + 120) )
                    PostTransformableMessageIL((struct tagWND *)v21, a2, a3, (__int64)a4, v12);
                  break;
                case 3u:
                  xxxSendMessageCallback(
                    v21,
                    a2,
                    a3,
                    (int)a4,
                    *(_QWORD *)a6,
                    *((_QWORD *)a6 + 1),
                    *((_DWORD *)a6 + 4),
                    v12,
                    1);
                  break;
                case 4u:
LABEL_37:
                  v34 = xxxSendTransformableMessageTimeout(
                          v21,
                          a2,
                          a3,
                          (int)a4,
                          *(_DWORD *)a6,
                          *((_DWORD *)a6 + 1),
                          *((_QWORD *)a6 + 1),
                          v12,
                          1);
                  v27 = 0LL;
                  if ( !v34 && a5 == 6 )
                  {
LABEL_17:
                    v28 = 0LL;
                    if ( a2 < 0x1A )
                      goto LABEL_31;
                    if ( a2 <= 0x1B )
                    {
                      if ( a4 )
                      {
                        v35 = (_WORD *)*((_QWORD *)a4 + 1);
                        if ( *v35 )
                        {
                          v36 = UserAddAtomEx(v35, 0LL, 2LL);
                          v28 = v36;
                          if ( !v36 )
                            goto LABEL_22;
                        }
                        else
                        {
                          v28 = -1LL;
                        }
                      }
                      if ( !(unsigned int)PostEventMessageEx(
                                            *(struct tagTHREADINFO **)(v21 + 16),
                                            *(struct tagQ **)(*(_QWORD *)(v21 + 16) + 432LL),
                                            9u,
                                            (struct tagWND *)v21,
                                            a2,
                                            a3,
                                            v28,
                                            0LL)
                        && (unsigned __int64)(v28 + 1) > 1 )
                      {
                        UserDeleteAtom((unsigned __int16)v28);
                      }
                    }
                    else
                    {
                      if ( a2 == 126 )
                      {
                        PrimaryMonitorRectForWindow = (__m128i *)GetPrimaryMonitorRectForWindow(v46, v21);
                        v30 = _mm_srli_si128(*PrimaryMonitorRectForWindow, 8);
                        v31 = 126LL;
                        v32 = (unsigned __int16)(v30.m128i_i16[0] - PrimaryMonitorRectForWindow->m128i_i64[0]) | (unsigned __int64)(int)((v30.m128i_i32[1] << 16) - (HIDWORD(PrimaryMonitorRectForWindow->m128i_i64[0]) << 16));
                        goto LABEL_21;
                      }
LABEL_31:
                      v32 = (unsigned __int64)a4;
                      v31 = a2;
LABEL_21:
                      xxxSendNotifyMessage(v21, v31, a3, v32, v12);
                    }
LABEL_22:
                    v17 = v47;
                  }
                  break;
                case 5u:
                  v37 = *(_QWORD *)(v21 + 16);
                  if ( *(_QWORD *)(v37 + 424) != CurrentProcessWin32Process || (*(_DWORD *)(v37 + 488) & 8) != 0 )
                  {
                    xxxSendNotifyMessage(v21, a2, a3, a4, v12);
                  }
                  else
                  {
                    _InterlockedIncrement(&glSendMessage);
                    xxxSendTransformableMessageTimeout(v21, a2, a3, (int)a4, 0, 0, 0LL, 1, 1);
                  }
                  break;
                case 6u:
                  goto LABEL_37;
              }
            }
            else
            {
              xxxSendTransformableMessageTimeout(v21, a2, a3, (int)a4, 0, 0, 0LL, v12, 1);
            }
            ThreadUnlock1(v25, v27, v26);
          }
        }
      }
    }
    v47 = ++v17;
    v19 = *v17;
  }
  while ( *v17 != 1 );
  v16 = v40;
LABEL_26:
  FreeHwndList(v16);
  return 1LL;
}
