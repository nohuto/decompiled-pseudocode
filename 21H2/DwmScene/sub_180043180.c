/*
 * XREFs of sub_180043180 @ 0x180043180
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18001145C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_180029F64 @ 0x180029F64 (sub_180029F64.c)
 *     sub_18002BE74 @ 0x18002BE74 (sub_18002BE74.c)
 *     sub_180042EEC @ 0x180042EEC (sub_180042EEC.c)
 *     sub_18004345C @ 0x18004345C (sub_18004345C.c)
 *     sub_18004377C @ 0x18004377C (sub_18004377C.c)
 *     sub_180043910 @ 0x180043910 (sub_180043910.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall sub_180043180(_QWORD *a1, __int64 *a2)
{
  __int64 *v4; // rax
  volatile signed __int32 *v5; // rbx
  __int64 v6; // rdx
  unsigned __int128 v7; // kr00_16
  __int64 v8; // r12
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // r12
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // r15
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rbx
  volatile signed __int32 *v19; // rbx
  signed __int32 v20; // eax
  unsigned __int64 v21; // rsi
  unsigned __int64 v22; // rbx
  _BYTE v23[8]; // [rsp+28h] [rbp-D8h] BYREF
  volatile signed __int32 *v24; // [rsp+30h] [rbp-D0h]
  __int64 v25; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int128 v26; // [rsp+40h] [rbp-C0h]
  _BYTE v27[40]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v28[56]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v29[272]; // [rsp+B0h] [rbp-50h] BYREF

  if ( *a2 )
  {
    std::shared_ptr<__ExceptionPtr>::operator=(a1 + 12, a2);
  }
  else
  {
    v4 = (__int64 *)sub_180042EEC((__int64)v23);
    std::shared_ptr<__ExceptionPtr>::operator=(a1 + 12, v4);
    v5 = v24;
    if ( v24 )
    {
      if ( _InterlockedExchangeAdd(v24 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v5)(v5);
        if ( _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
      }
    }
  }
  v26 = 0LL;
  v6 = a1[10];
  if ( v6 )
  {
    while ( 1 )
    {
      v20 = *(_DWORD *)(v6 + 8);
      if ( !v20 )
        break;
      if ( v20 == _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 8), v20 + 1, v20) )
      {
        v21 = a1[9];
        *(_QWORD *)&v26 = v21;
        v22 = a1[10];
        *((_QWORD *)&v26 + 1) = v22;
        v7 = __PAIR128__(v22, v21);
        goto LABEL_9;
      }
    }
  }
  v7 = v26;
LABEL_9:
  v25 = 0LL;
  sub_180029F64(v7, &v25);
  sub_180043910(a1[12], v27);
  v8 = v25;
  v9 = a1[14];
  if ( v9 )
  {
    a1[14] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  v10 = (*(__int64 (__fastcall **)(__int64, _BYTE *, _QWORD *))(*(_QWORD *)v8 + 176LL))(v8, v27, a1 + 14);
  sub_18002BE74(v7, v10);
  sub_18004345C(a1[12], v29);
  v11 = v25;
  v12 = a1[15];
  if ( v12 )
  {
    a1[15] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  v13 = (*(__int64 (__fastcall **)(__int64, _BYTE *, _QWORD *))(*(_QWORD *)v11 + 160LL))(v11, v29, a1 + 15);
  sub_18002BE74(v7, v13);
  sub_18004377C(a1[12], v28);
  v14 = v25;
  v15 = a1[16];
  if ( v15 )
  {
    a1[16] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  v16 = (*(__int64 (__fastcall **)(__int64, _BYTE *, _QWORD *))(*(_QWORD *)v14 + 168LL))(v14, v28, a1 + 16);
  sub_18002BE74(v7, v16);
  v17 = v25;
  if ( v25 )
  {
    v25 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
  if ( *((_QWORD *)&v7 + 1) )
  {
    if ( !_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v7 + 1) + 8LL)) )
    {
      v18 = *((_QWORD *)&v26 + 1);
      (***((void (__fastcall ****)(_QWORD))&v26 + 1))(*((_QWORD *)&v26 + 1));
      if ( !_InterlockedDecrement((volatile signed __int32 *)(v18 + 12)) )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v26 + 1) + 8LL))(*((_QWORD *)&v26 + 1));
    }
  }
  v19 = (volatile signed __int32 *)a2[1];
  if ( v19 && !_InterlockedDecrement(v19 + 2) )
  {
    (**(void (__fastcall ***)(volatile signed __int32 *))v19)(v19);
    if ( !_InterlockedDecrement(v19 + 3) )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 8LL))(v19);
  }
}
