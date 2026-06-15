/*
 * XREFs of sub_18012E990 @ 0x18012E990
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001F490 @ 0x18001F490 (sub_18001F490.c)
 *     sub_180048714 @ 0x180048714 (sub_180048714.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_18012E420 @ 0x18012E420 (sub_18012E420.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_18012E990(__int64 a1, unsigned __int16 *a2, LPVOID *a3)
{
  LPVOID v5; // rbx
  int v6; // eax
  unsigned int v7; // edi
  void (__fastcall ***v8)(_QWORD, __int64 *, _QWORD *); // rdx
  int v9; // r9d
  int v10; // edx
  int v11; // eax
  unsigned __int16 *v12; // rax
  int v13; // edx
  int v14; // eax
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+18h]
  LPVOID pv; // [rsp+58h] [rbp+28h] BYREF
  __int64 v18; // [rsp+68h] [rbp+38h] BYREF

  v5 = 0LL;
  pv = 0LL;
  v18 = 0LL;
  if ( !a2 || !a3 )
  {
    v7 = -2147024809;
    v13 = 369;
    goto LABEL_23;
  }
  v6 = sub_18001F490(a2, (unsigned int)a2[8] + 18, (__int64 *)&pv, 0.0, 1);
  v7 = v6;
  if ( v6 < 0 )
  {
    sub_18004BD84((int)retaddr, 375, (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\apowrappersrv.cpp", v6);
    v5 = pv;
    goto LABEL_24;
  }
  v8 = *(void (__fastcall ****)(_QWORD, __int64 *, _QWORD *))(a1 + 88);
  v5 = pv;
  if ( !v8 )
  {
LABEL_15:
    if ( v18 )
    {
      v12 = (unsigned __int16 *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v18 + 40LL))(v18);
      if ( !v12 )
      {
        v7 = -2004287480;
        v13 = 387;
LABEL_23:
        sub_18004BD84((int)retaddr, v13, (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\apowrappersrv.cpp", v7);
        goto LABEL_24;
      }
      pv = 0LL;
      v14 = sub_180048714(v12, &pv);
      v7 = v14;
      if ( v14 < 0 )
      {
        sub_18004BD84((int)retaddr, 390, (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\apowrappersrv.cpp", v14);
        CoTaskMemFree(pv);
        goto LABEL_24;
      }
      *a3 = pv;
      CoTaskMemFree(0LL);
    }
    v7 = 0;
    goto LABEL_24;
  }
  sub_18012E420(&pv, v8);
  if ( !pv )
  {
    v7 = -2147467262;
    v9 = -2147467262;
    v10 = 380;
    goto LABEL_10;
  }
  v11 = (*(__int64 (__fastcall **)(LPVOID, LPVOID, __int64 *))(*(_QWORD *)pv + 24LL))(pv, v5, &v18);
  v7 = v11;
  if ( v11 >= 0 )
  {
    if ( pv )
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)pv + 16LL))(pv);
    goto LABEL_15;
  }
  v9 = v11;
  v10 = 381;
LABEL_10:
  sub_18004BD84((int)retaddr, v10, (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\apowrappersrv.cpp", v9);
  if ( pv )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)pv + 16LL))(pv);
LABEL_24:
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  if ( v5 )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v5 + 16LL))(v5);
  return v7;
}
