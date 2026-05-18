/*
 * XREFs of sub_1801193F0 @ 0x1801193F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000154C @ 0x18000154C (sub_18000154C.c)
 *     sub_1801187E4 @ 0x1801187E4 (sub_1801187E4.c)
 *     sub_180118F70 @ 0x180118F70 (sub_180118F70.c)
 *     sub_180119E18 @ 0x180119E18 (sub_180119E18.c)
 *     sub_18011A0CC @ 0x18011A0CC (sub_18011A0CC.c)
 */

__int64 __fastcall sub_1801193F0(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 v7; // rax
  __int64 v8; // rcx
  void *v9; // rsi
  volatile signed __int64 *v10; // rax
  __int64 v11; // rcx
  __int64 result; // rax
  volatile signed __int64 *v13; // rcx
  __int64 v14; // [rsp+50h] [rbp-79h] BYREF
  __int64 v15; // [rsp+58h] [rbp-71h] BYREF
  __int64 v16; // [rsp+60h] [rbp-69h] BYREF
  char v17; // [rsp+70h] [rbp-59h] BYREF
  __int64 v18; // [rsp+130h] [rbp+67h] BYREF
  __int64 v19; // [rsp+148h] [rbp+7Fh] BYREF

  v3 = a1 + 120;
  v7 = sub_180119E18((char *)(a1 + 120));
  v8 = *(_QWORD *)(a1 + 112);
  *(_QWORD *)(a1 + 112) = v7;
  v9 = (void *)v7;
  if ( v8 )
  {
    o__aligned_free(v8);
    v9 = *(void **)(a1 + 112);
  }
  sub_180118F70((__int64)v9);
  sub_18011A0CC(v9);
  v10 = (volatile signed __int64 *)sub_1801187E4(v3, 0LL);
  v11 = *(_QWORD *)(a1 + 112);
  *(_QWORD *)(a1 + 112) = v10;
  if ( v11 )
  {
    o__aligned_free(v11);
    v10 = *(volatile signed __int64 **)(a1 + 112);
  }
  _InterlockedExchangeAdd64(v10 + 18, 0LL);
  result = sub_18011A0CC((void *)v10);
  if ( (unsigned int)dword_180214B90 > 5 && (qword_180214BA0 & 0x400000000000LL) != 0 )
  {
    result = qword_180214BA8 & 0x400000000000LL;
    if ( (qword_180214BA8 & 0x400000000000LL) == qword_180214BA8 )
    {
      v13 = *(volatile signed __int64 **)(a1 + 112);
      v14 = *a2;
      v15 = *(_QWORD *)(a1 + 8);
      v19 = a3;
      LODWORD(v18) = 1;
      if ( v13 )
      {
        _InterlockedExchangeAdd64(v13 + 18, 0LL);
        sub_18011A0CC((void *)v13);
      }
      else
      {
        v17 = 0;
      }
      v16 = (__int64)&v17;
      return sub_18000154C(
               (int)&dword_180214B90,
               (int)&dword_1801ED8DF,
               0,
               0,
               (void **)&v16,
               (__int64)&v18,
               &v15,
               &v14,
               (void **)&v19);
    }
  }
  return result;
}
