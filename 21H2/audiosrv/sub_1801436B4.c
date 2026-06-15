/*
 * XREFs of sub_1801436B4 @ 0x1801436B4
 * Callers:
 *     sub_180142F80 @ 0x180142F80 (sub_180142F80.c)
 *     sub_1801430C0 @ 0x1801430C0 (sub_1801430C0.c)
 *     sub_180143284 @ 0x180143284 (sub_180143284.c)
 *     sub_180143320 @ 0x180143320 (sub_180143320.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1801436B4(__int64 a1, _DWORD *a2)
{
  unsigned int v2; // r8d

  v2 = 0;
  if ( a2 )
  {
    if ( *a2 )
    {
      if ( *a2 == 1 )
      {
        *(_DWORD *)(a1 + 40) = 1;
      }
      else if ( *a2 == 2 )
      {
        *(_DWORD *)(a1 + 40) = 2;
      }
      else
      {
        return (unsigned int)-2147023728;
      }
    }
    else
    {
      *(_DWORD *)(a1 + 40) = 0;
    }
  }
  else
  {
    return (unsigned int)-2147467261;
  }
  return v2;
}
