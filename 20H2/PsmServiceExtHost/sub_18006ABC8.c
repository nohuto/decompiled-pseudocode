/*
 * XREFs of sub_18006ABC8 @ 0x18006ABC8
 * Callers:
 *     sub_180071C14 @ 0x180071C14 (sub_180071C14.c)
 *     sub_1800752F4 @ 0x1800752F4 (sub_1800752F4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18006ABC8(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rax
  _QWORD *v3; // r8
  __int64 result; // rax

  *(_QWORD *)(a1 + 1424) = a2;
  v2 = (_QWORD *)(a1 + 1432);
  v3 = *(_QWORD **)(a2 + 8);
  if ( *v3 != a2 )
    __fastfail(3u);
  *v2 = a2;
  *(_QWORD *)(a1 + 1440) = v3;
  *v3 = v2;
  *(_QWORD *)(a2 + 8) = v2;
  result = _InterlockedIncrement64((volatile signed __int64 *)(a1 + 16));
  if ( result <= 1 )
    __fastfail(0xEu);
  return result;
}
