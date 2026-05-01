/*
 * XREFs of sub_18000B9A8 @ 0x18000B9A8
 * Callers:
 *     sub_180008EE4 @ 0x180008EE4 (sub_180008EE4.c)
 *     sub_1800148D0 @ 0x1800148D0 (sub_1800148D0.c)
 * Callees:
 *     sub_180005BB4 @ 0x180005BB4 (sub_180005BB4.c)
 *     sub_18000699C @ 0x18000699C (sub_18000699C.c)
 *     sub_180006AB4 @ 0x180006AB4 (sub_180006AB4.c)
 *     sub_18000BAA8 @ 0x18000BAA8 (sub_18000BAA8.c)
 *     sub_18000C860 @ 0x18000C860 (sub_18000C860.c)
 *     sub_18000D590 @ 0x18000D590 (sub_18000D590.c)
 *     sub_18000D980 @ 0x18000D980 (sub_18000D980.c)
 */

__int64 __fastcall sub_18000B9A8(__int64 a1, int a2, __int64 a3, int a4, _QWORD *a5)
{
  int v5; // ebx
  int v9; // edi
  int v10; // eax
  PVOID v11; // rbx
  _QWORD *v12; // rcx
  PVOID v13; // rbx
  PVOID P; // [rsp+30h] [rbp-10h] BYREF
  _QWORD *v16; // [rsp+38h] [rbp-8h] BYREF

  v16 = 0LL;
  v5 = a3;
  P = 0LL;
  v9 = sub_18000D590(a1, a3, &v16);
  if ( v9 >= 0 )
  {
    v10 = sub_18000C860(a1, a2, v5, a4, (__int64)&P);
    v11 = P;
    v9 = v10;
    if ( v10 >= 0 )
    {
      v12 = v16;
      v16 = 0LL;
      v9 = sub_18000D980(v12, P);
      if ( v9 >= 0 )
      {
        QueryUnbiasedInterruptTime((PULONGLONG)v11 + 182);
        if ( _InterlockedIncrement64((volatile signed __int64 *)v11 + 2) <= 1 )
          __fastfail(0xEu);
        v13 = P;
        sub_18000BAA8(P);
        *a5 = v13;
        v11 = 0LL;
        P = 0LL;
        v9 = 0;
      }
    }
    if ( v11 )
    {
      sub_180006AB4((__int64)v11);
      sub_180005BB4((__int64)v11);
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
    }
  }
  if ( v16 )
    sub_18000699C(a1, v16);
  return (unsigned int)v9;
}
