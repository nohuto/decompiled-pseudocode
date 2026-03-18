/*
 * XREFs of NtMITSynthesizeKeyboardInput @ 0x1C0136880
 * Callers:
 *     <none>
 * Callees:
 *     xxxUpdateGlobalsAndSendKeyEvent @ 0x1C0060A60 (xxxUpdateGlobalsAndSendKeyEvent.c)
 *     HMValidateHandle @ 0x1C0070320 (HMValidateHandle.c)
 *     ?IsInputThread@CInputThread@@QEBA_NXZ @ 0x1C0073320 (-IsInputThread@CInputThread@@QEBA_NXZ.c)
 *     EnterCrit @ 0x1C0084270 (EnterCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C008A4E0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C008C01C (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D2E00 (memset.c)
 *     ProcessKeyboardInjectedInput @ 0x1C01B3254 (ProcessKeyboardInjectedInput.c)
 *     ?VirtualizeKeyboardInput@Keyboard@IVRootDeliver@@YA?AW4_SYNTHESIZED_KEYBOARD_PROCESSING_RESULT@@W4_SYNTHESIZE_KEYBOARD_OPTIONS@@AEBUCONTAINER_ID@@AEBU_KEYBOARD_INPUT_DATA@@PEAX@Z @ 0x1C01BF984 (-VirtualizeKeyboardInput@Keyboard@IVRootDeliver@@YA-AW4_SYNTHESIZED_KEYBOARD_PROCESSING_RESULT@@.c)
 */

__int64 __fastcall NtMITSynthesizeKeyboardInput(unsigned int a1, __int128 *a2, volatile void *a3)
{
  int v6; // ebx
  unsigned int v7; // edi
  CInputThread *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  ULONG64 v11; // rcx
  __int64 CurrentProcessWow64Process; // rax
  int v13; // r8d
  int i; // r10d
  int v15; // esi
  unsigned __int64 v16; // rbx
  unsigned __int8 v17; // r11
  __int64 v18; // rax
  _DWORD v20[10]; // [rsp+60h] [rbp-F8h] BYREF
  __int128 v21; // [rsp+88h] [rbp-D0h]
  __int128 v22; // [rsp+98h] [rbp-C0h]
  __int128 v23; // [rsp+A8h] [rbp-B0h]
  __int128 v24; // [rsp+B8h] [rbp-A0h]
  _OWORD v25[4]; // [rsp+E0h] [rbp-78h] BYREF

  v6 = 0;
  v7 = 0;
  v20[4] = 0;
  EnterCrit(0LL, 1);
  memset(v25, 0, sizeof(v25));
  if ( !CInputThread::IsInputThread(v8) )
  {
    v10 = 5LL;
LABEL_3:
    UserSetLastError(v10, v9);
    goto LABEL_28;
  }
  v11 = (ULONG64)(a2 + 4);
  if ( a2 + 4 < a2 || v11 > MmUserProbeAddress )
    a2 = (__int128 *)MmUserProbeAddress;
  v21 = *a2;
  v22 = a2[1];
  v23 = a2[2];
  v24 = a2[3];
  v25[0] = v21;
  v25[1] = v22;
  v25[2] = v23;
  v25[3] = v24;
  if ( (a1 & 3) != 0 )
  {
    v20[0] = 0;
    if ( DWORD1(v22) == 2 )
    {
      if ( gpfnIVResolveContainerId )
        gpfnIVResolveContainerId((const struct _GUID *)((char *)&v25[1] + 8), (struct CONTAINER_ID *)v20);
    }
    else
    {
      v20[0] = DWORD2(v22);
    }
    v7 = IVRootDeliver::Keyboard::VirtualizeKeyboardInput(a1, v20, v25, *((_QWORD *)&v25[2] + 1));
  }
  else
  {
    if ( a1 != 4 )
    {
      if ( a1 != 8 )
        goto LABEL_28;
      v18 = HMValidateHandle(*((__int64 *)&v23 + 1), 0x13u);
      if ( !*((_QWORD *)&v25[2] + 1) || v18 )
      {
        ProcessKeyboardInjectedInput(v25, v18, &v25[3]);
        v7 = 1;
        goto LABEL_28;
      }
      v7 = 0;
      v10 = 6LL;
      goto LABEL_3;
    }
    xxxUpdateGlobalsAndSendKeyEvent(
      SWORD4(v21),
      v21,
      HIDWORD(v21),
      0LL,
      *((__int64 *)&v23 + 1),
      0LL,
      v22,
      DWORD1(v21),
      0,
      0LL,
      0LL,
      (__int64)&v25[3]);
    v7 = 1;
    if ( a3 )
    {
      CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v11);
      ProbeForWrite(a3, 0x100uLL, CurrentProcessWow64Process != 0 ? 1 : 4);
      v13 = 0;
      for ( i = 0; ; i = v13 )
      {
        v20[0] = v6;
        if ( v13 >= 256 )
          break;
        v15 = v6 & 3;
        v16 = (unsigned __int64)(unsigned __int8)v6 >> 2;
        v17 = *((_BYTE *)&gafAsyncKeyState + v16);
        if ( ((unsigned __int8)(1 << (2 * v15)) & v17) != 0 )
        {
          *((_BYTE *)a3 + i) = *((_BYTE *)a3 + v13) | 0x80;
          v17 = *((_BYTE *)&gafAsyncKeyState + v16);
        }
        v11 = (unsigned int)(2 * v15 + 1);
        if ( ((unsigned __int8)(1 << (2 * v15 + 1)) & v17) != 0 )
        {
          LOBYTE(v11) = *((_BYTE *)a3 + v13) | 1;
          *((_BYTE *)a3 + i) = v11;
        }
        v6 = ++v13;
      }
    }
  }
LABEL_28:
  UserSessionSwitchLeaveCrit(v11);
  return v7;
}
