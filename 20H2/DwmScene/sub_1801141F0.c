/*
 * XREFs of sub_1801141F0 @ 0x1801141F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180001AAC @ 0x180001AAC (sub_180001AAC.c)
 *     sub_1801136A0 @ 0x1801136A0 (sub_1801136A0.c)
 *     sub_180114548 @ 0x180114548 (sub_180114548.c)
 *     sub_1801147FC @ 0x1801147FC (sub_1801147FC.c)
 */

__int64 __fastcall sub_1801141F0(__int64 a1, __int64 *a2, char a3, __int64 a4, __int64 a5, int *a6)
{
  void *v6; // rbx
  const char *v11; // rax
  volatile signed __int64 *v12; // rcx
  __int64 result; // rax
  __int64 v14; // rcx
  int v15; // [rsp+88h] [rbp-80h] BYREF
  int v16; // [rsp+8Ch] [rbp-7Ch] BYREF
  int v17; // [rsp+90h] [rbp-78h] BYREF
  int v18; // [rsp+94h] [rbp-74h] BYREF
  int v19; // [rsp+98h] [rbp-70h] BYREF
  __int64 v20; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v21; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v22; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v23; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v24; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v25; // [rsp+C8h] [rbp-40h] BYREF
  char v26; // [rsp+D8h] [rbp-30h] BYREF

  v6 = *(void **)(a1 + 112);
  sub_1801136A0((__int64)v6);
  sub_1801147FC(v6);
  if ( (unsigned int)dword_18020DB20 > 5
    && (qword_18020DB30 & 0x400000000000LL) != 0
    && (qword_18020DB38 & 0x400000000000LL) == qword_18020DB38 )
  {
    v21 = a4;
    v19 = 1;
    v15 = a6[7];
    v16 = a6[6];
    v17 = a6[4];
    v18 = *a6;
    v20 = a5;
    v11 = "fail";
    if ( a3 )
      v11 = "success";
    v12 = *(volatile signed __int64 **)(a1 + 112);
    v22 = (__int64)v11;
    v23 = *a2;
    v24 = *(_QWORD *)(a1 + 8);
    if ( v12 )
    {
      _InterlockedExchangeAdd64(v12 + 18, 0LL);
      sub_1801147FC((void *)v12);
    }
    else
    {
      v26 = 0;
    }
    v25 = (__int64)&v26;
    sub_180001AAC(
      (int)&dword_18020DB20,
      (int)&dword_1801E7765,
      0,
      0,
      (void **)&v25,
      (__int64)&v19,
      &v24,
      &v23,
      (void **)&v22,
      (void **)&v21,
      (__int64)&v20,
      (__int64)&v18,
      (__int64)&v17,
      (__int64)&v16,
      (__int64)&v15);
  }
  result = sub_180114548((char *)(a1 + 120));
  v14 = *(_QWORD *)(a1 + 112);
  *(_QWORD *)(a1 + 112) = result;
  if ( v14 )
    return o__aligned_free(v14);
  return result;
}
