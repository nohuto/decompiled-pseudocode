/*
 * XREFs of sub_180113750 @ 0x180113750
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000154C @ 0x18000154C (sub_18000154C.c)
 *     sub_1801136A0 @ 0x1801136A0 (sub_1801136A0.c)
 *     sub_180114548 @ 0x180114548 (sub_180114548.c)
 *     sub_1801147FC @ 0x1801147FC (sub_1801147FC.c)
 */

__int64 __fastcall sub_180113750(__int64 a1, __int64 *a2, __int64 a3)
{
  void *v3; // rbx
  volatile signed __int64 *v7; // rcx
  __int64 result; // rax
  __int64 v9; // rcx
  __int64 v10; // [rsp+50h] [rbp-69h] BYREF
  __int64 v11; // [rsp+58h] [rbp-61h] BYREF
  __int64 v12; // [rsp+60h] [rbp-59h] BYREF
  char v13; // [rsp+70h] [rbp-49h] BYREF
  __int64 v14; // [rsp+120h] [rbp+67h] BYREF
  __int64 v15; // [rsp+138h] [rbp+7Fh] BYREF

  v3 = *(void **)(a1 + 112);
  sub_1801136A0((__int64)v3);
  sub_1801147FC(v3);
  if ( (unsigned int)dword_18020DB20 > 5
    && (qword_18020DB30 & 0x400000000000LL) != 0
    && (qword_18020DB38 & 0x400000000000LL) == qword_18020DB38 )
  {
    v7 = *(volatile signed __int64 **)(a1 + 112);
    v10 = *a2;
    v11 = *(_QWORD *)(a1 + 8);
    v15 = a3;
    LODWORD(v14) = 1;
    if ( v7 )
    {
      _InterlockedExchangeAdd64(v7 + 18, 0LL);
      sub_1801147FC((void *)v7);
    }
    else
    {
      v13 = 0;
    }
    v12 = (__int64)&v13;
    sub_18000154C(
      (int)&dword_18020DB20,
      (int)&dword_1801E74D2,
      0,
      0,
      (void **)&v12,
      (__int64)&v14,
      &v11,
      &v10,
      (void **)&v15);
  }
  result = sub_180114548((char *)(a1 + 120));
  v9 = *(_QWORD *)(a1 + 112);
  *(_QWORD *)(a1 + 112) = result;
  if ( v9 )
    return o__aligned_free(v9);
  return result;
}
