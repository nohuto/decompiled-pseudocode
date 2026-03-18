/*
 * XREFs of VidSchPrepareForRecovery @ 0x1C00D50C0
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiBlockDriverCallback @ 0x1C00D52C4 (VidSchiBlockDriverCallback.c)
 */

__int64 __fastcall VidSchPrepareForRecovery(__int64 a1)
{
  VidSchiBlockDriverCallback(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 2704LL) + 624LL));
  return 0LL;
}
