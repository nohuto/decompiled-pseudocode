/*
 * XREFs of _RtlSetCriticalSectionSpinCount@8 @ 0x4B2E8980
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall RtlSetCriticalSectionSpinCount(int a1, int a2)
{
  int v2; // eax
  int v3; // ecx

  v2 = *(_DWORD *)(a1 + 20);
  v3 = v2 ^ (a2 ^ v2) & 0xFFFFFF;
  if ( NtCurrentPeb()->NumberOfProcessors == 1 )
    v3 &= 0xFF000000;
  *(_DWORD *)(a1 + 20) = v3;
  return v2 & 0xFFFFFF;
}
