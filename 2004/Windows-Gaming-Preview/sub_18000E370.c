/*
 * XREFs of sub_18000E370 @ 0x18000E370
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18000E370(__int64 a1, bool *a2)
{
  int v3; // ebx
  __int64 v4; // rdx

  *a2 = 0;
  v3 = *(_DWORD *)(a1 + 80);
  v4 = *(_QWORD *)(a1 + 64);
  if ( v3 >= 0 )
  {
    v3 = 0;
    *a2 = *(_DWORD *)(a1 + 72) < *(_DWORD *)(a1 + 76);
    if ( *(_DWORD *)(a1 + 84) != *(_DWORD *)(v4 + 120) )
    {
      v3 = -2147483636;
      *(_DWORD *)(a1 + 80) = -2147483636;
      RoOriginateError(2147483660LL, 0LL);
      *a2 = 0;
    }
  }
  else
  {
    RoOriginateError((unsigned int)v3, 0LL);
  }
  return (unsigned int)v3;
}
