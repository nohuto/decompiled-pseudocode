/*
 * XREFs of ProcessSystemSleepStateNotify @ 0x1C00099A0
 * Callers:
 *     <none>
 * Callees:
 *     AcquireBiosPpmControl @ 0x1C0008A20 (AcquireBiosPpmControl.c)
 */

__int64 __fastcall ProcessSystemSleepStateNotify(int a1, __int64 a2, char a3)
{
  if ( (a1 == 3 || a1 == 6) && !a3 && (__int64 *)qword_1C0014410 != &qword_1C0014410 && qword_1C0014410 != 32 )
    AcquireBiosPpmControl(qword_1C0014410 - 32);
  return 0LL;
}
