/*
 * XREFs of sub_18006B074 @ 0x18006B074
 * Callers:
 *     sub_18002E35C @ 0x18002E35C (sub_18002E35C.c)
 *     sub_180043F08 @ 0x180043F08 (sub_180043F08.c)
 *     sub_18006B520 @ 0x18006B520 (sub_18006B520.c)
 *     sub_180126609 @ 0x180126609 (sub_180126609.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18001145C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_18006A028 @ 0x18006A028 (sub_18006A028.c)
 *     sub_18006D3A4 @ 0x18006D3A4 (sub_18006D3A4.c)
 *     sub_18006D474 @ 0x18006D474 (sub_18006D474.c)
 *     j__o_free @ 0x180123A7C (j__o_free.c)
 *     _Mtx_destroy_in_situ @ 0x18012527C (_Mtx_destroy_in_situ.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18006B074(__int64 a1)
{
  __int64 v2; // rbx
  volatile signed __int32 *v3; // rcx
  __int64 v4; // rbx
  volatile signed __int32 *v5; // rbx
  volatile signed __int32 *v6; // rbx
  volatile signed __int32 *v7; // rbx
  volatile signed __int32 *v8; // rbx
  volatile signed __int32 *v9; // rbx
  volatile signed __int32 *v10; // rbx
  volatile signed __int32 *v11; // rcx
  __int64 v13[3]; // [rsp+20h] [rbp-18h] BYREF

  *(_QWORD *)a1 = &Spectre::Engine::RenderOutput::`vftable';
  *(_OWORD *)v13 = 0LL;
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 208), v13);
  if ( v13[1] )
  {
    if ( !_InterlockedDecrement((volatile signed __int32 *)(v13[1] + 8)) )
    {
      v2 = v13[1];
      (**(void (__fastcall ***)(__int64))v13[1])(v13[1]);
      if ( !_InterlockedDecrement((volatile signed __int32 *)(v2 + 12)) )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13[1] + 8LL))(v13[1]);
    }
  }
  v3 = *(volatile signed __int32 **)(a1 + 496);
  if ( v3 && !_InterlockedDecrement(v3 + 3) )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 8LL))(v3);
  v4 = *(_QWORD *)(a1 + 472);
  if ( v4 )
  {
    sub_18006A028((__int64 *)(v4 + 216), v4 + 216);
    sub_18006A028((__int64 *)(v4 + 16), v4 + 16);
    j__o_free(v4);
  }
  v5 = *(volatile signed __int32 **)(a1 + 464);
  if ( v5 )
  {
    if ( !_InterlockedDecrement(v5 + 2) )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v5)(v5);
      if ( !_InterlockedDecrement(v5 + 3) )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
    }
  }
  v6 = *(volatile signed __int32 **)(a1 + 448);
  if ( v6 )
  {
    if ( !_InterlockedDecrement(v6 + 2) )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v6)(v6);
      if ( !_InterlockedDecrement(v6 + 3) )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
    }
  }
  sub_18006D3A4(a1 + 416);
  v7 = *(volatile signed __int32 **)(a1 + 392);
  if ( v7 )
  {
    if ( _InterlockedExchangeAdd(v7 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v7)(v7);
      if ( _InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
    }
  }
  Mtx_destroy_in_situ((_Mtx_t)(a1 + 304));
  v8 = *(volatile signed __int32 **)(a1 + 264);
  if ( v8 )
  {
    if ( !_InterlockedDecrement(v8 + 2) )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v8)(v8);
      if ( !_InterlockedDecrement(v8 + 3) )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
    }
  }
  v9 = *(volatile signed __int32 **)(a1 + 248);
  if ( v9 )
  {
    if ( !_InterlockedDecrement(v9 + 2) )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v9)(v9);
      if ( !_InterlockedDecrement(v9 + 3) )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 8LL))(v9);
    }
  }
  v10 = *(volatile signed __int32 **)(a1 + 216);
  if ( v10 )
  {
    if ( !_InterlockedDecrement(v10 + 2) )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v10)(v10);
      if ( !_InterlockedDecrement(v10 + 3) )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
    }
  }
  sub_18006D474(a1 + 128);
  v11 = *(volatile signed __int32 **)(a1 + 88);
  if ( v11 && _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
  return sub_18006AFE4(a1);
}
