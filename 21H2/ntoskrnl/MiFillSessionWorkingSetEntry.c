/*
 * XREFs of MiFillSessionWorkingSetEntry @ 0x140248620
 * Callers:
 *     PfpPrivSourceEnum @ 0x1406A53B4 (PfpPrivSourceEnum.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiFillSessionWorkingSetEntry(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r10
  unsigned __int64 v3; // r8
  unsigned __int64 result; // rax
  unsigned __int64 v5; // r9

  *(_DWORD *)a1 = *(_DWORD *)(a2 + 8);
  v2 = *(_QWORD *)(a2 + 384);
  *(_QWORD *)(a1 + 32) = v2;
  v3 = *(_QWORD *)(a2 + 376);
  *(_QWORD *)(a1 + 8) = v3;
  result = *(_QWORD *)(a2 + 184);
  *(_QWORD *)(a1 + 24) = result;
  v5 = *(_QWORD *)(a2 + 48);
  *(_QWORD *)(a1 + 16) = v5;
  if ( result >= v5 )
    result = v5;
  *(_QWORD *)(a1 + 24) = result;
  if ( v2 >= v3 )
    v2 = v3;
  if ( v2 < v5 )
    v5 = v2;
  *(_QWORD *)(a1 + 32) = v5;
  return result;
}
