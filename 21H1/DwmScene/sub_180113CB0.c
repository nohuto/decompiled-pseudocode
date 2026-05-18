/*
 * XREFs of sub_180113CB0 @ 0x180113CB0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180002030 @ 0x180002030 (sub_180002030.c)
 *     sub_1801136A0 @ 0x1801136A0 (sub_1801136A0.c)
 *     sub_180114548 @ 0x180114548 (sub_180114548.c)
 *     sub_1801147FC @ 0x1801147FC (sub_1801147FC.c)
 */

__int64 __fastcall sub_180113CB0(
        __int64 a1,
        float a2,
        float a3,
        float a4,
        int a5,
        int a6,
        int a7,
        int a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        __int64 a16,
        int a17,
        int a18,
        __int64 a19,
        int *a20,
        __int64 a21)
{
  __int64 v22; // rax
  __int64 v23; // rdx
  float v24; // xmm1_4
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rcx
  void *v28; // rsi
  __int64 result; // rax
  int v30; // r8d
  __int64 v31; // rcx
  float v32; // xmm1_4
  __int64 v33; // rax
  _QWORD *v34; // rax
  bool v35; // cf
  volatile signed __int64 *v36; // rcx
  __int64 v37; // [rsp+118h] [rbp-80h] BYREF
  float v38; // [rsp+120h] [rbp-78h] BYREF
  float v39; // [rsp+124h] [rbp-74h] BYREF
  int v40; // [rsp+128h] [rbp-70h] BYREF
  int v41; // [rsp+12Ch] [rbp-6Ch] BYREF
  int v42; // [rsp+130h] [rbp-68h] BYREF
  int v43; // [rsp+134h] [rbp-64h] BYREF
  int v44; // [rsp+138h] [rbp-60h] BYREF
  int v45; // [rsp+13Ch] [rbp-5Ch] BYREF
  int v46; // [rsp+140h] [rbp-58h] BYREF
  int v47; // [rsp+144h] [rbp-54h] BYREF
  int v48; // [rsp+148h] [rbp-50h] BYREF
  float v49; // [rsp+14Ch] [rbp-4Ch] BYREF
  float v50; // [rsp+150h] [rbp-48h] BYREF
  float v51; // [rsp+154h] [rbp-44h] BYREF
  int v52; // [rsp+158h] [rbp-40h] BYREF
  __int64 v53; // [rsp+160h] [rbp-38h] BYREF
  __int64 v54; // [rsp+168h] [rbp-30h] BYREF
  __int64 v55; // [rsp+170h] [rbp-28h] BYREF
  __int64 v56; // [rsp+178h] [rbp-20h] BYREF
  __int64 v57; // [rsp+180h] [rbp-18h] BYREF
  __int64 v58; // [rsp+188h] [rbp-10h] BYREF
  __int64 v59; // [rsp+190h] [rbp-8h] BYREF
  __int64 v60; // [rsp+198h] [rbp+0h] BYREF
  __int64 v61; // [rsp+1A0h] [rbp+8h] BYREF
  __int64 v62; // [rsp+1A8h] [rbp+10h] BYREF
  __int64 v63; // [rsp+1B0h] [rbp+18h] BYREF
  __int64 v64; // [rsp+1B8h] [rbp+20h] BYREF
  __int64 v65[3]; // [rsp+1C0h] [rbp+28h] BYREF
  char v66; // [rsp+1D8h] [rbp+40h] BYREF

  v38 = 0.0;
  v37 = 0LL;
  if ( *(_QWORD *)(a21 + 8) )
  {
    v22 = **(_QWORD **)a21;
    v23 = *(_QWORD *)(v22 + 56);
    if ( v23 )
    {
      if ( v23 < 0 )
      {
        v25 = *(_QWORD *)(v22 + 56) & 1LL | (*(_QWORD *)(v22 + 56) >> 1);
        v24 = (float)(int)v25 + (float)(int)v25;
      }
      else
      {
        v24 = (float)(int)v23;
      }
      v38 = *(float *)(v22 + 48) / v24;
    }
    LODWORD(v37) = *(_DWORD *)(v22 + 44);
    HIDWORD(v37) = *(_DWORD *)(v22 + 40);
    v65[1] = v22;
    v65[2] = v22;
  }
  v26 = sub_180114548((char *)(a1 + 120));
  v27 = *(_QWORD *)(a1 + 112);
  v28 = (void *)v26;
  *(_QWORD *)(a1 + 112) = v26;
  if ( v27 )
  {
    o__aligned_free(v27);
    v28 = *(void **)(a1 + 112);
  }
  sub_1801136A0((__int64)v28);
  result = sub_1801147FC(v28);
  if ( (unsigned int)dword_18020DB20 > 5 && (qword_18020DB30 & 0x400000000000LL) != 0 )
  {
    result = qword_18020DB38 & 0x400000000000LL;
    if ( (qword_18020DB38 & 0x400000000000LL) == qword_18020DB38 )
    {
      v30 = *(_DWORD *)(a21 + 8);
      v31 = *((_QWORD *)a20 + 2);
      if ( v31 )
      {
        if ( v31 < 0 )
        {
          v33 = *((_QWORD *)a20 + 2) & 1LL | (*((_QWORD *)a20 + 2) >> 1);
          v32 = (float)(int)v33 + (float)(int)v33;
        }
        else
        {
          v32 = (float)(int)v31;
        }
        v39 = *((float *)a20 + 2) / v32;
      }
      else
      {
        v39 = 0.0;
      }
      v41 = a20[1];
      v42 = *a20;
      v34 = (_QWORD *)(a1 + 80);
      v35 = *(_QWORD *)(a1 + 104) < 0x10uLL;
      v40 = v30;
      if ( !v35 )
        v34 = (_QWORD *)*v34;
      v36 = *(volatile signed __int64 **)(a1 + 112);
      v53 = (__int64)v34;
      v54 = a19;
      v43 = a18;
      v44 = a17;
      v55 = a16;
      v56 = a15;
      v57 = a14;
      v58 = a13;
      v59 = a12;
      v60 = a11;
      v61 = a10;
      v62 = a9;
      v45 = a8;
      v46 = a7;
      v47 = a6;
      v48 = a5;
      v49 = a4;
      v50 = a3;
      v51 = a2;
      v63 = *(_QWORD *)(a1 + 24);
      v64 = *(_QWORD *)(a1 + 8);
      v52 = 1;
      if ( v36 )
      {
        _InterlockedExchangeAdd64(v36 + 18, 0LL);
        sub_1801147FC((void *)v36);
      }
      else
      {
        v66 = 0;
      }
      v65[0] = (__int64)&v66;
      return sub_180002030(
               (int)&dword_18020DB20,
               (int)&dword_1801E7885,
               0,
               0,
               (void **)v65,
               (__int64)&v52,
               &v64,
               &v63,
               (__int64)&v51,
               (__int64)&v50,
               (__int64)&v49,
               (__int64)&v48,
               (__int64)&v47,
               (__int64)&v46,
               (__int64)&v45,
               (__int64)&v62,
               (__int64)&v61,
               (__int64)&v60,
               (__int64)&v59,
               (__int64)&v58,
               (__int64)&v57,
               (void **)&v56,
               (__int64)&v55,
               (__int64)&v44,
               (__int64)&v43,
               (__int64)&v54,
               (void **)&v53,
               (__int64)&v39,
               (__int64)&v42,
               (__int64)&v41,
               (__int64)&v38,
               (__int64)&v37 + 4,
               (__int64)&v37,
               (__int64)&v40);
    }
  }
  return result;
}
