/*
 * XREFs of sub_180084808 @ 0x180084808
 * Callers:
 *     sub_180011BB0 @ 0x180011BB0 (sub_180011BB0.c)
 *     sub_180015C60 @ 0x180015C60 (sub_180015C60.c)
 *     sub_180084808 @ 0x180084808 (sub_180084808.c)
 * Callees:
 *     sub_18000FE28 @ 0x18000FE28 (sub_18000FE28.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18001145C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_180012B84 @ 0x180012B84 (sub_180012B84.c)
 *     sub_180012F14 @ 0x180012F14 (sub_180012F14.c)
 *     sub_18002D8C4 @ 0x18002D8C4 (sub_18002D8C4.c)
 *     sub_180031AE8 @ 0x180031AE8 (sub_180031AE8.c)
 *     sub_1800494AC @ 0x1800494AC (sub_1800494AC.c)
 *     sub_1800695CC @ 0x1800695CC (sub_1800695CC.c)
 *     sub_18007B1D0 @ 0x18007B1D0 (sub_18007B1D0.c)
 *     sub_180082784 @ 0x180082784 (sub_180082784.c)
 *     sub_180084514 @ 0x180084514 (sub_180084514.c)
 *     sub_180084808 @ 0x180084808 (sub_180084808.c)
 *     sub_180088310 @ 0x180088310 (sub_180088310.c)
 *     sub_180089274 @ 0x180089274 (sub_180089274.c)
 *     sub_18008A128 @ 0x18008A128 (sub_18008A128.c)
 *     sub_18008A1A4 @ 0x18008A1A4 (sub_18008A1A4.c)
 *     sub_18008B8BC @ 0x18008B8BC (sub_18008B8BC.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 *     __RTtypeid @ 0x180123994 (__RTtypeid.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=11
__int64 *__fastcall sub_180084808(__int64 a1, __int64 *a2, unsigned int a3, _QWORD *a4)
{
  __int64 v8; // rdx
  signed __int32 v9; // eax
  __int64 v10; // rbx
  __int64 v11; // rdx
  signed __int32 v12; // eax
  __int64 v13; // r8
  __int64 v14; // rdx
  signed __int32 v15; // eax
  __int64 v16; // rdx
  signed __int32 v17; // eax
  __int64 v18; // rbx
  __int64 v19; // r8
  __int64 v20; // rcx
  _QWORD *v21; // rbx
  __int64 v22; // r9
  __int64 *v23; // r15
  __int64 *v24; // r13
  __int64 v25; // rcx
  __int64 v26; // rdx
  volatile signed __int32 *v27; // rbx
  _QWORD *v28; // r15
  _QWORD *v29; // rdi
  __int64 v30; // rcx
  volatile signed __int32 *v31; // rbx
  __int64 v32; // rbx
  __int64 v33; // rbx
  volatile signed __int32 *v34; // rbx
  __int64 v36; // rax
  __int64 v37; // rax
  _QWORD *v38; // rax
  _QWORD *v39; // rax
  _QWORD *v40; // rbx
  __int64 v41; // rax
  unsigned __int64 *v42; // rax
  _QWORD *v43; // rax
  __int64 v44; // rbx
  __int64 *v45; // rax
  __int64 *v46; // rax
  char v47; // [rsp+30h] [rbp-D0h]
  __int128 v48; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v49; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v50; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v51; // [rsp+70h] [rbp-90h] BYREF
  __int128 v52; // [rsp+80h] [rbp-80h] BYREF
  __int64 v53; // [rsp+90h] [rbp-70h] BYREF
  int v54; // [rsp+98h] [rbp-68h]
  __int64 v55; // [rsp+A0h] [rbp-60h] BYREF
  int v56; // [rsp+A8h] [rbp-58h]
  __int64 *v57; // [rsp+B0h] [rbp-50h]
  _QWORD *v58; // [rsp+B8h] [rbp-48h]
  __int128 v59; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v60[4]; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD v61[4]; // [rsp+F0h] [rbp-10h] BYREF
  _QWORD v62[4]; // [rsp+110h] [rbp+10h] BYREF
  _QWORD v63[4]; // [rsp+130h] [rbp+30h] BYREF
  _BYTE v64[32]; // [rsp+150h] [rbp+50h] BYREF
  _BYTE v65[32]; // [rsp+170h] [rbp+70h] BYREF
  _BYTE v66[32]; // [rsp+190h] [rbp+90h] BYREF
  _BYTE v67[32]; // [rsp+1B0h] [rbp+B0h] BYREF
  _QWORD v68[8]; // [rsp+1D0h] [rbp+D0h] BYREF
  _QWORD pExceptionObject[8]; // [rsp+210h] [rbp+110h] BYREF
  __int128 v70; // [rsp+250h] [rbp+150h] BYREF
  __int128 v71; // [rsp+260h] [rbp+160h]
  unsigned int v72; // [rsp+270h] [rbp+170h] BYREF
  __int128 v73; // [rsp+278h] [rbp+178h] BYREF
  __int128 v74; // [rsp+288h] [rbp+188h] BYREF

  v57 = a2;
  v58 = a4;
  sub_180089274(a1);
  if ( !*a4 )
  {
    sub_180089274(a1);
    v48 = 0LL;
    v8 = *(_QWORD *)(a1 + 64);
    if ( v8 )
    {
      while ( 1 )
      {
        v9 = *(_DWORD *)(v8 + 8);
        if ( !v9 )
          break;
        if ( v9 == _InterlockedCompareExchange((volatile signed __int32 *)(v8 + 8), v9 + 1, v9) )
        {
          v48 = *(_OWORD *)(a1 + 56);
          break;
        }
      }
    }
    std::shared_ptr<__ExceptionPtr>::operator=(a4, (__int64 *)&v48);
    if ( *((_QWORD *)&v48 + 1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v48 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        v10 = *((_QWORD *)&v48 + 1);
        (***((void (__fastcall ****)(_QWORD))&v48 + 1))(*((_QWORD *)&v48 + 1));
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v10 + 12), 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v48 + 1) + 8LL))(*((_QWORD *)&v48 + 1));
      }
    }
  }
  v71 = 0LL;
  v11 = *(_QWORD *)(a1 + 80);
  if ( v11 )
  {
    while ( 1 )
    {
      v12 = *(_DWORD *)(v11 + 8);
      if ( !v12 )
        break;
      if ( v12 == _InterlockedCompareExchange((volatile signed __int32 *)(v11 + 8), v12 + 1, v12) )
      {
        v71 = *(_OWORD *)(a1 + 72);
        break;
      }
    }
  }
  v13 = *a4;
  v70 = 0LL;
  v14 = *(_QWORD *)(v13 + 80);
  if ( v14 )
  {
    while ( 1 )
    {
      v15 = *(_DWORD *)(v14 + 8);
      if ( !v15 )
        break;
      if ( v15 == _InterlockedCompareExchange((volatile signed __int32 *)(v14 + 8), v15 + 1, v15) )
      {
        v70 = *(_OWORD *)(v13 + 72);
        break;
      }
    }
  }
  if ( !(_QWORD)v70 )
  {
    v49 = 0LL;
    v16 = *(_QWORD *)(a1 + 80);
    if ( v16 )
    {
      while ( 1 )
      {
        v17 = *(_DWORD *)(v16 + 8);
        if ( !v17 )
          break;
        if ( v17 == _InterlockedCompareExchange((volatile signed __int32 *)(v16 + 8), v17 + 1, v17) )
        {
          v49 = *(_OWORD *)(a1 + 72);
          break;
        }
      }
    }
    std::shared_ptr<__ExceptionPtr>::operator=(&v70, (__int64 *)&v49);
    if ( *((_QWORD *)&v49 + 1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v49 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        v18 = *((_QWORD *)&v49 + 1);
        (***((void (__fastcall ****)(_QWORD))&v49 + 1))(*((_QWORD *)&v49 + 1));
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v18 + 12), 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v49 + 1) + 8LL))(*((_QWORD *)&v49 + 1));
      }
    }
  }
  if ( *(_QWORD *)(v70 + 104) != *(_QWORD *)(v71 + 104) )
  {
    sub_18000FE28(v61);
    v46 = sub_18000FE28(v60);
    sub_18002D8C4(v68, v46, 717, (__int64)v61, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)v68;
  }
  if ( (a3 & 0x20000) != 0 || (_QWORD)v70 == (_QWORD)v71 )
    v19 = -1LL;
  else
    v19 = *(_QWORD *)(a1 + 368);
  *(_OWORD *)a2 = 0LL;
  v50 = 0LL;
  v20 = a4[1];
  if ( v20 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v20 + 8));
    v20 = a4[1];
  }
  *(_QWORD *)&v50 = *a4;
  *((_QWORD *)&v50 + 1) = v20;
  sub_18008B8BC(v70, a2, v19, &v50);
  *(_QWORD *)(*a2 + 448) = *(_QWORD *)(a1 + 448);
  v21 = (_QWORD *)(*a2 + 432);
  if ( v21 != (_QWORD *)(a1 + 432) )
  {
    sub_18008A128(*a2 + 432);
    sub_180082784(v21, (_QWORD *)(a1 + 432), v47, v22);
  }
  sub_180012F14((__int64 *)(*a2 + 400), (__int64 *)(a1 + 400));
  v53 = *(_QWORD *)(a1 + 172);
  v54 = *(_DWORD *)(a1 + 180);
  v59 = *(_OWORD *)(a1 + 156);
  v55 = *(_QWORD *)(a1 + 144);
  v56 = *(_DWORD *)(a1 + 152);
  sub_180088310(*a2, &v55, &v59, &v53);
  if ( (a3 & 2) != 0 )
  {
    v72 = a3;
    sub_180089274(a1);
    v23 = *(__int64 **)(a1 + 376);
    v24 = *(__int64 **)(a1 + 384);
    while ( v23 != v24 )
    {
      v73 = 0LL;
      v25 = *v23;
      v51 = 0LL;
      v26 = a2[1];
      if ( v26 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v26 + 8));
        v26 = a2[1];
      }
      *(_QWORD *)&v51 = *a2;
      *((_QWORD *)&v51 + 1) = v26;
      (*(void (__fastcall **)(__int64, __int128 *, unsigned int *, __int128 *))(*(_QWORD *)v25 + 80LL))(
        v25,
        &v73,
        &v72,
        &v51);
      if ( (_QWORD)v73 )
      {
        sub_180084514(*a2, (__int64 *)&v73);
      }
      else if ( (a3 & 0x10000) == 0 )
      {
        v36 = sub_180012B84((__int64)v23);
        v37 = _RTtypeid(v36);
        sub_18008A1A4(v37);
        v38 = sub_18000FE28(v63);
        v39 = (_QWORD *)sub_1800494AC((__int64)v64, (__int64)"SceneNode::Clone() -- component type ", (__int64)v38);
        v40 = (_QWORD *)sub_180031AE8((__int64)v65, v39, " with name ");
        v41 = sub_180012B84((__int64)v23);
        v42 = (unsigned __int64 *)sub_18007B1D0(v41);
        v43 = (_QWORD *)sub_1800695CC((__int64)v66, v40, v42);
        v44 = sub_180031AE8((__int64)v67, v43, " could not be cloned");
        v45 = sub_18000FE28(v62);
        sub_18002D8C4(pExceptionObject, v45, 751, v44, 1);
        throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
      }
      v27 = (volatile signed __int32 *)*((_QWORD *)&v73 + 1);
      if ( *((_QWORD *)&v73 + 1) )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v73 + 1) + 8LL), 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v27)(v27);
          if ( _InterlockedExchangeAdd(v27 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 8LL))(v27);
        }
      }
      v23 += 2;
    }
  }
  if ( (a3 & 1) != 0 )
  {
    sub_180089274(a1);
    v28 = *(_QWORD **)(a1 + 32);
    v29 = *(_QWORD **)(a1 + 40);
    while ( v28 != v29 )
    {
      v74 = 0LL;
      v52 = 0LL;
      v30 = a2[1];
      if ( v30 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v30 + 8));
        v30 = a2[1];
      }
      *(_QWORD *)&v52 = *a2;
      *((_QWORD *)&v52 + 1) = v30;
      sub_180084808(*v28, &v74, a3, &v52);
      v31 = (volatile signed __int32 *)*((_QWORD *)&v74 + 1);
      if ( *((_QWORD *)&v74 + 1) )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v74 + 1) + 8LL), 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v31)(v31);
          if ( _InterlockedExchangeAdd(v31 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v31 + 8LL))(v31);
        }
      }
      v28 += 2;
    }
  }
  if ( *((_QWORD *)&v70 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v70 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      v32 = *((_QWORD *)&v70 + 1);
      (***((void (__fastcall ****)(_QWORD))&v70 + 1))(*((_QWORD *)&v70 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v32 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v70 + 1) + 8LL))(*((_QWORD *)&v70 + 1));
    }
  }
  if ( *((_QWORD *)&v71 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v71 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      v33 = *((_QWORD *)&v71 + 1);
      (***((void (__fastcall ****)(_QWORD))&v71 + 1))(*((_QWORD *)&v71 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v33 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v71 + 1) + 8LL))(*((_QWORD *)&v71 + 1));
    }
  }
  v34 = (volatile signed __int32 *)a4[1];
  if ( v34 )
  {
    if ( _InterlockedExchangeAdd(v34 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v34)(v34);
      if ( _InterlockedExchangeAdd(v34 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v34 + 8LL))(v34);
    }
  }
  return a2;
}
