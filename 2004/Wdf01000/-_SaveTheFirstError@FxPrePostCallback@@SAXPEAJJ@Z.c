/*
 * XREFs of ?_SaveTheFirstError@FxPrePostCallback@@SAXPEAJJ@Z @ 0x1C001C654
 * Callers:
 *     ?InvokeStateless@FxPrePostCallback@@QEAAJXZ @ 0x1C0010BF4 (-InvokeStateless@FxPrePostCallback@@QEAAJXZ.c)
 *     ?IssuePostCxCallbacks@FxPrePostCallback@@QEAAJPEAVFxDevice@@@Z @ 0x1C0085AF8 (-IssuePostCxCallbacks@FxPrePostCallback@@QEAAJPEAVFxDevice@@@Z.c)
 *     ?IssuePreCxCallbacksStateless@FxPrePostCallback@@QEAAJPEAVFxDevice@@@Z @ 0x1C0085C4C (-IssuePreCxCallbacksStateless@FxPrePostCallback@@QEAAJPEAVFxDevice@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FxPrePostCallback::_SaveTheFirstError(int *FinalResult, int IntermeidateResult)
{
  if ( *FinalResult >= 0 )
    *FinalResult = IntermeidateResult;
}
