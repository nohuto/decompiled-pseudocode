/*
 * XREFs of IsCapturedByThread @ 0x1C01A9620
 * Callers:
 *     <none>
 * Callees:
 *     ?GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1C0033D74 (-GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     _anonymous_namespace_::GetMouseProcessor @ 0x1C00554EC (_anonymous_namespace_--GetMouseProcessor.c)
 */

bool __fastcall IsCapturedByThread(struct tagTHREADINFO **a1)
{
  __int64 MouseProcessor; // rax
  char v3; // dl

  MouseProcessor = anonymous_namespace_::GetMouseProcessor();
  v3 = 0;
  if ( MouseProcessor )
    return CInputDest::GetThreadInfo((CInputDest *)(MouseProcessor + 3568)) == *a1;
  return v3;
}
