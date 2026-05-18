/*
 * XREFs of sub_180039610 @ 0x180039610
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000FE28 @ 0x18000FE28 (sub_18000FE28.c)
 *     sub_180018B88 @ 0x180018B88 (sub_180018B88.c)
 *     sub_180036B88 @ 0x180036B88 (sub_180036B88.c)
 *     sub_1800A0674 @ 0x1800A0674 (sub_1800A0674.c)
 *     sub_1800A06C8 @ 0x1800A06C8 (sub_1800A06C8.c)
 *     sub_1800A06D8 @ 0x1800A06D8 (sub_1800A06D8.c)
 *     sub_1800D1210 @ 0x1800D1210 (sub_1800D1210.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall sub_180039610(
        __int64 a1,
        _QWORD *a2,
        unsigned int a3,
        int a4,
        int a5,
        int a6,
        _QWORD *a7,
        int a8,
        int a9)
{
  __int64 *v13; // rcx
  char v14; // di
  __int64 v15; // rax
  volatile signed __int32 *v16; // rbx
  volatile signed __int32 *v17; // rbx
  __int64 v18; // rbx
  __int64 *v19; // rdx
  char v20; // si
  __int64 v21; // rcx
  char v22; // si
  __int64 v23; // rcx
  __int64 v24; // rbx
  __int64 v25; // rbx
  __int64 *v26; // rcx
  char v27; // di
  __int64 v28; // rax
  char v29; // di
  volatile signed __int32 *v30; // rbx
  volatile signed __int32 *v31; // rbx
  __int64 v32; // rbx
  __int64 *v33; // rax
  char v34; // si
  __int64 v35; // rcx
  char v36; // si
  __int64 v37; // rbx
  __int64 v38; // rcx
  __int64 v39; // rbx
  __int64 v40; // rbx
  __int64 result; // rax
  unsigned int v42; // eax
  unsigned int v43; // eax
  __int64 v44; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v45; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v46; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v47; // [rsp+68h] [rbp-98h] BYREF
  __int128 v48; // [rsp+80h] [rbp-80h]
  __int128 v49; // [rsp+90h] [rbp-70h]
  __int64 v50; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v51; // [rsp+A8h] [rbp-58h] BYREF
  __int128 v52; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v53; // [rsp+C0h] [rbp-40h] BYREF
  char v54; // [rsp+D0h] [rbp-30h] BYREF
  volatile signed __int32 *v55; // [rsp+D8h] [rbp-28h]
  char v56; // [rsp+E0h] [rbp-20h] BYREF
  volatile signed __int32 *v57; // [rsp+E8h] [rbp-18h]
  __int64 v58; // [rsp+F0h] [rbp-10h]
  __int64 v59; // [rsp+F8h] [rbp-8h]
  __int128 v60; // [rsp+100h] [rbp+0h] BYREF
  __int128 v61; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v62[8]; // [rsp+120h] [rbp+20h] BYREF
  volatile signed __int32 *v63; // [rsp+128h] [rbp+28h]
  _BYTE v64[8]; // [rsp+130h] [rbp+30h] BYREF
  volatile signed __int32 *v65; // [rsp+138h] [rbp+38h]
  _QWORD v66[4]; // [rsp+140h] [rbp+40h] BYREF
  _QWORD v67[4]; // [rsp+160h] [rbp+60h] BYREF
  _QWORD v68[4]; // [rsp+180h] [rbp+80h] BYREF
  _QWORD v69[4]; // [rsp+1A0h] [rbp+A0h] BYREF
  _BYTE pExceptionObject[64]; // [rsp+1C0h] [rbp+C0h] BYREF
  _BYTE v71[64]; // [rsp+200h] [rbp+100h] BYREF
  _DWORD v72[6]; // [rsp+240h] [rbp+140h] BYREF

  LODWORD(v44) = 0;
  v58 = 0LL;
  v48 = 0LL;
  if ( *a7 )
  {
    v13 = (__int64 *)sub_1800A0674(*a7, v62, *(unsigned int *)(a1 + 88));
    v14 = 1;
    v15 = *v13;
  }
  else
  {
    v55 = 0LL;
    v13 = (__int64 *)&v54;
    v14 = 2;
    v15 = 0LL;
  }
  *(_QWORD *)&v48 = v15;
  *((_QWORD *)&v48 + 1) = v13[1];
  *v13 = 0LL;
  v13[1] = 0LL;
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
    v17 = v63;
    if ( v63 )
    {
      if ( _InterlockedExchangeAdd(v63 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v17)(v17);
        if ( _InterlockedExchangeAdd(v17 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 8LL))(v17);
      }
    }
  }
  v52 = 0LL;
  if ( *((_QWORD *)&v48 + 1) )
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v48 + 1) + 8LL));
  v60 = v48;
  sub_180018B88(&v52, (__int64 *)&v60);
  v18 = v52;
  if ( (unsigned int)sub_1800A06C8(v52) > 1 || (unsigned int)sub_1800A06D8(v18) > 1 )
  {
    sub_18000FE28(v69);
    v43 = (unsigned int)sub_18000FE28(v68);
    sub_1800D1210((unsigned int)v71, v43, 656, (unsigned int)v69, 0);
    throw (Spectre::Engine::EngineException *)v71;
  }
  if ( v18 )
  {
    v19 = sub_180036B88(v18, &v50);
    v20 = 4;
    v21 = v46;
  }
  else
  {
    v21 = 0LL;
    v46 = 0LL;
    v19 = &v46;
    v20 = 8;
  }
  v22 = v14 | v20;
  v45 = 0LL;
  if ( &v45 != v19 )
  {
    v45 = *v19;
    *v19 = 0LL;
    v21 = v46;
  }
  v58 = v45;
  if ( (v22 & 8) != 0 )
  {
    v22 &= ~8u;
    if ( v21 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  }
  if ( (v22 & 4) != 0 )
  {
    v22 &= ~4u;
    v23 = v50;
    if ( v50 )
    {
      v50 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
    }
  }
  if ( *((_QWORD *)&v52 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v52 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      v24 = *((_QWORD *)&v52 + 1);
      (***((void (__fastcall ****)(_QWORD))&v52 + 1))(*((_QWORD *)&v52 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v24 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v52 + 1) + 8LL))(*((_QWORD *)&v52 + 1));
    }
  }
  if ( *((_QWORD *)&v48 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v48 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      v25 = *((_QWORD *)&v48 + 1);
      (***((void (__fastcall ****)(_QWORD))&v48 + 1))(*((_QWORD *)&v48 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v25 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v48 + 1) + 8LL))(*((_QWORD *)&v48 + 1));
    }
  }
  v59 = 0LL;
  v49 = 0LL;
  if ( *a2 )
  {
    v26 = (__int64 *)sub_1800A0674(*a2, v64, *(unsigned int *)(a1 + 88));
    v27 = 16;
    v28 = *v26;
  }
  else
  {
    v57 = 0LL;
    v26 = (__int64 *)&v56;
    v27 = 32;
    v28 = 0LL;
  }
  v29 = v22 | v27;
  *(_QWORD *)&v49 = v28;
  *((_QWORD *)&v49 + 1) = v26[1];
  *v26 = 0LL;
  v26[1] = 0LL;
  if ( (v29 & 0x20) != 0 )
  {
    v29 &= ~0x20u;
    if ( v57 )
    {
      if ( _InterlockedExchangeAdd(v57 + 2, 0xFFFFFFFF) == 1 )
      {
        v30 = v57;
        (**(void (__fastcall ***)(volatile signed __int32 *))v57)(v57);
        if ( _InterlockedExchangeAdd(v30 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v57 + 8LL))(v57);
      }
    }
  }
  if ( (v29 & 0x10) != 0 )
  {
    v29 &= ~0x10u;
    v31 = v65;
    if ( v65 )
    {
      if ( _InterlockedExchangeAdd(v65 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v31)(v31);
        if ( _InterlockedExchangeAdd(v31 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v31 + 8LL))(v31);
      }
    }
  }
  v53 = 0LL;
  if ( *((_QWORD *)&v49 + 1) )
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v49 + 1) + 8LL));
  v61 = v49;
  sub_180018B88(&v53, (__int64 *)&v61);
  v32 = v53;
  if ( (unsigned int)sub_1800A06C8(v53) > 1 || (unsigned int)sub_1800A06D8(v32) > 1 )
  {
    sub_18000FE28(v67);
    v42 = (unsigned int)sub_18000FE28(v66);
    sub_1800D1210((unsigned int)pExceptionObject, v42, 672, (unsigned int)v67, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  if ( v32 )
  {
    v33 = sub_180036B88(v32, &v51);
    v34 = 64;
    v35 = v47;
  }
  else
  {
    v35 = 0LL;
    v47 = 0LL;
    v33 = &v47;
    v34 = 0x80;
  }
  v36 = v29 | v34;
  v37 = 0LL;
  v44 = 0LL;
  if ( &v44 != v33 )
  {
    v37 = *v33;
    v44 = *v33;
    *v33 = 0LL;
    v35 = v47;
  }
  v59 = v37;
  if ( v36 < 0 )
  {
    v36 &= ~0x80u;
    if ( v35 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
  }
  if ( (v36 & 0x40) != 0 )
  {
    v38 = v51;
    if ( v51 )
    {
      v51 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 16LL))(v38);
    }
  }
  if ( *((_QWORD *)&v53 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v53 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      v39 = *((_QWORD *)&v53 + 1);
      (***((void (__fastcall ****)(_QWORD))&v53 + 1))(*((_QWORD *)&v53 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v39 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v53 + 1) + 8LL))(*((_QWORD *)&v53 + 1));
    }
    v37 = v44;
  }
  if ( *((_QWORD *)&v49 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v49 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      v40 = *((_QWORD *)&v49 + 1);
      (***((void (__fastcall ****)(_QWORD))&v49 + 1))(*((_QWORD *)&v49 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v40 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v49 + 1) + 8LL))(*((_QWORD *)&v49 + 1));
    }
    v37 = v44;
  }
  v72[2] = 0;
  v72[0] = a8;
  v72[1] = a9;
  v72[3] = a5 + a8;
  v72[4] = a9 + a6;
  v72[5] = 1;
  result = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, int, _DWORD, __int64, _DWORD, _DWORD *))(**(_QWORD **)(a1 + 144) + 368LL))(
             *(_QWORD *)(a1 + 144),
             v37,
             0LL,
             a3,
             a4,
             0,
             v45,
             0,
             v72);
  if ( v37 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
  if ( v45 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v45 + 16LL))(v45);
  return result;
}
