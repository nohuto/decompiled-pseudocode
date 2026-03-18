/*
 * XREFs of CmpQuotaWarningWorker @ 0x140866EE0
 * Callers:
 *     <none>
 * Callees:
 *     ExRaiseHardError @ 0x1409517E0 (ExRaiseHardError.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmpQuotaWarningWorker(void *a1)
{
  int v2; // [rsp+48h] [rbp+10h] BYREF

  v2 = 0;
  ExFreePoolWithTag(a1, 0);
  return ExRaiseHardError(-1073741226, 0, 0, 0, 1, (__int64)&v2);
}
