/*
 * XREFs of sub_180023358 @ 0x180023358
 * Callers:
 *     sub_180018334 @ 0x180018334 (sub_180018334.c)
 * Callees:
 *     sub_18000DD78 @ 0x18000DD78 (sub_18000DD78.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800114D8 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     sub_18001277C @ 0x18001277C (sub_18001277C.c)
 *     sub_180022BDC @ 0x180022BDC (sub_180022BDC.c)
 *     sub_18008D2D0 @ 0x18008D2D0 (sub_18008D2D0.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180023358(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v3; // r14
  _QWORD *v4; // rax
  signed int v5; // edi
  volatile signed __int32 *v6; // rbx
  int v7; // edx
  _QWORD *v9; // rax
  volatile signed __int32 *v10; // rbx
  _QWORD v11[4]; // [rsp+28h] [rbp-31h] BYREF
  _QWORD v12[4]; // [rsp+48h] [rbp-11h] BYREF
  _BYTE v13[8]; // [rsp+68h] [rbp+Fh] BYREF
  volatile signed __int32 *v14; // [rsp+70h] [rbp+17h]
  _BYTE v15[8]; // [rsp+78h] [rbp+1Fh] BYREF
  volatile signed __int32 *v16; // [rsp+80h] [rbp+27h]
  __int64 retaddr; // [rsp+B8h] [rbp+5Fh]

  v3 = a1 + 2;
  std::shared_ptr<__ExceptionPtr>::operator=(a1 + 2, a2);
  v11[2] = 0LL;
  v11[3] = 0LL;
  sub_18001277C(v11, (__int64)&unk_18020F708);
  v4 = (_QWORD *)sub_18008D2D0(*v3, v13, v11);
  v5 = sub_180022BDC(a1 + 4, v4);
  v6 = v14;
  if ( v14 )
  {
    if ( _InterlockedExchangeAdd(v14 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v6)(v6);
      if ( _InterlockedExchangeAdd(v6 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
    }
  }
  if ( v5 < 0 )
  {
    v7 = 35;
LABEL_7:
    sub_18000DD78(retaddr, v7, (__int64)"SpectreWorld.cpp", v5);
    return (unsigned int)v5;
  }
  v12[2] = 0LL;
  v12[3] = 0LL;
  sub_18001277C(v12, (__int64)&qword_18020F768);
  v9 = (_QWORD *)sub_18008D2D0(*v3, v15, v12);
  v5 = sub_180022BDC(a1 + 5, v9);
  v10 = v16;
  if ( v16 && _InterlockedExchangeAdd(v16 + 2, 0xFFFFFFFF) == 1 )
  {
    (**(void (__fastcall ***)(volatile signed __int32 *))v10)(v10);
    if ( _InterlockedExchangeAdd(v10 + 3, 0xFFFFFFFF) == 1 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
  }
  if ( v5 < 0 )
  {
    v7 = 39;
    goto LABEL_7;
  }
  return 0LL;
}
