/*
 * XREFs of PopFxAccumulateDeviceIRPhaseAccounting @ 0x140563E38
 * Callers:
 *     PopFxEndDeviceIRPhaseAccounting @ 0x1405655D0 (PopFxEndDeviceIRPhaseAccounting.c)
 *     PopFxUpdateDeviceIRPhaseAccounting @ 0x140568158 (PopFxUpdateDeviceIRPhaseAccounting.c)
 * Callees:
 *     <none>
 */

void __fastcall PopFxAccumulateDeviceIRPhaseAccounting(__int64 a1)
{
  unsigned __int64 v1; // rcx

  v1 = a1 - qword_140C23DF0;
  qword_140C23E10 += v1;
  if ( v1 > qword_140C23E00 )
    qword_140C23E00 = v1;
  if ( v1 < qword_140C23E08 )
    qword_140C23E08 = v1;
  ++dword_140C23E18;
  qword_140C23DF0 = 0LL;
}
