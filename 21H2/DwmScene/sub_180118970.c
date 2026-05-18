/*
 * XREFs of sub_180118970 @ 0x180118970
 * Callers:
 *     <none>
 * Callees:
 *     sub_180001EDC @ 0x180001EDC (sub_180001EDC.c)
 *     sub_180118F70 @ 0x180118F70 (sub_180118F70.c)
 *     sub_180119E18 @ 0x180119E18 (sub_180119E18.c)
 *     sub_18011A0CC @ 0x18011A0CC (sub_18011A0CC.c)
 */

__int64 __fastcall sub_180118970(__int64 a1, __int64 *a2, __int64 a3, int a4, __int64 a5)
{
  void *v5; // rbx
  volatile signed __int64 *v10; // rcx
  __int64 result; // rax
  __int64 v12; // rcx
  int v13; // [rsp+68h] [rbp-A0h] BYREF
  int v14; // [rsp+6Ch] [rbp-9Ch] BYREF
  __int64 v15; // [rsp+70h] [rbp-98h] BYREF
  __int64 v16; // [rsp+78h] [rbp-90h] BYREF
  __int64 v17; // [rsp+80h] [rbp-88h] BYREF
  __int64 v18; // [rsp+88h] [rbp-80h] BYREF
  __int64 v19; // [rsp+90h] [rbp-78h] BYREF
  char v20; // [rsp+98h] [rbp-70h] BYREF

  v5 = *(void **)(a1 + 112);
  sub_180118F70(v5);
  sub_18011A0CC(v5);
  if ( (unsigned int)dword_180214B90 > 5
    && (qword_180214BA0 & 0x400000000000LL) != 0
    && (qword_180214BA8 & 0x400000000000LL) == qword_180214BA8 )
  {
    v10 = *(volatile signed __int64 **)(a1 + 112);
    v15 = a5;
    v17 = *a2;
    v18 = *(_QWORD *)(a1 + 16);
    v13 = a4;
    v16 = a3;
    v14 = 1;
    if ( v10 )
    {
      _InterlockedExchangeAdd64(v10 + 18, 0LL);
      sub_18011A0CC((void *)v10);
    }
    else
    {
      v20 = 0;
    }
    v19 = (__int64)&v20;
    sub_180001EDC(
      (int)&dword_180214B90,
      (int)&dword_1801EE195,
      0,
      0,
      (void **)&v19,
      (__int64)&v14,
      &v18,
      &v17,
      (void **)&v16,
      (__int64)&v13,
      (void **)&v15);
  }
  result = sub_180119E18((char *)(a1 + 120));
  v12 = *(_QWORD *)(a1 + 112);
  *(_QWORD *)(a1 + 112) = result;
  if ( v12 )
    return o__aligned_free(v12);
  return result;
}
