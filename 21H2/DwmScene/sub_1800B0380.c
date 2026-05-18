/*
 * XREFs of sub_1800B0380 @ 0x1800B0380
 * Callers:
 *     sub_180100BE0 @ 0x180100BE0 (sub_180100BE0.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18001145C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_18001277C @ 0x18001277C (sub_18001277C.c)
 *     sub_180020B7C @ 0x180020B7C (sub_180020B7C.c)
 *     sub_180031B44 @ 0x180031B44 (sub_180031B44.c)
 *     sub_18006714C @ 0x18006714C (sub_18006714C.c)
 *     sub_18006DF9C @ 0x18006DF9C (sub_18006DF9C.c)
 *     sub_18006E020 @ 0x18006E020 (sub_18006E020.c)
 *     sub_180070328 @ 0x180070328 (sub_180070328.c)
 *     sub_1800703D4 @ 0x1800703D4 (sub_1800703D4.c)
 *     sub_18007044C @ 0x18007044C (sub_18007044C.c)
 *     sub_180076E98 @ 0x180076E98 (sub_180076E98.c)
 *     sub_180077C2C @ 0x180077C2C (sub_180077C2C.c)
 *     sub_18007B2B4 @ 0x18007B2B4 (sub_18007B2B4.c)
 *     sub_18007B2BC @ 0x18007B2BC (sub_18007B2BC.c)
 *     sub_18008E204 @ 0x18008E204 (sub_18008E204.c)
 *     sub_1800A1F98 @ 0x1800A1F98 (sub_1800A1F98.c)
 *     sub_1800A656C @ 0x1800A656C (sub_1800A656C.c)
 *     sub_1800A6664 @ 0x1800A6664 (sub_1800A6664.c)
 *     sub_1800AA300 @ 0x1800AA300 (sub_1800AA300.c)
 *     sub_1800AF854 @ 0x1800AF854 (sub_1800AF854.c)
 *     sub_1800AF948 @ 0x1800AF948 (sub_1800AF948.c)
 *     sub_1800B1804 @ 0x1800B1804 (sub_1800B1804.c)
 *     sub_1800B2294 @ 0x1800B2294 (sub_1800B2294.c)
 *     sub_1800E1E88 @ 0x1800E1E88 (sub_1800E1E88.c)
 *     sub_1800F0B14 @ 0x1800F0B14 (sub_1800F0B14.c)
 *     sub_1800F921C @ 0x1800F921C (sub_1800F921C.c)
 *     sub_1800F9398 @ 0x1800F9398 (sub_1800F9398.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=22
void __fastcall sub_1800B0380(__int64 a1, __int64 *a2, _QWORD *a3)
{
  __int64 *v4; // r13
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 *v8; // rax
  volatile signed __int32 *v9; // rbx
  __int64 v10; // rdx
  __int64 *v11; // r14
  _QWORD *v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  unsigned __int64 v16; // r14
  __int64 *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r8
  volatile signed __int32 *v20; // r12
  __int64 v21; // rdx
  signed __int32 v22; // eax
  __int64 v23; // r9
  volatile signed __int32 *v24; // r15
  __int64 v25; // rdx
  signed __int32 v26; // eax
  __int64 v27; // rax
  __int64 *v28; // rdi
  __int64 *v29; // rbx
  _QWORD *v30; // rax
  volatile signed __int32 *v31; // r14
  _QWORD *v32; // rax
  volatile signed __int32 *v33; // r14
  _QWORD *v34; // rax
  volatile signed __int32 *v35; // r14
  __int64 **v36; // rax
  __int64 *i; // rax
  __int64 *j; // rcx
  __int64 v39; // r8
  __int64 v40; // rdi
  unsigned __int64 v41; // rdx
  __int64 v42; // r13
  __int64 v43; // r12
  _QWORD *v44; // rbx
  __int64 v45; // r15
  volatile signed __int32 *v46; // rbx
  const void *v47; // rcx
  __int64 *v48; // rax
  __int64 v49; // rcx
  volatile signed __int32 *v50; // rbx
  volatile signed __int32 *v51; // rbx
  volatile signed __int32 *v52; // rbx
  __int64 v53; // [rsp+48h] [rbp-B8h]
  __int64 v54; // [rsp+48h] [rbp-B8h]
  volatile signed __int32 *v55; // [rsp+50h] [rbp-B0h]
  __int64 v56; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v57; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v58; // [rsp+68h] [rbp-98h]
  volatile signed __int32 *v59; // [rsp+70h] [rbp-90h]
  __int64 *v61; // [rsp+80h] [rbp-80h]
  __int128 v62; // [rsp+88h] [rbp-78h] BYREF
  __int128 v63; // [rsp+98h] [rbp-68h] BYREF
  __int128 v64; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v65; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v66; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v67; // [rsp+F0h] [rbp-10h]
  __int128 v68; // [rsp+100h] [rbp+0h]
  __int128 v69; // [rsp+110h] [rbp+10h] BYREF
  __int128 v70; // [rsp+120h] [rbp+20h] BYREF
  __int128 v71; // [rsp+130h] [rbp+30h] BYREF
  __int128 v72; // [rsp+140h] [rbp+40h] BYREF
  __int128 v73; // [rsp+150h] [rbp+50h] BYREF
  __int64 v74; // [rsp+160h] [rbp+60h]
  __int128 v75; // [rsp+168h] [rbp+68h] BYREF
  __int64 v76; // [rsp+178h] [rbp+78h]
  size_t v77[4]; // [rsp+180h] [rbp+80h] BYREF
  __int64 v78[4]; // [rsp+1A0h] [rbp+A0h] BYREF
  __int64 v79; // [rsp+1C0h] [rbp+C0h] BYREF
  volatile signed __int32 *v80; // [rsp+1C8h] [rbp+C8h]
  char v81[8]; // [rsp+1D0h] [rbp+D0h] BYREF
  __int64 v82; // [rsp+1D8h] [rbp+D8h]
  __int64 v83; // [rsp+1E0h] [rbp+E0h] BYREF
  volatile signed __int32 *v84; // [rsp+1E8h] [rbp+E8h]
  _QWORD v85[2]; // [rsp+1F0h] [rbp+F0h] BYREF
  _QWORD v86[2]; // [rsp+200h] [rbp+100h] BYREF
  char v87[8]; // [rsp+210h] [rbp+110h] BYREF
  __int64 v88; // [rsp+218h] [rbp+118h]
  __int128 v89; // [rsp+220h] [rbp+120h] BYREF
  __int128 v90; // [rsp+230h] [rbp+130h] BYREF
  __int128 v91; // [rsp+240h] [rbp+140h] BYREF
  __int128 v92; // [rsp+250h] [rbp+150h] BYREF
  __int128 v93; // [rsp+260h] [rbp+160h] BYREF
  __int128 v94; // [rsp+270h] [rbp+170h] BYREF
  _QWORD v95[4]; // [rsp+280h] [rbp+180h] BYREF
  __int128 v96; // [rsp+2A0h] [rbp+1A0h] BYREF
  __int128 v97; // [rsp+2B0h] [rbp+1B0h] BYREF
  const void *Src[3]; // [rsp+2C0h] [rbp+1C0h] BYREF
  unsigned __int64 v99; // [rsp+2D8h] [rbp+1D8h]

  v4 = a2;
  if ( *(_BYTE *)(a1 + 72) && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)*a2 + 16LL))(*a2) )
  {
    sub_18006714C(*v4 + 24, v6);
    v90 = 0LL;
    v7 = a3[1];
    if ( v7 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
      v7 = a3[1];
    }
    *(_QWORD *)&v90 = *a3;
    *((_QWORD *)&v90 + 1) = v7;
    if ( !(_QWORD)v90 )
    {
      v8 = sub_18007044C(*v4, &v79, 0);
      std::shared_ptr<__ExceptionPtr>::operator=(&v90, v8);
      v9 = v80;
      if ( v80 )
      {
        if ( _InterlockedExchangeAdd(v80 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v9)(v9);
          if ( _InterlockedExchangeAdd(v9 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 8LL))(v9);
        }
      }
    }
    v89 = 0LL;
    sub_1800AF948(a1, &v89, v4);
    v11 = (__int64 *)sub_180070328(*v4, v10);
    v61 = v11;
    v12 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v90 + 184LL))(v90);
    (*(void (__fastcall **)(_QWORD, __int128 *))(*(_QWORD *)v90 + 200LL))(v90, &v92);
    v63 = 0LL;
    v13 = v12[1];
    if ( v13 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v13 + 12));
      v13 = v12[1];
    }
    *(_QWORD *)&v63 = *v12;
    *((_QWORD *)&v63 + 1) = v13;
    sub_18006E020(v89, (__int64 *)&v63);
    v65 = 0LL;
    if ( *((_QWORD *)&v92 + 1) )
      _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v92 + 1) + 12LL));
    v65 = v92;
    sub_18006DF9C(v89, (__int64 *)&v65);
    v62 = 0LL;
    v14 = v12[1];
    if ( v14 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v14 + 12));
      v14 = v12[1];
    }
    *(_QWORD *)&v62 = *v12;
    *((_QWORD *)&v62 + 1) = v14;
    sub_18006E020(*v11, (__int64 *)&v62);
    v66 = 0LL;
    if ( *((_QWORD *)&v92 + 1) )
      _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v92 + 1) + 12LL));
    v66 = v92;
    sub_18006DF9C(*v11, (__int64 *)&v66);
    v15 = *((_QWORD *)&v92 + 1);
    v16 = 0LL;
    if ( *((_QWORD *)&v92 + 1)
      && _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v92 + 1) + 12LL), 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
    }
    (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)*v4 + 104LL))(*v4, &v89);
    v91 = 0LL;
    sub_1800B2294(a1, &v91);
    sub_180031B44(Src, (_QWORD *)(a1 + 24), " scene");
    v96 = 0LL;
    sub_1800F921C(&v96, &v89, Src);
    v73 = 0LL;
    v74 = 0LL;
    v17 = (__int64 *)(*(__int64 (__fastcall **)(_QWORD, char *))(*(_QWORD *)v90 + 200LL))(v90, v81);
    sub_180076E98(&v73, v17, (__int64)Src);
    v18 = v82;
    if ( v82 && _InterlockedExchangeAdd((volatile signed __int32 *)(v82 + 12), 0xFFFFFFFF) == 1 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 8LL))(v18);
    (*(void (__fastcall **)(__int64, __int64 *, _QWORD *))(*(_QWORD *)a1 + 192LL))(a1, v4, a3);
    v67 = 0LL;
    v19 = 0LL;
    v20 = 0LL;
    v55 = 0LL;
    v21 = *(_QWORD *)(a1 + 64);
    if ( v21 )
    {
      while ( 1 )
      {
        v22 = *(_DWORD *)(v21 + 8);
        if ( !v22 )
          break;
        if ( v22 == _InterlockedCompareExchange((volatile signed __int32 *)(v21 + 8), v22 + 1, v22) )
        {
          v19 = *(_QWORD *)(a1 + 56);
          v20 = *(volatile signed __int32 **)(a1 + 64);
          v55 = v20;
          break;
        }
      }
    }
    *(_QWORD *)&v67 = v19;
    *((_QWORD *)&v67 + 1) = v20;
    v68 = 0LL;
    v23 = 0LL;
    v56 = 0LL;
    v24 = 0LL;
    v59 = 0LL;
    v25 = *(_QWORD *)(v19 + 80);
    if ( v25 )
    {
      while ( 1 )
      {
        v26 = *(_DWORD *)(v25 + 8);
        if ( !v26 )
          break;
        if ( v26 == _InterlockedCompareExchange((volatile signed __int32 *)(v25 + 8), v26 + 1, v26) )
        {
          v23 = *(_QWORD *)(v19 + 72);
          v56 = v23;
          v24 = *(volatile signed __int32 **)(v19 + 80);
          v59 = v24;
          break;
        }
      }
    }
    *(_QWORD *)&v68 = v23;
    *((_QWORD *)&v68 + 1) = v24;
    v27 = sub_1800F0B14(a1);
    v53 = sub_18007B2B4(v27);
    v94 = 0LL;
    sub_1800A6664(v53, (__int64 *)&v94);
    v28 = (__int64 *)v94;
    v29 = *(__int64 **)v94;
    if ( *(_QWORD *)v94 != (_QWORD)v94 )
    {
      do
      {
        v93 = 0LL;
        v77[2] = 0LL;
        v77[3] = 0LL;
        sub_180020B7C(v77, (__int64)(v29 + 4));
        sub_1800A656C(v53, &v93, v77);
        v30 = sub_1800AA300(v93, &v83);
        (*(void (__fastcall **)(_QWORD, __int128 *, __int128 *))(*(_QWORD *)*v30 + 32LL))(*v30, &v91, &v90);
        v31 = v84;
        if ( v84 )
        {
          if ( _InterlockedExchangeAdd(v84 + 2, 0xFFFFFFFF) == 1 )
          {
            (**(void (__fastcall ***)(volatile signed __int32 *))v31)(v31);
            if ( _InterlockedExchangeAdd(v31 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v31 + 8LL))(v31);
          }
        }
        if ( ((*(_DWORD *)(a1 + 316) - 2) & 0xFFFFFFFD) != 0 )
        {
          v32 = sub_1800AA300(v93, v85);
          (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v32 + 96LL))(*v32, *v4);
          v33 = (volatile signed __int32 *)v85[1];
        }
        else
        {
          v34 = sub_1800AA300(v93, v86);
          (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v34 + 96LL))(*v34, *v4);
          v33 = (volatile signed __int32 *)v86[1];
        }
        if ( v33 )
        {
          if ( _InterlockedExchangeAdd(v33 + 2, 0xFFFFFFFF) == 1 )
          {
            (**(void (__fastcall ***)(volatile signed __int32 *))v33)(v33);
            if ( _InterlockedExchangeAdd(v33 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v33 + 8LL))(v33);
          }
        }
        v35 = (volatile signed __int32 *)*((_QWORD *)&v93 + 1);
        if ( *((_QWORD *)&v93 + 1) )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v93 + 1) + 8LL), 0xFFFFFFFF) == 1 )
          {
            (**(void (__fastcall ***)(volatile signed __int32 *))v35)(v35);
            if ( _InterlockedExchangeAdd(v35 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v35 + 8LL))(v35);
          }
        }
        v36 = (__int64 **)v29[2];
        v16 = 0LL;
        if ( *((_BYTE *)v36 + 25) )
        {
          for ( i = (__int64 *)v29[1]; !*((_BYTE *)i + 25) && v29 == (__int64 *)i[2]; i = (__int64 *)i[1] )
            v29 = i;
          v29 = i;
        }
        else
        {
          v29 = (__int64 *)v29[2];
          for ( j = *v36; !*((_BYTE *)j + 25); j = (__int64 *)*j )
            v29 = j;
        }
      }
      while ( v29 != v28 );
      v20 = v55;
    }
    v39 = *(int *)(a1 + 168);
    v54 = v39;
    if ( *(_DWORD *)(a1 + 176) == -1 )
    {
      v57 = ((__int64)((unsigned __int128)((__int64)(*(_QWORD *)(a1 + 112) - *(_QWORD *)(a1 + 104))
                                         * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 3)
          + ((unsigned __int64)((unsigned __int128)((__int64)(*(_QWORD *)(a1 + 112) - *(_QWORD *)(a1 + 104))
                                                  * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 63)
          - 1;
      v39 = *(int *)(a1 + 168);
    }
    else
    {
      v57 = *(int *)(a1 + 176);
    }
    v58 = 0LL;
    v40 = *(_QWORD *)(a1 + 104);
    v41 = (*(_QWORD *)(a1 + 112) - v40) / 48;
    if ( v41 )
    {
      v42 = 0LL;
      do
      {
        if ( *(_BYTE *)(v40 + v42)
          && (v16 != v39 || (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)*a2 + 96LL))(*a2, 9LL)) )
        {
          sub_1800AF854(a1, v16);
          v43 = *(_QWORD *)(a1 + 416);
          if ( v43 != *(_QWORD *)(a1 + 424) )
          {
            v44 = (_QWORD *)(v40 + v42 + 32);
            v45 = *(_QWORD *)(a1 + 424);
            do
            {
              *(_OWORD *)(a1 + 520) = *(_OWORD *)(a1 + 488);
              *(_OWORD *)(a1 + 504) = *(_OWORD *)(a1 + 472);
              sub_1800E1E88(a1 + 504, *(_QWORD *)(v40 + v42 + 8), 0LL);
              sub_1800E1E88(a1 + 504, *(_QWORD *)(v40 + v42 + 16), 1LL);
              v64 = 0LL;
              if ( *((_QWORD *)&v91 + 1) )
                _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v91 + 1) + 8LL));
              v64 = v91;
              v78[2] = 0LL;
              v78[3] = 0LL;
              sub_18001277C(v78, v43);
              sub_18008E204(v56, v78, (__int64)&v89, &v64, v44, *(_QWORD *)(v40 + v42 + 24));
              v46 = (volatile signed __int32 *)*((_QWORD *)&v64 + 1);
              if ( *((_QWORD *)&v64 + 1) )
              {
                if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v64 + 1) + 8LL), 0xFFFFFFFF) == 1 )
                {
                  (**(void (__fastcall ***)(volatile signed __int32 *))v46)(v46);
                  if ( _InterlockedExchangeAdd(v46 + 3, 0xFFFFFFFF) == 1 )
                    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v46 + 8LL))(v46);
                }
              }
              v43 += 32LL;
              v44 = (_QWORD *)(v42 + 32 + v40);
            }
            while ( v43 != v45 );
            v16 = v58;
          }
          if ( (*(_BYTE *)(a1 + 440) & 1) != 0 && v57 == v16 )
            sub_1800B1804(a1, &v89);
        }
        v58 = ++v16;
        v42 += 48LL;
        v40 = *(_QWORD *)(a1 + 104);
        v41 = (*(_QWORD *)(a1 + 112) - v40) / 48;
        v39 = v54;
      }
      while ( v16 < v41 );
      v24 = v59;
      v20 = v55;
      v4 = a2;
    }
    (*(void (__fastcall **)(__int64, unsigned __int64, __int64))(*(_QWORD *)a1 + 200LL))(a1, v41, v39);
    sub_1800A1F98((__int64 *)&v94, (__int64)&v94);
    if ( v24 )
    {
      if ( _InterlockedExchangeAdd(v24 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v24)(v24);
        if ( _InterlockedExchangeAdd(v24 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v24 + 8LL))(v24);
      }
    }
    if ( v20 )
    {
      if ( _InterlockedExchangeAdd(v20 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v20)(v20);
        if ( _InterlockedExchangeAdd(v20 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 8LL))(v20);
      }
    }
    sub_180077C2C((__int64 *)&v73);
    sub_1800F9398(&v96);
    if ( v99 >= 0x10 )
    {
      v47 = Src[0];
      if ( v99 + 1 >= 0x1000 )
      {
        v47 = (const void *)*((_QWORD *)Src[0] - 1);
        if ( (unsigned __int64)((char *)Src[0] - (char *)v47 - 8) > 0x1F )
        {
          o__invalid_parameter_noinfo_noreturn(v47, v99 + 40);
          __debugbreak();
        }
      }
      j_j__o_free(v47);
    }
    if ( (*(_BYTE *)(a1 + 442) & 1) != 0 )
    {
      v95[3] = 15LL;
      v95[2] = 7LL;
      v95[0] = 0x736C6F626D7953LL;
      v97 = 0LL;
      sub_1800F921C(&v97, &v89, v95);
      v75 = 0LL;
      v76 = 0LL;
      v48 = (__int64 *)(*(__int64 (__fastcall **)(_QWORD, char *))(*(_QWORD *)v90 + 200LL))(v90, v87);
      sub_180076E98(&v75, v48, (__int64)v95);
      v49 = v88;
      if ( v88 )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v88 + 12), 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v49 + 8LL))(v49);
      }
      sub_1800703D4(*v4);
      sub_18007B2BC();
    }
    (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)*v4 + 112LL))(*v4, &v89);
    v69 = 0LL;
    sub_18006E020(v89, (__int64 *)&v69);
    v70 = 0LL;
    sub_18006DF9C(v89, (__int64 *)&v70);
    v71 = 0LL;
    sub_18006E020(*v61, (__int64 *)&v71);
    v72 = 0LL;
    sub_18006DF9C(*v61, (__int64 *)&v72);
    v50 = (volatile signed __int32 *)*((_QWORD *)&v91 + 1);
    if ( *((_QWORD *)&v91 + 1) )
    {
      if ( !_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v91 + 1) + 8LL)) )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v50)(v50);
        if ( !_InterlockedDecrement(v50 + 3) )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v50 + 8LL))(v50);
      }
    }
    v51 = (volatile signed __int32 *)*((_QWORD *)&v89 + 1);
    if ( *((_QWORD *)&v89 + 1) )
    {
      if ( !_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v89 + 1) + 8LL)) )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v51)(v51);
        if ( !_InterlockedDecrement(v51 + 3) )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v51 + 8LL))(v51);
      }
    }
    v52 = (volatile signed __int32 *)*((_QWORD *)&v90 + 1);
    if ( *((_QWORD *)&v90 + 1) )
    {
      if ( !_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v90 + 1) + 8LL)) )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v52)(v52);
        if ( !_InterlockedDecrement(v52 + 3) )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v52 + 8LL))(v52);
      }
    }
  }
}
