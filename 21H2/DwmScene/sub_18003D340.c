/*
 * XREFs of sub_18003D340 @ 0x18003D340
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000F088 @ 0x18000F088 (sub_18000F088.c)
 *     sub_18002BE74 @ 0x18002BE74 (sub_18002BE74.c)
 *     sub_180036B58 @ 0x180036B58 (sub_180036B58.c)
 *     sub_180036B88 @ 0x180036B88 (sub_180036B88.c)
 *     sub_180038198 @ 0x180038198 (sub_180038198.c)
 *     sub_1800382C4 @ 0x1800382C4 (sub_1800382C4.c)
 *     sub_1800A0658 @ 0x1800A0658 (sub_1800A0658.c)
 *     sub_1800A0674 @ 0x1800A0674 (sub_1800A0674.c)
 *     sub_1800A0690 @ 0x1800A0690 (sub_1800A0690.c)
 *     sub_1800A06AC @ 0x1800A06AC (sub_1800A06AC.c)
 *     sub_1800A0704 @ 0x1800A0704 (sub_1800A0704.c)
 *     sub_18011BCAC @ 0x18011BCAC (sub_18011BCAC.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
char __fastcall sub_18003D340(__int64 a1, _QWORD *a2, const void *a3, int a4)
{
  __int64 *v7; // rcx
  char v8; // bl
  __int64 v9; // rax
  volatile signed __int32 *v10; // rdi
  volatile signed __int32 *v11; // rdi
  int v12; // r15d
  __int64 v13; // rdx
  int v14; // r12d
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rsi
  __int64 v18; // rdi
  _QWORD *v19; // rax
  int v20; // ebx
  __int64 v21; // rcx
  void (*v22)(void); // rax
  __int64 v23; // rbx
  _QWORD *v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rdx
  signed __int32 v27; // eax
  __int64 v28; // rdi
  char v29; // r15
  __int64 v30; // rdx
  char *v31; // rdi
  __int64 i; // rcx
  unsigned int v33; // edi
  int v34; // eax
  unsigned int v35; // eax
  __int64 v36; // rbx
  __int64 v37; // rcx
  __int64 v38; // rdi
  _QWORD *v39; // rax
  __int64 v40; // rcx
  _QWORD *v41; // rax
  __int64 v42; // rdi
  __int64 v43; // rdi
  __int64 v44; // rdi
  __int128 v46; // [rsp+40h] [rbp-C0h] BYREF
  int v47; // [rsp+50h] [rbp-B0h]
  __int64 v48; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v49; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v50; // [rsp+70h] [rbp-90h] BYREF
  __int64 v51; // [rsp+80h] [rbp-80h] BYREF
  __int64 v52; // [rsp+88h] [rbp-78h] BYREF
  __int64 v53; // [rsp+90h] [rbp-70h] BYREF
  __int64 v54; // [rsp+98h] [rbp-68h] BYREF
  __int128 v55; // [rsp+A0h] [rbp-60h] BYREF
  char v56; // [rsp+B0h] [rbp-50h] BYREF
  volatile signed __int32 *v57; // [rsp+B8h] [rbp-48h]
  _BYTE v58[8]; // [rsp+C0h] [rbp-40h] BYREF
  volatile signed __int32 *v59; // [rsp+C8h] [rbp-38h]
  _DWORD v60[2]; // [rsp+D0h] [rbp-30h]
  char v61; // [rsp+D8h] [rbp-28h] BYREF
  int v62; // [rsp+128h] [rbp+28h]
  int v63; // [rsp+12Ch] [rbp+2Ch]
  int v64; // [rsp+130h] [rbp+30h]
  void *v65; // [rsp+140h] [rbp+40h] BYREF
  int v66; // [rsp+148h] [rbp+48h]

  v47 = a4;
  LODWORD(v48) = 0;
  v49 = 0LL;
  if ( *a2 )
  {
    v7 = (__int64 *)sub_1800A0674(*a2, v58, *(unsigned int *)(a1 + 88));
    v8 = 1;
    v9 = *v7;
  }
  else
  {
    v57 = 0LL;
    v7 = (__int64 *)&v56;
    v8 = 2;
    v9 = 0LL;
  }
  *(_QWORD *)&v49 = v9;
  *((_QWORD *)&v49 + 1) = v7[1];
  *v7 = 0LL;
  v7[1] = 0LL;
  if ( (v8 & 2) != 0 )
  {
    v8 &= ~2u;
    if ( v57 )
    {
      if ( !_InterlockedDecrement(v57 + 2) )
      {
        v10 = v57;
        (**(void (__fastcall ***)(volatile signed __int32 *))v57)(v57);
        if ( !_InterlockedDecrement(v10 + 3) )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v57 + 8LL))(v57);
      }
    }
  }
  if ( (v8 & 1) != 0 )
  {
    v11 = v59;
    if ( v59 )
    {
      if ( !_InterlockedDecrement(v59 + 2) )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v11)(v11);
        if ( !_InterlockedDecrement(v11 + 3) )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
      }
    }
  }
  v12 = -((unsigned int)sub_1800A0704(v49) != 2);
  v46 = 0LL;
  sub_1800382C4((__int64 *)&v46, &v49);
  v14 = 1;
  v15 = *(_QWORD *)(*a2 + 128LL);
  if ( v15 )
    v16 = *(_DWORD *)(v15 + 12);
  else
    v16 = 0;
  v17 = v46;
  if ( v16 == 1 )
  {
    v18 = *(_QWORD *)(a1 + 144);
    v19 = sub_180036B88(v46, &v48);
    v20 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _DWORD, void **))(*(_QWORD *)v18 + 112LL))(
            v18,
            *v19,
            0LL,
            (unsigned int)(v12 + 4),
            0,
            &v65);
    v21 = v48;
    if ( !v48 )
      goto LABEL_23;
    v48 = 0LL;
    v22 = *(void (**)(void))(*(_QWORD *)v21 + 16LL);
  }
  else
  {
    v14 = sub_1800A0658(v46, v13);
    v23 = *(_QWORD *)(a1 + 144);
    v24 = sub_180036B58(v17, &v51);
    v20 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _DWORD, void **))(*(_QWORD *)v23 + 112LL))(
            v23,
            *v24,
            0LL,
            (unsigned int)(v12 + 4),
            0,
            &v65);
    v25 = v51;
    if ( !v51 )
      goto LABEL_23;
    v51 = 0LL;
    v22 = *(void (**)(void))(*(_QWORD *)v25 + 16LL);
  }
  v22();
LABEL_23:
  v55 = 0LL;
  v50 = 0LL;
  v26 = *(_QWORD *)(a1 + 80);
  if ( v26 )
  {
    while ( 1 )
    {
      v27 = *(_DWORD *)(v26 + 8);
      if ( !v27 )
        break;
      if ( v27 == _InterlockedCompareExchange((volatile signed __int32 *)(v26 + 8), v27 + 1, v27) )
      {
        v50 = *(_OWORD *)(a1 + 72);
        break;
      }
    }
    v17 = v46;
  }
  sub_180038198((__int64 *)&v55, &v50);
  if ( *((_QWORD *)&v50 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v50 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      v28 = *((_QWORD *)&v50 + 1);
      (***((void (__fastcall ****)(_QWORD))&v50 + 1))(*((_QWORD *)&v50 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v28 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v50 + 1) + 8LL))(*((_QWORD *)&v50 + 1));
    }
    v17 = v46;
  }
  sub_18002BE74(v55, v20);
  v29 = 0;
  if ( v20 < 0 )
  {
    sub_18011BCAC(&unk_18020F118, 3LL, "Failed to update Texture with HRESULT error 0x%.8x", v20);
    goto LABEL_50;
  }
  v30 = (unsigned int)sub_1800A0690(v17);
  v60[0] = 0;
  v60[1] = 1;
  v31 = &v61;
  for ( i = 20LL; i; --i )
  {
    *(_DWORD *)v31 = 1;
    v31 += 4;
  }
  v62 = 4;
  v63 = 1;
  v64 = 1;
  v33 = v60[v30];
  v34 = sub_1800A06AC(v17);
  v35 = v14 * v66 * v34 / v33;
  if ( v35 == v47 )
  {
    sub_18000F088(v65, v35, a3, v35);
    v29 = 1;
  }
  v36 = *sub_180036B88(v17, &v52);
  v37 = v52;
  if ( v52 )
  {
    v52 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
  }
  v38 = *(_QWORD *)(a1 + 144);
  if ( v36 )
  {
    v39 = sub_180036B88(v17, &v53);
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v38 + 120LL))(v38, *v39, 0LL);
    v40 = v53;
    if ( v53 )
    {
      v53 = 0LL;
LABEL_48:
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v40 + 16LL))(v40);
    }
  }
  else
  {
    v41 = sub_180036B58(v17, &v54);
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v38 + 120LL))(v38, *v41, 0LL);
    v40 = v54;
    if ( v54 )
    {
      v54 = 0LL;
      goto LABEL_48;
    }
  }
LABEL_50:
  if ( *((_QWORD *)&v55 + 1) )
  {
    if ( !_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v55 + 1) + 8LL)) )
    {
      v42 = *((_QWORD *)&v55 + 1);
      (***((void (__fastcall ****)(_QWORD))&v55 + 1))(*((_QWORD *)&v55 + 1));
      if ( !_InterlockedDecrement((volatile signed __int32 *)(v42 + 12)) )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v55 + 1) + 8LL))(*((_QWORD *)&v55 + 1));
    }
  }
  if ( *((_QWORD *)&v46 + 1) )
  {
    if ( !_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v46 + 1) + 8LL)) )
    {
      v43 = *((_QWORD *)&v46 + 1);
      (***((void (__fastcall ****)(_QWORD))&v46 + 1))(*((_QWORD *)&v46 + 1));
      if ( !_InterlockedDecrement((volatile signed __int32 *)(v43 + 12)) )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v46 + 1) + 8LL))(*((_QWORD *)&v46 + 1));
    }
  }
  if ( *((_QWORD *)&v49 + 1) )
  {
    if ( !_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v49 + 1) + 8LL)) )
    {
      v44 = *((_QWORD *)&v49 + 1);
      (***((void (__fastcall ****)(_QWORD))&v49 + 1))(*((_QWORD *)&v49 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v44 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v49 + 1) + 8LL))(*((_QWORD *)&v49 + 1));
    }
  }
  return v29;
}
