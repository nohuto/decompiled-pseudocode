/*
 * XREFs of RegisterKernelLegacyPcc @ 0x1C000E3A0
 * Callers:
 *     <none>
 * Callees:
 *     InitLegacyPccInternal @ 0x1C000DF4C (InitLegacyPccInternal.c)
 */

__int64 __fastcall RegisterKernelLegacyPcc(__int64 a1)
{
  return InitLegacyPccInternal(a1, (__int64 (__fastcall *)(_QWORD *, _QWORD))RegisterKernelPerfStatesCallback);
}
