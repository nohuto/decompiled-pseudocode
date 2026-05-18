/*
 * XREFs of sub_18002D9A4 @ 0x18002D9A4
 * Callers:
 *     sub_18000FE60 @ 0x18000FE60 (sub_18000FE60.c)
 *     sub_18002DB9C @ 0x18002DB9C (sub_18002DB9C.c)
 *     sub_18002DCB0 @ 0x18002DCB0 (sub_18002DCB0.c)
 *     sub_18002DDE4 @ 0x18002DDE4 (sub_18002DDE4.c)
 *     sub_18002DEF8 @ 0x18002DEF8 (sub_18002DEF8.c)
 * Callees:
 *     sub_18006A8C8 @ 0x18006A8C8 (sub_18006A8C8.c)
 *     ??2@YAPEAX_K@Z @ 0x180124038 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_18002D9A4(__int64 a1, _OWORD *a2, _QWORD *a3, _QWORD *a4)
{
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  _QWORD *v10; // rax
  _QWORD *v11; // rax
  _QWORD *v12; // rax
  volatile signed __int32 *v13; // rbx
  volatile signed __int32 *v14; // rbx
  __int128 v16; // [rsp+28h] [rbp-31h] BYREF
  _QWORD v17[5]; // [rsp+38h] [rbp-21h] BYREF
  _OWORD v18[5]; // [rsp+60h] [rbp+7h] BYREF

  v17[2] = a1;
  v17[3] = a3;
  v17[4] = a4;
  v17[0] = *a4;
  v17[1] = a4[1];
  *a4 = 0LL;
  a4[1] = 0LL;
  v16 = 0LL;
  v7 = a3[1];
  if ( v7 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
    v7 = a3[1];
  }
  *(_QWORD *)&v16 = *a3;
  *((_QWORD *)&v16 + 1) = v7;
  v18[0] = *a2;
  v18[1] = a2[1];
  sub_18006A8C8(a1, v18, &v16, v17);
  *(_QWORD *)a1 = &Spectre::Engine::D3D11::RenderOutputD3D11::`vftable';
  *(_QWORD *)(a1 + 504) = 0LL;
  *(_DWORD *)(a1 + 512) = 0;
  v8 = a1 + 520;
  v9 = 20LL;
  do
  {
    *(_QWORD *)v8 = 0LL;
    *(_DWORD *)(v8 + 8) = -1;
    *(_DWORD *)(v8 + 12) = -1;
    *(_DWORD *)(v8 + 16) = 0;
    *(_BYTE *)(v8 + 48) = 0;
    v8 += 56LL;
    --v9;
  }
  while ( v9 );
  *(_QWORD *)(a1 + 1640) = 0LL;
  *(_QWORD *)(a1 + 1648) = 0LL;
  *(_QWORD *)(a1 + 1656) = 0LL;
  v10 = operator new(0x48uLL);
  *v10 = v10;
  v10[1] = v10;
  v10[2] = v10;
  *((_WORD *)v10 + 12) = 257;
  *(_QWORD *)(a1 + 1648) = v10;
  *(_QWORD *)(a1 + 1664) = 0LL;
  *(_QWORD *)(a1 + 1672) = 0LL;
  v11 = operator new(0x30uLL);
  *v11 = v11;
  v11[1] = v11;
  v11[2] = v11;
  *((_WORD *)v11 + 12) = 257;
  *(_QWORD *)(a1 + 1664) = v11;
  *(_QWORD *)(a1 + 1680) = 0LL;
  *(_QWORD *)(a1 + 1688) = 0LL;
  v12 = operator new(0x30uLL);
  *v12 = v12;
  v12[1] = v12;
  v12[2] = v12;
  *((_WORD *)v12 + 12) = 257;
  *(_QWORD *)(a1 + 1680) = v12;
  v13 = (volatile signed __int32 *)a3[1];
  if ( v13 )
  {
    if ( _InterlockedExchangeAdd(v13 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v13)(v13);
      if ( _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
    }
  }
  v14 = (volatile signed __int32 *)a4[1];
  if ( v14 )
  {
    if ( _InterlockedExchangeAdd(v14 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v14)(v14);
      if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
    }
  }
  return a1;
}
