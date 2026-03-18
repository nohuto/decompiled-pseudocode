/*
 * XREFs of NtUserSetInteractiveControlFocus @ 0x1C0202B10
 * Callers:
 *     <none>
 * Callees:
 *     IsShellProcess @ 0x1C00288E8 (IsShellProcess.c)
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C00C7554 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     ?SetDeviceFocus@InteractiveControlManager@@QEAAJKW4tagINTERACTIVECTRL_PROMOTION_TYPE@@PEAUtagWND@@@Z @ 0x1C0253D24 (-SetDeviceFocus@InteractiveControlManager@@QEAAJKW4tagINTERACTIVECTRL_PROMOTION_TYPE@@PEAUtagWND.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserSetInteractiveControlFocus(unsigned __int16 a1, unsigned int a2, __int64 a3)
{
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // r8
  struct InteractiveControlManager *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int128 v16; // [rsp+20h] [rbp-38h] BYREF
  __int64 v17; // [rsp+30h] [rbp-28h]

  v16 = 0LL;
  v17 = 0LL;
  EnterCrit(0LL, 1LL);
  v6 = 0LL;
  if ( (unsigned int)IsShellProcess(*(_QWORD *)(gptiCurrent + 416LL)) )
    gbValidateHandleForIL = 0;
  if ( a3 )
  {
    v9 = ValidateHwnd(a3);
    if ( !v9 )
      goto LABEL_10;
  }
  else
  {
    v9 = 0LL;
  }
  *(_QWORD *)&v16 = *(_QWORD *)(gptiCurrent + 408LL);
  *(_QWORD *)(gptiCurrent + 408LL) = &v16;
  *((_QWORD *)&v16 + 1) = v9;
  if ( v9 )
    HMLockObject(v9);
  v11 = InteractiveControlManager::Instance();
  LOBYTE(v6) = (int)InteractiveControlManager::SetDeviceFocus(v11, a1, a2, v9, v16, *((_QWORD *)&v16 + 1), v17) >= 0;
  ThreadUnlock1(v13, v12, v14);
LABEL_10:
  UserSessionSwitchLeaveCrit(v8, v7, v10);
  return v6;
}
