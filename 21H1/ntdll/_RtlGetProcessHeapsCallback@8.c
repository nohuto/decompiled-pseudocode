/*
 * XREFs of _RtlGetProcessHeapsCallback@8 @ 0x4B3569D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall RtlGetProcessHeapsCallback(int a1, _DWORD *a2)
{
  _DWORD *v2; // edx

  ++a2[2];
  v2 = (_DWORD *)a2[1];
  if ( (unsigned int)v2 < *a2 )
  {
    *v2 = a1;
    a2[1] += 4;
  }
  return 0;
}
