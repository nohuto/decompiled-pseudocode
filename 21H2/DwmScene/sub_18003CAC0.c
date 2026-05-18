/*
 * XREFs of sub_18003CAC0 @ 0x18003CAC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000F088 @ 0x18000F088 (sub_18000F088.c)
 *     sub_18000FE28 @ 0x18000FE28 (sub_18000FE28.c)
 *     sub_18002BE74 @ 0x18002BE74 (sub_18002BE74.c)
 *     sub_1800366DC @ 0x1800366DC (sub_1800366DC.c)
 *     sub_180036B88 @ 0x180036B88 (sub_180036B88.c)
 *     sub_180038198 @ 0x180038198 (sub_180038198.c)
 *     sub_1800382C4 @ 0x1800382C4 (sub_1800382C4.c)
 *     sub_1800A0674 @ 0x1800A0674 (sub_1800A0674.c)
 *     sub_1800A0690 @ 0x1800A0690 (sub_1800A0690.c)
 *     sub_1800A06E8 @ 0x1800A06E8 (sub_1800A06E8.c)
 *     sub_1800D1210 @ 0x1800D1210 (sub_1800D1210.c)
 *     sub_18011BCAC @ 0x18011BCAC (sub_18011BCAC.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
char __fastcall sub_18003CAC0(
        __int64 a1,
        _QWORD *a2,
        unsigned int a3,
        int a4,
        int a5,
        unsigned int a6,
        __int64 a7,
        unsigned int a8,
        unsigned int a9,
        int a10,
        int a11)
{
  __int64 *v12; // rcx
  char v13; // di
  __int64 v14; // rax
  volatile signed __int32 *v15; // rbx
  volatile signed __int32 *v16; // rbx
  int v17; // eax
  int v18; // r15d
  __int64 v19; // rbx
  __int64 v20; // rcx
  __int64 v21; // rdi
  __int64 v22; // r12
  int v23; // r14d
  __int64 v24; // rdx
  signed __int32 v25; // eax
  __int64 v26; // rbx
  char *v27; // rbx
  __int64 v28; // r14
  char *v29; // rdi
  size_t v30; // rsi
  __int64 v31; // r15
  __int64 v32; // rbx
  _QWORD *v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rbx
  __int64 v36; // rcx
  __int64 v37; // rbx
  __int64 v38; // rbx
  __int64 v40; // rbx
  __int64 v41; // rcx
  __int64 v42; // rbx
  __int64 v43; // rbx
  unsigned int v44; // eax
  unsigned int v45; // eax
  unsigned int v46; // eax
  unsigned int v47; // eax
  __int128 v48; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v49; // [rsp+68h] [rbp-98h]
  unsigned int v50; // [rsp+6Ch] [rbp-94h]
  __int64 v51; // [rsp+70h] [rbp-90h]
  __int128 v52; // [rsp+78h] [rbp-88h] BYREF
  __int128 v53; // [rsp+88h] [rbp-78h] BYREF
  int v54; // [rsp+98h] [rbp-68h]
  unsigned int v55; // [rsp+9Ch] [rbp-64h]
  __int128 v56; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v57; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v58; // [rsp+B8h] [rbp-48h] BYREF
  char v59; // [rsp+C0h] [rbp-40h] BYREF
  volatile signed __int32 *v60; // [rsp+C8h] [rbp-38h]
  _DWORD v61[15]; // [rsp+D0h] [rbp-30h]
  __m128i si128; // [rsp+10Ch] [rbp+Ch]
  int v63; // [rsp+11Ch] [rbp+1Ch]
  int v64; // [rsp+120h] [rbp+20h]
  int v65; // [rsp+124h] [rbp+24h]
  int v66; // [rsp+128h] [rbp+28h]
  int v67; // [rsp+12Ch] [rbp+2Ch]
  int v68; // [rsp+130h] [rbp+30h]
  char v69[8]; // [rsp+140h] [rbp+40h] BYREF
  volatile signed __int32 *v70; // [rsp+148h] [rbp+48h]
  __int64 v71[4]; // [rsp+150h] [rbp+50h] BYREF
  _QWORD v72[4]; // [rsp+170h] [rbp+70h] BYREF
  __int64 v73[4]; // [rsp+190h] [rbp+90h] BYREF
  _QWORD v74[4]; // [rsp+1B0h] [rbp+B0h] BYREF
  __int64 v75[4]; // [rsp+1D0h] [rbp+D0h] BYREF
  _QWORD v76[4]; // [rsp+1F0h] [rbp+F0h] BYREF
  __int64 v77[4]; // [rsp+210h] [rbp+110h] BYREF
  _QWORD v78[4]; // [rsp+230h] [rbp+130h] BYREF
  _BYTE v79[64]; // [rsp+250h] [rbp+150h] BYREF
  _BYTE v80[64]; // [rsp+290h] [rbp+190h] BYREF
  _BYTE v81[64]; // [rsp+2D0h] [rbp+1D0h] BYREF
  _BYTE pExceptionObject[64]; // [rsp+310h] [rbp+210h] BYREF
  char *v83; // [rsp+350h] [rbp+250h] BYREF
  unsigned int v84; // [rsp+358h] [rbp+258h]
  __int64 v85; // [rsp+360h] [rbp+260h] BYREF
  __int64 v86; // [rsp+368h] [rbp+268h] BYREF
  int v87; // [rsp+370h] [rbp+270h]
  int v88; // [rsp+374h] [rbp+274h]
  int v89; // [rsp+378h] [rbp+278h]
  int v90; // [rsp+37Ch] [rbp+27Ch]
  int v91[12]; // [rsp+380h] [rbp+280h] BYREF

  v54 = a4;
  v55 = a3;
  v49 = a6;
  v51 = a7;
  v50 = a9;
  LODWORD(v85) = 0;
  v52 = 0LL;
  if ( *a2 )
  {
    v12 = (__int64 *)sub_1800A0674(*a2, v69, *(unsigned int *)(a1 + 88));
    v13 = 1;
    v14 = *v12;
  }
  else
  {
    v60 = 0LL;
    v12 = (__int64 *)&v59;
    v13 = 2;
    v14 = 0LL;
  }
  *(_QWORD *)&v52 = v14;
  *((_QWORD *)&v52 + 1) = v12[1];
  *v12 = 0LL;
  v12[1] = 0LL;
  if ( (v13 & 2) != 0 )
  {
    v13 &= ~2u;
    if ( v60 )
    {
      if ( _InterlockedExchangeAdd(v60 + 2, 0xFFFFFFFF) == 1 )
      {
        v15 = v60;
        (**(void (__fastcall ***)(volatile signed __int32 *))v60)(v60);
        if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v60 + 8LL))(v60);
      }
    }
  }
  if ( (v13 & 1) != 0 )
  {
    v16 = v70;
    if ( v70 )
    {
      if ( _InterlockedExchangeAdd(v70 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v16)(v16);
        if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
      }
    }
  }
  v48 = 0LL;
  sub_1800382C4((__int64 *)&v48, &v52);
  v17 = sub_1800A0690(v48);
  v61[0] = 0;
  v61[1] = 4;
  v61[2] = 4;
  v61[3] = 4;
  v61[4] = 8;
  v61[5] = 12;
  v61[6] = 16;
  v61[7] = 4;
  v61[8] = 4;
  v61[9] = 8;
  v61[10] = 12;
  v61[11] = 16;
  v61[12] = 2;
  v61[13] = 1;
  v61[14] = 2;
  si128 = _mm_load_si128((const __m128i *)&xmmword_1801436B0);
  v63 = 2;
  v64 = 4;
  v65 = 8;
  v66 = 4;
  v67 = 1;
  v68 = 2;
  v18 = v61[v17];
  if ( (unsigned int)sub_1800A06E8(v48) != 1 )
  {
    sub_18000FE28(v72);
    v45 = (unsigned int)sub_18000FE28(v71);
    sub_1800D1210((unsigned int)v79, v45, 773, (unsigned int)v72, 0);
    throw (Spectre::Engine::EngineException *)v79;
  }
  v19 = *sub_180036B88(v48, &v57);
  v20 = v57;
  if ( v57 )
  {
    v57 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  }
  if ( !v19 )
  {
    sub_18000FE28(v74);
    v46 = (unsigned int)sub_18000FE28(v73);
    sub_1800D1210((unsigned int)v80, v46, 778, (unsigned int)v74, 0);
    throw (Spectre::Engine::EngineException *)v80;
  }
  v21 = a9 * a11;
  if ( v18 * a10 + (int)v21 >= a8 )
  {
    sub_18000FE28(v76);
    v47 = (unsigned int)sub_18000FE28(v75);
    sub_1800D1210((unsigned int)v81, v47, 785, (unsigned int)v76, 0);
    throw (Spectre::Engine::EngineException *)v81;
  }
  if ( v18 * (a10 + a5) + v50 * (a11 + v49 - 1) > a8 )
  {
    sub_18000FE28(v78);
    v44 = (unsigned int)sub_18000FE28(v77);
    sub_1800D1210((unsigned int)pExceptionObject, v44, 790, (unsigned int)v78, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  v85 = 0LL;
  v22 = v49;
  sub_1800366DC((_QWORD *)v48, &v85, a5, v49);
  v23 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, __int64, _DWORD, char **))(**(_QWORD **)(a1 + 144) + 112LL))(
          *(_QWORD *)(a1 + 144),
          v85,
          0LL,
          4LL,
          0,
          &v83);
  v53 = 0LL;
  v56 = 0LL;
  v24 = *(_QWORD *)(a1 + 80);
  if ( v24 )
  {
    while ( 1 )
    {
      v25 = *(_DWORD *)(v24 + 8);
      if ( !v25 )
        break;
      if ( v25 == _InterlockedCompareExchange((volatile signed __int32 *)(v24 + 8), v25 + 1, v25) )
      {
        v56 = *(_OWORD *)(a1 + 72);
        break;
      }
    }
  }
  sub_180038198((__int64 *)&v53, &v56);
  if ( *((_QWORD *)&v56 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v56 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      v26 = *((_QWORD *)&v56 + 1);
      (***((void (__fastcall ****)(_QWORD))&v56 + 1))(*((_QWORD *)&v56 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v26 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v56 + 1) + 8LL))(*((_QWORD *)&v56 + 1));
    }
  }
  sub_18002BE74(v53, v23);
  if ( v23 >= 0 && (v27 = v83) != 0LL )
  {
    v28 = 0LL;
    if ( !v84 )
    {
      (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v85 + 80LL))(v85, v91);
      v84 = 4 * v91[0];
      v27 = v83;
    }
    v29 = (char *)(v51 + (unsigned int)(v18 * a10) + v21);
    if ( (_DWORD)v22 )
    {
      v30 = (unsigned int)(v18 * a5);
      v31 = v50;
      v28 = v22;
      do
      {
        sub_18000F088(v27, v30, v29, v30);
        v27 += v84;
        v29 += v31;
        --v28;
      }
      while ( v28 );
    }
    (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(a1 + 144) + 120LL))(*(_QWORD *)(a1 + 144), v85, 0LL);
    v86 = 0LL;
    v88 = a5;
    v89 = v22;
    v87 = v28;
    v90 = 1;
    v32 = *(_QWORD *)(a1 + 144);
    v33 = sub_180036B88(v48, &v58);
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, int, _DWORD, __int64, _DWORD, __int64 *))(*(_QWORD *)v32 + 368LL))(
      v32,
      *v33,
      0LL,
      v55,
      v54,
      v28,
      v85,
      v28,
      &v86);
    v34 = v58;
    if ( v58 )
    {
      v58 = v28;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
    }
    if ( *((_QWORD *)&v53 + 1) )
    {
      if ( !_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v53 + 1) + 8LL)) )
      {
        v35 = *((_QWORD *)&v53 + 1);
        (***((void (__fastcall ****)(_QWORD))&v53 + 1))(*((_QWORD *)&v53 + 1));
        if ( !_InterlockedDecrement((volatile signed __int32 *)(v35 + 12)) )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v53 + 1) + 8LL))(*((_QWORD *)&v53 + 1));
      }
    }
    v36 = v85;
    if ( v85 )
    {
      v85 = v28;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
    }
    if ( *((_QWORD *)&v48 + 1) )
    {
      if ( !_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v48 + 1) + 8LL)) )
      {
        v37 = *((_QWORD *)&v48 + 1);
        (***((void (__fastcall ****)(_QWORD))&v48 + 1))(*((_QWORD *)&v48 + 1));
        if ( !_InterlockedDecrement((volatile signed __int32 *)(v37 + 12)) )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v48 + 1) + 8LL))(*((_QWORD *)&v48 + 1));
      }
    }
    if ( *((_QWORD *)&v52 + 1) && !_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v52 + 1) + 8LL)) )
    {
      v38 = *((_QWORD *)&v52 + 1);
      (***((void (__fastcall ****)(_QWORD))&v52 + 1))(*((_QWORD *)&v52 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v38 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v52 + 1) + 8LL))(*((_QWORD *)&v52 + 1));
    }
    return 1;
  }
  else
  {
    sub_18011BCAC(&unk_18020F118, 3LL, "Failed to update Texture2D with HRESULT error 0x%.8x", v23);
    if ( *((_QWORD *)&v53 + 1) )
    {
      if ( !_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v53 + 1) + 8LL)) )
      {
        v40 = *((_QWORD *)&v53 + 1);
        (***((void (__fastcall ****)(_QWORD))&v53 + 1))(*((_QWORD *)&v53 + 1));
        if ( !_InterlockedDecrement((volatile signed __int32 *)(v40 + 12)) )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v53 + 1) + 8LL))(*((_QWORD *)&v53 + 1));
      }
    }
    v41 = v85;
    if ( v85 )
    {
      v85 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v41 + 16LL))(v41);
    }
    if ( *((_QWORD *)&v48 + 1) )
    {
      if ( !_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v48 + 1) + 8LL)) )
      {
        v42 = *((_QWORD *)&v48 + 1);
        (***((void (__fastcall ****)(_QWORD))&v48 + 1))(*((_QWORD *)&v48 + 1));
        if ( !_InterlockedDecrement((volatile signed __int32 *)(v42 + 12)) )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v48 + 1) + 8LL))(*((_QWORD *)&v48 + 1));
      }
    }
    if ( *((_QWORD *)&v52 + 1) )
    {
      if ( !_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v52 + 1) + 8LL)) )
      {
        v43 = *((_QWORD *)&v52 + 1);
        (***((void (__fastcall ****)(_QWORD))&v52 + 1))(*((_QWORD *)&v52 + 1));
        if ( !_InterlockedDecrement((volatile signed __int32 *)(v43 + 12)) )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v52 + 1) + 8LL))(*((_QWORD *)&v52 + 1));
      }
    }
    return 0;
  }
}
