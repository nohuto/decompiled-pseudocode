/*
 * XREFs of _RtlInitializeCriticalSection@4 @ 0x4B2DC2E0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlInitializeCriticalSectionEx@12 @ 0x4B2DFB90 (_RtlInitializeCriticalSectionEx@12.c)
 */

int __stdcall RtlInitializeCriticalSection(int a1)
{
  return RtlInitializeCriticalSectionEx(a1, 0, 0);
}
