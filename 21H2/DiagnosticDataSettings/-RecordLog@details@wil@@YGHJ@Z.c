/*
 * XREFs of ?RecordLog@details@wil@@YGHJ@Z @ 0x10003814
 * Callers:
 *     ?LogFailure@details@wil@@YGXPAXIPBD110W4FailureType@2@JPBG_NPAGIPADIPAUFailureInfo@2@@Z @ 0x10003AA3 (-LogFailure@details@wil@@YGXPAXIPBD110W4FailureType@2@JPBG_NPAGIPADIPAUFailureInfo@2@@Z.c)
 * Callees:
 *     <none>
 */

int __thiscall wil::details::RecordLog(void *ecx0)
{
  `wil::details::RecordLog'::`2'::s_hrErrorLast = (int)ecx0;
  return _InterlockedIncrement(&`wil::details::RecordLog'::`2'::s_cErrorCount);
}
