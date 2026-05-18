/*
 * XREFs of sub_18006A8C8 @ 0x18006A8C8
 * Callers:
 *     sub_18002D9A4 @ 0x18002D9A4 (sub_18002D9A4.c)
 *     sub_180043C20 @ 0x180043C20 (sub_180043C20.c)
 * Callees:
 *     sub_18006A6E4 @ 0x18006A6E4 (sub_18006A6E4.c)
 *     sub_18006A760 @ 0x18006A760 (sub_18006A760.c)
 *     sub_18006A7CC @ 0x18006A7CC (sub_18006A7CC.c)
 *     sub_18006A838 @ 0x18006A838 (sub_18006A838.c)
 *     sub_1800D8DF4 @ 0x1800D8DF4 (sub_1800D8DF4.c)
 *     memset @ 0x18012396A (memset.c)
 *     ??2@YAPEAX_K@Z @ 0x180124038 (--2@YAPEAX_K@Z.c)
 *     _Mtx_init_in_situ @ 0x180125276 (_Mtx_init_in_situ.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=14
__int64 __fastcall sub_18006A8C8(__int64 a1, __int64 a2, __int64 *a3, _QWORD *a4)
{
  __int64 v8; // rcx
  __int64 v9; // rax
  char v10; // r14
  __int64 v11; // rdx
  char *v12; // rcx
  volatile signed __int32 *v13; // rbx
  volatile signed __int32 *v14; // rbx
  void *v15; // rax
  void *v16; // rbx
  __int64 v17; // rax
  volatile signed __int32 *v18; // rbx
  volatile signed __int32 *v19; // rbx
  __int128 v21; // [rsp+28h] [rbp-48h] BYREF
  char v22; // [rsp+38h] [rbp-38h] BYREF
  volatile signed __int32 *v23; // [rsp+40h] [rbp-30h]
  char v24; // [rsp+48h] [rbp-28h] BYREF
  volatile signed __int32 *v25; // [rsp+50h] [rbp-20h]
  __int64 v26; // [rsp+58h] [rbp-18h]
  __int64 *v27; // [rsp+60h] [rbp-10h]
  _QWORD *v28; // [rsp+68h] [rbp-8h]

  v26 = a1;
  v27 = a3;
  v28 = a4;
  v21 = 0LL;
  v8 = a3[1];
  if ( v8 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
    v8 = a3[1];
  }
  *(_QWORD *)&v21 = *a3;
  *((_QWORD *)&v21 + 1) = v8;
  sub_18006A838((_QWORD *)a1, &v21);
  *(_QWORD *)a1 = &Spectre::Engine::RenderOutput::`vftable';
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  v9 = a3[1];
  if ( v9 )
    _InterlockedIncrement((volatile signed __int32 *)(v9 + 12));
  *(_QWORD *)(a1 + 80) = *a3;
  *(_QWORD *)(a1 + 88) = a3[1];
  *(_OWORD *)(a1 + 96) = *(_OWORD *)a2;
  *(_OWORD *)(a1 + 112) = *(_OWORD *)(a2 + 16);
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_QWORD *)(a1 + 152) = 0LL;
  *(_BYTE *)(a1 + 160) = 0;
  *(_QWORD *)(a1 + 164) = 0LL;
  *(_QWORD *)(a1 + 172) = 0LL;
  *(_QWORD *)(a1 + 180) = 0LL;
  *(_DWORD *)(a1 + 188) = 0;
  *(_DWORD *)(a1 + 192) = 1065353216;
  *(_DWORD *)(a1 + 196) = 1065353216;
  *(_DWORD *)(a1 + 200) = 3;
  sub_18006A7CC(a1 + 208);
  *(_WORD *)(a1 + 236) = 256;
  *(_QWORD *)(a1 + 240) = 0LL;
  *(_QWORD *)(a1 + 248) = 0LL;
  *(_QWORD *)(a1 + 256) = 0LL;
  *(_QWORD *)(a1 + 264) = 0LL;
  *(_QWORD *)(a1 + 272) = 0LL;
  *(_QWORD *)(a1 + 280) = 0LL;
  v10 = 2;
  *(_DWORD *)(a1 + 296) = 2;
  Mtx_init_in_situ((_Mtx_t)(a1 + 304), 2);
  if ( *(_DWORD *)(a2 + 24) == 1 )
  {
    v11 = *a4;
    v25 = (volatile signed __int32 *)a4[1];
    *a4 = 0LL;
    a4[1] = 0LL;
    v12 = &v24;
    v10 = 1;
  }
  else
  {
    v23 = 0LL;
    v12 = &v22;
    v11 = 0LL;
  }
  *(_QWORD *)(a1 + 384) = v11;
  *(_QWORD *)(a1 + 392) = *((_QWORD *)v12 + 1);
  *(_QWORD *)v12 = 0LL;
  *((_QWORD *)v12 + 1) = 0LL;
  if ( (v10 & 2) != 0 )
  {
    v10 &= ~2u;
    if ( v23 )
    {
      if ( _InterlockedExchangeAdd(v23 + 2, 0xFFFFFFFF) == 1 )
      {
        v13 = v23;
        (**(void (__fastcall ***)(volatile signed __int32 *))v23)(v23);
        if ( _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 8LL))(v23);
      }
    }
  }
  if ( (v10 & 1) != 0 )
  {
    if ( v25 )
    {
      if ( _InterlockedExchangeAdd(v25 + 2, 0xFFFFFFFF) == 1 )
      {
        v14 = v25;
        (**(void (__fastcall ***)(volatile signed __int32 *))v25)(v25);
        if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v25 + 8LL))(v25);
      }
    }
  }
  *(_BYTE *)(a1 + 400) = 0;
  *(_QWORD *)(a1 + 408) = 1LL;
  *(_QWORD *)(a1 + 416) = 0LL;
  *(_QWORD *)(a1 + 424) = 0LL;
  *(_QWORD *)(a1 + 432) = 0LL;
  sub_18006A6E4(a1 + 440, *a3);
  sub_18006A760(a1 + 456);
  v15 = operator new(0x190uLL);
  v16 = v15;
  if ( v15 )
  {
    memset(v15, 0, 0x190uLL);
    v17 = sub_1800D8DF4(v16);
  }
  else
  {
    v17 = 0LL;
  }
  *(_QWORD *)(a1 + 472) = v17;
  *(_QWORD *)(a1 + 480) = 1LL;
  *(_QWORD *)(a1 + 488) = 0LL;
  *(_QWORD *)(a1 + 496) = 0LL;
  *(_QWORD *)(a1 + 272) = 0x8000000000000000uLL;
  *(_QWORD *)(a1 + 280) = 0x8000000000000000uLL;
  *(_QWORD *)(a1 + 288) = 0LL;
  *(_DWORD *)(a1 + 224) = 21;
  *(_DWORD *)(a1 + 228) = 21;
  *(_DWORD *)(a1 + 232) = 16;
  v18 = (volatile signed __int32 *)a3[1];
  if ( v18 )
  {
    if ( _InterlockedExchangeAdd(v18 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v18)(v18);
      if ( _InterlockedExchangeAdd(v18 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 8LL))(v18);
    }
  }
  v19 = (volatile signed __int32 *)a4[1];
  if ( v19 )
  {
    if ( _InterlockedExchangeAdd(v19 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v19)(v19);
      if ( _InterlockedExchangeAdd(v19 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 8LL))(v19);
    }
  }
  return a1;
}
