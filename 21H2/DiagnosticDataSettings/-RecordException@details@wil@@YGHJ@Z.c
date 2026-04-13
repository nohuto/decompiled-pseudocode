/*
 * XREFs of ?RecordException@details@wil@@YGHJ@Z @ 0x100037EE
 * Callers:
 *     ?LogFailure@details@wil@@YGXPAXIPBD110W4FailureType@2@JPBG_NPAGIPADIPAUFailureInfo@2@@Z @ 0x10003AA3 (-LogFailure@details@wil@@YGXPAXIPBD110W4FailureType@2@JPBG_NPAGIPADIPAUFailureInfo@2@@Z.c)
 * Callees:
 *     <none>
 */

int __thiscall wil::details::RecordException(void *ecx0)
{
  `wil::details::RecordException'::`2'::s_hrErrorLast = (int)ecx0;
  return _InterlockedIncrement(&`wil::details::RecordException'::`2'::s_cErrorCount);
}
