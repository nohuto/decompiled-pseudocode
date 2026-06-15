/*
 * XREFs of sub_180005224 @ 0x180005224
 * Callers:
 *     sub_1800051F0 @ 0x1800051F0 (sub_1800051F0.c)
 * Callees:
 *     sub_18000112C @ 0x18000112C (sub_18000112C.c)
 */

int __fastcall sub_180005224(__int64 a1, int *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  int v7; // [rsp+A8h] [rbp-9h] BYREF
  int v8; // [rsp+ACh] [rbp-5h] BYREF
  __int64 v9; // [rsp+B0h] [rbp-1h] BYREF
  void *v10; // [rsp+B8h] [rbp+7h] BYREF
  void *v11; // [rsp+C0h] [rbp+Fh] BYREF
  __int64 v12; // [rsp+C8h] [rbp+17h] BYREF
  __int64 v13; // [rsp+D0h] [rbp+1Fh] BYREF
  __int64 v14; // [rsp+D8h] [rbp+27h] BYREF
  __int64 v15; // [rsp+E0h] [rbp+2Fh] BYREF
  __int64 v16; // [rsp+E8h] [rbp+37h] BYREF
  __int64 v17; // [rsp+F0h] [rbp+3Fh] BYREF
  __int64 v18; // [rsp+F8h] [rbp+47h] BYREF
  int v19; // [rsp+118h] [rbp+67h] BYREF
  __int64 v20; // [rsp+128h] [rbp+77h] BYREF
  __int64 v21; // [rsp+130h] [rbp+7Fh] BYREF

  v4 = *(_QWORD *)(a1 + 8);
  if ( *(_DWORD *)v4 > 2u && (*(_QWORD *)(v4 + 16) & 0x200000000000LL) != 0 )
  {
    v5 = *(_QWORD *)(v4 + 24) & 0x200000000000LL;
    if ( v5 == *(_QWORD *)(v4 + 24) )
    {
      v10 = (void *)*((_QWORD *)a2 + 14);
      v11 = (void *)*((_QWORD *)a2 + 13);
      v19 = a2[24];
      v12 = *((_QWORD *)a2 + 11);
      v13 = *((_QWORD *)a2 + 10);
      LODWORD(v20) = a2[18];
      v14 = *((_QWORD *)a2 + 8);
      LODWORD(v21) = a2[6];
      v15 = *((_QWORD *)a2 + 2);
      v7 = *a2;
      v16 = *((_QWORD *)a2 + 15);
      v8 = a2[14];
      v17 = *((_QWORD *)a2 + 6);
      LODWORD(v9) = a2[1];
      v18 = 0x1000000LL;
      LODWORD(v5) = sub_18000112C(
                      v4,
                      (unsigned __int8 *)dword_18004610E,
                      0x200000000000LL,
                      a4,
                      (__int64)&v18,
                      (__int64)&v9,
                      (void **)&v17,
                      (__int64)&v8,
                      (void **)&v16,
                      (__int64)&v7,
                      (void **)&v15,
                      (__int64)&v21,
                      (void **)&v14,
                      (__int64)&v20,
                      (void **)&v13,
                      (void **)&v12,
                      (__int64)&v19,
                      &v11,
                      &v10);
    }
  }
  return v5;
}
