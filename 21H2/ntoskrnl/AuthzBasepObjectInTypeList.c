/*
 * XREFs of AuthzBasepObjectInTypeList @ 0x1405C18E0
 * Callers:
 *     SepNormalAccessCheck @ 0x14035B720 (SepNormalAccessCheck.c)
 *     SepMaximumAccessCheck @ 0x14035BFF0 (SepMaximumAccessCheck.c)
 *     SepMaximumAccessCheckEx @ 0x140373714 (SepMaximumAccessCheckEx.c)
 *     SepNormalAccessCheckEx @ 0x14037383C (SepNormalAccessCheckEx.c)
 *     SepExamineSaclEx @ 0x140921EB0 (SepExamineSaclEx.c)
 * Callees:
 *     <none>
 */

char __fastcall AuthzBasepObjectInTypeList(_DWORD *a1, __int64 a2, unsigned int a3, _DWORD *a4)
{
  __int64 v4; // r10

  v4 = 0LL;
  if ( !a3 )
    return 0;
  while ( *a1 != *(_DWORD *)(a2 + 48 * v4 + 4)
       || a1[1] != *(_DWORD *)(a2 + 48 * v4 + 8)
       || a1[2] != *(_DWORD *)(a2 + 48 * v4 + 12)
       || a1[3] != *(_DWORD *)(a2 + 48 * v4 + 16) )
  {
    v4 = (unsigned int)(v4 + 1);
    if ( (unsigned int)v4 >= a3 )
      return 0;
  }
  *a4 = v4;
  return 1;
}
