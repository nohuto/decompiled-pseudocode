/*
 * XREFs of sub_18006885C @ 0x18006885C
 * Callers:
 *     sub_1800101B0 @ 0x1800101B0 (sub_1800101B0.c)
 *     sub_18002EA60 @ 0x18002EA60 (sub_18002EA60.c)
 *     sub_180044EE0 @ 0x180044EE0 (sub_180044EE0.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800114D8 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     sub_180037F1C @ 0x180037F1C (sub_180037F1C.c)
 *     sub_18006821C @ 0x18006821C (sub_18006821C.c)
 *     sub_180068A0C @ 0x180068A0C (sub_180068A0C.c)
 *     sub_18009F488 @ 0x18009F488 (sub_18009F488.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_18006885C(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rax
  volatile signed __int32 *v5; // rbx
  int v6; // r12d
  __int64 v7; // rsi
  int v8; // edi
  int v9; // ebx
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rax
  __int128 v19; // [rsp+30h] [rbp-40h] BYREF
  __int128 v20; // [rsp+40h] [rbp-30h] BYREF
  __int64 v21; // [rsp+58h] [rbp-18h] BYREF
  unsigned int v22; // [rsp+68h] [rbp-8h] BYREF

  sub_18006821C(a1, 1, 0);
  sub_18006821C(a1, 2, 0);
  v4 = *a2;
  v5 = *(volatile signed __int32 **)(*a2 + 120LL);
  if ( v5 )
  {
    _InterlockedIncrement(v5 + 2);
    v5 = *(volatile signed __int32 **)(v4 + 120);
  }
  v6 = *(_QWORD *)(v4 + 112) != 0LL ? 0x80 : 0;
  if ( v5 )
  {
    if ( _InterlockedExchangeAdd(v5 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v5)(v5);
      if ( _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
    }
  }
  v7 = *a2;
  v8 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 48LL))(*a2);
  v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 64LL))(v7);
  v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 56LL))(v7);
  sub_180068A0C(a1, v10, v9, v8, v6, 0LL);
  v11 = *a2;
  v19 = 0LL;
  v12 = *(_QWORD *)(v11 + 104);
  if ( v12 )
    _InterlockedIncrement((volatile signed __int32 *)(v12 + 8));
  *(_QWORD *)&v19 = *(_QWORD *)(v11 + 96);
  v13 = *(_QWORD *)(v11 + 104);
  v14 = *(_QWORD *)(a1 + 136);
  *((_QWORD *)&v19 + 1) = v13;
  sub_18009F488(v14, &v19);
  v15 = *(_QWORD *)(a1 + 152);
  if ( v15 )
  {
    v16 = *a2;
    v20 = 0LL;
    v17 = *(_QWORD *)(v16 + 120);
    if ( v17 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v17 + 8));
      v15 = *(_QWORD *)(a1 + 152);
    }
    v20 = *(_OWORD *)(v16 + 112);
    sub_18009F488(v15, &v20);
  }
  v22 = *(_DWORD *)(*a2 + 88LL);
  sub_180037F1C((__int64 **)(a1 + 120), (__int64)&v21, &v22);
  return std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(v21 + 40), a2);
}
