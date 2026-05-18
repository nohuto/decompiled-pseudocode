/*
 * XREFs of sub_1800820F8 @ 0x1800820F8
 * Callers:
 *     sub_1800822C0 @ 0x1800822C0 (sub_1800822C0.c)
 * Callees:
 *     sub_18008200C @ 0x18008200C (sub_18008200C.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800820F8(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        unsigned __int8 (__fastcall *a8)(__int64, __int64))
{
  __int64 v8; // rax
  __int64 v9; // r12
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // rbx
  __int64 v15; // rbp
  __int64 v16; // r14
  __int64 v17; // rdi
  __int64 v18; // rbx
  int v21; // [rsp+70h] [rbp-68h]
  int v22; // [rsp+78h] [rbp-60h]

  v8 = (__int64)a8;
  v9 = a1;
  v11 = a5;
  v12 = a6;
  v21 = a4;
  v22 = a3;
  if ( a4 > a5 )
  {
    v17 = a5 >> 1;
    v18 = (a2 - v9) >> 4;
    v16 = v9;
    v15 = a2 + 16 * (a5 >> 1);
    if ( v18 > 0 )
    {
      do
      {
        if ( a8(v15, v16 + 16 * (v18 >> 1)) )
        {
          v18 >>= 1;
        }
        else
        {
          v16 += 16 * (v18 >> 1) + 16;
          v18 += -1 - (v18 >> 1);
        }
      }
      while ( v18 > 0 );
      v9 = a1;
      v11 = a5;
      LODWORD(a4) = v21;
      v8 = (__int64)a8;
      LODWORD(a3) = v22;
      v12 = a6;
    }
    v13 = (v16 - v9) >> 4;
  }
  else
  {
    v13 = a4 >> 1;
    v14 = (a3 - a2) >> 4;
    v15 = a2;
    v16 = v9 + 16 * (a4 >> 1);
    if ( v14 > 0 )
    {
      do
      {
        if ( a8(v15 + 16 * (v14 >> 1), v16) )
        {
          v15 += 16 * (v14 >> 1) + 16;
          v14 += -1 - (v14 >> 1);
        }
        else
        {
          v14 >>= 1;
        }
      }
      while ( v14 > 0 );
      LODWORD(v9) = a1;
      v11 = a5;
      LODWORD(a4) = v21;
      v8 = (__int64)a8;
      LODWORD(a3) = v22;
      v12 = a6;
    }
    v17 = (v15 - a2) >> 4;
  }
  return sub_18008200C(v9, a2, a3, a4, v11, v12, a7, v8, v16, v15, v13, v17);
}
