/*
 * XREFs of _anonymous_namespace_::xxxCallIAMWindowManagementHandler @ 0x1C007F1D0
 * Callers:
 *     ?xxxShowWindowPolicyHandler@CallShell@@YA_NPEAUtagWND@@IPEAW4SHELL_SPECIFIED_SHOW_COMMAND@@PEAUWINDOW_GROUP_ID@@PEAUtagRECT@@@Z @ 0x1C007F050 (-xxxShowWindowPolicyHandler@CallShell@@YA_NPEAUtagWND@@IPEAW4SHELL_SPECIFIED_SHOW_COMMAND@@PEAUW.c)
 *     ?xxxArrangementRectangleHandler@CallShell@@YA_NPEAUHWND__@@UtagPOINT@@PEAUtagRECT@@2@Z @ 0x1C023D400 (-xxxArrangementRectangleHandler@CallShell@@YA_NPEAUHWND__@@UtagPOINT@@PEAUtagRECT@@2@Z.c)
 *     ?xxxWindowSizeStartingHandler@CallShell@@YA_NPEAUtagWND@@H@Z @ 0x1C023D4F4 (-xxxWindowSizeStartingHandler@CallShell@@YA_NPEAUtagWND@@H@Z.c)
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x1C0053BA0 (xxxSendTransformableMessageTimeout.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     _anonymous_namespace_::SeverWindowManagementConnectionToShell @ 0x1C023D238 (_anonymous_namespace_--SeverWindowManagementConnectionToShell.c)
 */

__int64 __fastcall anonymous_namespace_::xxxCallIAMWindowManagementHandler(struct _LARGE_STRING *a1)
{
  __int64 v2; // rdi
  unsigned __int64 v3; // rbx
  __int64 ThreadWin32Thread; // rax
  unsigned int v5; // esi
  _BOOL8 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  _QWORD v11[4]; // [rsp+50h] [rbp-28h] BYREF
  unsigned __int64 LowLimit; // [rsp+88h] [rbp+10h] BYREF

  v2 = *(_QWORD *)(gptiCurrent + 456LL);
  LowLimit = 0LL;
  if ( !v2 )
    return 0;
  if ( !*(_QWORD *)(v2 + 288) )
    return 0;
  v3 = *(_QWORD *)(v2 + 328);
  if ( !v3 )
    return 0;
  v11[2] = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  v11[0] = *(_QWORD *)(ThreadWin32Thread + 416);
  *(_QWORD *)(ThreadWin32Thread + 416) = v11;
  v11[1] = v3;
  HMLockObject(v3);
  v5 = 1;
  v6 = xxxSendTransformableMessageTimeout(v3, 0x341u, 0LL, a1, 2u, 0x7D0u, (__int64 *)&LowLimit, 1, 1) == 0;
  ThreadUnlock1(v8, v7, v9);
  if ( v6 )
    anonymous_namespace_::SeverWindowManagementConnectionToShell(v2);
  if ( LowLimit != 1 )
    return 0;
  return v5;
}
