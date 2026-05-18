/*
 * XREFs of sub_180016D1C @ 0x180016D1C
 * Callers:
 *     sub_18001E0C4 @ 0x18001E0C4 (sub_18001E0C4.c)
 * Callees:
 *     sub_18001680C @ 0x18001680C (sub_18001680C.c)
 *     sub_180019460 @ 0x180019460 (sub_180019460.c)
 *     sub_180080B3C @ 0x180080B3C (sub_180080B3C.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 *__fastcall sub_180016D1C(__int64 *a1, _OWORD *a2, _QWORD *a3, _QWORD *a4)
{
  __int64 v7; // rcx
  __int64 v8; // rcx
  volatile signed __int32 *v9; // rbx
  volatile signed __int32 *v10; // rbx
  __int128 v12; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v13; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD *v14; // [rsp+50h] [rbp-B0h]
  __int128 v15; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD *v16; // [rsp+68h] [rbp-98h]
  _OWORD v17[6]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v18[40]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v19[136]; // [rsp+F8h] [rbp-8h] BYREF

  v14 = a3;
  v16 = a4;
  v17[0] = *a2;
  v17[1] = a2[1];
  v17[2] = a2[2];
  v17[3] = a2[3];
  v17[4] = a2[4];
  v17[5] = a2[5];
  sub_180080B3C(v18, v17);
  v12 = 0LL;
  v7 = a4[1];
  if ( v7 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
    v7 = a4[1];
  }
  *(_QWORD *)&v12 = *a4;
  *((_QWORD *)&v12 + 1) = v7;
  v13 = 0LL;
  v8 = a3[1];
  if ( v8 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
    v8 = a3[1];
  }
  *(_QWORD *)&v13 = *a3;
  *((_QWORD *)&v13 + 1) = v8;
  v15 = 0LL;
  sub_18001680C(a1, (__int64)v18, &v15, &v13, &v12);
  sub_180019460(v19);
  v9 = (volatile signed __int32 *)a3[1];
  if ( v9 )
  {
    if ( _InterlockedExchangeAdd(v9 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v9)(v9);
      if ( _InterlockedExchangeAdd(v9 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 8LL))(v9);
    }
  }
  v10 = (volatile signed __int32 *)a4[1];
  if ( v10 )
  {
    if ( _InterlockedExchangeAdd(v10 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v10)(v10);
      if ( _InterlockedExchangeAdd(v10 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
    }
  }
  return a1;
}
