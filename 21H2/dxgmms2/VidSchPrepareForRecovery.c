/*
 * XREFs of VidSchPrepareForRecovery @ 0x1C00F6BF0
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiBlockDriverCallback @ 0x1C00F6DDC (VidSchiBlockDriverCallback.c)
 */

__int64 __fastcall VidSchPrepareForRecovery(__int64 a1)
{
  VidSchiBlockDriverCallback(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 2800LL) + 632LL));
  return 0LL;
}
