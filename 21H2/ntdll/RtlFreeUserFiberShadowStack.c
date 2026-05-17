/*
 * XREFs of RtlFreeUserFiberShadowStack @ 0x1800E1A30
 * Callers:
 *     <none>
 * Callees:
 *     NtSetInformationProcess @ 0x18009D9C0 (NtSetInformationProcess.c)
 */

__int64 RtlFreeUserFiberShadowStack()
{
  return NtSetInformationProcess();
}
