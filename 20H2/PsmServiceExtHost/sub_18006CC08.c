/*
 * XREFs of sub_18006CC08 @ 0x18006CC08
 * Callers:
 *     sub_18006C9B0 @ 0x18006C9B0 (sub_18006C9B0.c)
 *     sub_18006CB24 @ 0x18006CB24 (sub_18006CB24.c)
 *     sub_18006D448 @ 0x18006D448 (sub_18006D448.c)
 * Callees:
 *     sub_180008938 @ 0x180008938 (sub_180008938.c)
 */

__int64 __fastcall sub_18006CC08(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 *v3; // rcx
  __int64 v4; // r8
  __int64 **v5; // rdx

  result = sub_180008938((_QWORD *)(a2 + 40));
  if ( (_DWORD)result )
  {
    result = v4 + 888;
    v5 = *(__int64 ***)(v4 + 896);
    if ( *v5 != (__int64 *)(v4 + 888) )
      __fastfail(3u);
    *v3 = result;
    v3[1] = (__int64)v5;
    *v5 = v3;
    *(_QWORD *)(v4 + 896) = v3;
  }
  return result;
}
