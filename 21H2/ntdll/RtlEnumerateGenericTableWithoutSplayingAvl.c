/*
 * XREFs of RtlEnumerateGenericTableWithoutSplayingAvl @ 0x180065F20
 * Callers:
 *     RtlEnumerateGenericTableAvl @ 0x180065F00 (RtlEnumerateGenericTableAvl.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlEnumerateGenericTableWithoutSplayingAvl(__int64 a1, _QWORD *a2)
{
  _QWORD *v3; // rdx
  _QWORD *v4; // rax
  _QWORD *j; // rcx
  _QWORD *i; // rcx
  _QWORD *k; // rcx

  if ( *(_DWORD *)(a1 + 44) )
  {
    v3 = (_QWORD *)*a2;
    if ( v3 )
    {
      v4 = (_QWORD *)v3[2];
      if ( v4 )
      {
        for ( i = (_QWORD *)v4[1]; i; i = (_QWORD *)i[1] )
          v4 = i;
      }
      else
      {
        for ( j = (_QWORD *)*v3; (_QWORD *)j[2] == v3; j = (_QWORD *)*j )
          v3 = j;
        v4 = 0LL;
        if ( (_QWORD *)j[1] == v3 )
          v4 = j;
      }
      if ( !v4 )
        return (unsigned __int64)(v4 + 4) & -(__int64)(v4 != 0LL);
    }
    else
    {
      v4 = *(_QWORD **)(a1 + 16);
      for ( k = (_QWORD *)v4[1]; k; k = (_QWORD *)k[1] )
        v4 = k;
    }
    *a2 = v4;
    return (unsigned __int64)(v4 + 4) & -(__int64)(v4 != 0LL);
  }
  return 0LL;
}
