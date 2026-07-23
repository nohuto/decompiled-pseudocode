/*
 * XREFs of PopFxAccumulateDeviceIRPhaseAccounting @ 0x140569528
 * Callers:
 *     PopFxEndDeviceIRPhaseAccounting @ 0x14056ACA0 (PopFxEndDeviceIRPhaseAccounting.c)
 *     PopFxUpdateDeviceIRPhaseAccounting @ 0x14056D7D8 (PopFxUpdateDeviceIRPhaseAccounting.c)
 * Callees:
 *     <none>
 */

void __fastcall PopFxAccumulateDeviceIRPhaseAccounting(__int64 a1)
{
  unsigned __int64 v1; // rcx

  v1 = a1 - qword_140C23750;
  qword_140C23770 += v1;
  if ( v1 > qword_140C23760 )
    qword_140C23760 = v1;
  if ( v1 < qword_140C23768 )
    qword_140C23768 = v1;
  ++dword_140C23778;
  qword_140C23750 = 0LL;
}
