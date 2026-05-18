/*
 * XREFs of sub_1800A8150 @ 0x1800A8150
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000FB34 @ 0x18000FB34 (sub_18000FB34.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18001137C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800113F8 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     sub_180017634 @ 0x180017634 (sub_180017634.c)
 *     sub_18001EE70 @ 0x18001EE70 (sub_18001EE70.c)
 *     sub_180021BC8 @ 0x180021BC8 (sub_180021BC8.c)
 *     sub_1800221F0 @ 0x1800221F0 (sub_1800221F0.c)
 *     sub_18006187C @ 0x18006187C (sub_18006187C.c)
 *     sub_1800628C4 @ 0x1800628C4 (sub_1800628C4.c)
 *     sub_18006A61C @ 0x18006A61C (sub_18006A61C.c)
 *     sub_18006AB04 @ 0x18006AB04 (sub_18006AB04.c)
 *     sub_18006AB3C @ 0x18006AB3C (sub_18006AB3C.c)
 *     sub_18009B760 @ 0x18009B760 (sub_18009B760.c)
 *     sub_1800A6FD0 @ 0x1800A6FD0 (sub_1800A6FD0.c)
 *     sub_1800C7110 @ 0x1800C7110 (sub_1800C7110.c)
 *     memset @ 0x18011E09A (memset.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall sub_1800A8150(__int64 a1, __int64 *a2)
{
  volatile signed __int32 *v4; // rbx
  unsigned int v5; // r15d
  __int64 *v6; // rsi
  __int64 v7; // rbx
  unsigned int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  _QWORD *v11; // rax
  volatile signed __int32 *v12; // rbx
  _QWORD *v13; // rax
  __int64 v14; // r8
  _QWORD *v15; // rbx
  __int64 v16; // r14
  __int64 *v17; // rbx
  volatile signed __int32 *v18; // rbx
  volatile signed __int32 *v19; // rbx
  volatile signed __int32 *v20; // rbx
  _DWORD v21[18]; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v22; // [rsp+68h] [rbp-98h] BYREF
  volatile signed __int32 *v23; // [rsp+70h] [rbp-90h]
  __int64 v24[5]; // [rsp+78h] [rbp-88h] BYREF
  __int64 v25; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v26; // [rsp+B0h] [rbp-50h] BYREF
  volatile signed __int32 *v27; // [rsp+B8h] [rbp-48h]
  unsigned int v28; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v29; // [rsp+D8h] [rbp-28h] BYREF
  int v30; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v31; // [rsp+ECh] [rbp-14h]
  int v32; // [rsp+F4h] [rbp-Ch]
  int v33; // [rsp+F8h] [rbp-8h]
  int v34; // [rsp+FCh] [rbp-4h]
  int v35; // [rsp+100h] [rbp+0h]
  __int128 v36; // [rsp+104h] [rbp+4h]
  int v37; // [rsp+114h] [rbp+14h]
  int v38; // [rsp+118h] [rbp+18h]
  _QWORD v39[166]; // [rsp+120h] [rbp+20h] BYREF

  v24[4] = (__int64)a2;
  v4 = (volatile signed __int32 *)a2[1];
  if ( v4 )
  {
    _InterlockedIncrement(v4 + 2);
    v4 = (volatile signed __int32 *)a2[1];
  }
  if ( v4 )
  {
    if ( _InterlockedExchangeAdd(v4 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v4)(v4);
      if ( _InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 8LL))(v4);
    }
  }
  v5 = sub_18006AB3C(*a2);
  if ( v5 )
  {
    v6 = (__int64 *)(a1 + 448);
    v7 = *(_QWORD *)(a1 + 448);
    v8 = sub_18006AB3C(*a2);
    v9 = *(_QWORD *)(a1 + 448);
    v10 = *(_QWORD *)(v9 + 8);
    if ( *(_BYTE *)(v10 + 25) )
      goto LABEL_15;
    do
    {
      if ( *(_DWORD *)(v10 + 32) >= v8 )
      {
        v9 = v10;
        v10 = *(_QWORD *)v10;
      }
      else
      {
        v10 = *(_QWORD *)(v10 + 16);
      }
    }
    while ( !*(_BYTE *)(v10 + 25) );
    if ( v9 == *v6 || v8 < *(_DWORD *)(v9 + 32) )
LABEL_15:
      v9 = *v6;
    if ( v9 == v7 )
    {
      sub_18006187C(*a2 + 24, v9);
      memset(v39, 0, sizeof(v39));
      sub_180021BC8((__int64)v39);
      v11 = (_QWORD *)sub_18006AB04(*a2);
      sub_18001EE70(v11, &v22, 1u);
      std::shared_ptr<__ExceptionPtr>::operator=(&v39[90], &v22);
      v12 = v23;
      if ( v23 )
      {
        if ( _InterlockedExchangeAdd(v23 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v12)(v12);
          if ( _InterlockedExchangeAdd(v12 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
        }
      }
      memset(v21, 0, sizeof(v21));
      *(_QWORD *)&v21[1] = 2LL;
      v21[3] = 0;
      v21[4] = 0;
      v21[5] = 0;
      LOBYTE(v21[6]) = 0;
      memset(&v21[7], 0, 32);
      v21[15] = 65793;
      LOBYTE(v21[16]) = 1;
      v21[17] = 3;
      sub_1800C7110(v39[90], v21, 0LL);
      v29 = 0LL;
      v13 = (_QWORD *)sub_18006AB04(*a2);
      sub_180017634(v13, &v29, 1u);
      v31 = 0LL;
      v32 = 0;
      v33 = 0;
      v34 = 1;
      v35 = 7;
      v37 = 0;
      v38 = 2139095039;
      v30 = 2;
      v36 = 0LL;
      v24[2] = 0LL;
      v24[3] = 15LL;
      LOBYTE(v24[0]) = 0;
      LOBYTE(v14) = 0;
      sub_18000FB34(v24, 0x16uLL, v14, "Camera Default Sampler");
      sub_1800628C4(v29, v24);
      sub_18009B760((_QWORD *)v29, &v30, 0LL);
      v15 = &v39[56];
      v16 = 16LL;
      do
      {
        std::shared_ptr<__ExceptionPtr>::operator=(v15, &v29);
        v15 += 2;
        --v16;
      }
      while ( v16 );
      v17 = sub_18006A61C(*a2, &v26, (__int64)v39, a1 + 24);
      v28 = v5;
      sub_1800A6FD0((__int64 *)(a1 + 448), (__int64)&v25, &v28);
      std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(v25 + 40), v17);
      v18 = v27;
      if ( v27 )
      {
        if ( _InterlockedExchangeAdd(v27 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v18)(v18);
          if ( _InterlockedExchangeAdd(v18 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 8LL))(v18);
        }
      }
      v19 = (volatile signed __int32 *)*((_QWORD *)&v29 + 1);
      if ( *((_QWORD *)&v29 + 1) )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v29 + 1) + 8LL), 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v19)(v19);
          if ( _InterlockedExchangeAdd(v19 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 8LL))(v19);
        }
      }
      sub_1800221F0(v39);
    }
  }
  v20 = (volatile signed __int32 *)a2[1];
  if ( v20 && !_InterlockedDecrement(v20 + 2) )
  {
    (**(void (__fastcall ***)(volatile signed __int32 *))v20)(v20);
    if ( !_InterlockedDecrement(v20 + 3) )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 8LL))(v20);
  }
}
