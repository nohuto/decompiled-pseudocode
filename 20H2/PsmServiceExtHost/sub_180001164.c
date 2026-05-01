/*
 * XREFs of sub_180001164 @ 0x180001164
 * Callers:
 *     sub_180017A10 @ 0x180017A10 (sub_180017A10.c)
 * Callees:
 *     sub_1800012D4 @ 0x1800012D4 (sub_1800012D4.c)
 *     sub_18000138C @ 0x18000138C (sub_18000138C.c)
 *     sub_180001488 @ 0x180001488 (sub_180001488.c)
 *     sub_180008938 @ 0x180008938 (sub_180008938.c)
 *     sub_1800265B0 @ 0x1800265B0 (sub_1800265B0.c)
 */

__int64 __fastcall sub_180001164(_QWORD *P, unsigned int a2)
{
  __int64 v3; // rsi
  int v5; // eax
  unsigned int v6; // ebp
  _QWORD *v8; // rcx
  __int64 v9; // rdx
  _QWORD *v10; // rax
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  v3 = P[6] + 176LL;
  RtlQueryUnbiasedInterruptTime(&v11);
  v5 = sub_18000138C(v3, P, a2);
  v6 = v5;
  if ( !a2 )
  {
    if ( !(unsigned int)sub_180008938(P + 157) )
    {
      v9 = *v8;
      if ( *(_QWORD **)(*v8 + 8LL) != v8 || (v10 = (_QWORD *)v8[1], (_QWORD *)*v10 != v8) )
        __fastfail(3u);
      *v10 = v9;
      *(_QWORD *)(v9 + 8) = v10;
      *(_OWORD *)v8 = 0LL;
      sub_1800265B0(P);
    }
    goto LABEL_4;
  }
  if ( v5 >= 0 )
  {
    sub_180001488(v3, P, v11);
LABEL_4:
    sub_1800012D4(v3, v11);
  }
  return v6;
}
