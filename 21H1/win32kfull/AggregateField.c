/*
 * XREFs of AggregateField @ 0x1B64D5
 * Callers:
 *     InsertEventEntryInLookUpTable @ 0x1B6A24 (InsertEventEntryInLookUpTable.c)
 * Callees:
 *     <none>
 */

int __userpurge AggregateField@<eax>(signed __int64 a1@<edx:eax>, volatile signed __int64 *a2@<ecx>, signed __int64 a3)
{
  int v3; // edi
  unsigned int v4; // esi
  unsigned int v5; // esi
  signed __int64 v6; // rax
  volatile signed __int64 *v7; // eoff
  int v9; // [esp+Ch] [ebp-Ch]
  unsigned int v10; // [esp+Ch] [ebp-Ch]
  unsigned int v11; // [esp+10h] [ebp-8h]
  volatile signed __int64 *v12; // [esp+14h] [ebp-4h]

  v3 = HIDWORD(a1);
  v12 = a2;
  v9 = HIDWORD(a1);
  if ( HIDWORD(a1) == 113 )
  {
    do
    {
      v5 = *(_DWORD *)a2;
      LODWORD(v6) = *(_DWORD *)a2;
      v10 = *((_DWORD *)a2 + 1);
      HIDWORD(v6) = v10;
      v7 = v12;
      a1 = _InterlockedCompareExchange64(v12, a3 + *a2, v6);
      a2 = v7;
    }
    while ( a1 != __PAIR64__(v10, v5) );
  }
  else
  {
    LODWORD(a1) = HIDWORD(a1) - 114;
    if ( (unsigned int)(HIDWORD(a1) - 114) <= 1 )
    {
      while ( 1 )
      {
        LODWORD(a1) = *(_DWORD *)a2;
        v4 = *((_DWORD *)a2 + 1);
        v11 = *(_DWORD *)a2;
        if ( v3 == 114 )
        {
          if ( a3 >= __SPAIR64__(v4, a1) )
            return a1;
        }
        else if ( a3 <= __SPAIR64__(v4, a1) )
        {
          return a1;
        }
        HIDWORD(a1) = *((_DWORD *)a2 + 1);
        a1 = _InterlockedCompareExchange64(v12, a3, a1);
        v3 = v9;
        if ( a1 == __PAIR64__(v4, v11) )
          break;
        a2 = v12;
      }
    }
  }
  return a1;
}
