/*
 * XREFs of ?RecordReturn@details@wil@@YGHJ@Z @ 0x10003801
 * Callers:
 *     ?LogFailure@details@wil@@YGXPAXIPBD110W4FailureType@2@JPBG_NPAGIPADIPAUFailureInfo@2@@Z @ 0x10003AA3 (-LogFailure@details@wil@@YGXPAXIPBD110W4FailureType@2@JPBG_NPAGIPADIPAUFailureInfo@2@@Z.c)
 * Callees:
 *     <none>
 */

int __thiscall wil::details::RecordReturn(void *ecx0)
{
  `wil::details::RecordReturn'::`2'::s_hrErrorLast = (int)ecx0;
  return _InterlockedIncrement(&`wil::details::RecordReturn'::`2'::s_cErrorCount);
}
