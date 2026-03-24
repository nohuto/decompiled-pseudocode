/*
 * XREFs of DxgkCreateBundleObject @ 0x1C02778E0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkCreateBundleObjectInternal @ 0x1C0277944 (DxgkCreateBundleObjectInternal.c)
 */

__int64 __fastcall DxgkCreateBundleObject(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  int v4; // r8d
  __int64 v5; // rax

  if ( (unsigned __int8)PsGetCurrentThreadPreviousMode() != 1 )
  {
    v5 = WdLogNewEntry5_WdAssertion(v3, v2);
    *(_QWORD *)(v5 + 24) = 2216LL;
    WdLogEvent5_WdAssertion(v5);
  }
  LOBYTE(v4) = 1;
  LOBYTE(v2) = 1;
  LOBYTE(v3) = 1;
  return DxgkCreateBundleObjectInternal(v3, v2, v4, 0, a1, 0LL);
}
