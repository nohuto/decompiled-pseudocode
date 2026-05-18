/*
 * XREFs of sub_1801092C4 @ 0x1801092C4
 * Callers:
 *     sub_1800E8960 @ 0x1800E8960 (sub_1800E8960.c)
 *     sub_1800EA590 @ 0x1800EA590 (sub_1800EA590.c)
 * Callees:
 *     sub_180010F3C @ 0x180010F3C (sub_180010F3C.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18001137C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_18001EE70 @ 0x18001EE70 (sub_18001EE70.c)
 *     sub_1800A038C @ 0x1800A038C (sub_1800A038C.c)
 *     sub_1800A03C8 @ 0x1800A03C8 (sub_1800A03C8.c)
 *     sub_1800A40D4 @ 0x1800A40D4 (sub_1800A40D4.c)
 *     sub_1800A495C @ 0x1800A495C (sub_1800A495C.c)
 *     sub_1800A5898 @ 0x1800A5898 (sub_1800A5898.c)
 *     sub_1800C7110 @ 0x1800C7110 (sub_1800C7110.c)
 *     sub_1800F2984 @ 0x1800F2984 (sub_1800F2984.c)
 *     sub_1800F29E0 @ 0x1800F29E0 (sub_1800F29E0.c)
 *     sub_1800F2A3C @ 0x1800F2A3C (sub_1800F2A3C.c)
 *     sub_1800F2A98 @ 0x1800F2A98 (sub_1800F2A98.c)
 *     sub_1800F2CE0 @ 0x1800F2CE0 (sub_1800F2CE0.c)
 *     sub_1800F3710 @ 0x1800F3710 (sub_1800F3710.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
bool __fastcall sub_1801092C4(__int64 a1, __int64 a2, char a3)
{
  __int64 v6; // r13
  int v7; // edx
  int v8; // eax
  char v9; // bl
  int v10; // edi
  int v11; // esi
  unsigned int v12; // eax
  __int64 v13; // rbx
  _DWORD **v14; // rdx
  __int64 v15; // r12
  __int64 v16; // r8
  __int64 v17; // r14
  __int64 v18; // rsi
  __int64 v19; // r8
  bool v20; // bl
  __int64 v21; // rdi
  volatile signed __int32 *v22; // rbx
  volatile signed __int32 *v23; // rbx
  volatile signed __int32 *v24; // rbx
  __int64 v25; // rax
  __int64 v26; // rax
  _QWORD *v27; // rdx
  volatile signed __int32 *v28; // rbx
  volatile signed __int32 *v29; // rbx
  bool result; // al
  unsigned int v32; // [rsp+40h] [rbp-C0h]
  int v33; // [rsp+44h] [rbp-BCh]
  _DWORD v34[2]; // [rsp+48h] [rbp-B8h] BYREF
  _DWORD v35[3]; // [rsp+50h] [rbp-B0h] BYREF
  char v36; // [rsp+5Ch] [rbp-A4h] BYREF
  __int64 v37; // [rsp+60h] [rbp-A0h]
  __int128 v38; // [rsp+70h] [rbp-90h] BYREF
  __int128 v39; // [rsp+80h] [rbp-80h] BYREF
  __int128 v40; // [rsp+90h] [rbp-70h] BYREF
  __int128 v41; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v42[2]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v43[2]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v44; // [rsp+D0h] [rbp-30h] BYREF
  volatile signed __int32 *v45; // [rsp+D8h] [rbp-28h]
  __int64 v46; // [rsp+E0h] [rbp-20h] BYREF
  volatile signed __int32 *v47; // [rsp+E8h] [rbp-18h]
  __int64 v48; // [rsp+F0h] [rbp-10h] BYREF
  volatile signed __int32 *v49; // [rsp+F8h] [rbp-8h]
  __int64 v50[4]; // [rsp+100h] [rbp+0h] BYREF
  int v51; // [rsp+120h] [rbp+20h] BYREF
  __int64 v52; // [rsp+128h] [rbp+28h]
  __int128 v53; // [rsp+130h] [rbp+30h]
  __int64 v54; // [rsp+140h] [rbp+40h]
  __int64 v55; // [rsp+148h] [rbp+48h]
  int v56; // [rsp+150h] [rbp+50h] BYREF
  __int64 v57; // [rsp+158h] [rbp+58h]
  __int128 v58; // [rsp+160h] [rbp+60h]
  __int64 v59; // [rsp+170h] [rbp+70h]
  __int64 v60; // [rsp+178h] [rbp+78h]
  __int128 v61; // [rsp+180h] [rbp+80h] BYREF
  __int128 v62; // [rsp+190h] [rbp+90h] BYREF
  __int64 v63; // [rsp+1A0h] [rbp+A0h] BYREF
  int v64; // [rsp+1B0h] [rbp+B0h] BYREF
  int v65; // [rsp+1B4h] [rbp+B4h]
  int v66; // [rsp+1B8h] [rbp+B8h]
  int v67; // [rsp+1BCh] [rbp+BCh]
  int v68; // [rsp+1C0h] [rbp+C0h]
  int v69; // [rsp+1C4h] [rbp+C4h]
  char v70; // [rsp+1C8h] [rbp+C8h]
  int v71; // [rsp+1CCh] [rbp+CCh]
  int v72; // [rsp+1D0h] [rbp+D0h]
  int v73; // [rsp+1D4h] [rbp+D4h]
  int v74; // [rsp+1D8h] [rbp+D8h]
  __int128 v75; // [rsp+1DCh] [rbp+DCh]
  char v76; // [rsp+1ECh] [rbp+ECh]
  int v77; // [rsp+1EDh] [rbp+EDh]
  int v78; // [rsp+1F4h] [rbp+F4h]

  v6 = sub_1800A038C(a2);
  v7 = 0;
  if ( *(int *)(a1 + 104) >= 40960 )
    v7 = 23;
  v8 = 0;
  if ( (*(_DWORD *)(v6 + 560) & 2) == 0 )
    v8 = v7;
  v33 = v8;
  v9 = sub_1800A495C(*(_QWORD *)(a1 + 56), (__int64)&qword_18020C4C0);
  v10 = sub_1800A495C(*(_QWORD *)(a1 + 56), (__int64)&qword_18020C460);
  v11 = sub_1800A495C(*(_QWORD *)(a1 + 56), (__int64)aSkinning);
  v12 = sub_1800A495C(*(_QWORD *)(a1 + 56), (__int64)&qword_18020C4A0);
  v32 = v12;
  v13 = 1LL << v9;
  v37 = v13;
  if ( a3 )
  {
    v35[0] = v10;
    v35[1] = v11;
    v35[2] = v12;
    v42[0] = v35;
    v42[1] = &v36;
    v14 = (_DWORD **)v42;
  }
  else
  {
    v34[0] = v10;
    v34[1] = v11;
    v43[0] = v34;
    v43[1] = v35;
    v14 = (_DWORD **)v43;
  }
  v15 = sub_1800A03C8(a2, v14);
  v16 = 0LL;
  v63 = 0LL;
  v17 = 1LL << v10;
  v18 = 1LL << v11;
  while ( 1 )
  {
    v19 = v13 | v16;
    v20 = a3 && _bittest64(&v19, v32);
    v21 = v19 & v17;
    if ( !v20 || !v21 && (v19 & v18) == 0 )
    {
      v62 = 0LL;
      sub_1800A40D4(*(_QWORD *)(a1 + 56), &v62, v19, v15 & ~v19, 1);
      v67 = 0;
      v68 = 0;
      v69 = 0;
      v70 = 0;
      v75 = 0LL;
      v78 = 3;
      v64 = 0;
      v65 = !v20 + 1;
      v66 = v21 != 0 ? v33 : 0;
      v77 = 16843009;
      v71 = 2;
      v72 = 2;
      v73 = 2;
      v74 = 7;
      v76 = 1;
      v61 = 0LL;
      sub_18001EE70((_QWORD *)v6, &v61, 1u);
      sub_1800C7110((_QWORD *)v61, (__int64)&v64, 0LL);
      v38 = 0LL;
      if ( *((_QWORD *)&v61 + 1) )
        _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v61 + 1) + 8LL));
      v38 = v61;
      sub_1800F2A98(v62, &v38);
      if ( !v20 )
      {
        v65 = 1;
        sub_18001EE70((_QWORD *)v6, &v44, 1u);
        std::shared_ptr<__ExceptionPtr>::operator=(&v61, &v44);
        v22 = v45;
        if ( v45 )
        {
          if ( _InterlockedExchangeAdd(v45 + 2, 0xFFFFFFFF) == 1 )
          {
            (**(void (__fastcall ***)(volatile signed __int32 *))v22)(v22);
            if ( _InterlockedExchangeAdd(v22 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 8LL))(v22);
          }
        }
        sub_1800C7110((_QWORD *)v61, (__int64)&v64, 0LL);
        v39 = 0LL;
        if ( *((_QWORD *)&v61 + 1) )
          _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v61 + 1) + 8LL));
        v39 = v61;
        sub_1800F29E0(v62, &v39);
        HIBYTE(v77) = 0;
        sub_18001EE70((_QWORD *)v6, &v46, 1u);
        std::shared_ptr<__ExceptionPtr>::operator=(&v61, &v46);
        v23 = v47;
        if ( v47 )
        {
          if ( _InterlockedExchangeAdd(v47 + 2, 0xFFFFFFFF) == 1 )
          {
            (**(void (__fastcall ***)(volatile signed __int32 *))v23)(v23);
            if ( _InterlockedExchangeAdd(v23 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 8LL))(v23);
          }
        }
        sub_1800C7110((_QWORD *)v61, (__int64)&v64, 0LL);
        v40 = 0LL;
        if ( *((_QWORD *)&v61 + 1) )
          _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v61 + 1) + 8LL));
        v40 = v61;
        sub_1800F2984(v62, &v40);
        v65 = 2;
        HIBYTE(v77) = 0;
        sub_18001EE70((_QWORD *)v6, &v48, 1u);
        std::shared_ptr<__ExceptionPtr>::operator=(&v61, &v48);
        v24 = v49;
        if ( v49 )
        {
          if ( _InterlockedExchangeAdd(v49 + 2, 0xFFFFFFFF) == 1 )
          {
            (**(void (__fastcall ***)(volatile signed __int32 *))v24)(v24);
            if ( _InterlockedExchangeAdd(v24 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v24 + 8LL))(v24);
          }
        }
        sub_1800C7110((_QWORD *)v61, (__int64)&v64, 0LL);
        v41 = 0LL;
        if ( *((_QWORD *)&v61 + 1) )
          _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v61 + 1) + 8LL));
        v41 = v61;
        sub_1800F2A3C(v62, &v41);
      }
      if ( v21 )
      {
        v25 = *(_QWORD *)(a1 + 112);
        v51 = 0;
        v52 = v25;
        v53 = 0LL;
        v54 = 0LL;
        v55 = 0LL;
        sub_1800F3710(v62, (__int64)&v51);
      }
      else
      {
        v26 = *(_QWORD *)(a1 + 120);
        v56 = 0;
        v57 = v26;
        v58 = 0LL;
        v59 = 0LL;
        v60 = 0LL;
        sub_1800F3710(v62, (__int64)&v56);
        v50[3] = 15LL;
        v50[2] = 0LL;
        LOBYTE(v50[0]) = 0;
        sub_1800F2CE0((_QWORD *)v62, 5, v50);
      }
      v27 = *(_QWORD **)(a1 + 136);
      if ( *(_QWORD **)(a1 + 144) == v27 )
      {
        sub_180010F3C((_QWORD *)(a1 + 128), v27, &v62);
      }
      else
      {
        *v27 = 0LL;
        v27[1] = 0LL;
        if ( *((_QWORD *)&v62 + 1) )
          _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v62 + 1) + 8LL));
        *(_OWORD *)v27 = v62;
        *(_QWORD *)(a1 + 136) += 16LL;
      }
      v28 = (volatile signed __int32 *)*((_QWORD *)&v61 + 1);
      if ( *((_QWORD *)&v61 + 1) )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v61 + 1) + 8LL), 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v28)(v28);
          if ( _InterlockedExchangeAdd(v28 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 8LL))(v28);
        }
      }
      v29 = (volatile signed __int32 *)*((_QWORD *)&v62 + 1);
      if ( *((_QWORD *)&v62 + 1)
        && _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v62 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v29)(v29);
        if ( _InterlockedExchangeAdd(v29 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 8LL))(v29);
      }
    }
    result = sub_1800A5898(&v63, v15);
    if ( !result )
      break;
    v16 = v63;
    v13 = v37;
  }
  return result;
}
