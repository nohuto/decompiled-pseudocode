/*
 * XREFs of PopFxAccumulateDeviceIRPhaseAccounting @ 0x1405CAD68
 * Callers:
 *     PopFxEndDeviceIRPhaseAccounting @ 0x1405CC220 (PopFxEndDeviceIRPhaseAccounting.c)
 *     PopFxUpdateDeviceIRPhaseAccounting @ 0x1405CE584 (PopFxUpdateDeviceIRPhaseAccounting.c)
 * Callees:
 *     <none>
 */

void __fastcall PopFxAccumulateDeviceIRPhaseAccounting(__int64 a1)
{
  unsigned __int64 v1; // rcx

  v1 = a1 - qword_140C224F0;
  qword_140C22510 += v1;
  if ( v1 > qword_140C22500 )
    qword_140C22500 = v1;
  if ( v1 < qword_140C22508 )
    qword_140C22508 = v1;
  ++dword_140C22518;
  qword_140C224F0 = 0LL;
}
