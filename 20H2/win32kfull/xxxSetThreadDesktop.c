/*
 * XREFs of xxxSetThreadDesktop @ 0x1C007DFF0
 * Callers:
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C0073F0C (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C007D268 (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     xxxRestoreCsrssThreadDesktop @ 0x1C007DBE0 (xxxRestoreCsrssThreadDesktop.c)
 *     xxxSetCsrssThreadDesktop @ 0x1C007DE70 (xxxSetCsrssThreadDesktop.c)
 *     NtUserSetThreadDesktop @ 0x1C007DF40 (NtUserSetThreadDesktop.c)
 *     xxxNextWindow @ 0x1C01F3DB0 (xxxNextWindow.c)
 * Callees:
 *     MapDesktop @ 0x1C003E670 (MapDesktop.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C00BB8B8 (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     zzzAttachToQueue @ 0x1C00BFE38 (zzzAttachToQueue.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     zzzSetDesktop @ 0x1C00D7E10 (zzzSetDesktop.c)
 *     MagContextThreadCallout @ 0x1C01CC340 (MagContextThreadCallout.c)
 */

__int64 __fastcall xxxSetThreadDesktop(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v5; // rsi
  __int64 v6; // rax
  __int64 result; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // rcx
  int v12; // edx
  __int64 v13; // rax
  _DWORD v14[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v15; // [rsp+28h] [rbp-20h]
  __int64 v16; // [rsp+30h] [rbp-18h]
  int v17; // [rsp+38h] [rbp-10h]
  int v18; // [rsp+3Ch] [rbp-Ch]

  v5 = *(__int64 **)(gptiCurrent + 424LL);
  if ( !a2 )
    goto LABEL_3;
  v14[1] = 0;
  v6 = *v5;
  v14[0] = 1;
  v15 = v6;
  v16 = a2;
  v17 = 0;
  v18 = 1;
  result = MapDesktop((__int64)v14);
  if ( (int)result >= 0 )
  {
LABEL_3:
    if ( PsGetCurrentProcess(a1, a2, a3) != gpepCSRSS )
    {
      if ( *(_DWORD *)(gptiCurrent + 896LL)
        || *(_DWORD *)(gptiCurrent + 680LL)
        || (v10 = *(_QWORD *)(gptiCurrent + 456LL)) != 0
        && (v11 = *(_QWORD *)(v10 + 216)) != 0
        && *(_QWORD *)(v11 + 32) == gptiCurrent )
      {
        UserSetLastError(170LL);
        return 2147483665LL;
      }
      if ( !v5[42] && a1 )
      {
        LockObjectAssignment(v5 + 42, a2);
        v5[49] = a1;
      }
    }
    v8 = *(_QWORD *)(gptiCurrent + 456LL);
    if ( v8 != a2 )
    {
      if ( (*(_DWORD *)(gptiCurrent + 1232LL) & 8) != 0 )
      {
        MagContextThreadCallout(*(_QWORD *)&gMagnContext, gptiCurrent, 0LL, 1LL);
        v8 = *(_QWORD *)(gptiCurrent + 456LL);
      }
      if ( v8 != a2 )
      {
        v9 = *(_QWORD *)(gptiCurrent + 432LL);
        if ( *(_DWORD *)(v9 + 392) > 1u )
        {
          v13 = AllocQueue(0LL);
          if ( !v13 )
          {
            UserSetLastError(8LL);
            return 3221225495LL;
          }
          ++*(_DWORD *)(v13 + 392);
          zzzAttachToQueue(gptiCurrent, (struct tagQ *)v13);
        }
        else if ( v9 == gpqForeground )
        {
          xxxSetForegroundWindow2(0LL, gptiCurrent, 0LL);
        }
        else if ( !v8 )
        {
          v12 = (gdwGTERMFlags & 1) - 1;
          *(_DWORD *)(gptiCurrent + 760LL) = v12;
          *(_DWORD *)(v9 + 384) = v12;
        }
      }
    }
    return zzzSetDesktop(gptiCurrent);
  }
  return result;
}
