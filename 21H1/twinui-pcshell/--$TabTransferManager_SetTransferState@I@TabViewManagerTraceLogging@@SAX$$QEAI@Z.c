/*
 * XREFs of ??$TabTransferManager_SetTransferState@I@TabViewManagerTraceLogging@@SAX$$QEAI@Z @ 0x18026BA30
 * Callers:
 *     ?AdvanceTransfer@TabTransferManager@@AEAAXW4TransferStates@@@Z @ 0x18026CD7C (-AdvanceTransfer@TabTransferManager@@AEAAXW4TransferStates@@@Z.c)
 *     ?PerformComplete@TabTransferManager@@AEAAXXZ @ 0x18026DED4 (-PerformComplete@TabTransferManager@@AEAAXXZ.c)
 *     ?PerformDrop@TabTransferManager@@AEAAXXZ @ 0x18026E544 (-PerformDrop@TabTransferManager@@AEAAXXZ.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VTabViewManagerTraceLogging@@@details@wil@@QEAA@XZ @ 0x18005EBD8 (--1Completer@-$static_lazy@VTabViewManagerTraceLogging@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x18008CE40 (atexit.c)
 *     ?IsEnabled@TabViewManagerTraceLogging@@SA_NE_K@Z @ 0x18024FF04 (-IsEnabled@TabViewManagerTraceLogging@@SA_NE_K@Z.c)
 *     ?TabTransferManager_SetTransferState_@TabViewManagerTraceLogging@@QEAAXI@Z @ 0x18026FE4C (-TabTransferManager_SetTransferState_@TabViewManagerTraceLogging@@QEAAXI@Z.c)
 */

void __fastcall TabViewManagerTraceLogging::TabTransferManager_SetTransferState<unsigned int>(unsigned int *a1)
{
  TabViewManagerTraceLogging *v2; // rcx
  union _RTL_RUN_ONCE *v3; // [rsp+20h] [rbp-18h] BYREF
  int v4; // [rsp+28h] [rbp-10h]
  WINBOOL fPending; // [rsp+48h] [rbp+10h] BYREF
  LPVOID Context; // [rsp+50h] [rbp+18h] BYREF

  if ( TabViewManagerTraceLogging::IsEnabled((char)a1) )
  {
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`TabViewManagerTraceLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) )
    {
      if ( fPending )
      {
        v3 = &`TabViewManagerTraceLogging::Instance'::`2'::wrapper;
        Context = &qword_1805A0218;
        qword_1805A0218 = (__int64)&TabViewManagerTraceLogging::`vftable';
        atexit(_lambda_b55becccc8b67eee49088d4c1be9735f_::_lambda_invoker_cdecl_);
        v4 = 0;
        wil::details::static_lazy<TabViewManagerTraceLogging>::Completer::~Completer((__int64)&v3);
      }
    }
    TabViewManagerTraceLogging::TabTransferManager_SetTransferState_(v2, *a1);
  }
}
