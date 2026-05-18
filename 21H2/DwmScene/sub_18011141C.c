/*
 * XREFs of sub_18011141C @ 0x18011141C
 * Callers:
 *     sub_180111940 @ 0x180111940 (sub_180111940.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18001145C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     unknown_libname_102 @ 0x180011624 (unknown_libname_102.c)
 *     sub_180012A18 @ 0x180012A18 (sub_180012A18.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

void **__fastcall sub_18011141C(_QWORD *a1)
{
  __int64 v2; // rbx
  __int64 v3; // rbx
  __int64 v4; // rbx
  __int64 v5; // rbx
  __int64 v6; // rbx
  __int64 v7; // rbx
  __int64 v8; // rsi
  __int64 v9; // rbx
  unsigned __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  __int64 v13; // r8
  unsigned __int64 v14; // rdx
  __int64 v15; // rcx
  volatile signed __int32 *v16; // rbx
  volatile signed __int32 *v17; // rbx
  volatile signed __int32 *v18; // rbx
  volatile signed __int32 *v19; // rbx
  __int64 v20; // rcx
  unsigned __int64 v21; // rdx
  __int64 v22; // r8
  volatile signed __int32 *v23; // rbx
  volatile signed __int32 *v24; // rbx
  __int128 v26; // [rsp+20h] [rbp-60h] BYREF
  __int128 v27; // [rsp+30h] [rbp-50h] BYREF
  __int128 v28; // [rsp+40h] [rbp-40h] BYREF
  __int128 v29; // [rsp+50h] [rbp-30h] BYREF
  __int128 v30; // [rsp+60h] [rbp-20h] BYREF
  __int128 v31; // [rsp+70h] [rbp-10h] BYREF

  *a1 = &Spectre::Engine::ImageProcessingEffectBlur::`vftable';
  v26 = 0LL;
  std::shared_ptr<__ExceptionPtr>::operator=(a1 + 9, (__int64 *)&v26);
  if ( *((_QWORD *)&v26 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v26 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      v2 = *((_QWORD *)&v26 + 1);
      (***((void (__fastcall ****)(_QWORD))&v26 + 1))(*((_QWORD *)&v26 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v2 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v26 + 1) + 8LL))(*((_QWORD *)&v26 + 1));
    }
  }
  v27 = 0LL;
  std::shared_ptr<__ExceptionPtr>::operator=(a1 + 36, (__int64 *)&v27);
  if ( *((_QWORD *)&v27 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v27 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      v3 = *((_QWORD *)&v27 + 1);
      (***((void (__fastcall ****)(_QWORD))&v27 + 1))(*((_QWORD *)&v27 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v27 + 1) + 8LL))(*((_QWORD *)&v27 + 1));
    }
  }
  v28 = 0LL;
  std::shared_ptr<__ExceptionPtr>::operator=(a1 + 40, (__int64 *)&v28);
  if ( *((_QWORD *)&v28 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v28 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      v4 = *((_QWORD *)&v28 + 1);
      (***((void (__fastcall ****)(_QWORD))&v28 + 1))(*((_QWORD *)&v28 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v28 + 1) + 8LL))(*((_QWORD *)&v28 + 1));
    }
  }
  v29 = 0LL;
  std::shared_ptr<__ExceptionPtr>::operator=(a1 + 34, (__int64 *)&v29);
  if ( *((_QWORD *)&v29 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v29 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      v5 = *((_QWORD *)&v29 + 1);
      (***((void (__fastcall ****)(_QWORD))&v29 + 1))(*((_QWORD *)&v29 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v5 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v29 + 1) + 8LL))(*((_QWORD *)&v29 + 1));
    }
  }
  v30 = 0LL;
  std::shared_ptr<__ExceptionPtr>::operator=(a1 + 25, (__int64 *)&v30);
  if ( *((_QWORD *)&v30 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v30 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      v6 = *((_QWORD *)&v30 + 1);
      (***((void (__fastcall ****)(_QWORD))&v30 + 1))(*((_QWORD *)&v30 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v30 + 1) + 8LL))(*((_QWORD *)&v30 + 1));
    }
  }
  v31 = 0LL;
  std::shared_ptr<__ExceptionPtr>::operator=(a1 + 23, (__int64 *)&v31);
  if ( *((_QWORD *)&v31 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v31 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      v7 = *((_QWORD *)&v31 + 1);
      (***((void (__fastcall ****)(_QWORD))&v31 + 1))(*((_QWORD *)&v31 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v7 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v31 + 1) + 8LL))(*((_QWORD *)&v31 + 1));
    }
  }
  v8 = a1[28];
  v9 = a1[27];
  if ( v9 != v8 )
  {
    do
    {
      unknown_libname_102(v9, 0);
      v9 += 16LL;
    }
    while ( v9 != v8 );
    v9 = a1[27];
  }
  a1[28] = v9;
  v10 = a1[45];
  if ( v10 >= 0x10 )
  {
    v11 = a1[42];
    v12 = v10 + 1;
    if ( v12 >= 0x1000 )
    {
      v13 = *(_QWORD *)(v11 - 8);
      v14 = v12 + 39;
      v15 = v11 - v13;
      if ( (unsigned __int64)(v15 - 8) > 0x1F )
        goto LABEL_63;
      v11 = v13;
    }
    j_j__o_free(v11);
  }
  a1[44] = 0LL;
  a1[45] = 15LL;
  *((_BYTE *)a1 + 336) = 0;
  v16 = (volatile signed __int32 *)a1[41];
  if ( v16 )
  {
    if ( _InterlockedExchangeAdd(v16 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v16)(v16);
      if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
    }
  }
  v17 = (volatile signed __int32 *)a1[39];
  if ( v17 )
  {
    if ( _InterlockedExchangeAdd(v17 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v17)(v17);
      if ( _InterlockedExchangeAdd(v17 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 8LL))(v17);
    }
  }
  v18 = (volatile signed __int32 *)a1[37];
  if ( v18 )
  {
    if ( _InterlockedExchangeAdd(v18 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v18)(v18);
      if ( _InterlockedExchangeAdd(v18 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 8LL))(v18);
    }
  }
  v19 = (volatile signed __int32 *)a1[35];
  if ( v19 )
  {
    if ( _InterlockedExchangeAdd(v19 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v19)(v19);
      if ( _InterlockedExchangeAdd(v19 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 8LL))(v19);
    }
  }
  v20 = a1[30];
  if ( v20 )
  {
    v21 = (a1[32] - v20) & 0xFFFFFFFFFFFFFFF8uLL;
    if ( v21 < 0x1000 )
    {
LABEL_53:
      j_j__o_free(v20);
      a1[30] = 0LL;
      a1[31] = 0LL;
      a1[32] = 0LL;
      goto LABEL_54;
    }
    v22 = *(_QWORD *)(v20 - 8);
    v14 = v21 + 39;
    v15 = v20 - v22;
    if ( (unsigned __int64)(v15 - 8) <= 0x1F )
    {
      v20 = v22;
      goto LABEL_53;
    }
LABEL_63:
    o__invalid_parameter_noinfo_noreturn(v15, v14);
    JUMPOUT(0x180111933LL);
  }
LABEL_54:
  sub_180012A18(a1 + 27);
  v23 = (volatile signed __int32 *)a1[26];
  if ( v23 )
  {
    if ( _InterlockedExchangeAdd(v23 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v23)(v23);
      if ( _InterlockedExchangeAdd(v23 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 8LL))(v23);
    }
  }
  v24 = (volatile signed __int32 *)a1[24];
  if ( v24 )
  {
    if ( _InterlockedExchangeAdd(v24 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v24)(v24);
      if ( _InterlockedExchangeAdd(v24 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v24 + 8LL))(v24);
    }
  }
  return sub_180109DA0(a1);
}
