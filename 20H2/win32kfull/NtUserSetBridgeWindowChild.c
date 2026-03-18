/*
 * XREFs of NtUserSetBridgeWindowChild @ 0x1C0201230
 * Callers:
 *     <none>
 * Callees:
 *     _IsTopLevelWindow @ 0x1C0046FA0 (_IsTopLevelWindow.c)
 *     ValidateHwndIAM @ 0x1C008EFA0 (ValidateHwndIAM.c)
 *     IAMThreadAccessGranted @ 0x1C008F634 (IAMThreadAccessGranted.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     xxxSetBridgeWindowChild @ 0x1C0208D68 (xxxSetBridgeWindowChild.c)
 */

__int64 NtUserSetBridgeWindowChild()
{
  __int64 v0; // rdx
  __int64 v1; // r8
  int v2; // ebx
  __int64 v3; // rcx
  __int64 v4; // rsi
  __int64 v5; // rax
  struct tagWND *v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rcx
  _QWORD v16[3]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v17[4]; // [rsp+38h] [rbp-20h] BYREF

  EnterCrit(0LL, 1LL);
  v2 = 0;
  if ( !IAMThreadAccessGranted(gptiCurrent) )
  {
    v3 = 5LL;
LABEL_12:
    UserSetLastError(v3, v0, v1);
    goto LABEL_13;
  }
  v4 = ValidateHwndIAM();
  if ( !v4
    || (v5 = ValidateHwndIAM(), (v6 = (struct tagWND *)v5) == 0LL)
    || (*(_BYTE *)(*(_QWORD *)(v5 + 40) + 234LL) & 0x20) == 0
    || !(unsigned int)IsTopLevelWindow(v5)
    || !(unsigned int)IsTopLevelWindow(v4)
    || (v7 = *(_QWORD *)(v4 + 40), (*(_BYTE *)(v7 + 234) & 0x20) != 0)
    || (*(_BYTE *)(v7 + 31) & 8) != 0 )
  {
    v3 = 87LL;
    goto LABEL_12;
  }
  v16[2] = 0LL;
  v17[2] = 0LL;
  v16[0] = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 416LL) = v16;
  v16[1] = v4;
  HMLockObject(v4);
  v17[0] = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 416LL) = v17;
  v17[1] = v6;
  HMLockObject(v6);
  v2 = xxxSetBridgeWindowChild((struct tagWND *)v4, v6);
  ThreadUnlock1(v9, v8, v10);
  ThreadUnlock1(v12, v11, v13);
LABEL_13:
  UserSessionSwitchLeaveCrit(v14);
  return v2;
}
