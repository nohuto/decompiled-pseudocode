/*
 * XREFs of DxgkExtractBundleObject @ 0x1C02782D0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkExtractBundleObjectInternal @ 0x1C0278328 (DxgkExtractBundleObjectInternal.c)
 */

__int64 __fastcall DxgkExtractBundleObject(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rax

  if ( (unsigned __int8)PsGetCurrentThreadPreviousMode() != 1 )
  {
    v4 = WdLogNewEntry5_WdAssertion(v3, v2);
    *(_QWORD *)(v4 + 24) = 2602LL;
    WdLogEvent5_WdAssertion(v4);
  }
  LOBYTE(v2) = 1;
  LOBYTE(v3) = 1;
  return DxgkExtractBundleObjectInternal(v3, v2, 0LL, a1);
}
