/*
 * XREFs of PspSetEffectiveRateControlJob @ 0x140904D48
 * Callers:
 *     PspEstablishJobHierarchy @ 0x140672018 (PspEstablishJobHierarchy.c)
 *     PspSetRateControlJobPreCallback @ 0x1409054D0 (PspSetRateControlJobPreCallback.c)
 * Callees:
 *     <none>
 */

void __fastcall PspSetEffectiveRateControlJob(__int64 a1, __int64 a2)
{
  if ( a2 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1320), 0x2000000u);
  else
    _InterlockedAnd((volatile signed __int32 *)(a1 + 1320), 0xFDFFFFFF);
  *(_QWORD *)(a1 + 832) = a2;
}
