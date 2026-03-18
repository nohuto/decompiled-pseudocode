/*
 * XREFs of NtMITSynthesizeKeyboardInput @ 0x1C012E540
 * Callers:
 *     <none>
 * Callees:
 *     xxxUpdateGlobalsAndSendKeyEvent @ 0x1C002CD00 (xxxUpdateGlobalsAndSendKeyEvent.c)
 *     EnterCrit @ 0x1C0045880 (EnterCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004B4E0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C004C5CC (UserSetLastError.c)
 *     ?IsInputThread@CInputThread@@QEBA_NXZ @ 0x1C00549F8 (-IsInputThread@CInputThread@@QEBA_NXZ.c)
 *     HMValidateHandle @ 0x1C0054DB0 (HMValidateHandle.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D3740 (memset.c)
 *     ProcessKeyboardInjectedInput @ 0x1C01AB174 (ProcessKeyboardInjectedInput.c)
 *     ?VirtualizeKeyboardInput@Keyboard@IVRootDeliver@@YA?AW4_SYNTHESIZED_KEYBOARD_PROCESSING_RESULT@@W4_SYNTHESIZE_KEYBOARD_OPTIONS@@AEBUCONTAINER_ID@@AEBU_KEYBOARD_INPUT_DATA@@PEAX@Z @ 0x1C01B78B4 (-VirtualizeKeyboardInput@Keyboard@IVRootDeliver@@YA-AW4_SYNTHESIZED_KEYBOARD_PROCESSING_RESULT@@.c)
 */

__int64 __fastcall NtMITSynthesizeKeyboardInput(unsigned int a1, __int128 *a2, volatile void *a3)
{
  int v6; // ebx
  unsigned int v7; // edi
  CInputThread *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rcx
  ULONG64 v13; // rcx
  __int64 CurrentProcessWow64Process; // rax
  int i; // r10d
  int v16; // esi
  unsigned __int64 v17; // rbx
  unsigned __int8 v18; // r11
  __int64 v19; // rax
  _DWORD v21[10]; // [rsp+60h] [rbp-F8h] BYREF
  __int128 v22; // [rsp+88h] [rbp-D0h]
  __int128 v23; // [rsp+98h] [rbp-C0h]
  __int128 v24; // [rsp+A8h] [rbp-B0h]
  __int128 v25; // [rsp+B8h] [rbp-A0h]
  _OWORD v26[4]; // [rsp+E0h] [rbp-78h] BYREF

  v6 = 0;
  v7 = 0;
  v21[4] = 0;
  EnterCrit(0, 1);
  memset(v26, 0, sizeof(v26));
  if ( !CInputThread::IsInputThread(v8) )
  {
    v12 = 5LL;
LABEL_3:
    UserSetLastError(v12, v9);
    goto LABEL_28;
  }
  v13 = (ULONG64)(a2 + 4);
  if ( a2 + 4 < a2 || v13 > MmUserProbeAddress )
    a2 = (__int128 *)MmUserProbeAddress;
  v22 = *a2;
  v23 = a2[1];
  v24 = a2[2];
  v25 = a2[3];
  v26[0] = v22;
  v26[1] = v23;
  v26[2] = v24;
  v26[3] = v25;
  if ( (a1 & 3) != 0 )
  {
    v21[0] = 0;
    if ( DWORD1(v23) == 2 )
    {
      if ( gpfnIVResolveContainerId )
        gpfnIVResolveContainerId((const struct _GUID *)((char *)&v26[1] + 8), (struct CONTAINER_ID *)v21);
    }
    else
    {
      v21[0] = DWORD2(v23);
    }
    v7 = IVRootDeliver::Keyboard::VirtualizeKeyboardInput(a1, v21, v26, *((_QWORD *)&v26[2] + 1));
  }
  else
  {
    if ( a1 != 4 )
    {
      if ( a1 != 8 )
        goto LABEL_28;
      v19 = HMValidateHandle(*((__int64 *)&v24 + 1), 0x13u);
      if ( !*((_QWORD *)&v26[2] + 1) || v19 )
      {
        ProcessKeyboardInjectedInput(v26, v19, &v26[3]);
        v7 = 1;
        goto LABEL_28;
      }
      v7 = 0;
      v12 = 6LL;
      goto LABEL_3;
    }
    xxxUpdateGlobalsAndSendKeyEvent(
      SWORD4(v22),
      v22,
      SHIDWORD(v22),
      0LL,
      *((__int64 *)&v24 + 1),
      0LL,
      v23,
      DWORD1(v22),
      0,
      0LL,
      0LL,
      (__int64)&v26[3]);
    v7 = 1;
    if ( a3 )
    {
      CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v13);
      ProbeForWrite(a3, 0x100uLL, CurrentProcessWow64Process != 0 ? 1 : 4);
      v10 = 0LL;
      for ( i = 0; ; i = v10 )
      {
        v21[0] = v6;
        if ( (int)v10 >= 256 )
          break;
        v16 = v6 & 3;
        v17 = (unsigned __int64)(unsigned __int8)v6 >> 2;
        v18 = *((_BYTE *)&gafAsyncKeyState + v17);
        v11 = (int)v10;
        if ( ((unsigned __int8)(1 << (2 * v16)) & v18) != 0 )
        {
          *((_BYTE *)a3 + i) = *((_BYTE *)a3 + (int)v10) | 0x80;
          v18 = *((_BYTE *)&gafAsyncKeyState + v17);
        }
        v13 = (unsigned int)(2 * v16 + 1);
        v9 = (unsigned int)(1 << (2 * v16 + 1));
        if ( ((unsigned __int8)v9 & v18) != 0 )
        {
          LOBYTE(v13) = *((_BYTE *)a3 + (int)v10) | 1;
          *((_BYTE *)a3 + i) = v13;
        }
        v10 = (unsigned int)(v10 + 1);
        v6 = v10;
      }
    }
  }
LABEL_28:
  UserSessionSwitchLeaveCrit(v13, v9, v10, v11);
  return v7;
}
