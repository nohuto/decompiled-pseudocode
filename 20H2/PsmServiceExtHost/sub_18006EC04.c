/*
 * XREFs of sub_18006EC04 @ 0x18006EC04
 * Callers:
 *     sub_180032644 @ 0x180032644 (sub_180032644.c)
 *     sub_18006EC58 @ 0x18006EC58 (sub_18006EC58.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18006EC04(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rax
  _QWORD *v3; // r8
  __int64 result; // rax

  v2 = (_QWORD *)(a1 + 88);
  *(_BYTE *)(a1 + 171) |= 1u;
  *(_DWORD *)(a1 + 104) = 1;
  v3 = *(_QWORD **)(a2 + 8);
  if ( *v3 != a2 )
    __fastfail(3u);
  *v2 = a2;
  *(_QWORD *)(a1 + 96) = v3;
  *v3 = v2;
  *(_QWORD *)(a2 + 8) = v2;
  result = _InterlockedIncrement64((volatile signed __int64 *)a1);
  if ( result <= 1 )
    __fastfail(0xEu);
  return result;
}
