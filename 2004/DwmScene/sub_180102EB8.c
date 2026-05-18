/*
 * XREFs of sub_180102EB8 @ 0x180102EB8
 * Callers:
 *     sub_1800CFF2C @ 0x1800CFF2C (sub_1800CFF2C.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18001137C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_1800646EC @ 0x1800646EC (sub_1800646EC.c)
 *     sub_18006ADAC @ 0x18006ADAC (sub_18006ADAC.c)
 *     sub_1800DBA24 @ 0x1800DBA24 (sub_1800DBA24.c)
 *     sub_1800DBB38 @ 0x1800DBB38 (sub_1800DBB38.c)
 *     sub_1800DBC74 @ 0x1800DBC74 (sub_1800DBC74.c)
 *     sub_1800DBC88 @ 0x1800DBC88 (sub_1800DBC88.c)
 *     sub_1800DBD34 @ 0x1800DBD34 (sub_1800DBD34.c)
 *     sub_180102DF8 @ 0x180102DF8 (sub_180102DF8.c)
 *     ??2@YAPEAX_K@Z @ 0x18011E768 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_180102EB8(__int64 a1, __int64 a2, __int64 *a3)
{
  _QWORD *v6; // rax
  __int64 *v7; // rax
  __int64 v8; // rcx
  __int64 *v9; // rax
  __int64 v10; // rdx
  __int64 *v11; // rax
  __int64 v12; // rdx
  __int64 result; // rax
  volatile signed __int32 *v14; // rbx
  signed __int32 v15; // eax
  bool v16; // zf
  __int128 v17; // [rsp+28h] [rbp-D8h] BYREF
  __int128 v18; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v19; // [rsp+48h] [rbp-B8h] BYREF
  __int128 v20; // [rsp+58h] [rbp-A8h] BYREF
  _OWORD v21[2]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v22; // [rsp+88h] [rbp-78h]
  __int64 v23; // [rsp+90h] [rbp-70h]
  __int64 v24; // [rsp+98h] [rbp-68h]
  __int64 v25; // [rsp+A0h] [rbp-60h]
  __int64 v26; // [rsp+A8h] [rbp-58h]
  __int64 v27; // [rsp+B0h] [rbp-50h]
  __int64 v28; // [rsp+B8h] [rbp-48h]
  __int64 v29; // [rsp+C0h] [rbp-40h]
  __int64 v30; // [rsp+C8h] [rbp-38h]
  __int64 v31; // [rsp+D0h] [rbp-30h]
  __int64 v32; // [rsp+D8h] [rbp-28h]
  char v33; // [rsp+E0h] [rbp-20h]
  __int64 v34; // [rsp+E8h] [rbp-18h]
  __int64 v35[3]; // [rsp+F0h] [rbp-10h] BYREF
  _QWORD v36[22]; // [rsp+108h] [rbp+8h] BYREF
  _QWORD v37[22]; // [rsp+1B8h] [rbp+B8h] BYREF
  _QWORD v38[23]; // [rsp+268h] [rbp+168h] BYREF

  v35[2] = (__int64)a3;
  memset(v21, 0, sizeof(v21));
  v22 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  v33 = 0;
  v34 = 0LL;
  v35[1] = 0LL;
  v6 = operator new(0x58uLL);
  *v6 = v6;
  v6[1] = v6;
  v6[2] = v6;
  *((_WORD *)v6 + 12) = 257;
  v35[0] = (__int64)v6;
  sub_180102DF8(a1 + 928, (__int64)v21);
  sub_1800646EC(v35, (__int64)v35);
  *(_QWORD *)(a1 + 1056) = a2;
  v7 = (__int64 *)sub_18006ADAC(*(_QWORD *)(a1 + 912), (__int64)v36);
  sub_1800DBB38(a1, v7);
  sub_1800DBA24(v36);
  if ( sub_1800DBC74() )
  {
    v17 = 0LL;
    v8 = a3[1];
    if ( v8 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
      v8 = a3[1];
    }
    *(_QWORD *)&v17 = *a3;
    *((_QWORD *)&v17 + 1) = v8;
    sub_1800DBC88(a1, &v17);
  }
  v9 = (__int64 *)sub_18006ADAC(*(_QWORD *)(a1 + 912), (__int64)v37);
  sub_1800DBB38(a1 + 704, v9);
  sub_1800DBA24(v37);
  if ( sub_1800DBC74() )
  {
    v18 = 0LL;
    v10 = a3[1];
    if ( v10 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
      v10 = a3[1];
    }
    *(_QWORD *)&v18 = *a3;
    *((_QWORD *)&v18 + 1) = v10;
    sub_1800DBC88(a1 + 704, &v18);
  }
  v11 = (__int64 *)sub_18006ADAC(*(_QWORD *)(a1 + 912), (__int64)v38);
  sub_1800DBB38(a1 + 176, v11);
  sub_1800DBA24(v38);
  if ( sub_1800DBC74() )
  {
    v19 = 0LL;
    v12 = a3[1];
    if ( v12 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v12 + 8));
      v12 = a3[1];
    }
    *(_QWORD *)&v19 = *a3;
    *((_QWORD *)&v19 + 1) = v12;
    v20 = 0LL;
    if ( v12 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v12 + 8));
      v12 = a3[1];
    }
    *(_QWORD *)&v20 = *a3;
    *((_QWORD *)&v20 + 1) = v12;
    sub_1800DBD34((_QWORD *)(a1 + 176), &v20, &v19);
  }
  *(_DWORD *)(a1 + 920) = 1;
  result = (__int64)std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 896), a3);
  v14 = (volatile signed __int32 *)a3[1];
  if ( v14 )
  {
    v15 = _InterlockedExchangeAdd(v14 + 2, 0xFFFFFFFF);
    v16 = v15 == 1;
    result = (unsigned int)(v15 - 1);
    if ( v16 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v14)(v14);
      result = (unsigned int)_InterlockedDecrement(v14 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
    }
  }
  return result;
}
