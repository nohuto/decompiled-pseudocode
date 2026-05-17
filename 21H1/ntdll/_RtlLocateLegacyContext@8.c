/*
 * XREFs of _RtlLocateLegacyContext@8 @ 0x4B35BC00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char *__stdcall RtlLocateLegacyContext(_DWORD *a1, _DWORD *a2)
{
  int v2; // esi
  int v3; // edi

  v2 = a1[2];
  if ( *a1 > v2 )
    return 0;
  v3 = a1[3];
  if ( *a1 + a1[1] < v3 + v2 )
    return 0;
  if ( a2 )
  {
    *a2 = v3;
    v2 = a1[2];
  }
  return (char *)a1 + v2;
}
