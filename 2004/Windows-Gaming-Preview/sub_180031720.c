/*
 * XREFs of sub_180031720 @ 0x180031720
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180031720(__int64 a1, _DWORD *a2)
{
  unsigned int v2; // ebx

  v2 = 0;
  *a2 = 0;
  if ( *(_BYTE *)(a1 + 109) )
  {
    *a2 = *(_DWORD *)(a1 + 104);
  }
  else
  {
    v2 = -2147418113;
    RoOriginateError(2147549183LL, 0LL);
  }
  return v2;
}
