/*
 * XREFs of RtlFreeUserFiberShadowStack @ 0x1800E18D0
 * Callers:
 *     <none>
 * Callees:
 *     NtSetInformationProcess @ 0x18009D190 (NtSetInformationProcess.c)
 */

__int64 RtlFreeUserFiberShadowStack()
{
  return NtSetInformationProcess();
}
