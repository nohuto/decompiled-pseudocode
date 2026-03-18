/*
 * XREFs of _xxxSetThreadDesktop@8 @ 0x7D894
 * Callers:
 *     ?xxxDesktopWndProcWorker@@YGJPAUtagWND@@IIJ@Z @ 0x16172 (-xxxDesktopWndProcWorker@@YGJPAUtagWND@@IIJ@Z.c)
 *     ?DestroyPendingDesktops@@YGXPAUtagTHREADINFO@@PAUtagTERMINAL@@@Z @ 0x7CC38 (-DestroyPendingDesktops@@YGXPAUtagTHREADINFO@@PAUtagTERMINAL@@@Z.c)
 *     _NtUserSetThreadDesktop@4 @ 0x7D826 (_NtUserSetThreadDesktop@4.c)
 *     _xxxRestoreCsrssThreadDesktop@8 @ 0xC9290 (_xxxRestoreCsrssThreadDesktop@8.c)
 *     _xxxSetCsrssThreadDesktop@8 @ 0xC9346 (_xxxSetCsrssThreadDesktop@8.c)
 *     _xxxNextWindow@8 @ 0x15D33E (_xxxNextWindow@8.c)
 * Callees:
 *     ?xxxSetForegroundWindow2@@YGHPAUtagWND@@PAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x17936 (-xxxSetForegroundWindow2@@YGHPAUtagWND@@PAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     _zzzSetDesktop@12 @ 0x6EDEC (_zzzSetDesktop@12.c)
 *     _MapDesktop@4 @ 0x6FA98 (_MapDesktop@4.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _zzzAttachToQueue@16 @ 0xC7DF0 (_zzzAttachToQueue@16.c)
 *     _MagContextThreadCallout@16 @ 0x13C87A (_MagContextThreadCallout@16.c)
 */

NTSTATUS __fastcall xxxSetThreadDesktop(void *a1, int a2)
{
  int *v3; // ebx
  int v4; // eax
  NTSTATUS result; // eax
  int v6; // eax
  int v7; // eax
  int v8; // ecx
  int v9; // edx
  int v10; // eax
  int v11; // eax
  _DWORD v12[5]; // [esp+10h] [ebp-18h] BYREF
  HANDLE Handle; // [esp+24h] [ebp-4h]

  Handle = a1;
  v3 = *(int **)(_gptiCurrent + 232);
  if ( !a2
    || (v4 = *v3, v12[3] = 0, v12[1] = v4, v12[0] = 1, v12[2] = a2, v12[4] = 1, result = MapDesktop(v12), result >= 0) )
  {
    if ( PsGetCurrentProcess() != _gpepCSRSS )
    {
      if ( *(_DWORD *)(_gptiCurrent + 504)
        || *(_DWORD *)(_gptiCurrent + 372)
        || (v6 = *(_DWORD *)(_gptiCurrent + 248)) != 0
        && (v7 = *(_DWORD *)(v6 + 128)) != 0
        && *(_DWORD *)(v7 + 32) == _gptiCurrent )
      {
        UserSetLastError(170);
        return -2147483631;
      }
      if ( !v3[47] && Handle )
      {
        LockObjectAssignment(v3 + 47, a2);
        v3[54] = (int)Handle;
      }
    }
    v8 = *(_DWORD *)(_gptiCurrent + 248);
    if ( v8 != a2 )
    {
      if ( (*(_BYTE *)(_gptiCurrent + 688) & 8) != 0 )
      {
        MagContextThreadCallout(_gMagnContext, _gptiCurrent, 0, 1);
        v8 = *(_DWORD *)(_gptiCurrent + 248);
      }
      if ( v8 != a2 )
      {
        v9 = *(_DWORD *)(_gptiCurrent + 236);
        if ( *(_DWORD *)(v9 + 288) > 1u )
        {
          v11 = AllocQueue(0, 0);
          if ( !v11 )
          {
            UserSetLastError(8);
            return -1073741801;
          }
          ++*(_DWORD *)(v11 + 288);
          zzzAttachToQueue(_gptiCurrent, v11, 0, 0);
        }
        else if ( v9 == _gpqForeground )
        {
          xxxSetForegroundWindow2(0, _gptiCurrent, 0);
        }
        else if ( !v8 )
        {
          v10 = (_gdwGTERMFlags & 1) - 1;
          *(_DWORD *)(_gptiCurrent + 412) = v10;
          *(_DWORD *)(v9 + 280) = v10;
        }
      }
    }
    return zzzSetDesktop(_gptiCurrent, a2, Handle);
  }
  return result;
}
