/*
 * XREFs of RegisterKernelCpc @ 0x1C0030980
 * Callers:
 *     <none>
 * Callees:
 *     InitCpcStatesInternal @ 0x1C002DEF8 (InitCpcStatesInternal.c)
 */

__int64 __fastcall RegisterKernelCpc(__int64 *a1)
{
  return InitCpcStatesInternal(a1, (__int64 (__fastcall *)(_QWORD *, _QWORD))RegisterKernelPerfStatesCallback);
}
