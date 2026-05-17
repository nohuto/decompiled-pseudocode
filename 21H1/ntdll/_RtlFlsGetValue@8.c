/*
 * XREFs of _RtlFlsGetValue@8 @ 0x4B2DBA30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall RtlFlsGetValue(unsigned int a1, _DWORD *a2)
{
  _DWORD *FlsData; // ecx
  unsigned int v3; // eax
  int v4; // edx
  int v5; // eax
  int *v6; // eax
  int v7; // eax

  FlsData = NtCurrentTeb()->FlsData;
  if ( !a1 || a1 >= 0xFF0 || !FlsData )
    return -1073741811;
  _BitScanReverse(&v3, a1 + 16);
  v4 = (a1 + 16) ^ (1 << v3);
  v5 = FlsData[v3 - 2];
  if ( v5 && (v6 = (int *)(v5 + 4 * v4 + 4)) != 0 )
    v7 = *v6;
  else
    v7 = 0;
  *a2 = v7;
  return 0;
}
