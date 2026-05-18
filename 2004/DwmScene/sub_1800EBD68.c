/*
 * XREFs of sub_1800EBD68 @ 0x1800EBD68
 * Callers:
 *     sub_1800EC774 @ 0x1800EC774 (sub_1800EC774.c)
 *     sub_1800EF7D8 @ 0x1800EF7D8 (sub_1800EF7D8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800EBD68(__int64 *a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 result; // rax

  v3 = a1[1];
  if ( a1[2] == v3 )
    return sub_1800EB700(a1, v3, a2);
  *(_QWORD *)v3 = 0LL;
  *(_QWORD *)(v3 + 8) = 0LL;
  v4 = *(_QWORD *)(a2 + 8);
  if ( v4 )
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
  *(_QWORD *)v3 = *(_QWORD *)a2;
  *(_QWORD *)(v3 + 8) = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(v3 + 16) = 0LL;
  *(_QWORD *)(v3 + 24) = 0LL;
  v5 = *(_QWORD *)(a2 + 24);
  if ( v5 )
    _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
  *(_QWORD *)(v3 + 16) = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(v3 + 24) = *(_QWORD *)(a2 + 24);
  result = *(unsigned int *)(a2 + 32);
  *(_DWORD *)(v3 + 32) = result;
  a1[1] += 40LL;
  return result;
}
