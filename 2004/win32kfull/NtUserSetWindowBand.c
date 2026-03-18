/*
 * XREFs of NtUserSetWindowBand @ 0x1C003CAD0
 * Callers:
 *     <none>
 * Callees:
 *     _GetProp @ 0x1C0022FD8 (_GetProp.c)
 *     ?xxxSetWindowBand@@YAHPEAUtagWND@@0W4ZBID@@W4WindowBandOptions@@@Z @ 0x1C003CC7C (-xxxSetWindowBand@@YAHPEAUtagWND@@0W4ZBID@@W4WindowBandOptions@@@Z.c)
 *     ?ValidateHWNDIA@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z @ 0x1C006A178 (-ValidateHWNDIA@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserSetWindowBand(__int64 a1, HWND a2, unsigned int a3)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  struct tagWND *v14; // rbx
  int v15; // esi
  int v16; // ebx
  __int64 v18; // rcx
  __int128 v19; // [rsp+20h] [rbp-30h] BYREF
  __int64 v20; // [rsp+30h] [rbp-20h]
  __int128 v21; // [rsp+38h] [rbp-18h] BYREF
  __int64 v22; // [rsp+48h] [rbp-8h]
  struct tagWND *v23; // [rsp+88h] [rbp+38h] BYREF

  v23 = 0LL;
  v22 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v19 = 0LL;
  EnterCrit(0LL, 1LL);
  gbValidateHandleForIL = 0;
  v6 = ValidateHwnd(a1);
  v10 = v6;
  if ( !v6 || (v8 = *(_QWORD *)(v6 + 40), v7 = (*(_WORD *)(v8 + 42) & 0x3FFFu) - 669, (v7 & 0xFFFFFFFD) == 0) )
  {
    v16 = 0;
    goto LABEL_11;
  }
  *(_QWORD *)&v19 = *(_QWORD *)(gptiCurrent + 408LL);
  *(_QWORD *)(gptiCurrent + 408LL) = &v19;
  *((_QWORD *)&v19 + 1) = v6;
  HMLockObject(v6);
  if ( (unsigned int)ValidateHWNDIA(a2, &v23) )
  {
    if ( GetProp(v10, *(unsigned __int16 *)&WPP_MAIN_CB.DeviceQueue.Busy, 1LL) )
    {
      v18 = 5LL;
    }
    else
    {
      v14 = v23;
      if ( (unsigned __int64)v23 < 0xFFFFFFFFFFFFFFFEuLL || a3 == 1 )
      {
        if ( (unsigned __int64)v23 - 2 > 0xFFFFFFFFFFFFFFFBuLL )
        {
          v15 = 0;
        }
        else
        {
          v15 = 1;
          *(_QWORD *)&v21 = *(_QWORD *)(gptiCurrent + 408LL);
          *(_QWORD *)(gptiCurrent + 408LL) = &v21;
          *((_QWORD *)&v21 + 1) = v14;
          HMLockObject(v14);
        }
        v16 = xxxSetWindowBand(v10, v14, a3, 1LL);
        if ( v15 )
          ThreadUnlock1(v12, v11, v13);
        goto LABEL_10;
      }
      v18 = 87LL;
    }
    v16 = 0;
    UserSetLastError(v18);
  }
  else
  {
    v16 = 0;
  }
LABEL_10:
  ThreadUnlock1(v12, v11, v13);
LABEL_11:
  UserSessionSwitchLeaveCrit(v8, v7, v9);
  return v16;
}
