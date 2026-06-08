/*
 * XREFs of RegisterKernelLegacyPcc @ 0x1C000BA00
 * Callers:
 *     <none>
 * Callees:
 *     InitLegacyPccInternal @ 0x1C000AE18 (InitLegacyPccInternal.c)
 */

__int64 __fastcall RegisterKernelLegacyPcc(__int64 a1)
{
  return InitLegacyPccInternal(a1, (__int64 (__fastcall *)(_QWORD *, _QWORD))RegisterKernelPerfStatesCallback);
}
