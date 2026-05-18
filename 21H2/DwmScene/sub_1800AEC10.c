/*
 * XREFs of sub_1800AEC10 @ 0x1800AEC10
 * Callers:
 *     sub_1800FD150 @ 0x1800FD150 (sub_1800FD150.c)
 *     sub_1800FFA80 @ 0x1800FFA80 (sub_1800FFA80.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18001145C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800114D8 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     sub_180012F14 @ 0x180012F14 (sub_180012F14.c)
 *     sub_18002C458 @ 0x18002C458 (sub_18002C458.c)
 *     sub_18006EF68 @ 0x18006EF68 (sub_18006EF68.c)
 *     sub_1800AB670 @ 0x1800AB670 (sub_1800AB670.c)
 *     sub_1800AB8D8 @ 0x1800AB8D8 (sub_1800AB8D8.c)
 *     sub_1800AC5C0 @ 0x1800AC5C0 (sub_1800AC5C0.c)
 *     sub_1800AD2F8 @ 0x1800AD2F8 (sub_1800AD2F8.c)
 *     sub_1800AD364 @ 0x1800AD364 (sub_1800AD364.c)
 *     sub_1800AEB38 @ 0x1800AEB38 (sub_1800AEB38.c)
 *     sub_1800B3BA0 @ 0x1800B3BA0 (sub_1800B3BA0.c)
 *     sub_1800F0A00 @ 0x1800F0A00 (sub_1800F0A00.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
unsigned __int64 __fastcall sub_1800AEC10(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // r14
  __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // r9
  __int64 (__fastcall ***v7)(_QWORD, _BYTE *); // rcx
  _BYTE *v8; // rdx
  __int64 *v9; // r12
  unsigned __int64 v10; // r15
  __int64 v11; // r8
  __int64 v12; // rcx
  unsigned __int64 result; // rax
  __int64 v14; // rdx
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // r8
  volatile signed __int32 *v18; // rdi
  __int64 v19; // rcx
  __int64 v20; // rbx
  volatile signed __int32 *v21; // rbx
  char v22; // [rsp+20h] [rbp-A9h]
  __int128 v23; // [rsp+30h] [rbp-99h] BYREF
  __int128 v24; // [rsp+40h] [rbp-89h] BYREF
  _QWORD *v25; // [rsp+50h] [rbp-79h]
  __int128 v26; // [rsp+58h] [rbp-71h] BYREF
  char v27; // [rsp+68h] [rbp-61h]
  _QWORD *v28; // [rsp+70h] [rbp-59h]
  _BYTE v29[56]; // [rsp+80h] [rbp-49h] BYREF
  _BYTE *v30; // [rsp+B8h] [rbp-11h]
  _BYTE v31[40]; // [rsp+C0h] [rbp-9h] BYREF
  volatile signed __int32 *v32; // [rsp+E8h] [rbp+1Fh]

  v2 = a2;
  v25 = a2;
  v28 = a2;
  v24 = 0LL;
  v4 = a2[1];
  if ( v4 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
    v4 = a2[1];
  }
  *(_QWORD *)&v24 = *a2;
  *((_QWORD *)&v24 + 1) = v4;
  sub_1800F0A00(a1, &v24);
  v23 = 0LL;
  sub_18006EF68((__int64 *)&v23, v2);
  v5 = v23;
  *(_QWORD *)(v23 + 96) = *(_QWORD *)(a1 + 96);
  *(_DWORD *)(v5 + 128) = *(_DWORD *)(a1 + 128);
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(v5 + 136), (_QWORD *)(a1 + 136));
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(v5 + 152), (_QWORD *)(a1 + 152));
  *(_DWORD *)(v5 + 172) = *(_DWORD *)(a1 + 172);
  *(_DWORD *)(v5 + 176) = *(_DWORD *)(a1 + 176);
  sub_180012F14((__int64 *)(v5 + 216), (__int64 *)(a1 + 216));
  sub_180012F14((__int64 *)(v5 + 248), (__int64 *)(a1 + 248));
  *(_DWORD *)(v5 + 292) = *(_DWORD *)(a1 + 292);
  *(_DWORD *)(v5 + 296) = *(_DWORD *)(a1 + 296);
  *(_DWORD *)(v5 + 300) = *(_DWORD *)(a1 + 300);
  *(_DWORD *)(v5 + 304) = *(_DWORD *)(a1 + 304);
  *(_DWORD *)(v5 + 308) = *(_DWORD *)(a1 + 308);
  *(_DWORD *)(v5 + 312) = *(_DWORD *)(a1 + 312);
  *(_DWORD *)(v5 + 316) = *(_DWORD *)(a1 + 316);
  *(_DWORD *)(v5 + 320) = *(_DWORD *)(a1 + 320);
  *(_DWORD *)(v5 + 324) = *(_DWORD *)(a1 + 324);
  *(_DWORD *)(v5 + 328) = *(_DWORD *)(a1 + 328);
  *(_DWORD *)(v5 + 332) = *(_DWORD *)(a1 + 332);
  *(_BYTE *)(v5 + 336) = *(_BYTE *)(a1 + 336);
  *(_DWORD *)(v5 + 340) = *(_DWORD *)(a1 + 340);
  *(_DWORD *)(v5 + 344) = *(_DWORD *)(a1 + 344);
  *(_DWORD *)(v5 + 348) = *(_DWORD *)(a1 + 348);
  *(_DWORD *)(v5 + 352) = *(_DWORD *)(a1 + 352);
  *(_DWORD *)(v5 + 356) = *(_DWORD *)(a1 + 356);
  *(_DWORD *)(v5 + 360) = *(_DWORD *)(a1 + 360);
  *(_DWORD *)(v5 + 364) = *(_DWORD *)(a1 + 364);
  *(_DWORD *)(v5 + 368) = *(_DWORD *)(a1 + 368);
  v27 = 0;
  if ( *(_BYTE *)(a1 + 388) )
  {
    v26 = *(_OWORD *)(a1 + 372);
    v27 = 1;
  }
  sub_1800AD2F8((__int128 *)(v5 + 372), &v26);
  *(_DWORD *)(v5 + 392) = *(_DWORD *)(a1 + 392);
  *(_DWORD *)(v5 + 396) = *(_DWORD *)(a1 + 396);
  *(_DWORD *)(v5 + 400) = *(_DWORD *)(a1 + 400);
  *(_DWORD *)(v5 + 404) = *(_DWORD *)(a1 + 404);
  *(_DWORD *)(v5 + 408) = *(_DWORD *)(a1 + 408);
  if ( v5 + 416 != a1 + 416 )
    sub_1800AB670(v5 + 416, *(unsigned __int64 **)(a1 + 416), *(unsigned __int64 **)(a1 + 424));
  *(_DWORD *)(v5 + 440) = *(_DWORD *)(a1 + 440);
  *(_BYTE *)(v5 + 464) = *(_BYTE *)(a1 + 464);
  *(_BYTE *)(v5 + 465) = *(_BYTE *)(a1 + 465);
  *(_OWORD *)(v5 + 472) = *(_OWORD *)(a1 + 472);
  *(_OWORD *)(v5 + 488) = *(_OWORD *)(a1 + 488);
  *(_OWORD *)(v5 + 504) = *(_OWORD *)(a1 + 504);
  *(_OWORD *)(v5 + 520) = *(_OWORD *)(a1 + 520);
  *(_QWORD *)(v5 + 536) = *(_QWORD *)(a1 + 536);
  *(_DWORD *)(v5 + 544) = *(_DWORD *)(a1 + 544);
  sub_1800AD364((_OWORD *)(v5 + 548), a1 + 548);
  *(_DWORD *)(v5 + 1572) = *(_DWORD *)(a1 + 1572);
  *(_DWORD *)(v5 + 1576) = *(_DWORD *)(a1 + 1576);
  *(_DWORD *)(v5 + 1580) = *(_DWORD *)(a1 + 1580);
  *(_DWORD *)(v5 + 1584) = *(_DWORD *)(a1 + 1584);
  *(_DWORD *)(v5 + 1588) = *(_DWORD *)(a1 + 1588);
  *(_DWORD *)(v5 + 1592) = *(_DWORD *)(a1 + 1592);
  *(_DWORD *)(v5 + 1596) = *(_DWORD *)(a1 + 1596);
  *(_DWORD *)(v5 + 1600) = *(_DWORD *)(a1 + 1600);
  *(_BYTE *)(v5 + 1612) = *(_BYTE *)(a1 + 1612);
  if ( v5 + 1616 != a1 + 1616 )
  {
    sub_1800B3BA0(v5 + 1616);
    sub_1800AB8D8((_QWORD *)(v5 + 1616), (_QWORD *)(a1 + 1616), v22, v6);
  }
  *(_QWORD *)(v5 + 1696) = *(_QWORD *)(a1 + 1696);
  v30 = 0LL;
  v7 = *(__int64 (__fastcall ****)(_QWORD, _BYTE *))(a1 + 1760);
  if ( v7 )
    v30 = (_BYTE *)(**v7)(v7, v29);
  sub_18002C458((__int64)v29, v5 + 1704);
  if ( v30 )
  {
    v8 = v29;
    LOBYTE(v8) = v30 != v29;
    (*(void (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)v30 + 32LL))(v30, v8);
  }
  v9 = (__int64 *)(v5 + 104);
  sub_1800AC5C0((_QWORD *)(v5 + 104), (*(_QWORD *)(a1 + 112) - *(_QWORD *)(a1 + 104)) / 48LL);
  v10 = 0LL;
  v11 = *(_QWORD *)(a1 + 104);
  v12 = *(_QWORD *)(a1 + 112) - v11;
  result = (unsigned __int64)((unsigned __int128)(v12 * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 63;
  v14 = v12 / 48;
  if ( v12 / 48 )
  {
    v15 = 0LL;
    do
    {
      v16 = sub_1800AEB38(v11 + v15, (__int64)v31);
      v17 = *v9;
      *(_BYTE *)(v15 + v17) = *(_BYTE *)v16;
      *(_QWORD *)(v15 + v17 + 8) = *(_QWORD *)(v16 + 8);
      *(_QWORD *)(v15 + v17 + 16) = *(_QWORD *)(v16 + 16);
      *(_QWORD *)(v15 + v17 + 24) = *(_QWORD *)(v16 + 24);
      std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(v15 + v17 + 32), (__int64 *)(v16 + 32));
      v18 = v32;
      if ( v32 )
      {
        if ( _InterlockedExchangeAdd(v32 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v18)(v18);
          if ( _InterlockedExchangeAdd(v18 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 8LL))(v18);
        }
      }
      ++v10;
      v15 += 48LL;
      v11 = *(_QWORD *)(a1 + 104);
      v19 = *(_QWORD *)(a1 + 112) - v11;
      result = (unsigned __int64)((unsigned __int128)(v19 * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 63;
      v14 = v19 / 48;
    }
    while ( v10 < v19 / 48 );
    v2 = v25;
  }
  if ( *((_QWORD *)&v23 + 1) )
  {
    result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v23 + 1) + 8LL));
    if ( !(_DWORD)result )
    {
      v20 = *((_QWORD *)&v23 + 1);
      (***((void (__fastcall ****)(_QWORD, __int64))&v23 + 1))(*((_QWORD *)&v23 + 1), v14);
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v20 + 12));
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v23 + 1) + 8LL))(*((_QWORD *)&v23 + 1));
    }
  }
  v21 = (volatile signed __int32 *)v2[1];
  if ( v21 )
  {
    result = (unsigned int)_InterlockedDecrement(v21 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *, __int64))v21)(v21, v14);
      result = (unsigned int)_InterlockedDecrement(v21 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 8LL))(v21);
    }
  }
  return result;
}
