/*
 * XREFs of ExpPoolTrackerReturnLimit @ 0x140216928
 * Callers:
 *     ExInsertPoolTag @ 0x140214A58 (ExInsertPoolTag.c)
 *     ExRemovePoolTag @ 0x1402166FC (ExRemovePoolTag.c)
 *     ExPoolCleanupExpansionTable @ 0x140216A4C (ExPoolCleanupExpansionTable.c)
 *     ExFreeHeapPool @ 0x140348B40 (ExFreeHeapPool.c)
 *     ExpFreeHeapSpecialPool @ 0x1406423A4 (ExpFreeHeapSpecialPool.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall ExpPoolTrackerReturnLimit(int a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  signed __int64 result; // rax
  signed __int64 v6; // r11
  __int64 v7; // r9
  signed __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  __int64 v10; // r10
  signed __int64 v11; // rcx
  bool v12; // zf
  signed __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rcx
  __int64 v17; // r9

  v3 = 8LL;
  if ( a1 != 1 )
    v3 = 32LL;
  result = 24LL;
  if ( a1 != 1 )
    result = 48LL;
  _InterlockedIncrement64((volatile signed __int64 *)(result + a3));
  v6 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v3 + a3), -a2);
  if ( *(_QWORD *)(a3 + 72) )
  {
    v7 = a1;
    if ( (*(_BYTE *)(a3 + 8LL * a1 + 56) & 1) == 0 )
    {
      v8 = *(_QWORD *)(a3 + 8LL * a1 + 56);
      v9 = (4 * a2 + 63) & 0xFFFFFFFFFFFFFFC0uLL;
      v10 = 128LL;
      if ( v9 != 64 )
        v10 = v9;
      v11 = v10 + v6;
      if ( v6 < v8 )
      {
        while ( v11 < v8 )
        {
          v13 = _InterlockedCompareExchange64((volatile signed __int64 *)(a3 + 8 * v7 + 56), v11, v8);
          v12 = v8 == v13;
          v8 = v13;
          if ( v12 )
          {
            result = abs64(v13 - v11);
            v14 = *(_QWORD *)(a3 + 72);
            v15 = 3 * v7;
            v16 = *(_QWORD *)(v14 + 24 * v7 + 16);
            v17 = *(_QWORD *)(v14 + 24 * v7 + 24);
            if ( v16 || v17 )
              return _InterlockedExchangeAdd64((volatile signed __int64 *)(v14 + 8 * v15 + 32), -result);
            return result;
          }
          result = *(_QWORD *)(v3 + a3);
          v11 = v10 + result;
          if ( result >= v8 )
            return result;
        }
      }
    }
  }
  return result;
}
