/*
 * XREFs of _RtlEqualLuid@8 @ 0x4B346280
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __stdcall RtlEqualLuid(_DWORD *a1, _DWORD *a2)
{
  return a1[1] == a2[1] && *a1 == *a2;
}
