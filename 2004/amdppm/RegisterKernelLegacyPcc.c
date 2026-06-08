/*
 * XREFs of RegisterKernelLegacyPcc @ 0x1C000B1C0
 * Callers:
 *     <none>
 * Callees:
 *     InitLegacyPccInternal @ 0x1C000A5E8 (InitLegacyPccInternal.c)
 */

__int64 __fastcall RegisterKernelLegacyPcc(__int64 a1)
{
  return InitLegacyPccInternal(a1, (__int64 (__fastcall *)(_QWORD *, _QWORD))RegisterKernelPerfStatesCallback);
}
