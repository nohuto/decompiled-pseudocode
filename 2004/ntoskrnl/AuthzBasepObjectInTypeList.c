/*
 * XREFs of AuthzBasepObjectInTypeList @ 0x1405BC2B0
 * Callers:
 *     SepMaximumAccessCheck @ 0x1402986C0 (SepMaximumAccessCheck.c)
 *     SepNormalAccessCheck @ 0x14029B4E0 (SepNormalAccessCheck.c)
 *     SepMaximumAccessCheckEx @ 0x140371904 (SepMaximumAccessCheckEx.c)
 *     SepNormalAccessCheckEx @ 0x140371A2C (SepNormalAccessCheckEx.c)
 *     SepExamineSaclEx @ 0x14091E900 (SepExamineSaclEx.c)
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
