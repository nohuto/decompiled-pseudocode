/*
 * XREFs of sub_180113220 @ 0x180113220
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800017D8 @ 0x1800017D8 (sub_1800017D8.c)
 *     sub_1801136A0 @ 0x1801136A0 (sub_1801136A0.c)
 *     sub_180114548 @ 0x180114548 (sub_180114548.c)
 *     sub_1801147FC @ 0x1801147FC (sub_1801147FC.c)
 */

__int64 __fastcall sub_180113220(
        __int64 a1,
        __int64 *a2,
        char a3,
        __int64 a4,
        int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        __int64 a19)
{
  void *v19; // rbx
  const char *v24; // rdx
  volatile signed __int64 *v25; // rcx
  __int64 result; // rax
  __int64 v27; // rcx
  int v28; // [rsp+D8h] [rbp-80h] BYREF
  int v29; // [rsp+DCh] [rbp-7Ch] BYREF
  int v30; // [rsp+E0h] [rbp-78h] BYREF
  int v31; // [rsp+E4h] [rbp-74h] BYREF
  int v32; // [rsp+E8h] [rbp-70h] BYREF
  int v33; // [rsp+ECh] [rbp-6Ch] BYREF
  int v34; // [rsp+F0h] [rbp-68h] BYREF
  __int64 v35; // [rsp+F8h] [rbp-60h] BYREF
  __int64 v36; // [rsp+100h] [rbp-58h] BYREF
  __int64 v37; // [rsp+108h] [rbp-50h] BYREF
  __int64 v38; // [rsp+110h] [rbp-48h] BYREF
  __int64 v39; // [rsp+118h] [rbp-40h] BYREF
  __int64 v40; // [rsp+120h] [rbp-38h] BYREF
  __int64 v41; // [rsp+128h] [rbp-30h] BYREF
  __int64 v42; // [rsp+130h] [rbp-28h] BYREF
  __int64 v43; // [rsp+138h] [rbp-20h] BYREF
  __int64 v44; // [rsp+140h] [rbp-18h] BYREF
  __int64 v45; // [rsp+148h] [rbp-10h] BYREF
  __int64 v46; // [rsp+150h] [rbp-8h] BYREF
  __int64 v47; // [rsp+158h] [rbp+0h] BYREF
  __int64 v48; // [rsp+160h] [rbp+8h] BYREF
  char v49; // [rsp+168h] [rbp+10h] BYREF

  v19 = *(void **)(a1 + 112);
  sub_1801136A0(v19);
  sub_1801147FC(v19);
  v24 = "fail";
  if ( a3 )
    v24 = "success";
  if ( (unsigned int)dword_18020DB20 > 5
    && (qword_18020DB30 & 0x400000000000LL) != 0
    && (qword_18020DB38 & 0x400000000000LL) == qword_18020DB38 )
  {
    v25 = *(volatile signed __int64 **)(a1 + 112);
    v35 = a19;
    v28 = a18;
    v29 = a17;
    v30 = a16;
    v31 = a15;
    v32 = a14;
    v36 = a13;
    v37 = a12;
    v38 = a11;
    v39 = a10;
    v40 = a9;
    v41 = a8;
    v42 = a7;
    v43 = a6;
    v33 = a5;
    v46 = *a2;
    v47 = *(_QWORD *)(a1 + 16);
    v44 = a4;
    v45 = (__int64)v24;
    v34 = 1;
    if ( v25 )
    {
      _InterlockedExchangeAdd64(v25 + 18, 0LL);
      sub_1801147FC((void *)v25);
    }
    else
    {
      v49 = 0;
    }
    v48 = (__int64)&v49;
    sub_1800017D8(
      (int)&dword_18020DB20,
      (int)&dword_1801E7DB4,
      0,
      0,
      (void **)&v48,
      (__int64)&v34,
      &v47,
      &v46,
      (void **)&v45,
      (void **)&v44,
      (__int64)&v33,
      (void **)&v43,
      (void **)&v42,
      (__int64)&v41,
      (__int64)&v40,
      (__int64)&v39,
      (__int64)&v38,
      (__int64)&v37,
      (__int64)&v36,
      (__int64)&v32,
      (__int64)&v31,
      (__int64)&v30,
      (__int64)&v29,
      (__int64)&v28,
      (void **)&v35);
  }
  result = sub_180114548((char *)(a1 + 120));
  v27 = *(_QWORD *)(a1 + 112);
  *(_QWORD *)(a1 + 112) = result;
  if ( v27 )
    return o__aligned_free(v27);
  return result;
}
