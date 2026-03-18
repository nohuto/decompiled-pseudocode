/*
 * XREFs of PopRecordFirmwareResetReason @ 0x140A71100
 * Callers:
 *     PoInitSystem @ 0x140A3BD5C (PoInitSystem.c)
 * Callees:
 *     <none>
 */

char __fastcall PopRecordFirmwareResetReason(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rax

  v1 = *(_QWORD *)(a1 + 240);
  LOBYTE(v2) = *(_BYTE *)(v1 + 3408);
  LOBYTE(PopFirmwareResetReason) = v2;
  if ( *(_BYTE *)(v1 + 3408) )
  {
    v2 = *(_QWORD *)(v1 + 3416);
    *((_QWORD *)&PopFirmwareResetReason + 1) = v2;
    xmmword_140C54180 = *(_OWORD *)(v1 + 3424);
    xmmword_140C54190 = *(_OWORD *)(v1 + 3440);
  }
  return v2;
}
