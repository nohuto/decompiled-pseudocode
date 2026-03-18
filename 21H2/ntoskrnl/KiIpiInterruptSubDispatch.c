/*
 * XREFs of KiIpiInterruptSubDispatch @ 0x140428980
 * Callers:
 *     KiIpiInterrupt @ 0x140428220 (KiIpiInterrupt.c)
 * Callees:
 *     KiIpiProcessRequests @ 0x140222E70 (KiIpiProcessRequests.c)
 *     KiEndThreadAccountingPeriod @ 0x1402B9660 (KiEndThreadAccountingPeriod.c)
 *     KzSetIrqlUnsafe @ 0x140569E70 (KzSetIrqlUnsafe.c)
 */

char __fastcall KiIpiInterruptSubDispatch(__int64 a1, __int64 a2, __int64 CurrentThread)
{
  __int64 v3; // rbp
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v6; // rax
  __int64 v7; // rdx
  unsigned __int64 v8; // rdx
  int v9; // ecx
  char result; // al

  if ( KiIrqlFlags )
  {
    CurrentIrql = KzSetIrqlUnsafe(14LL);
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xEuLL);
  }
  *(_BYTE *)(v3 - 87) = CurrentIrql;
  CurrentPrcb = KeGetCurrentPrcb();
  if ( ++CurrentPrcb->NestingLevel == 1 )
  {
    CurrentThread = (__int64)CurrentPrcb->CurrentThread;
    v6 = __rdtsc() - CurrentPrcb->StartCycles;
    *(_QWORD *)(CurrentThread + 72) += v6;
    v7 = *(unsigned int *)(CurrentThread + 80);
    CurrentPrcb->StartCycles += v6;
    v8 = v6 + v7;
    v9 = v8;
    if ( HIDWORD(v8) )
      v9 = -1;
    *(_DWORD *)(CurrentThread + 80) = v9;
    if ( (*(_BYTE *)(CurrentThread + 2) & 0xBE) != 0 )
      KiEndThreadAccountingPeriod((__int64)KeGetCurrentPrcb(), CurrentThread, v6);
  }
  _enable();
  result = KiIpiProcessRequests(0LL, 0LL, CurrentThread);
  _disable();
  return result;
}
