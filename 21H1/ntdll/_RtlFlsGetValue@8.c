/*
 * XREFs of _RtlFlsGetValue@8 @ 0x4B2DBA30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlFlsGetValue(ULONG FlsIndex, PVOID *FlsData)
{
  _DWORD *v2; // ecx
  unsigned int v3; // eax
  ULONG v4; // edx
  int v5; // eax
  void **v6; // eax
  void *v7; // eax

  v2 = NtCurrentTeb()->FlsData;
  if ( !FlsIndex || FlsIndex >= 0xFF0 || !v2 )
    return -1073741811;
  _BitScanReverse(&v3, FlsIndex + 16);
  v4 = (FlsIndex + 16) ^ (1 << v3);
  v5 = v2[v3 - 2];
  if ( v5 && (v6 = (void **)(v5 + 4 * v4 + 4)) != 0 )
    v7 = *v6;
  else
    v7 = 0;
  *FlsData = v7;
  return 0;
}
