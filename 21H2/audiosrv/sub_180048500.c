/*
 * XREFs of sub_180048500 @ 0x180048500
 * Callers:
 *     sub_180048018 @ 0x180048018 (sub_180048018.c)
 * Callees:
 *     sub_1800271DC @ 0x1800271DC (sub_1800271DC.c)
 *     sub_180049F80 @ 0x180049F80 (sub_180049F80.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 */

__int64 __fastcall sub_180048500(__int64 a1, __int64 a2, void *a3)
{
  int v4; // edi
  bool v6; // zf
  __int64 v7; // rdx
  int v8; // r8d
  __int64 v9; // rax
  int v10; // ebx
  __int64 v12; // rdx
  __int128 v13; // [rsp+48h] [rbp-19h] BYREF
  _BYTE v14[24]; // [rsp+58h] [rbp-9h]
  __int64 v15; // [rsp+70h] [rbp+Fh] BYREF
  __int128 v16; // [rsp+78h] [rbp+17h]
  __int64 v17; // [rsp+88h] [rbp+27h]
  __int64 *v18; // [rsp+A8h] [rbp+47h]
  void *retaddr; // [rsp+C0h] [rbp+5Fh]

  v4 = a2;
  if ( !a2 )
  {
    v12 = 7244LL;
LABEL_7:
    v10 = -2147467261;
    goto LABEL_9;
  }
  if ( !a3 )
  {
    v12 = 7245LL;
    goto LABEL_7;
  }
  sub_1800271DC((unsigned __int64 *)a1, &v13);
  v6 = *(_DWORD *)(a1 + 188) == 0;
  v15 = (__int64)off_180154CF8;
  *(_OWORD *)&v14[8] = v13;
  v7 = *(_QWORD *)(a1 + 24);
  LOBYTE(v8) = !v6;
  v18 = &v15;
  v9 = *(_QWORD *)(a1 + 40);
  *(_QWORD *)v14 = a1;
  v17 = *(_OWORD *)&_mm_unpackhi_pd(*(__m128d *)&v14[8], *(__m128d *)&v14[8]);
  v16 = *(_OWORD *)v14;
  v10 = sub_180049F80((int)a1 + 1768, v7, v8, v4, v9, (__int64)&v15, a3);
  if ( v10 >= 0 )
    return 0LL;
  v12 = 7271LL;
LABEL_9:
  sub_18004BD84(
    retaddr,
    v12,
    "avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (unsigned int)v10);
  return (unsigned int)v10;
}
