/*
 * XREFs of sub_180091EE0 @ 0x180091EE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006714C @ 0x18006714C (sub_18006714C.c)
 *     sub_180067E20 @ 0x180067E20 (sub_180067E20.c)
 *     sub_180068014 @ 0x180068014 (sub_180068014.c)
 *     sub_18007040C @ 0x18007040C (sub_18007040C.c)
 *     sub_1800F4B70 @ 0x1800F4B70 (sub_1800F4B70.c)
 */

__int64 __fastcall sub_180091EE0(__int64 a1, __int64 *a2)
{
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx
  unsigned int v9; // eax
  __int128 v10; // [rsp+20h] [rbp-18h] BYREF

  result = sub_180067E20(a1, a2);
  if ( *(_QWORD *)(a1 + 120) )
  {
    sub_18006714C(*a2 + 24, v5);
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
    sub_1800F4B70(v8, &v10);
    v9 = sub_18007040C(*a2);
    return sub_180068014(a1, v9);
  }
  return result;
}
