/*
 * XREFs of PopFxAccumulateDeviceIRPhaseAccounting @ 0x1405692E8
 * Callers:
 *     PopFxEndDeviceIRPhaseAccounting @ 0x14056AA60 (PopFxEndDeviceIRPhaseAccounting.c)
 *     PopFxUpdateDeviceIRPhaseAccounting @ 0x14056D598 (PopFxUpdateDeviceIRPhaseAccounting.c)
 * Callees:
 *     <none>
 */

void __fastcall PopFxAccumulateDeviceIRPhaseAccounting(__int64 a1)
{
  unsigned __int64 v1; // rcx

  v1 = a1 - qword_140C23150;
  qword_140C23170 += v1;
  if ( v1 > qword_140C23160 )
    qword_140C23160 = v1;
  if ( v1 < qword_140C23168 )
    qword_140C23168 = v1;
  ++dword_140C23178;
  qword_140C23150 = 0LL;
}
