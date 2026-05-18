/*
 * XREFs of sub_18008C610 @ 0x18008C610
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006187C @ 0x18006187C (sub_18006187C.c)
 *     sub_180062550 @ 0x180062550 (sub_180062550.c)
 *     sub_180062744 @ 0x180062744 (sub_180062744.c)
 *     sub_18006AB3C @ 0x18006AB3C (sub_18006AB3C.c)
 *     sub_1800EF2A0 @ 0x1800EF2A0 (sub_1800EF2A0.c)
 */

__int64 __fastcall sub_18008C610(__int64 a1, __int64 *a2)
{
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx
  unsigned int v9; // eax
  __int128 v10; // [rsp+20h] [rbp-18h] BYREF

  result = sub_180062550(a1, a2);
  if ( *(_QWORD *)(a1 + 120) )
  {
    sub_18006187C(*a2 + 24, v5);
    v6 = a2[1];
    v10 = 0LL;
    if ( v6 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
      v6 = a2[1];
    }
    v7 = *a2;
    *((_QWORD *)&v10 + 1) = v6;
    v8 = *(_QWORD *)(a1 + 120);
    *(_QWORD *)&v10 = v7;
    sub_1800EF2A0(v8, &v10);
    v9 = sub_18006AB3C(*a2);
    return sub_180062744(a1, v9);
  }
  return result;
}
