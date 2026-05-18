/*
 * XREFs of sub_180093800 @ 0x180093800
 * Callers:
 *     sub_180092C20 @ 0x180092C20 (sub_180092C20.c)
 *     sub_180093734 @ 0x180093734 (sub_180093734.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18001137C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_180030CCC @ 0x180030CCC (sub_180030CCC.c)
 *     sub_180062680 @ 0x180062680 (sub_180062680.c)
 *     sub_18006294C @ 0x18006294C (sub_18006294C.c)
 *     sub_180090CE0 @ 0x180090CE0 (sub_180090CE0.c)
 *     sub_1800CD334 @ 0x1800CD334 (sub_1800CD334.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180093800(__int64 a1, __int64 a2, unsigned int a3, char a4)
{
  _QWORD *v7; // rax
  int v8; // esi
  __int64 *v9; // rdi
  int v10; // ebp
  __int64 v11; // rbx
  volatile signed __int32 *v12; // rbx
  unsigned int v13; // eax
  __int64 v15; // [rsp+30h] [rbp-48h] BYREF
  volatile signed __int32 *v16; // [rsp+38h] [rbp-40h]
  int v17[14]; // [rsp+40h] [rbp-38h] BYREF

  if ( !a4 )
    *(_DWORD *)(a1 + 296) |= 0x20u;
  *(_DWORD *)(a1 + 292) |= 0x20u;
  v7 = (_QWORD *)sub_180062680(a1);
  v8 = *(_DWORD *)(a1 + 304);
  v9 = (__int64 *)(a1 + 192);
  v10 = *(_DWORD *)(a1 + 124);
  v11 = *(_QWORD *)(a1 + 192);
  v17[0] = 2;
  if ( !v11 )
  {
    sub_180090CE0(v7, &v15, 1, (__int64)v17);
    std::shared_ptr<__ExceptionPtr>::operator=(v9, &v15);
    v12 = v16;
    if ( v16 )
    {
      if ( _InterlockedExchangeAdd(v16 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v12)(v12);
        if ( _InterlockedExchangeAdd(v12 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
      }
    }
    sub_18006294C(*v9, 8, 0);
    v11 = *v9;
  }
  v13 = sub_180030CCC(6, v10);
  return sub_1800CD334(v11, a2, a3, v13, v8, 6);
}
