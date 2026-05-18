/*
 * XREFs of sub_18011A180 @ 0x18011A180
 * Callers:
 *     <none>
 * Callees:
 *     sub_180001410 @ 0x180001410 (sub_180001410.c)
 *     sub_180118F70 @ 0x180118F70 (sub_180118F70.c)
 *     sub_18011A0CC @ 0x18011A0CC (sub_18011A0CC.c)
 */

char __fastcall sub_18011A180(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rbx
  unsigned __int64 v9; // rax
  char result; // al
  __int64 v11; // rcx
  int v12; // [rsp+58h] [rbp-B0h] BYREF
  int v13; // [rsp+5Ch] [rbp-ACh] BYREF
  __int64 v14; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v15; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v16; // [rsp+70h] [rbp-98h] BYREF
  __int64 v17; // [rsp+78h] [rbp-90h] BYREF
  _BYTE v18[144]; // [rsp+88h] [rbp-80h] BYREF

  v4 = *(_QWORD **)(a1 + 112);
  v9 = sub_180118F70((__int64)v4);
  result = sub_18011A0CC(v4, v9, (_BYTE *)(a1 + 120));
  if ( (unsigned int)dword_180214B90 > 5 && (qword_180214BA0 & 0x400000000000LL) != 0 )
  {
    result = 0;
    if ( (qword_180214BA8 & 0x400000000000LL) == qword_180214BA8 )
    {
      v11 = *(_QWORD *)(a1 + 112);
      v16 = *(_QWORD *)(a1 + 16);
      v14 = a4;
      v15 = a3;
      v12 = a2;
      v13 = 1;
      if ( v11 )
        sub_18011A0CC((_QWORD *)v11, _InterlockedExchangeAdd64((volatile signed __int64 *)(v11 + 144), 0LL), v18);
      else
        v18[0] = 0;
      v17 = (__int64)v18;
      return sub_180001410(
               (int)&dword_180214B90,
               (int)&dword_1801EE038,
               0,
               0,
               (void **)&v17,
               (__int64)&v13,
               &v16,
               (__int64)&v12,
               (void **)&v15,
               (void **)&v14);
    }
  }
  return result;
}
