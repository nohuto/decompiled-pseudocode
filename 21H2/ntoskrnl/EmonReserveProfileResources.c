/*
 * XREFs of EmonReserveProfileResources @ 0x1404D47F0
 * Callers:
 *     <none>
 * Callees:
 *     EmonAllocateResources @ 0x1404D33F8 (EmonAllocateResources.c)
 */

__int64 __fastcall EmonReserveProfileResources(__int64 a1, unsigned int *a2, _QWORD *a3)
{
  __int64 v3; // rbx
  __int64 v5; // rsi
  __int64 v6; // rax
  unsigned int v7; // edi
  __int64 v8; // r10
  unsigned int v9; // r11d
  unsigned int *v10; // rdx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  unsigned int v14; // ecx

  *a3 = -1LL;
  v3 = 0LL;
  v5 = 0LL;
  v6 = (1LL << EmonNumberArchCounters) - 1;
  if ( a2 )
  {
    v7 = *a2;
    v8 = 0LL;
    v9 = 0;
    if ( *a2 )
    {
      v10 = a2 + 4;
      do
      {
        v11 = *(v10 - 2);
        if ( v11 )
        {
          v12 = v11 - 1;
          if ( v12 )
          {
            v13 = v12 - 2;
            if ( v13 )
            {
              if ( v13 != 1 || !EmonPebsAvailable )
                return 3221225659LL;
              if ( !EmonPebsEntrySize && !v10[2] || !v10[3] )
                return 3221225485LL;
              v5 = (__int64)v10;
            }
            else
            {
              if ( (unsigned int)EmonVersion < 2 )
                return 3221225659LL;
              if ( v3 )
                return 3221225485LL;
              v3 = *(_QWORD *)v10;
            }
          }
          else
          {
            v14 = v10[1];
            if ( v14 > 0x40 || v14 < *v10 )
              return 3221225485LL;
            v8 |= ((1LL << ((unsigned __int8)v14 - (unsigned __int8)*v10 + 1)) - 1) << *v10;
          }
        }
        else
        {
          if ( *v10 > 0x40 )
            return 3221225485LL;
          v8 |= 1LL << *v10;
        }
        ++v9;
        v10 += 6;
      }
      while ( v9 < v7 );
    }
  }
  else
  {
    v8 = v6 | (((1LL << EmonNumberFixedCounters) - 1) << 32);
  }
  if ( (v8 & (v6 | (((1LL << EmonNumberFixedCounters) - 1) << 32))) == v8 )
    return EmonAllocateResources(v8, v3, a1, v5, a3);
  else
    return 3221225485LL;
}
