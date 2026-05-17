/*
 * XREFs of _RtlInitializeCriticalSectionAndSpinCount@8 @ 0x4B2E1B50
 * Callers:
 *     <none>
 * Callees:
 *     _RtlInitializeCriticalSectionEx@12 @ 0x4B2DFB90 (_RtlInitializeCriticalSectionEx@12.c)
 */

int __stdcall RtlInitializeCriticalSectionAndSpinCount(_DWORD *a1, int a2)
{
  return RtlInitializeCriticalSectionEx(a1, a2 & 0xFFFFFF, 0);
}
