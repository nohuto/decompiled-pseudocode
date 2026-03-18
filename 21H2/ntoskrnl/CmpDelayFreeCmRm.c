/*
 * XREFs of CmpDelayFreeCmRm @ 0x14069FED8
 * Callers:
 *     CmpRunDownCmRM @ 0x14069FD64 (CmpRunDownCmRM.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     KiSetTimerEx @ 0x1402E2D20 (KiSetTimerEx.c)
 */

void __fastcall CmpDelayFreeCmRm(_QWORD *a1)
{
  _QWORD *v2; // rax
  bool v3; // zf

  ExAcquireFastMutex(&CmpDelayFreeRMLock);
  v2 = (_QWORD *)qword_140C48F18;
  if ( *(PVOID **)qword_140C48F18 != &CmpDelayFreeRMListHead )
    __fastfail(3u);
  v3 = CmpDelayFreeRMWorkItemActive == 0;
  *a1 = &CmpDelayFreeRMListHead;
  a1[1] = v2;
  *v2 = a1;
  qword_140C48F18 = (__int64)a1;
  if ( v3 )
  {
    CmpDelayFreeRMWorkItemActive = 1;
    KiSetTimerEx((unsigned __int64)&CmpDelayFreeRMTimer, -300000000LL, 0, 0, (__int64)&CmpDelayFreeRMDpc);
  }
  KeReleaseGuardedMutex(&CmpDelayFreeRMLock);
}
