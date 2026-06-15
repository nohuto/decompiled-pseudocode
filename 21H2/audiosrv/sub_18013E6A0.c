/*
 * XREFs of sub_18013E6A0 @ 0x18013E6A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18013E5F0 @ 0x18013E5F0 (sub_18013E5F0.c)
 */

__int64 __fastcall sub_18013E6A0(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // ecx
  int v3; // eax

  if ( a2 )
  {
    *a2 = 0LL;
    if ( !*(_DWORD *)(a1 + 40) || *(_QWORD *)(a1 + 32) )
    {
      *(_DWORD *)(a1 + 40) = 1;
      v3 = sub_18013E5F0(*(_QWORD *)(a1 + 24), (_QWORD **)(a1 + 32), a2);
      v2 = 0;
      if ( v3 < 0 )
        return (unsigned int)v3;
    }
    else
    {
      return 1;
    }
  }
  else
  {
    return (unsigned int)-2147467261;
  }
  return v2;
}
