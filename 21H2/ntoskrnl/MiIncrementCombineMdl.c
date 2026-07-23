/*
 * XREFs of MiIncrementCombineMdl @ 0x14036B05C
 * Callers:
 *     MiSharePages @ 0x140368510 (MiSharePages.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

_DWORD *__fastcall MiIncrementCombineMdl(__int64 a1, int a2)
{
  __int64 v2; // rsi
  _DWORD *v4; // rcx
  _DWORD *v6; // rbx

  v2 = a2;
  --*(_QWORD *)(a1 + 8LL * a2 + 88);
  v4 = *(_DWORD **)(a1 + 8LL * a2 + 64);
  v4[11] += 4096;
  if ( v4[11] == v4[10] )
  {
    v6 = *(_DWORD **)v4;
    ExFreePoolWithTag(v4, 0);
    v4 = v6;
    *(_QWORD *)(a1 + 8 * v2 + 64) = v6;
  }
  return v4;
}
