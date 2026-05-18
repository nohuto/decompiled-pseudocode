/*
 * XREFs of sub_180118360 @ 0x180118360
 * Callers:
 *     <none>
 * Callees:
 *     sub_180002668 @ 0x180002668 (sub_180002668.c)
 *     sub_180118F70 @ 0x180118F70 (sub_180118F70.c)
 *     sub_180119E18 @ 0x180119E18 (sub_180119E18.c)
 *     sub_18011A0CC @ 0x18011A0CC (sub_18011A0CC.c)
 */

__int64 __fastcall sub_180118360(
        __int64 a1,
        __int64 *a2,
        __int64 *a3,
        char a4,
        __int64 a5,
        int a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
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
  __int64 v34; // [rsp+F0h] [rbp-68h] BYREF
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
  sub_180118F70(v19);
  sub_18011A0CC(v19);
  v24 = "fail";
  if ( a4 )
    v24 = "success";
  if ( (unsigned int)dword_180214B90 > 5
    && (qword_180214BA0 & 0x400000000000LL) != 0
    && (qword_180214BA8 & 0x400000000000LL) == qword_180214BA8 )
  {
    v25 = *(volatile signed __int64 **)(a1 + 112);
    v34 = a19;
    v28 = a18;
    v29 = a17;
    v30 = a16;
    v31 = a15;
    v35 = a14;
    v36 = a13;
    v37 = a12;
    v38 = a11;
    v39 = a10;
    v40 = a9;
    v41 = a8;
    v42 = a7;
    v32 = a6;
    v43 = a5;
    v45 = *a3;
    v46 = *a2;
    v47 = *(_QWORD *)(a1 + 16);
    v44 = (__int64)v24;
    v33 = 1;
    if ( v25 )
    {
      _InterlockedExchangeAdd64(v25 + 18, 0LL);
      sub_18011A0CC((void *)v25);
    }
    else
    {
      v49 = 0;
    }
    v48 = (__int64)&v49;
    sub_180002668(
      (int)&dword_180214B90,
      (int)&dword_1801EE530,
      0,
      0,
      (void **)&v48,
      (__int64)&v33,
      &v47,
      &v46,
      &v45,
      (void **)&v44,
      (void **)&v43,
      (__int64)&v32,
      (void **)&v42,
      (void **)&v41,
      (__int64)&v40,
      (__int64)&v39,
      (__int64)&v38,
      (__int64)&v37,
      (__int64)&v36,
      (__int64)&v35,
      (__int64)&v31,
      (__int64)&v30,
      (__int64)&v29,
      (__int64)&v28,
      (void **)&v34);
  }
  result = sub_180119E18((char *)(a1 + 120));
  v27 = *(_QWORD *)(a1 + 112);
  *(_QWORD *)(a1 + 112) = result;
  if ( v27 )
    return o__aligned_free(v27);
  return result;
}
