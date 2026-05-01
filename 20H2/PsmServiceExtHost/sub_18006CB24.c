/*
 * XREFs of sub_18006CB24 @ 0x18006CB24
 * Callers:
 *     sub_18006CAD0 @ 0x18006CAD0 (sub_18006CAD0.c)
 *     sub_18006D660 @ 0x18006D660 (sub_18006D660.c)
 * Callees:
 *     sub_180008938 @ 0x180008938 (sub_180008938.c)
 *     sub_18006CC08 @ 0x18006CC08 (sub_18006CC08.c)
 *     sub_18006D6E8 @ 0x18006D6E8 (sub_18006D6E8.c)
 */

__int64 __fastcall sub_18006CB24(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rcx
  __int64 v3; // r9
  __int64 v4; // r10
  __int64 v5; // r8
  __int64 v6; // rdx
  _QWORD *v7; // rax
  __int64 result; // rax
  __int64 v9; // rcx
  __int64 v10; // r9

  if ( !(unsigned int)sub_180008938((_QWORD *)(a2 + 88)) )
  {
    v5 = *v2;
    v6 = *(_QWORD *)(v3 + 56);
    if ( *(_QWORD **)(*v2 + 8LL) != v2 || (v7 = (_QWORD *)v2[1], (_QWORD *)*v7 != v2) )
      __fastfail(3u);
    *v7 = v5;
    *(_QWORD *)(v5 + 8) = v7;
    *(_OWORD *)v2 = 0LL;
    --*(_DWORD *)(v6 + 60);
    sub_18006CC08(v4, v6);
  }
  result = sub_180008938((_QWORD *)(v3 + 104));
  if ( !(_DWORD)result )
    return sub_18006D6E8(v9, v10);
  return result;
}
