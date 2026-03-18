/*
 * XREFs of _anonymous_namespace_::NotifyIAMWindowManagementEvent @ 0x1C00358C4
 * Callers:
 *     ?xxxSetForegroundThreadWithWindowHint@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x1C0034CC4 (-xxxSetForegroundThreadWithWindowHint@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z.c)
 *     ?TrackedWindowTrackingInfo@NotifyShell@@YAXPEAUtagWND@@QEBUtagMINMAXINFO@@@Z @ 0x1C01133D4 (-TrackedWindowTrackingInfo@NotifyShell@@YAXPEAUtagWND@@QEBUtagMINMAXINFO@@@Z.c)
 *     _anonymous_namespace_::NotifyShellSimplePayload @ 0x1C011A320 (_anonymous_namespace_--NotifyShellSimplePayload.c)
 *     _anonymous_namespace_::NotifyShellWindowPosChangedCommon @ 0x1C023E410 (_anonymous_namespace_--NotifyShellWindowPosChangedCommon.c)
 *     ?NotifyTemplateApplied@CWindowGroupManager@@QEAAXPEBUtagWND@@AEBUtagGROUP_WINDOW_TEMPLATE_APPLIED@@@Z @ 0x1C02415D0 (-NotifyTemplateApplied@CWindowGroupManager@@QEAAXPEBUtagWND@@AEBUtagGROUP_WINDOW_TEMPLATE_APPLIE.c)
 * Callees:
 *     xxxSendMessageCallback @ 0x1C0036784 (xxxSendMessageCallback.c)
 *     IsThreadHung @ 0x1C0037D80 (IsThreadHung.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0069000 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0069054 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     _anonymous_namespace_::SeverWindowManagementConnectionToShell @ 0x1C023E4D8 (_anonymous_namespace_--SeverWindowManagementConnectionToShell.c)
 */

__int64 __fastcall anonymous_namespace_::NotifyIAMWindowManagementEvent(int a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rdi
  __int64 v4; // rsi
  __int64 ThreadWin32Thread; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  _QWORD v10[4]; // [rsp+50h] [rbp-28h] BYREF
  char v11; // [rsp+88h] [rbp+10h] BYREF

  v2 = 0;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v11);
  v3 = *(_QWORD *)(gptiCurrent + 448LL);
  if ( v3 )
  {
    if ( *(_QWORD *)(v3 + 288) )
    {
      v4 = *(_QWORD *)(v3 + 328);
      if ( v4 )
      {
        if ( (unsigned int)IsThreadHung(*(_QWORD *)(v4 + 16), 0LL) )
        {
          anonymous_namespace_::SeverWindowManagementConnectionToShell(v3);
        }
        else
        {
          v10[2] = 0LL;
          ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
          v10[0] = *(_QWORD *)(ThreadWin32Thread + 408);
          *(_QWORD *)(ThreadWin32Thread + 408) = v10;
          v10[1] = v4;
          HMLockObject(v4);
          v2 = xxxSendMessageCallback(v4, 834, 0, a1, 0LL, 1LL, 0, 1, 1);
          ThreadUnlock1(v7, v6, v8);
        }
      }
    }
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v11);
  return v2;
}
