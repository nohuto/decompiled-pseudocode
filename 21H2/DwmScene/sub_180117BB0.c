/*
 * XREFs of sub_180117BB0 @ 0x180117BB0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180001318 @ 0x180001318 (sub_180001318.c)
 *     sub_180118F70 @ 0x180118F70 (sub_180118F70.c)
 *     sub_18011A0CC @ 0x18011A0CC (sub_18011A0CC.c)
 */

__int64 __fastcall sub_180117BB0(__int64 a1, int a2, __int64 a3)
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
  sub_180118F70(v3);
  result = sub_18011A0CC(v3);
  if ( (unsigned int)dword_180214B90 > 5 && (qword_180214BA0 & 0x400000000000LL) != 0 )
  {
    result = qword_180214BA8 & 0x400000000000LL;
    if ( (qword_180214BA8 & 0x400000000000LL) == qword_180214BA8 )
    {
      v8 = *(volatile signed __int64 **)(a1 + 112);
      v12 = *(_QWORD *)(a1 + 8);
      v11 = a3;
      v9 = a2;
      v10 = 1;
      if ( v8 )
      {
        _InterlockedExchangeAdd64(v8 + 18, 0LL);
        sub_18011A0CC((void *)v8);
      }
      else
      {
        v14 = 0;
      }
      v13 = (__int64)&v14;
      return sub_180001318(
               (int)&dword_180214B90,
               (int)&dword_1801ED7F5,
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
