/*
 * XREFs of CmpDiskFullWarningWorker @ 0x1408792A0
 * Callers:
 *     <none>
 * Callees:
 *     ExRaiseHardError @ 0x140958940 (ExRaiseHardError.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmpDiskFullWarningWorker(void *a1)
{
  int v2; // [rsp+48h] [rbp+10h] BYREF

  v2 = 0;
  ExFreePoolWithTag(a1, 0);
  return ExRaiseHardError(-1073741697, 0, 0, 0, 1, (__int64)&v2);
}
