/*
 * XREFs of _anonymous_namespace_::NotifyIAMWindowManagementEvent @ 0x1C00C1608
 * Callers:
 *     ?xxxSetForegroundThreadWithWindowHint@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x1C00C2134 (-xxxSetForegroundThreadWithWindowHint@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z.c)
 *     ?TrackedWindowTrackingInfo@NotifyShell@@YAXPEAUtagWND@@QEBUtagMINMAXINFO@@@Z @ 0x1C01141A0 (-TrackedWindowTrackingInfo@NotifyShell@@YAXPEAUtagWND@@QEBUtagMINMAXINFO@@@Z.c)
 *     _anonymous_namespace_::NotifyShellSimplePayload @ 0x1C011B3B0 (_anonymous_namespace_--NotifyShellSimplePayload.c)
 *     _anonymous_namespace_::NotifyShellWindowPosChangedCommon @ 0x1C023D170 (_anonymous_namespace_--NotifyShellWindowPosChangedCommon.c)
 *     ?NotifyTemplateApplied@CWindowGroupManager@@QEAAXPEBUtagWND@@AEBUtagGROUP_WINDOW_TEMPLATE_APPLIED@@@Z @ 0x1C0240330 (-NotifyTemplateApplied@CWindowGroupManager@@QEAAXPEBUtagWND@@AEBUtagGROUP_WINDOW_TEMPLATE_APPLIE.c)
 * Callees:
 *     xxxSendMessageCallback @ 0x1C0039C44 (xxxSendMessageCallback.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00AFB20 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00AFB7C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     IsThreadHung @ 0x1C00C171C (IsThreadHung.c)
 *     _anonymous_namespace_::SeverWindowManagementConnectionToShell @ 0x1C023D238 (_anonymous_namespace_--SeverWindowManagementConnectionToShell.c)
 */

__int64 __fastcall anonymous_namespace_::NotifyIAMWindowManagementEvent(__int64 a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rdi
  unsigned __int64 *v4; // rsi
  __int64 ThreadWin32Thread; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  _QWORD v10[4]; // [rsp+50h] [rbp-28h] BYREF
  char v11; // [rsp+88h] [rbp+10h] BYREF

  v2 = 0;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v11);
  v3 = *(_QWORD *)(gptiCurrent + 456LL);
  if ( v3 )
  {
    if ( *(_QWORD *)(v3 + 288) )
    {
      v4 = *(unsigned __int64 **)(v3 + 328);
      if ( v4 )
      {
        if ( (unsigned int)IsThreadHung(v4[2], 0LL) )
        {
          anonymous_namespace_::SeverWindowManagementConnectionToShell(v3);
        }
        else
        {
          v10[2] = 0LL;
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
          v10[0] = *(_QWORD *)(ThreadWin32Thread + 416);
          *(_QWORD *)(ThreadWin32Thread + 416) = v10;
          v10[1] = v4;
          HMLockObject(v4);
          v2 = xxxSendMessageCallback(v4, 0x342u, 0LL, a1, 0LL, 1LL, 0, 1, 1);
          ThreadUnlock1(v7, v6, v8);
        }
      }
    }
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v11);
  return v2;
}
