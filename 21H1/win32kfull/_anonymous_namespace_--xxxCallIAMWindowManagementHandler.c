/*
 * XREFs of _anonymous_namespace_::xxxCallIAMWindowManagementHandler @ 0x92764
 * Callers:
 *     ?xxxShowWindowPolicyHandler@CallShell@@YG_NPAUtagWND@@IPAW4SHELL_SPECIFIED_SHOW_COMMAND@@PAUWINDOW_GROUP_ID@@PAUtagRECT@@@Z @ 0x9267C (-xxxShowWindowPolicyHandler@CallShell@@YG_NPAUtagWND@@IPAW4SHELL_SPECIFIED_SHOW_COMMAND@@PAUWIND.c)
 *     ?xxxArrangementRectangleHandler@CallShell@@YG_NPAUHWND__@@UtagPOINT@@PAUtagRECT@@2@Z @ 0x19C3BB (-xxxArrangementRectangleHandler@CallShell@@YG_NPAUHWND__@@UtagPOINT@@PAUtagRECT@@2@Z.c)
 *     ?xxxWindowSizeStartingHandler@CallShell@@YG_NPAUtagWND@@H@Z @ 0x19C48F (-xxxWindowSizeStartingHandler@CallShell@@YG_NPAUtagWND@@H@Z.c)
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _xxxSendTransformableMessageTimeout@36 @ 0x402E0 (_xxxSendTransformableMessageTimeout@36.c)
 *     _anonymous_namespace_::SeverWindowManagementConnectionToShell @ 0x19C316 (_anonymous_namespace_--SeverWindowManagementConnectionToShell.c)
 */

int __thiscall anonymous_namespace_::xxxCallIAMWindowManagementHandler(void *this)
{
  ShellWindowManagement *v1; // edi
  int v2; // ebx
  int v3; // esi
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int v6; // esi
  _DWORD v8[3]; // [esp+Ch] [ebp-14h] BYREF
  int v9; // [esp+18h] [ebp-8h]
  int v10; // [esp+1Ch] [ebp-4h] BYREF

  v9 = (int)this;
  v1 = *(ShellWindowManagement **)(_gptiCurrent + 248);
  v10 = 0;
  if ( !v1 )
    return 0;
  if ( !*((_DWORD *)v1 + 44) )
    return 0;
  v3 = *((_DWORD *)v1 + 50);
  if ( !v3 )
    return 0;
  v8[2] = 0;
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
  v8[0] = *(_DWORD *)(ThreadWin32Thread + 228);
  *(_DWORD *)(ThreadWin32Thread + 228) = v8;
  v8[1] = v3;
  HMLockObject(v3);
  v2 = 1;
  v6 = -(xxxSendTransformableMessageTimeout(v3, 0x341u, 0, v9, 2u, (struct tagDDECONV *)0x7D0, &v10, 1u, 1) != 0);
  ThreadUnlock1();
  if ( v6 != -1 )
    anonymous_namespace_::SeverWindowManagementConnectionToShell(v1);
  if ( v10 != 1 )
    return 0;
  return v2;
}
