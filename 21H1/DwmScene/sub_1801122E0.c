/*
 * XREFs of sub_1801122E0 @ 0x1801122E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180001318 @ 0x180001318 (sub_180001318.c)
 *     sub_1801136A0 @ 0x1801136A0 (sub_1801136A0.c)
 *     sub_1801147FC @ 0x1801147FC (sub_1801147FC.c)
 */

__int64 __fastcall sub_1801122E0(__int64 a1, int a2, __int64 a3)
{
  void *v3; // rbx
  __int64 result; // rax
  volatile signed __int64 *v8; // rcx
  int v9; // [rsp+50h] [rbp-69h] BYREF
  int v10; // [rsp+54h] [rbp-65h] BYREF
  __int64 v11; // [rsp+58h] [rbp-61h] BYREF
  __int64 v12; // [rsp+60h] [rbp-59h] BYREF
  __int64 v13; // [rsp+68h] [rbp-51h] BYREF
  char v14; // [rsp+70h] [rbp-49h] BYREF

  v3 = *(void **)(a1 + 112);
  sub_1801136A0(v3);
  result = sub_1801147FC(v3);
  if ( (unsigned int)dword_18020DB20 > 5 && (qword_18020DB30 & 0x400000000000LL) != 0 )
  {
    result = qword_18020DB38 & 0x400000000000LL;
    if ( (qword_18020DB38 & 0x400000000000LL) == qword_18020DB38 )
    {
      v8 = *(volatile signed __int64 **)(a1 + 112);
      v12 = *(_QWORD *)(a1 + 8);
      v11 = a3;
      v9 = a2;
      v10 = 1;
      if ( v8 )
      {
        _InterlockedExchangeAdd64(v8 + 18, 0LL);
        sub_1801147FC((void *)v8);
      }
      else
      {
        v14 = 0;
      }
      v13 = (__int64)&v14;
      return sub_180001318(
               (int)&dword_18020DB20,
               (int)&dword_1801E7375,
               0,
               0,
               (void **)&v13,
               (__int64)&v10,
               &v12,
               (__int64)&v9,
               (void **)&v11);
    }
  }
  return result;
}
