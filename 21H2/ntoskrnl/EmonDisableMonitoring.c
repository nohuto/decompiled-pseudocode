/*
 * XREFs of EmonDisableMonitoring @ 0x1404D3670
 * Callers:
 *     <none>
 * Callees:
 *     EmonConfigureCounter @ 0x14038B37C (EmonConfigureCounter.c)
 */

__int64 __fastcall EmonDisableMonitoring(int a1, unsigned int *a2)
{
  __int64 result; // rax
  _DWORD *v3; // r8
  unsigned int i; // ebx
  __int64 v5; // rcx
  __int64 v6; // rax

  result = EmonNumberCounters * KeGetPcr()->Prcb.Number;
  v3 = (_DWORD *)(EmonCounterStatus + 16LL * (unsigned int)result);
  if ( a2 )
  {
    i = *a2;
    if ( (*a2 & 0x40000000) != 0 )
      i = EmonNumberArchCounters + (i & 0xBFFFFFFF);
LABEL_9:
    EmonConfigureCounter(i, 0, 0, 0, 0);
    v5 = EmonCounterStatus + 16LL * EmonNumberCounters * KeGetPcr()->Prcb.Number;
    v6 = 2LL * i;
    *(_DWORD *)(v5 + 8 * v6 + 4) = 0;
    *(_DWORD *)(v5 + 8 * v6) = 3;
    return (unsigned int)_InterlockedExchangeAdd(&HalpPmuInUse, 0xFFFFFFFE);
  }
  for ( i = 0; i < EmonNumberCounters; v3 += 4 )
  {
    if ( !*v3 && v3[1] == a1 )
      break;
    ++i;
  }
  if ( i != EmonNumberCounters )
    goto LABEL_9;
  return result;
}
