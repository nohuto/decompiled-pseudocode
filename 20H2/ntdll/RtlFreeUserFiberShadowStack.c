/*
 * XREFs of RtlFreeUserFiberShadowStack @ 0x1800E1C70
 * Callers:
 *     <none>
 * Callees:
 *     NtSetInformationProcess @ 0x18009D430 (NtSetInformationProcess.c)
 */

__int64 RtlFreeUserFiberShadowStack()
{
  return NtSetInformationProcess();
}
