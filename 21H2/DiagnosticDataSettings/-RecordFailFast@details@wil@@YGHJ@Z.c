/*
 * XREFs of ?RecordFailFast@details@wil@@YGHJ@Z @ 0x10002070
 * Callers:
 *     ?LogFailure@details@wil@@YGXPAXIPBD110W4FailureType@2@JPBG_NPAGIPADIPAUFailureInfo@2@@Z @ 0x10003AA3 (-LogFailure@details@wil@@YGXPAXIPBD110W4FailureType@2@JPBG_NPAGIPADIPAUFailureInfo@2@@Z.c)
 * Callees:
 *     <none>
 */

int __stdcall wil::details::RecordFailFast(wil::details *this, int a2)
{
  `wil::details::RecordFailFast'::`2'::s_hrErrorLast = (int)this;
  return 1;
}
