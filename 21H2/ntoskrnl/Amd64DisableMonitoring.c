/*
 * XREFs of Amd64DisableMonitoring @ 0x14052B780
 * Callers:
 *     <none>
 * Callees:
 *     Amd64ConfigureCounter @ 0x14052B630 (Amd64ConfigureCounter.c)
 *     Amd64FreeCounter @ 0x14052BA4C (Amd64FreeCounter.c)
 */

unsigned __int64 __fastcall Amd64DisableMonitoring(int a1, unsigned int *a2)
{
  unsigned __int64 result; // rax
  unsigned int Number; // ecx
  __int64 v5; // r8
  __int64 v6; // rbx
  signed __int64 v7; // rcx
  bool v8; // cc
  signed __int64 v9; // rcx

  result = (unsigned __int64)&DefaultProfileInterface;
  Number = KeGetPcr()->Prcb.Number;
  if ( HalpProfileInterface == &DefaultProfileInterface )
  {
    v5 = HalpCounterStatus;
  }
  else
  {
    result = HalpCounterStatus;
    v5 = HalpCounterStatus + 8LL * HalpNumberOfCounters * Number;
  }
  if ( a2 )
  {
    v6 = *a2;
    if ( a1 == 32 )
      return result;
    if ( (unsigned int)v6 >= Amd64NumberCoreCounters )
    {
      v7 = _InterlockedExchangeAdd64(
             (volatile signed __int64 *)(*(_QWORD *)(*(_QWORD *)(v5 + 8 * v6) + 16LL) + 16LL),
             0xFFFFFFFFFFFFFFFFuLL);
      v8 = v7 <= 1;
      v9 = v7 - 1;
      if ( !v8 )
        return (unsigned int)_InterlockedExchangeAdd(
                               (volatile signed __int32 *)&KeGetCurrentPrcb()->HalReserved[2],
                               0xFFFFFFFE);
      if ( v9 )
        __fastfail(0xEu);
    }
LABEL_15:
    Amd64ConfigureCounter(v6, 0, 0LL, 0LL, 0);
    Amd64FreeCounter((unsigned int)v6);
    return (unsigned int)_InterlockedExchangeAdd(
                           (volatile signed __int32 *)&KeGetCurrentPrcb()->HalReserved[2],
                           0xFFFFFFFE);
  }
  result = (unsigned int)Amd64NumberCounters;
  LODWORD(v6) = 0;
  if ( Amd64NumberCounters )
  {
    do
    {
      if ( !*(_DWORD *)(*(_QWORD *)v5 + 24LL) && *(_DWORD *)(*(_QWORD *)v5 + 32LL) == a1 )
        break;
      LODWORD(v6) = v6 + 1;
      v5 += 8LL;
    }
    while ( (unsigned int)v6 < Amd64NumberCounters );
  }
  if ( (_DWORD)v6 != Amd64NumberCounters )
    goto LABEL_15;
  return result;
}
