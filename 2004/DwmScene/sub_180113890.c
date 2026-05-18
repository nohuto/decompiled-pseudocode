/*
 * XREFs of sub_180113890 @ 0x180113890
 * Callers:
 *     <none>
 * Callees:
 *     sub_180001C54 @ 0x180001C54 (sub_180001C54.c)
 *     sub_1801136A0 @ 0x1801136A0 (sub_1801136A0.c)
 *     sub_180114548 @ 0x180114548 (sub_180114548.c)
 *     sub_1801147FC @ 0x1801147FC (sub_1801147FC.c)
 */

__int64 __fastcall sub_180113890(__int64 a1, __int64 *a2, char a3, __int64 a4, __int64 a5, int *a6, int *a7)
{
  void *v7; // rbx
  const char *v12; // rax
  volatile signed __int64 *v13; // rcx
  __int64 result; // rax
  __int64 v15; // rcx
  int v16; // [rsp+D8h] [rbp-80h] BYREF
  int v17; // [rsp+DCh] [rbp-7Ch] BYREF
  int v18; // [rsp+E0h] [rbp-78h] BYREF
  int v19; // [rsp+E4h] [rbp-74h] BYREF
  int v20; // [rsp+E8h] [rbp-70h] BYREF
  int v21; // [rsp+ECh] [rbp-6Ch] BYREF
  int v22; // [rsp+F0h] [rbp-68h] BYREF
  int v23; // [rsp+F4h] [rbp-64h] BYREF
  int v24; // [rsp+F8h] [rbp-60h] BYREF
  __int64 v25; // [rsp+100h] [rbp-58h] BYREF
  __int64 v26; // [rsp+108h] [rbp-50h] BYREF
  __int64 v27; // [rsp+110h] [rbp-48h] BYREF
  __int64 v28; // [rsp+118h] [rbp-40h] BYREF
  __int64 v29; // [rsp+120h] [rbp-38h] BYREF
  __int64 v30; // [rsp+128h] [rbp-30h] BYREF
  __int64 v31; // [rsp+130h] [rbp-28h] BYREF
  __int64 v32; // [rsp+138h] [rbp-20h] BYREF
  __int64 v33; // [rsp+140h] [rbp-18h] BYREF
  __int64 v34; // [rsp+148h] [rbp-10h] BYREF
  __int64 v35; // [rsp+150h] [rbp-8h] BYREF
  __int64 v36; // [rsp+158h] [rbp+0h] BYREF
  char v37; // [rsp+168h] [rbp+10h] BYREF

  v7 = *(void **)(a1 + 112);
  sub_1801136A0((__int64)v7);
  sub_1801147FC(v7);
  if ( (unsigned int)dword_18020DB20 > 5
    && (qword_18020DB30 & 0x400000000000LL) != 0
    && (qword_18020DB38 & 0x400000000000LL) == qword_18020DB38 )
  {
    v32 = a4;
    v24 = 1;
    v16 = a7[7];
    v17 = a7[6];
    v18 = a7[4];
    v19 = *a7;
    v25 = *((_QWORD *)a6 + 7);
    v26 = *((_QWORD *)a6 + 6);
    v27 = *((_QWORD *)a6 + 5);
    v28 = *((_QWORD *)a6 + 4);
    v29 = *((_QWORD *)a6 + 3);
    v30 = *((_QWORD *)a6 + 2);
    v20 = a6[3];
    v21 = a6[2];
    v22 = a6[1];
    v23 = *a6;
    v31 = a5;
    v12 = "fail";
    if ( a3 )
      v12 = "success";
    v13 = *(volatile signed __int64 **)(a1 + 112);
    v33 = (__int64)v12;
    v34 = *a2;
    v35 = *(_QWORD *)(a1 + 8);
    if ( v13 )
    {
      _InterlockedExchangeAdd64(v13 + 18, 0LL);
      sub_1801147FC((void *)v13);
    }
    else
    {
      v37 = 0;
    }
    v36 = (__int64)&v37;
    sub_180001C54(
      (int)&dword_18020DB20,
      (int)&dword_1801E754C,
      0,
      0,
      (void **)&v36,
      (__int64)&v24,
      &v35,
      &v34,
      (void **)&v33,
      (void **)&v32,
      (__int64)&v31,
      (__int64)&v23,
      (__int64)&v22,
      (__int64)&v21,
      (__int64)&v20,
      (__int64)&v30,
      (__int64)&v29,
      (__int64)&v28,
      (__int64)&v27,
      (__int64)&v26,
      (__int64)&v25,
      (__int64)&v19,
      (__int64)&v18,
      (__int64)&v17,
      (__int64)&v16);
  }
  result = sub_180114548((char *)(a1 + 120));
  v15 = *(_QWORD *)(a1 + 112);
  *(_QWORD *)(a1 + 112) = result;
  if ( v15 )
    return o__aligned_free(v15);
  return result;
}
