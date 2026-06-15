/*
 * XREFs of sub_18013411C @ 0x18013411C
 * Callers:
 *     sub_180073BA4 @ 0x180073BA4 (sub_180073BA4.c)
 * Callees:
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_18006A18C @ 0x18006A18C (sub_18006A18C.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800F6770 @ 0x1800F6770 (sub_1800F6770.c)
 *     sub_180134318 @ 0x180134318 (sub_180134318.c)
 *     sub_180138128 @ 0x180138128 (sub_180138128.c)
 */

__int64 __fastcall sub_18013411C(__int64 *a1, __int64 a2, int a3, _QWORD *a4)
{
  LPVOID v7; // rax
  void (__fastcall ***v8)(_QWORD, __int64); // rbx
  unsigned int v9; // edi
  int v10; // edx
  __int64 v11; // rdx
  int v12; // edi
  unsigned int v14; // [rsp+40h] [rbp-20h] BYREF
  void (__fastcall ***v15)(_QWORD, _QWORD); // [rsp+48h] [rbp-18h]
  __int64 v16; // [rsp+50h] [rbp-10h] BYREF
  char v17; // [rsp+58h] [rbp-8h]
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+18h]
  int v19; // [rsp+90h] [rbp+30h] BYREF

  v19 = a3;
  *a4 = 0LL;
  v14 = -1;
  v7 = sub_18006A18C(0x88uLL);
  if ( v7 )
    v8 = (void (__fastcall ***)(_QWORD, __int64))sub_180134318(v7, a2);
  else
    v8 = 0LL;
  if ( !v8 )
  {
    v9 = -2147024882;
    v10 = 921;
LABEL_9:
    sub_18004BD84((int)retaddr, v10, (int)"onecore\\internal\\sdk\\inc\\wil\\Resource.h", v9);
    goto LABEL_15;
  }
  v19 = 0;
  v9 = NtQueryWnfStateData(a1, 0LL, 0LL, &v14, 0LL, &v19) | 0x10000000;
  if ( (int)(v9 + 0x80000000) >= 0 && v9 != -805306333 )
  {
    v10 = 928;
    goto LABEL_9;
  }
  v11 = *a1;
  v16 = 0LL;
  v15 = v8 + 1;
  v17 = 1;
  v12 = RtlSubscribeWnfStateChangeNotification(&v16, v11, v14, sub_1801335D0, v8, 0LL, 0, 0);
  if ( v17 )
    sub_180138128(v15, v16);
  if ( v12 >= 0 )
  {
    v9 = 0;
    *a4 = v8;
    v8 = 0LL;
  }
  else
  {
    v9 = sub_1800F6770((int)retaddr, 943, (int)"onecore\\internal\\sdk\\inc\\wil\\Resource.h", (unsigned int)v12);
  }
LABEL_15:
  if ( v8 )
    (**v8)(v8, 1LL);
  return v9;
}
