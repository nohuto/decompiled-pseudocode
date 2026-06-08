/*
 * XREFs of RegisterKernelCpc @ 0x1C002E820
 * Callers:
 *     <none>
 * Callees:
 *     InitCpcStatesInternal @ 0x1C002BE58 (InitCpcStatesInternal.c)
 */

__int64 __fastcall RegisterKernelCpc(__int64 *a1)
{
  return InitCpcStatesInternal(a1, (__int64 (__fastcall *)(_QWORD *, _QWORD))RegisterKernelPerfStatesCallback);
}
