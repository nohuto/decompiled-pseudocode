/*
 * XREFs of sub_18003AAF0 @ 0x18003AAF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180032D3C @ 0x180032D3C (sub_180032D3C.c)
 *     sub_180037F1C @ 0x180037F1C (sub_180037F1C.c)
 *     sub_180037FA4 @ 0x180037FA4 (sub_180037FA4.c)
 *     sub_1800381FC @ 0x1800381FC (sub_1800381FC.c)
 *     sub_1800392B0 @ 0x1800392B0 (sub_1800392B0.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x1801239AC (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x1801243E0 (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
void __fastcall sub_18003AAF0(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // edi
  volatile signed __int32 **v5; // r15
  __int64 v6; // r14
  __int64 v7; // r12
  __int64 v8; // r13
  volatile signed __int32 *v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // rdx
  volatile signed __int32 *v12; // rax
  char *v13; // rcx
  int v14; // edi
  __int64 v15; // rax
  volatile signed __int32 *v16; // rbx
  volatile signed __int32 *v17; // rbx
  __int64 *v18; // rax
  int v19; // ecx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rbx
  __int64 v25; // rbx
  __int64 v26; // r15
  __int64 *v27; // rcx
  __int64 v28; // rax
  char v29; // dl
  char v30; // di
  volatile signed __int32 *v31; // rbx
  volatile signed __int32 *v32; // rbx
  __int64 v33; // rbx
  __int64 *v34; // rax
  char v35; // si
  __int64 v36; // rcx
  char v37; // si
  __int64 v38; // rdi
  __int64 v39; // r14
  __int64 v40; // rbx
  __int64 v41; // rbx
  __int64 v42; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v43; // [rsp+38h] [rbp-C8h]
  __int64 v44; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v45; // [rsp+48h] [rbp-B8h] BYREF
  __int128 v46; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v47; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v48; // [rsp+70h] [rbp-90h] BYREF
  __int64 v49; // [rsp+78h] [rbp-88h] BYREF
  __int128 v50; // [rsp+80h] [rbp-80h] BYREF
  __int64 v51; // [rsp+90h] [rbp-70h] BYREF
  volatile signed __int32 *v52; // [rsp+98h] [rbp-68h]
  __int128 v53; // [rsp+A0h] [rbp-60h] BYREF
  char v54; // [rsp+B0h] [rbp-50h] BYREF
  volatile signed __int32 *v55; // [rsp+B8h] [rbp-48h]
  char v56; // [rsp+C0h] [rbp-40h] BYREF
  volatile signed __int32 *v57; // [rsp+C8h] [rbp-38h]
  char v58; // [rsp+D0h] [rbp-30h] BYREF
  volatile signed __int32 *v59; // [rsp+D8h] [rbp-28h]
  __int64 v60; // [rsp+E0h] [rbp-20h]
  __int128 v61; // [rsp+E8h] [rbp-18h]
  char v62; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v63; // [rsp+100h] [rbp+0h] BYREF
  unsigned int v64[4]; // [rsp+110h] [rbp+10h] BYREF
  _QWORD v65[8]; // [rsp+120h] [rbp+20h] BYREF
  _QWORD v66[8]; // [rsp+160h] [rbp+60h] BYREF

  v60 = a3;
  v43 = a1;
  v4 = 0;
  v64[0] = 0;
  `eh vector constructor iterator'(
    v65,
    8uLL,
    8uLL,
    (void (*)(void *))__crt_deferred_errno_cache::__crt_deferred_errno_cache,
    (void (*)(void *))sub_18000C070);
  v5 = (volatile signed __int32 **)(a2 + 8);
  v6 = 0LL;
  v7 = 8LL;
  v8 = v43;
  do
  {
    v61 = 0LL;
    v9 = *v5;
    if ( *v5 )
    {
      _InterlockedIncrement(v9 + 2);
      v9 = *v5;
    }
    v10 = (__int64)*(v5 - 1);
    *(_QWORD *)&v61 = v10;
    *((_QWORD *)&v61 + 1) = v9;
    v46 = 0LL;
    if ( v10 )
    {
      v64[0] = *(_DWORD *)(v8 + 88);
      sub_180037F1C((__int64 **)(v10 + 120), (__int64)&v63, v64);
      v11 = v63;
      v12 = *(volatile signed __int32 **)(v63 + 48);
      if ( v12 )
      {
        _InterlockedIncrement(v12 + 2);
        v12 = *(volatile signed __int32 **)(v11 + 48);
      }
      v57 = v12;
      v13 = &v56;
      v14 = v4 | 0x101;
      v15 = *(_QWORD *)(v11 + 40);
    }
    else
    {
      v55 = 0LL;
      v13 = &v54;
      v14 = v4 | 2;
      v15 = 0LL;
    }
    *(_QWORD *)&v46 = v15;
    *((_QWORD *)&v46 + 1) = *((_QWORD *)v13 + 1);
    *(_QWORD *)v13 = 0LL;
    *((_QWORD *)v13 + 1) = 0LL;
    if ( (v14 & 2) != 0 )
    {
      v14 &= ~2u;
      if ( v55 )
      {
        if ( _InterlockedExchangeAdd(v55 + 2, 0xFFFFFFFF) == 1 )
        {
          v16 = v55;
          (**(void (__fastcall ***)(volatile signed __int32 *))v55)(v55);
          if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v55 + 8LL))(v55);
        }
      }
    }
    if ( (v14 & 1) != 0 )
    {
      v14 &= ~1u;
      if ( v57 )
      {
        if ( _InterlockedExchangeAdd(v57 + 2, 0xFFFFFFFF) == 1 )
        {
          v17 = v57;
          (**(void (__fastcall ***)(volatile signed __int32 *))v57)(v57);
          if ( _InterlockedExchangeAdd(v17 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v57 + 8LL))(v57);
        }
      }
    }
    v50 = 0LL;
    sub_1800381FC((__int64 *)&v50, &v46);
    if ( (_QWORD)v50 )
    {
      v18 = sub_180032D3C(v50, &v48);
      v19 = 4;
    }
    else
    {
      v42 = 0LL;
      v18 = &v42;
      v19 = 8;
    }
    v4 = v19 | v14;
    v20 = 0LL;
    if ( &v62 != (char *)v18 )
    {
      v20 = *v18;
      *v18 = 0LL;
    }
    v21 = v65[v6];
    v65[v6] = v20;
    if ( v21 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
    if ( (v4 & 8) != 0 )
    {
      v4 &= ~8u;
      v22 = v42;
      if ( v42 )
      {
        v42 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
      }
    }
    if ( (v4 & 4) != 0 )
    {
      v4 &= ~4u;
      v23 = v48;
      if ( v48 )
      {
        v48 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
      }
    }
    v66[v6] = v65[v6];
    if ( *((_QWORD *)&v50 + 1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v50 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        v24 = *((_QWORD *)&v50 + 1);
        (***((void (__fastcall ****)(_QWORD))&v50 + 1))(*((_QWORD *)&v50 + 1));
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v24 + 12), 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v50 + 1) + 8LL))(*((_QWORD *)&v50 + 1));
      }
    }
    if ( *((_QWORD *)&v46 + 1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v46 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        v25 = *((_QWORD *)&v46 + 1);
        (***((void (__fastcall ****)(_QWORD))&v46 + 1))(*((_QWORD *)&v46 + 1));
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v25 + 12), 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v46 + 1) + 8LL))(*((_QWORD *)&v46 + 1));
      }
    }
    if ( v9 )
    {
      if ( _InterlockedExchangeAdd(v9 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v9)(v9);
        if ( _InterlockedExchangeAdd(v9 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 8LL))(v9);
      }
    }
    v5 += 2;
    ++v6;
    --v7;
  }
  while ( v7 );
  v47 = 0LL;
  v26 = v43;
  if ( *(_QWORD *)v60 )
  {
    sub_1800392B0((__int64 *)(*(_QWORD *)v60 + 256LL), &v51, *(_DWORD *)(v43 + 88));
    v27 = &v51;
    v28 = v51;
    v29 = 16;
  }
  else
  {
    v59 = 0LL;
    v27 = (__int64 *)&v58;
    v28 = 0LL;
    v29 = 32;
  }
  v30 = v29 | v4;
  *(_QWORD *)&v47 = v28;
  *((_QWORD *)&v47 + 1) = v27[1];
  *v27 = 0LL;
  v27[1] = 0LL;
  if ( (v30 & 0x20) != 0 )
  {
    v30 &= ~0x20u;
    if ( v59 )
    {
      if ( _InterlockedExchangeAdd(v59 + 2, 0xFFFFFFFF) == 1 )
      {
        v31 = v59;
        (**(void (__fastcall ***)(volatile signed __int32 *))v59)(v59);
        if ( _InterlockedExchangeAdd(v31 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v59 + 8LL))(v59);
      }
    }
  }
  if ( (v30 & 0x10) != 0 )
  {
    v30 &= ~0x10u;
    if ( v52 )
    {
      if ( _InterlockedExchangeAdd(v52 + 2, 0xFFFFFFFF) == 1 )
      {
        v32 = v52;
        (**(void (__fastcall ***)(volatile signed __int32 *))v52)(v52);
        if ( _InterlockedExchangeAdd(v32 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v52 + 8LL))(v52);
      }
    }
  }
  v53 = 0LL;
  sub_180037FA4((__int64 *)&v53, &v47);
  if ( (_QWORD)v53 )
  {
    v33 = *(_QWORD *)(v53 + 112);
    v44 = v33;
    if ( v33 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 8LL))(v33);
    v34 = &v44;
    v35 = 64;
    v36 = v45;
  }
  else
  {
    v36 = 0LL;
    v45 = 0LL;
    v34 = &v45;
    v35 = 0x80;
    v33 = v44;
  }
  v37 = v30 | v35;
  v38 = 0LL;
  v49 = 0LL;
  v39 = 0LL;
  if ( &v49 != v34 )
  {
    v49 = *v34;
    v38 = v49;
    *v34 = 0LL;
    v39 = v38;
    v33 = v44;
    v36 = v45;
  }
  if ( v37 < 0 )
  {
    v37 &= ~0x80u;
    if ( v36 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
  }
  if ( (v37 & 0x40) != 0 && v33 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
  (*(void (__fastcall **)(_QWORD, __int64, _QWORD *, __int64))(**(_QWORD **)(v26 + 144) + 264LL))(
    *(_QWORD *)(v26 + 144),
    8LL,
    v66,
    v38);
  if ( v39 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 16LL))(v38);
  if ( *((_QWORD *)&v53 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v53 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      v40 = *((_QWORD *)&v53 + 1);
      (***((void (__fastcall ****)(_QWORD))&v53 + 1))(*((_QWORD *)&v53 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v40 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v53 + 1) + 8LL))(*((_QWORD *)&v53 + 1));
    }
  }
  if ( *((_QWORD *)&v47 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v47 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      v41 = *((_QWORD *)&v47 + 1);
      (***((void (__fastcall ****)(_QWORD))&v47 + 1))(*((_QWORD *)&v47 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v41 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v47 + 1) + 8LL))(*((_QWORD *)&v47 + 1));
    }
  }
  `eh vector destructor iterator'(v65, 8uLL, 8uLL, (void (*)(void *))sub_18000C070);
}
