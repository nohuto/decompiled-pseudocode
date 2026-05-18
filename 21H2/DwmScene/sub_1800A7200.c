/*
 * XREFs of sub_1800A7200 @ 0x1800A7200
 * Callers:
 *     sub_180076FC8 @ 0x180076FC8 (sub_180076FC8.c)
 * Callees:
 *     sub_18000FC14 @ 0x18000FC14 (sub_18000FC14.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18001145C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_180093020 @ 0x180093020 (sub_180093020.c)
 *     sub_180093600 @ 0x180093600 (sub_180093600.c)
 *     sub_1800A565C @ 0x1800A565C (sub_1800A565C.c)
 *     sub_1800F2648 @ 0x1800F2648 (sub_1800F2648.c)
 *     sub_1800F27BC @ 0x1800F27BC (sub_1800F27BC.c)
 *     sub_1800F30BC @ 0x1800F30BC (sub_1800F30BC.c)
 *     sub_1800F50A8 @ 0x1800F50A8 (sub_1800F50A8.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall sub_1800A7200(__int64 a1)
{
  __int64 *v2; // rax
  _QWORD *v3; // rdi
  volatile signed __int32 *v4; // rbx
  __int64 v5; // rcx
  __int64 *v6; // rax
  volatile signed __int32 *v7; // rbx
  _QWORD v8[3]; // [rsp+20h] [rbp-59h] BYREF
  unsigned __int64 v9; // [rsp+38h] [rbp-41h]
  __int128 v10; // [rsp+40h] [rbp-39h] BYREF
  __int64 v11[4]; // [rsp+50h] [rbp-29h] BYREF
  _BYTE v12[8]; // [rsp+70h] [rbp-9h] BYREF
  volatile signed __int32 *v13; // [rsp+78h] [rbp-1h]
  __int64 v14[8]; // [rsp+80h] [rbp+7h] BYREF

  v2 = (__int64 *)sub_1800A565C((__int128 *)a1, &v10, 1u);
  v3 = (_QWORD *)(a1 + 18632);
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 18632), v2);
  v4 = (volatile signed __int32 *)*((_QWORD *)&v10 + 1);
  if ( *((_QWORD *)&v10 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v10 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v4)(v4);
      if ( _InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 8LL))(v4);
    }
  }
  v9 = 15LL;
  v8[2] = 6LL;
  strcpy((char *)v8, "Global");
  sub_1800F30BC(*v3, v8);
  if ( v9 >= 0x10 )
  {
    v5 = v8[0];
    if ( v9 + 1 >= 0x1000 )
    {
      v5 = *(_QWORD *)(v8[0] - 8LL);
      if ( (unsigned __int64)(v8[0] - v5 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v5, v9 + 40);
        __debugbreak();
      }
    }
    j_j__o_free(v5);
  }
  sub_1800F27BC(*v3);
  v6 = (__int64 *)sub_1800F2648(*v3, v12);
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 18648), v6);
  v7 = v13;
  if ( v13 )
  {
    if ( _InterlockedExchangeAdd(v13 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v7)(v7);
      if ( _InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
    }
  }
  v11[2] = 0LL;
  v11[3] = 15LL;
  LOBYTE(v11[0]) = 0;
  sub_18000FC14(v11, 0x17uLL, 0LL, "Global/RenderTargetSize");
  sub_180093020((__int64)v14, v11, 5);
  sub_1800F50A8(*(_QWORD *)(a1 + 18648), v14, 1LL);
  sub_180093600(v14);
}
