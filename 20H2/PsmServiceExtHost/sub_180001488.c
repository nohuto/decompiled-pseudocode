/*
 * XREFs of sub_180001488 @ 0x180001488
 * Callers:
 *     sub_180001164 @ 0x180001164 (sub_180001164.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180001488(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rcx
  __int64 result; // rax

  if ( _InterlockedIncrement64((volatile signed __int64 *)(a2 + 16)) <= 1 )
    __fastfail(0xEu);
  v4 = *(_QWORD **)(a1 + 8);
  v5 = (_QWORD *)(a2 + 1256);
  if ( *v4 != a1 )
    __fastfail(3u);
  *(_QWORD *)(a2 + 1264) = v4;
  *v5 = a1;
  *v4 = v5;
  *(_QWORD *)(a1 + 8) = v5;
  result = -1LL;
  if ( a3 + 10000LL * *(unsigned int *)(a1 + 24) >= a3 )
    result = a3 + 10000LL * *(unsigned int *)(a1 + 24);
  *(_QWORD *)(a2 + 1288) = result;
  return result;
}
