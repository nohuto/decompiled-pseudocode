/*
 * XREFs of _anonymous_namespace_::NotifyIAMWindowManagementEvent @ 0x17536
 * Callers:
 *     ?TrackedWindowTrackingInfo@NotifyShell@@YGXPAUtagWND@@QBUtagMINMAXINFO@@@Z @ 0x12FC4 (-TrackedWindowTrackingInfo@NotifyShell@@YGXPAUtagWND@@QBUtagMINMAXINFO@@@Z.c)
 *     _anonymous_namespace_::NotifyShellSimplePayload @ 0x174C8 (_anonymous_namespace_--NotifyShellSimplePayload.c)
 *     ?xxxSetForegroundThreadWithWindowHint@@YGXPAUtagTHREADINFO@@PAUtagWND@@@Z @ 0x185FC (-xxxSetForegroundThreadWithWindowHint@@YGXPAUtagTHREADINFO@@PAUtagWND@@@Z.c)
 *     _anonymous_namespace_::NotifyShellWindowPosChangedCommon @ 0x19C27B (_anonymous_namespace_--NotifyShellWindowPosChangedCommon.c)
 *     ?NotifyTemplateApplied@WindowGroupingWindowManagement@@YGXPBUtagWND@@ABUtagGROUP_WINDOW_TEMPLATE_APPLIED@@@Z @ 0x19F31C (-NotifyTemplateApplied@WindowGroupingWindowManagement@@YGXPBUtagWND@@ABUtagGROUP_WINDOW_TEMPLATE.c)
 * Callees:
 *     _IsThreadHung@8 @ 0x175E4 (_IsThreadHung@8.c)
 *     ??0UserAtomicCheck@@QAE@XZ @ 0x2C3CC (--0UserAtomicCheck@@QAE@XZ.c)
 *     ??1UserAtomicCheck@@QAE@XZ @ 0x2C40C (--1UserAtomicCheck@@QAE@XZ.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _xxxSendMessageCallback@36 @ 0x46062 (_xxxSendMessageCallback@36.c)
 *     _anonymous_namespace_::SeverWindowManagementConnectionToShell @ 0x19C316 (_anonymous_namespace_--SeverWindowManagementConnectionToShell.c)
 */

int __thiscall anonymous_namespace_::NotifyIAMWindowManagementEvent(void *this)
{
  int v1; // edi
  ShellWindowManagement *v2; // esi
  int v3; // ebx
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  _DWORD v7[3]; // [esp+10h] [ebp-18h] BYREF
  _BYTE v8[8]; // [esp+1Ch] [ebp-Ch] BYREF
  unsigned int v9; // [esp+24h] [ebp-4h]

  v9 = (unsigned int)this;
  v1 = 0;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v8);
  v2 = *(ShellWindowManagement **)(_gptiCurrent + 248);
  if ( v2 )
  {
    if ( *((_DWORD *)v2 + 44) )
    {
      v3 = *((_DWORD *)v2 + 50);
      if ( v3 )
      {
        if ( IsThreadHung(*(_DWORD *)(v3 + 8), 0) )
        {
          anonymous_namespace_::SeverWindowManagementConnectionToShell(v2);
        }
        else
        {
          v7[2] = 0;
          CurrentThread = KeGetCurrentThread();
          ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
          v7[0] = *(_DWORD *)(ThreadWin32Thread + 228);
          *(_DWORD *)(ThreadWin32Thread + 228) = v7;
          v7[1] = v3;
          HMLockObject(v3);
          v1 = xxxSendMessageCallback(0, v9, 0, 1, 0, 1u, 1);
          ThreadUnlock1();
        }
      }
    }
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v8);
  return v1;
}
