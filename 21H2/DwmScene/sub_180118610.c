/*
 * XREFs of sub_180118610 @ 0x180118610
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800024F0 @ 0x1800024F0 (sub_1800024F0.c)
 *     sub_1801187E4 @ 0x1801187E4 (sub_1801187E4.c)
 *     sub_180118F70 @ 0x180118F70 (sub_180118F70.c)
 *     sub_180119E18 @ 0x180119E18 (sub_180119E18.c)
 *     sub_18011A0CC @ 0x18011A0CC (sub_18011A0CC.c)
 */

__int64 __fastcall sub_180118610(__int64 a1, __int64 *a2, __int64 *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 v11; // rax
  __int64 v12; // rcx
  void *v13; // rsi
  volatile signed __int64 *v14; // rax
  __int64 v15; // rcx
  __int64 result; // rax
  volatile signed __int64 *v17; // rcx
  __int64 v18; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v19; // [rsp+70h] [rbp-98h] BYREF
  __int64 v20; // [rsp+78h] [rbp-90h] BYREF
  __int64 v21; // [rsp+80h] [rbp-88h] BYREF
  __int64 v22; // [rsp+88h] [rbp-80h] BYREF
  __int64 v23; // [rsp+90h] [rbp-78h] BYREF
  __int64 v24; // [rsp+98h] [rbp-70h] BYREF
  char v25; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v26; // [rsp+168h] [rbp+60h] BYREF

  v6 = a1 + 120;
  v11 = sub_180119E18((char *)(a1 + 120));
  v12 = *(_QWORD *)(a1 + 112);
  *(_QWORD *)(a1 + 112) = v11;
  v13 = (void *)v11;
  if ( v12 )
  {
    o__aligned_free(v12);
    v13 = *(void **)(a1 + 112);
  }
  sub_180118F70(v13);
  sub_18011A0CC(v13);
  v14 = (volatile signed __int64 *)sub_1801187E4(v6, 0LL);
  v15 = *(_QWORD *)(a1 + 112);
  *(_QWORD *)(a1 + 112) = v14;
  if ( v15 )
  {
    o__aligned_free(v15);
    v14 = *(volatile signed __int64 **)(a1 + 112);
  }
  _InterlockedExchangeAdd64(v14 + 18, 0LL);
  result = sub_18011A0CC((void *)v14);
  if ( (unsigned int)dword_180214B90 > 5 && (qword_180214BA0 & 0x400000000000LL) != 0 )
  {
    result = qword_180214BA8 & 0x400000000000LL;
    if ( (qword_180214BA8 & 0x400000000000LL) == qword_180214BA8 )
    {
      v17 = *(volatile signed __int64 **)(a1 + 112);
      v18 = a6;
      v19 = a5;
      v21 = *a3;
      v22 = *a2;
      v23 = *(_QWORD *)(a1 + 16);
      v20 = a4;
      LODWORD(v26) = 1;
      if ( v17 )
      {
        _InterlockedExchangeAdd64(v17 + 18, 0LL);
        sub_18011A0CC((void *)v17);
      }
      else
      {
        v25 = 0;
      }
      v24 = (__int64)&v25;
      return sub_1800024F0(
               (int)&dword_180214B90,
               (int)&dword_1801EE3B9,
               0,
               0,
               (void **)&v24,
               (__int64)&v26,
               &v23,
               &v22,
               &v21,
               (void **)&v20,
               (void **)&v19,
               (void **)&v18);
    }
  }
  return result;
}
