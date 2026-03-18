/*
 * XREFs of CmpDelayFreeCmRm @ 0x14065306C
 * Callers:
 *     CmpRunDownCmRM @ 0x140652EF0 (CmpRunDownCmRM.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x1402071B0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x14020AC90 (KeReleaseGuardedMutex.c)
 *     KiSetTimerEx @ 0x1402C90A0 (KiSetTimerEx.c)
 */

void __fastcall CmpDelayFreeCmRm(_QWORD *a1)
{
  _QWORD *v2; // rax
  bool v3; // zf

  ExAcquireFastMutex(&CmpDelayFreeRMLock);
  v2 = (_QWORD *)qword_140C479E8;
  if ( *(PVOID **)qword_140C479E8 != &CmpDelayFreeRMListHead )
    __fastfail(3u);
  v3 = CmpDelayFreeRMWorkItemActive == 0;
  *a1 = &CmpDelayFreeRMListHead;
  a1[1] = v2;
  *v2 = a1;
  qword_140C479E8 = (__int64)a1;
  if ( v3 )
  {
    CmpDelayFreeRMWorkItemActive = 1;
    KiSetTimerEx((__int64)&CmpDelayFreeRMTimer, -300000000LL, 0, 0, (__int64)&CmpDelayFreeRMDpc);
  }
  KeReleaseGuardedMutex(&CmpDelayFreeRMLock);
}
