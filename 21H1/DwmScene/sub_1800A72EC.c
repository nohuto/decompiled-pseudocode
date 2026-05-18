/*
 * XREFs of sub_1800A72EC @ 0x1800A72EC
 * Callers:
 *     sub_180070C94 @ 0x180070C94 (sub_180070C94.c)
 *     sub_1800A7238 @ 0x1800A7238 (sub_1800A7238.c)
 *     sub_1800F70B4 @ 0x1800F70B4 (sub_1800F70B4.c)
 *     sub_1800F9464 @ 0x1800F9464 (sub_1800F9464.c)
 *     sub_180104D98 @ 0x180104D98 (sub_180104D98.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x180028D0C (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     sub_1800ABD40 @ 0x1800ABD40 (sub_1800ABD40.c)
 *     sub_1800EAE04 @ 0x1800EAE04 (sub_1800EAE04.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x18011E768 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=19
__int64 __fastcall sub_1800A72EC(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  _QWORD *v5; // rax
  char *v6; // rbx
  __int64 v7; // rbp
  _QWORD *v8; // rax
  volatile __int32 *i; // rcx
  volatile signed __int32 *v10; // rbx
  _QWORD v12[3]; // [rsp+28h] [rbp-50h] BYREF
  unsigned __int64 v13; // [rsp+40h] [rbp-38h]
  __int64 v14; // [rsp+48h] [rbp-30h]
  __int64 v15; // [rsp+50h] [rbp-28h]

  v14 = a1;
  v15 = a2;
  v13 = 15LL;
  v12[2] = 6LL;
  strcpy((char *)v12, "Camera");
  sub_1800EAE04(a1, v12, a2);
  if ( v13 >= 0x10 )
  {
    v4 = v12[0];
    if ( v13 + 1 >= 0x1000 )
    {
      v4 = *(_QWORD *)(v12[0] - 8LL);
      if ( (unsigned __int64)(v12[0] - v4 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v4, v13 + 40);
        __debugbreak();
      }
    }
    j_j__o_free(v4);
  }
  *(_QWORD *)a1 = &Spectre::Engine::Camera::`vftable';
  *(_DWORD *)(a1 + 88) = 0;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_DWORD *)(a1 + 128) = 1;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_QWORD *)(a1 + 152) = 0LL;
  *(_QWORD *)(a1 + 160) = 0LL;
  *(_DWORD *)(a1 + 168) = -1;
  *(_DWORD *)(a1 + 172) = 0;
  *(_DWORD *)(a1 + 176) = -1;
  *(_QWORD *)(a1 + 200) = 0LL;
  *(_QWORD *)(a1 + 208) = 15LL;
  *(_BYTE *)(a1 + 184) = 0;
  *(_QWORD *)(a1 + 232) = 0LL;
  *(_QWORD *)(a1 + 240) = 15LL;
  *(_BYTE *)(a1 + 216) = 0;
  *(_QWORD *)(a1 + 264) = 0LL;
  *(_QWORD *)(a1 + 272) = 15LL;
  *(_BYTE *)(a1 + 248) = 0;
  *(_QWORD *)(a1 + 296) = 0LL;
  *(_DWORD *)(a1 + 304) = 0;
  *(_DWORD *)(a1 + 308) = 1065353216;
  *(_QWORD *)(a1 + 344) = 0LL;
  *(_QWORD *)(a1 + 352) = 0LL;
  *(_DWORD *)(a1 + 364) = dword_18020DB90;
  *(_DWORD *)(a1 + 368) = dword_18020DB94;
  *(_BYTE *)(a1 + 388) = 0;
  *(_QWORD *)(a1 + 400) = 0LL;
  *(_DWORD *)(a1 + 408) = 0;
  *(_DWORD *)(a1 + 412) = 3;
  *(_QWORD *)(a1 + 416) = 0LL;
  *(_QWORD *)(a1 + 424) = 0LL;
  *(_QWORD *)(a1 + 432) = 0LL;
  *(_DWORD *)(a1 + 440) = 0;
  *(_QWORD *)(a1 + 448) = 0LL;
  *(_QWORD *)(a1 + 456) = 0LL;
  v5 = operator new(0x38uLL);
  *v5 = v5;
  v5[1] = v5;
  v5[2] = v5;
  *((_WORD *)v5 + 12) = 257;
  *(_QWORD *)(a1 + 448) = v5;
  *(_QWORD *)(a1 + 472) = 0LL;
  *(_QWORD *)(a1 + 480) = 0LL;
  *(_QWORD *)(a1 + 488) = 0LL;
  *(_QWORD *)(a1 + 496) = 0LL;
  *(_QWORD *)(a1 + 504) = 0LL;
  *(_QWORD *)(a1 + 512) = 0LL;
  *(_QWORD *)(a1 + 520) = 0LL;
  *(_QWORD *)(a1 + 528) = 0LL;
  *(_QWORD *)(a1 + 536) = 0LL;
  v6 = (char *)(a1 + 548);
  v7 = 4LL;
  do
  {
    `vector constructor iterator'(v6, 64LL, 4LL, (void (__fastcall *)(char *))sub_180018890);
    v6 += 256;
    --v7;
  }
  while ( v7 );
  *(_QWORD *)(a1 + 1572) = 0LL;
  *(_QWORD *)(a1 + 1580) = 0LL;
  *(_QWORD *)(a1 + 1588) = 0LL;
  *(_QWORD *)(a1 + 1596) = 0LL;
  *(_QWORD *)(a1 + 1604) = 0LL;
  *(_QWORD *)(a1 + 1616) = 0LL;
  *(_QWORD *)(a1 + 1624) = 0LL;
  v8 = operator new(0x58uLL);
  *v8 = v8;
  v8[1] = v8;
  v8[2] = v8;
  *((_WORD *)v8 + 12) = 257;
  *(_QWORD *)(a1 + 1616) = v8;
  *(_QWORD *)(a1 + 1632) = 0LL;
  *(_QWORD *)(a1 + 1640) = 0LL;
  *(_QWORD *)(a1 + 1648) = 0LL;
  *(_QWORD *)(a1 + 1656) = 0LL;
  *(_QWORD *)(a1 + 1664) = 0LL;
  *(_QWORD *)(a1 + 1672) = 0LL;
  *(_QWORD *)(a1 + 1680) = 0LL;
  *(_QWORD *)(a1 + 1688) = 0LL;
  *(_QWORD *)(a1 + 1696) = &off_1802143D8;
  *(_QWORD *)(a1 + 1760) = 0LL;
  sub_1800ABD40(a1);
  for ( i = (volatile __int32 *)(a1 + 280); i != (volatile __int32 *)(a1 + 292); ++i )
    _InterlockedExchange(i, 0);
  v10 = *(volatile signed __int32 **)(a2 + 8);
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
