/*
 * XREFs of sub_1800BD730 @ 0x1800BD730
 * Callers:
 *     sub_18001680C @ 0x18001680C (sub_18001680C.c)
 * Callees:
 *     sub_180076FC8 @ 0x180076FC8 (sub_180076FC8.c)
 *     sub_1800BD538 @ 0x1800BD538 (sub_1800BD538.c)
 *     _Mtx_init_in_situ @ 0x180125276 (_Mtx_init_in_situ.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_1800BD730(__int64 a1, unsigned int a2, _QWORD *a3, _QWORD *a4, _QWORD *a5)
{
  volatile signed __int32 *v8; // rbx
  volatile signed __int32 *v9; // rbx
  volatile signed __int32 *v10; // rbx
  _DWORD v12[2]; // [rsp+38h] [rbp-39h] BYREF
  _QWORD v13[2]; // [rsp+40h] [rbp-31h] BYREF
  _QWORD v14[2]; // [rsp+50h] [rbp-21h] BYREF
  _QWORD v15[12]; // [rsp+60h] [rbp-11h] BYREF

  v15[2] = a1;
  v15[3] = a3;
  v15[4] = a4;
  v15[5] = a5;
  v13[0] = *a5;
  v13[1] = a5[1];
  *a5 = 0LL;
  a5[1] = 0LL;
  v14[0] = *a4;
  v14[1] = a4[1];
  *a4 = 0LL;
  a4[1] = 0LL;
  v15[0] = *a3;
  v15[1] = a3[1];
  *a3 = 0LL;
  a3[1] = 0LL;
  sub_180076FC8((_QWORD *)a1, a2, v15, v14, v13);
  *(_QWORD *)a1 = &Spectre::Engine::ViewerEngine::`vftable';
  *(_WORD *)(a1 + 1457) = 0;
  *(_QWORD *)(a1 + 1460) = 1065353216LL;
  *(_BYTE *)(a1 + 1468) = 0;
  *(_OWORD *)(a1 + 1472) = xmmword_180214C78;
  v12[1] = (unsigned __int64)(a1 + 1488) >> 32;
  v12[0] = 0;
  sub_1800BD538(a1 + 1488, v12);
  Mtx_init_in_situ((_Mtx_t)(a1 + 1552), 2);
  v8 = (volatile signed __int32 *)a3[1];
  if ( v8 )
  {
    if ( _InterlockedExchangeAdd(v8 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v8)(v8);
      if ( _InterlockedExchangeAdd(v8 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
    }
  }
  v9 = (volatile signed __int32 *)a4[1];
  if ( v9 )
  {
    if ( _InterlockedExchangeAdd(v9 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v9)(v9);
      if ( _InterlockedExchangeAdd(v9 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 8LL))(v9);
    }
  }
  v10 = (volatile signed __int32 *)a5[1];
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
