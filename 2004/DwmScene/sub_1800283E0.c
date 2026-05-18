/*
 * XREFs of sub_1800283E0 @ 0x1800283E0
 * Callers:
 *     sub_18001DC8C @ 0x18001DC8C (sub_18001DC8C.c)
 * Callees:
 *     sub_1800280D4 @ 0x1800280D4 (sub_1800280D4.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_1800283E0(_QWORD *a1, _OWORD *a2, _QWORD *a3, _QWORD *a4)
{
  volatile signed __int32 *v7; // rbx
  volatile signed __int32 *v8; // rbx
  _QWORD v10[2]; // [rsp+20h] [rbp-40h] BYREF
  _QWORD v11[2]; // [rsp+30h] [rbp-30h] BYREF
  _OWORD v12[2]; // [rsp+40h] [rbp-20h] BYREF

  v10[0] = *a4;
  v10[1] = a4[1];
  *a4 = 0LL;
  a4[1] = 0LL;
  v11[0] = *a3;
  v11[1] = a3[1];
  *a3 = 0LL;
  a3[1] = 0LL;
  v12[0] = *a2;
  v12[1] = a2[1];
  sub_1800280D4((__int64)a1, v12, v11, v10);
  *a1 = &Spectre::Engine::D3D11::RenderOutputD3D11Gdi::`vftable';
  a1[212] = 0LL;
  a1[213] = 0LL;
  a1[214] = 0LL;
  a1[215] = 0LL;
  v7 = (volatile signed __int32 *)a3[1];
  if ( v7 )
  {
    if ( _InterlockedExchangeAdd(v7 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v7)(v7);
      if ( _InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
    }
  }
  v8 = (volatile signed __int32 *)a4[1];
  if ( v8 )
  {
    if ( _InterlockedExchangeAdd(v8 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v8)(v8);
      if ( _InterlockedExchangeAdd(v8 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
    }
  }
  return a1;
}
