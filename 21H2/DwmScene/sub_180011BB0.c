/*
 * XREFs of sub_180011BB0 @ 0x180011BB0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010F58 @ 0x180010F58 (sub_180010F58.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18001145C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800114D8 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     sub_18001277C @ 0x18001277C (sub_18001277C.c)
 *     sub_180012A18 @ 0x180012A18 (sub_180012A18.c)
 *     sub_18001B6D8 @ 0x18001B6D8 (sub_18001B6D8.c)
 *     sub_180022D60 @ 0x180022D60 (sub_180022D60.c)
 *     sub_180022FA8 @ 0x180022FA8 (sub_180022FA8.c)
 *     sub_180066E84 @ 0x180066E84 (sub_180066E84.c)
 *     sub_180067304 @ 0x180067304 (sub_180067304.c)
 *     sub_18007ABF8 @ 0x18007ABF8 (sub_18007ABF8.c)
 *     sub_180084808 @ 0x180084808 (sub_180084808.c)
 *     sub_180089274 @ 0x180089274 (sub_180089274.c)
 *     sub_18008D2D0 @ 0x18008D2D0 (sub_18008D2D0.c)
 *     sub_18008DF3C @ 0x18008DF3C (sub_18008DF3C.c)
 *     sub_18008E4D4 @ 0x18008E4D4 (sub_18008E4D4.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall sub_180011BB0(__int64 a1, __int64 a2)
{
  __int64 v4; // r13
  _QWORD *v5; // r15
  __int64 v6; // r8
  __int64 v7; // rdx
  signed __int32 v8; // eax
  __int64 v9; // rsi
  __int64 v10; // rdx
  signed __int32 v11; // eax
  volatile signed __int32 *v12; // rcx
  __int64 *v13; // rax
  char v14; // si
  __int64 v15; // rcx
  __int64 v16; // rbx
  volatile signed __int32 *v17; // rbx
  __int64 v18; // rax
  volatile signed __int32 *v19; // rbx
  volatile signed __int32 *v20; // rbx
  __int64 v21; // rsi
  __int64 *v22; // rax
  volatile signed __int32 *v23; // rbx
  char v24; // bl
  __int64 v25; // rdx
  signed __int32 v26; // eax
  __int64 v27; // rbx
  _QWORD *j; // rdx
  __int64 v29; // rdx
  volatile signed __int32 *v30; // rbx
  _QWORD *i; // rdx
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rbx
  __int64 v37; // rbx
  __int64 v38; // rbx
  __int64 v39; // rbx
  __int128 v41; // [rsp+20h] [rbp-E0h] BYREF
  int v42; // [rsp+30h] [rbp-D0h]
  __int128 v43; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v44; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v45; // [rsp+58h] [rbp-A8h] BYREF
  volatile signed __int32 *v46; // [rsp+60h] [rbp-A0h]
  __int128 v47; // [rsp+68h] [rbp-98h] BYREF
  __int128 v48; // [rsp+78h] [rbp-88h] BYREF
  __int128 v49; // [rsp+88h] [rbp-78h] BYREF
  __int128 v50; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v51; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v52; // [rsp+C0h] [rbp-40h] BYREF
  volatile signed __int32 *v53; // [rsp+C8h] [rbp-38h]
  _BYTE v54[16]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v55; // [rsp+E0h] [rbp-20h]
  __int64 v56; // [rsp+E8h] [rbp-18h]
  _BYTE v57[8]; // [rsp+F0h] [rbp-10h] BYREF
  volatile signed __int32 *v58; // [rsp+F8h] [rbp-8h]
  __int128 v59; // [rsp+100h] [rbp+0h]
  __int128 v60; // [rsp+110h] [rbp+10h]
  __int128 v61; // [rsp+120h] [rbp+20h] BYREF
  __int64 v62; // [rsp+130h] [rbp+30h]
  __int128 v63; // [rsp+138h] [rbp+38h] BYREF
  __int64 v64; // [rsp+148h] [rbp+48h]
  __int128 v65; // [rsp+150h] [rbp+50h] BYREF
  __int128 v66; // [rsp+160h] [rbp+60h] BYREF
  __int128 v67; // [rsp+170h] [rbp+70h] BYREF
  __int128 v68; // [rsp+180h] [rbp+80h] BYREF

  v42 = 0;
  v4 = qword_18021F908;
  v5 = (_QWORD *)(a1 + 16);
  v6 = *(_QWORD *)(a1 + 16);
  v59 = 0LL;
  v7 = *(_QWORD *)(v6 + 80);
  if ( v7 )
  {
    while ( 1 )
    {
      v8 = *(_DWORD *)(v7 + 8);
      if ( !v8 )
        break;
      if ( v8 == _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 8), v8 + 1, v8) )
      {
        v59 = *(_OWORD *)(v6 + 72);
        break;
      }
    }
  }
  v68 = 0LL;
  sub_180066E84(v59 + 16, &v68);
  v9 = *v5;
  sub_180089274(*v5);
  v60 = 0LL;
  v10 = *(_QWORD *)(v9 + 64);
  if ( v10 )
  {
    while ( 1 )
    {
      v11 = *(_DWORD *)(v10 + 8);
      if ( !v11 )
        break;
      if ( v11 == _InterlockedCompareExchange((volatile signed __int32 *)(v10 + 8), v11 + 1, v11) )
      {
        v60 = *(_OWORD *)(v9 + 56);
        break;
      }
    }
  }
  v41 = 0LL;
  if ( a2 )
  {
    v12 = *(volatile signed __int32 **)(a2 + 40);
    if ( v12 )
    {
      _InterlockedIncrement(v12 + 2);
      v12 = *(volatile signed __int32 **)(a2 + 40);
    }
    v45 = *(_QWORD *)(a2 + 32);
    v46 = v12;
    v13 = &v45;
    v14 = 5;
  }
  else
  {
    v47 = 0LL;
    v13 = (__int64 *)&v47;
    v14 = 6;
  }
  v15 = v13[1];
  if ( v15 )
    _InterlockedIncrement((volatile signed __int32 *)(v15 + 8));
  *(_QWORD *)&v41 = *v13;
  *((_QWORD *)&v41 + 1) = v15;
  if ( (v14 & 2) != 0 )
  {
    v14 &= ~2u;
    if ( *((_QWORD *)&v47 + 1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v47 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        v16 = *((_QWORD *)&v47 + 1);
        (***((void (__fastcall ****)(_QWORD))&v47 + 1))(*((_QWORD *)&v47 + 1));
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v16 + 12), 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v47 + 1) + 8LL))(*((_QWORD *)&v47 + 1));
      }
    }
  }
  if ( (v14 & 1) != 0 )
  {
    if ( v46 )
    {
      if ( _InterlockedExchangeAdd(v46 + 2, 0xFFFFFFFF) == 1 )
      {
        v17 = v46;
        (**(void (__fastcall ***)(volatile signed __int32 *))v46)(v46);
        if ( _InterlockedExchangeAdd(v17 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v46 + 8LL))(v46);
      }
    }
  }
  if ( (_QWORD)v60 != (_QWORD)v41 )
  {
    v43 = 0LL;
    if ( (_QWORD)v41 )
    {
      v44 = 0LL;
      v25 = *(_QWORD *)(v41 + 80);
      if ( v25 )
      {
        while ( 1 )
        {
          v26 = *(_DWORD *)(v25 + 8);
          if ( !v26 )
            break;
          if ( v26 == _InterlockedCompareExchange((volatile signed __int32 *)(v25 + 8), v26 + 1, v26) )
          {
            v44 = *(_OWORD *)(v41 + 72);
            break;
          }
        }
      }
      std::shared_ptr<__ExceptionPtr>::operator=(&v43, (__int64 *)&v44);
      if ( *((_QWORD *)&v44 + 1) )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v44 + 1) + 8LL), 0xFFFFFFFF) == 1 )
        {
          v27 = *((_QWORD *)&v44 + 1);
          (***((void (__fastcall ****)(_QWORD))&v44 + 1))(*((_QWORD *)&v44 + 1));
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v27 + 12), 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v44 + 1) + 8LL))(*((_QWORD *)&v44 + 1));
        }
      }
      v24 = 0;
      v21 = v43;
    }
    else
    {
      v18 = *(_QWORD *)(a1 + 184);
      if ( v18 )
      {
        *(_DWORD *)(v18 + 104) = *(_DWORD *)(a1 + 200);
        *(_QWORD *)(a1 + 184) = 0LL;
        v19 = *(volatile signed __int32 **)(a1 + 192);
        *(_QWORD *)(a1 + 192) = 0LL;
        if ( v19 )
        {
          if ( !_InterlockedDecrement(v19 + 2) )
          {
            (**(void (__fastcall ***)(volatile signed __int32 *))v19)(v19);
            if ( !_InterlockedDecrement(v19 + 3) )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 8LL))(v19);
          }
        }
      }
      sub_18007ABF8(*(_QWORD *)(v4 + 56), &v52);
      std::shared_ptr<__ExceptionPtr>::operator=(&v43, &v52);
      v20 = v53;
      if ( v53 )
      {
        if ( _InterlockedExchangeAdd(v53 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v20)(v20);
          if ( _InterlockedExchangeAdd(v20 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 8LL))(v20);
        }
      }
      v65 = 0LL;
      v21 = v43;
      sub_180066E84(v43 + 16, &v65);
      v55 = 0LL;
      v56 = 0LL;
      sub_18001277C(v54, &qword_18020F768);
      v22 = (__int64 *)sub_18008D2D0(v21, v57, v54);
      std::shared_ptr<__ExceptionPtr>::operator=(&v41, v22);
      v23 = v58;
      if ( v58 )
      {
        if ( _InterlockedExchangeAdd(v58 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v23)(v23);
          if ( _InterlockedExchangeAdd(v23 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v23 + 8LL))(v23);
        }
        v21 = v43;
      }
      v24 = 1;
      if ( BYTE8(v65) )
        sub_180067304(v65);
    }
    if ( (_QWORD)v59 == v21 )
    {
      if ( (*(_DWORD *)(a1 + 48) & 0xFFFFFFFB) != 0 && !v24 )
      {
        v63 = 0LL;
        v64 = 0LL;
        sub_180010F58(v59, (__int64)&v63);
        for ( i = (_QWORD *)v63; i != *((_QWORD **)&v63 + 1); i += 2 )
        {
          if ( *(float *)(*i + 104LL) > 0.000001 )
          {
            std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 184), i);
            break;
          }
        }
        sub_180012A18(&v63);
      }
      v51 = 0LL;
      if ( *((_QWORD *)&v41 + 1) )
        _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v41 + 1) + 8LL));
      v51 = v41;
      v49 = 0LL;
      v32 = v5[1];
      if ( v32 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v32 + 8));
        v32 = v5[1];
      }
      *(_QWORD *)&v49 = *v5;
      *((_QWORD *)&v49 + 1) = v32;
      sub_18008E4D4(v59, &v49, &v51);
    }
    else
    {
      v67 = 0LL;
      sub_180066E84(v21 + 16, &v67);
      if ( (*(_DWORD *)(a1 + 48) & 0xFFFFFFFB) != 0 && !v24 )
      {
        v61 = 0LL;
        v62 = 0LL;
        sub_180010F58(v21, (__int64)&v61);
        for ( j = (_QWORD *)v61; j != *((_QWORD **)&v61 + 1); j += 2 )
        {
          if ( *(float *)(*j + 104LL) > 0.000001 )
          {
            std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 184), j);
            break;
          }
        }
        sub_180012A18(&v61);
      }
      v66 = 0LL;
      v50 = 0LL;
      if ( *((_QWORD *)&v41 + 1) )
        _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v41 + 1) + 8LL));
      v50 = v41;
      sub_180084808(*v5, &v66, 131075LL, &v50);
      v48 = 0LL;
      v29 = v5[1];
      if ( v29 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v29 + 8));
        v29 = v5[1];
      }
      *(_QWORD *)&v48 = *v5;
      *((_QWORD *)&v48 + 1) = v29;
      sub_18008DF3C(v59, &v48);
      std::shared_ptr<__ExceptionPtr>::operator=(v5, &v66);
      v30 = (volatile signed __int32 *)*((_QWORD *)&v66 + 1);
      if ( *((_QWORD *)&v66 + 1) )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v66 + 1) + 8LL), 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v30)(v30);
          if ( _InterlockedExchangeAdd(v30 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 8LL))(v30);
        }
      }
      if ( BYTE8(v67) )
        sub_180067304(v67);
    }
    v33 = *(_QWORD *)(a1 + 184);
    if ( v33 )
      *(_DWORD *)(v33 + 104) = 0;
    if ( (*(_DWORD *)(a1 + 48) & 0xFFFFFFFB) == 0 )
    {
      if ( (_QWORD)v60 )
      {
        v34 = sub_18001B6D8(v4);
        if ( v34 )
        {
          if ( *(_DWORD *)(a1 + 48) )
            sub_180022FA8(v34, a1 + 72);
          else
            sub_180022D60(v34, a1 + 52);
        }
      }
      if ( (_QWORD)v41 )
      {
        v35 = sub_18001B6D8(v4);
        if ( v35 )
        {
          if ( *(_DWORD *)(a1 + 48) )
            sub_180022FA8(v35, a1 + 72);
          else
            sub_180022D60(v35, a1 + 52);
        }
      }
    }
    if ( *((_QWORD *)&v43 + 1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v43 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        v36 = *((_QWORD *)&v43 + 1);
        (***((void (__fastcall ****)(_QWORD))&v43 + 1))(*((_QWORD *)&v43 + 1));
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v36 + 12), 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v43 + 1) + 8LL))(*((_QWORD *)&v43 + 1));
      }
    }
  }
  if ( *((_QWORD *)&v41 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v41 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      v37 = *((_QWORD *)&v41 + 1);
      (***((void (__fastcall ****)(_QWORD))&v41 + 1))(*((_QWORD *)&v41 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v37 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v41 + 1) + 8LL))(*((_QWORD *)&v41 + 1));
    }
  }
  if ( *((_QWORD *)&v60 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v60 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      v38 = *((_QWORD *)&v60 + 1);
      (***((void (__fastcall ****)(_QWORD))&v60 + 1))(*((_QWORD *)&v60 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v38 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v60 + 1) + 8LL))(*((_QWORD *)&v60 + 1));
    }
  }
  if ( BYTE8(v68) )
    sub_180067304(v68);
  if ( *((_QWORD *)&v59 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v59 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      v39 = *((_QWORD *)&v59 + 1);
      (***((void (__fastcall ****)(_QWORD))&v59 + 1))(*((_QWORD *)&v59 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v39 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v59 + 1) + 8LL))(*((_QWORD *)&v59 + 1));
    }
  }
  return 0LL;
}
