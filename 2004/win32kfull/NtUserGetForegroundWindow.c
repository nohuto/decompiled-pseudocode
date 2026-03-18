/*
 * XREFs of NtUserGetForegroundWindow @ 0x1C0065F40
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C00675A4 (-GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 */

__int64 NtUserGetForegroundWindow()
{
  __int64 v0; // rdx
  __int64 v1; // r8
  __int64 v2; // rbx
  __int64 v3; // rcx
  __int64 ThreadWin32Thread; // rax

  EnterSharedCrit(0LL, 1LL);
  v2 = 0LL;
  v3 = gpqForeground;
  if ( gpqForeground )
  {
    if ( *(_QWORD *)(gpqForeground + 120LL) )
    {
      ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
      v3 = *(_QWORD *)(gpqForeground + 120LL);
      v0 = *(_QWORD *)(v3 + 24);
      if ( *(_QWORD *)(ThreadWin32Thread + 448) == v0 )
        v2 = *(_QWORD *)CoreWindowProp::GetCompositeAppFrameWindowOrSelf((const struct tagWND *)v3);
    }
  }
  UserSessionSwitchLeaveCrit(v3, v0, v1);
  return v2;
}
