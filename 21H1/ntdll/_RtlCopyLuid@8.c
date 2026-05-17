/*
 * XREFs of _RtlCopyLuid@8 @ 0x4B3460B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall RtlCopyLuid(_DWORD *a1, _DWORD *a2)
{
  int result; // eax

  *a1 = *a2;
  result = a2[1];
  a1[1] = result;
  return result;
}
