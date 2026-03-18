/*
 * XREFs of PopFxAccumulateDeviceIRPhaseAccounting @ 0x140567818
 * Callers:
 *     PopFxEndDeviceIRPhaseAccounting @ 0x140568FD0 (PopFxEndDeviceIRPhaseAccounting.c)
 *     PopFxUpdateDeviceIRPhaseAccounting @ 0x14056BB88 (PopFxUpdateDeviceIRPhaseAccounting.c)
 * Callees:
 *     <none>
 */

void __fastcall PopFxAccumulateDeviceIRPhaseAccounting(__int64 a1)
{
  unsigned __int64 v1; // rcx

  v1 = a1 - qword_140C23050;
  qword_140C23070 += v1;
  if ( v1 > qword_140C23060 )
    qword_140C23060 = v1;
  if ( v1 < qword_140C23068 )
    qword_140C23068 = v1;
  ++dword_140C23078;
  qword_140C23050 = 0LL;
}
