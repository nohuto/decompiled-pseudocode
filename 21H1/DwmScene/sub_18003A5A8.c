/*
 * XREFs of sub_18003A5A8 @ 0x18003A5A8
 * Callers:
 *     sub_180039880 @ 0x180039880 (sub_180039880.c)
 * Callees:
 *     sub_18000FD48 @ 0x18000FD48 (sub_18000FD48.c)
 *     sub_180010454 @ 0x180010454 (sub_180010454.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18001137C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_1800172A8 @ 0x1800172A8 (sub_1800172A8.c)
 *     sub_180017744 @ 0x180017744 (sub_180017744.c)
 *     sub_1800186E0 @ 0x1800186E0 (sub_1800186E0.c)
 *     sub_180024694 @ 0x180024694 (sub_180024694.c)
 *     sub_1800265A4 @ 0x1800265A4 (sub_1800265A4.c)
 *     sub_18002EAE0 @ 0x18002EAE0 (sub_18002EAE0.c)
 *     sub_1800312B8 @ 0x1800312B8 (sub_1800312B8.c)
 *     sub_180039438 @ 0x180039438 (sub_180039438.c)
 *     sub_180062688 @ 0x180062688 (sub_180062688.c)
 *     sub_18006294C @ 0x18006294C (sub_18006294C.c)
 *     sub_18009A09C @ 0x18009A09C (sub_18009A09C.c)
 *     sub_18009ADA4 @ 0x18009ADA4 (sub_18009ADA4.c)
 *     sub_1800CB940 @ 0x1800CB940 (sub_1800CB940.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall sub_18003A5A8(__int64 a1, __int64 a2)
{
  _QWORD *v4; // r14
  _QWORD *v5; // rdi
  volatile signed __int32 *v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // r13
  __int64 *v9; // rax
  __int64 result; // rax
  volatile signed __int32 *v11; // rbx
  __int64 v12; // r12
  volatile signed __int32 *v13; // rdi
  __int64 v14; // rdx
  int v15; // ett
  signed __int32 v16; // eax
  bool v17; // zf
  _QWORD *v18; // r14
  volatile signed __int32 *v19; // rbx
  __int64 v20; // rcx
  int v21; // r9d
  __int128 *v22; // rdx
  _QWORD *v23; // r14
  volatile signed __int32 *v24; // rbx
  __int64 v25; // rcx
  _QWORD *v26; // r15
  __int64 *v27; // rax
  volatile signed __int32 *v28; // rbx
  __int64 v29; // rbx
  __int64 *v30; // rcx
  int v31; // ebx
  __int64 v32; // rdx
  __int64 v33; // rax
  __int64 v34; // rcx
  _QWORD *v35; // rax
  _QWORD *v36; // r14
  volatile signed __int32 *v37; // rbx
  volatile signed __int32 *v38; // rsi
  volatile signed __int32 *v39; // rsi
  volatile signed __int32 *v40; // rsi
  __int64 *v41; // rcx
  __int64 v42; // rcx
  volatile signed __int32 *v43; // rbx
  signed __int32 v44; // eax
  __int64 v45; // rcx
  unsigned int v46; // eax
  __int64 v47; // [rsp+38h] [rbp-C8h] BYREF
  __int64 *v48; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v49; // [rsp+48h] [rbp-B8h] BYREF
  __int128 v50; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v51; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v52; // [rsp+70h] [rbp-90h] BYREF
  __int128 v53; // [rsp+80h] [rbp-80h]
  _QWORD *v54; // [rsp+90h] [rbp-70h]
  __int64 v55; // [rsp+98h] [rbp-68h] BYREF
  volatile signed __int32 *v56; // [rsp+A0h] [rbp-60h]
  __int128 v57; // [rsp+A8h] [rbp-58h]
  __int64 v58; // [rsp+B8h] [rbp-48h] BYREF
  volatile signed __int32 *v59; // [rsp+C0h] [rbp-40h]
  __int64 v60; // [rsp+C8h] [rbp-38h] BYREF
  volatile signed __int32 *v61; // [rsp+D0h] [rbp-30h]
  __int128 v62; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v63; // [rsp+F0h] [rbp-10h]
  __int64 v64; // [rsp+100h] [rbp+0h] BYREF
  volatile signed __int32 *v65; // [rsp+108h] [rbp+8h]
  __int64 v66; // [rsp+110h] [rbp+10h]
  _BYTE v67[8]; // [rsp+118h] [rbp+18h] BYREF
  volatile signed __int32 *v68; // [rsp+120h] [rbp+20h]
  __int64 v69; // [rsp+128h] [rbp+28h] BYREF
  volatile signed __int32 *v70; // [rsp+130h] [rbp+30h]
  __int64 v71; // [rsp+138h] [rbp+38h] BYREF
  volatile signed __int32 *v72; // [rsp+140h] [rbp+40h]
  _QWORD v73[3]; // [rsp+148h] [rbp+48h] BYREF
  unsigned __int64 v74; // [rsp+160h] [rbp+60h]
  _QWORD v75[4]; // [rsp+168h] [rbp+68h] BYREF
  _QWORD v76[5]; // [rsp+188h] [rbp+88h] BYREF
  _BYTE pExceptionObject[64]; // [rsp+1B0h] [rbp+B0h] BYREF
  __int64 *v78; // [rsp+1F0h] [rbp+F0h] BYREF
  __int64 v79; // [rsp+1F8h] [rbp+F8h] BYREF
  __int128 v80; // [rsp+200h] [rbp+100h] BYREF
  int v81; // [rsp+210h] [rbp+110h] BYREF
  __int64 v82; // [rsp+214h] [rbp+114h]
  int v83; // [rsp+21Ch] [rbp+11Ch]
  __int64 v84; // [rsp+220h] [rbp+120h]
  _BYTE v85[8]; // [rsp+228h] [rbp+128h] BYREF
  int v86; // [rsp+230h] [rbp+130h]

  v66 = a2;
  v4 = (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 32LL))(a1);
  v54 = v4;
  sub_180017744(v4, &v55, 1u);
  v5 = (_QWORD *)(a1 + 128);
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 128), &v55);
  v6 = v56;
  if ( v56 )
  {
    if ( _InterlockedExchangeAdd(v56 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v6)(v6);
      if ( _InterlockedExchangeAdd(v6 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
    }
  }
  v50 = 0LL;
  v7 = *(_QWORD *)(a1 + 136);
  if ( v7 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
    v7 = *(_QWORD *)(a1 + 136);
  }
  *(_QWORD *)&v50 = *v5;
  *((_QWORD *)&v50 + 1) = v7;
  v8 = a2 + 8;
  sub_180039438(a2 + 8, (__int64)&v50, *(_DWORD *)a2, 4);
  v9 = (__int64 *)sub_18009ADA4(*v5, v67, *(unsigned int *)(a1 + 88));
  result = (__int64)std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 96), v9);
  v11 = v68;
  if ( v68 )
  {
    result = (unsigned int)_InterlockedDecrement(v68 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v11)(v11);
      result = (unsigned int)_InterlockedDecrement(v11 + 3);
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
    }
  }
  v57 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  v14 = *(_QWORD *)(a1 + 80);
  if ( v14 )
  {
    while ( 1 )
    {
      result = *(unsigned int *)(v14 + 8);
      if ( !(_DWORD)result )
        break;
      v15 = *(_DWORD *)(v14 + 8);
      result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(v14 + 8), result + 1, result);
      if ( v15 == (_DWORD)result )
      {
        v12 = *(_QWORD *)(a1 + 72);
        v13 = *(volatile signed __int32 **)(a1 + 80);
        if ( v13 )
          _InterlockedIncrement(v13 + 2);
        break;
      }
    }
  }
  *(_QWORD *)&v57 = v12;
  *((_QWORD *)&v57 + 1) = v13;
  if ( v13 )
  {
    v16 = _InterlockedExchangeAdd(v13 + 2, 0xFFFFFFFF);
    v17 = v16 == 1;
    result = (unsigned int)(v16 - 1);
    if ( v17 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v13)(v13);
      result = (unsigned int)_InterlockedDecrement(v13 + 3);
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
    }
  }
  if ( *(_BYTE *)(a2 + 4) )
  {
    sub_180017744(v4, &v58, 1u);
    v18 = (_QWORD *)(a1 + 144);
    std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 144), &v58);
    v19 = v59;
    if ( v59 )
    {
      if ( _InterlockedExchangeAdd(v59 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v19)(v19);
        if ( _InterlockedExchangeAdd(v19 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 8LL))(v19);
      }
    }
    sub_18006294C(*v18, 2LL);
    v51 = 0LL;
    v20 = *(_QWORD *)(a1 + 152);
    if ( v20 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v20 + 8));
      v20 = *(_QWORD *)(a1 + 152);
    }
    *(_QWORD *)&v51 = *v18;
    *((_QWORD *)&v51 + 1) = v20;
    v21 = 256;
    v22 = &v51;
LABEL_38:
    result = sub_180039438(a2 + 8, (__int64)v22, *(_DWORD *)a2, v21);
    goto LABEL_39;
  }
  if ( *(_BYTE *)(a2 + 5) )
  {
    sub_180017744(v4, &v60, 1u);
    v23 = (_QWORD *)(a1 + 192);
    std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 192), &v60);
    v24 = v61;
    if ( v61 )
    {
      if ( _InterlockedExchangeAdd(v61 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v24)(v24);
        if ( _InterlockedExchangeAdd(v24 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v24 + 8LL))(v24);
      }
    }
    sub_18006294C(*v23, 2LL);
    v52 = 0LL;
    v25 = *(_QWORD *)(a1 + 200);
    if ( v25 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v25 + 8));
      v25 = *(_QWORD *)(a1 + 200);
    }
    *(_QWORD *)&v52 = *v23;
    *((_QWORD *)&v52 + 1) = v25;
    v21 = 1024;
    v22 = &v52;
    goto LABEL_38;
  }
LABEL_39:
  if ( *(_BYTE *)(a2 + 5) )
  {
    v26 = (_QWORD *)(a1 + 192);
    if ( !*(_QWORD *)(a1 + 192) )
    {
      v80 = 0LL;
      sub_18009ADA4(*(_QWORD *)(a1 + 144), &v80, *(unsigned int *)(a1 + 88));
      v79 = 0LL;
      if ( *((_QWORD *)&v80 + 1) )
        _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v80 + 1) + 8LL));
      v62 = v80;
      v27 = sub_1800186E0(&v69, (__int64 *)&v62);
      sub_1800312B8(*v27, &v79);
      v28 = v70;
      if ( v70 )
      {
        if ( _InterlockedExchangeAdd(v70 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v28)(v28);
          if ( _InterlockedExchangeAdd(v28 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 8LL))(v28);
        }
      }
      (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v79 + 80LL))(v79, v85);
      v84 = 0LL;
      v81 = 47;
      v82 = 4LL;
      v83 = v86;
      v78 = 0LL;
      v29 = *sub_180024694(v12, &v47);
      v30 = v78;
      if ( v78 )
      {
        v78 = 0LL;
        (*(void (__fastcall **)(__int64 *))(*v30 + 16))(v30);
      }
      v31 = (*(__int64 (__fastcall **)(__int64, __int64, int *, __int64 **))(*(_QWORD *)v29 + 56LL))(
              v29,
              v79,
              &v81,
              &v78);
      v32 = v47;
      if ( v47 )
      {
        v47 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
      }
      sub_1800265A4(v12, v31);
      if ( v31 < 0 )
      {
        sub_18000FD48(v76);
        v46 = (unsigned int)sub_18000FD48(v75);
        sub_1800CB940((unsigned int)pExceptionObject, v46, 362, (unsigned int)v76, 0);
        throw (Spectre::Engine::EngineException *)pExceptionObject;
      }
      v33 = sub_180062688(a1, v73);
      if ( *(_QWORD *)(v33 + 24) >= 0x10uLL )
        v33 = *(_QWORD *)v33;
      sub_180010454(v78, (const char *)v33);
      if ( v74 >= 0x10 )
      {
        v34 = v73[0];
        if ( v74 + 1 >= 0x1000 )
        {
          v34 = *(_QWORD *)(v73[0] - 8LL);
          if ( (unsigned __int64)(v73[0] - v34 - 8) > 0x1F )
          {
            o__invalid_parameter_noinfo_noreturn(v34, v74 + 40);
            __debugbreak();
          }
        }
        j_j__o_free(v34);
      }
      v63 = 0LL;
      v35 = sub_1800172A8(v12, &v71);
      v36 = (_QWORD *)*v35;
      v37 = (volatile signed __int32 *)v35[1];
      if ( v37 )
      {
        _InterlockedIncrement(v37 + 2);
        v37 = (volatile signed __int32 *)v35[1];
      }
      *(_QWORD *)&v63 = v36;
      *((_QWORD *)&v63 + 1) = v37;
      v38 = v72;
      if ( v72 )
      {
        if ( _InterlockedExchangeAdd(v72 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v38)(v38);
          if ( _InterlockedExchangeAdd(v38 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v38 + 8LL))(v38);
        }
      }
      v48 = v78;
      if ( v78 )
        (*(void (__fastcall **)(__int64 *))(*v78 + 8))(v78);
      v49 = v79;
      if ( v79 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v79 + 8LL))(v79);
      sub_18002EAE0(v36, (char *)&v49, (char *)&v48, 0x400u);
      sub_180017744(v54, &v64, 1u);
      std::shared_ptr<__ExceptionPtr>::operator=(v26, &v64);
      v39 = v65;
      if ( v65 )
      {
        if ( _InterlockedExchangeAdd(v65 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v39)(v39);
          if ( _InterlockedExchangeAdd(v39 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v39 + 8LL))(v39);
        }
      }
      sub_18006294C(*v26, 2LL);
      v53 = 0LL;
      if ( v37 )
        _InterlockedIncrement(v37 + 2);
      *(_QWORD *)&v53 = v36;
      *((_QWORD *)&v53 + 1) = v37;
      result = sub_18009A09C(*v26);
      v40 = (volatile signed __int32 *)*((_QWORD *)&v53 + 1);
      if ( *((_QWORD *)&v53 + 1) )
      {
        result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v53 + 1) + 8LL));
        if ( !(_DWORD)result )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v40)(v40);
          result = (unsigned int)_InterlockedDecrement(v40 + 3);
          if ( !(_DWORD)result )
            result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v40 + 8LL))(v40);
        }
      }
      if ( v37 )
      {
        result = (unsigned int)_InterlockedDecrement(v37 + 2);
        if ( !(_DWORD)result )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v37)(v37);
          result = (unsigned int)_InterlockedDecrement(v37 + 3);
          if ( !(_DWORD)result )
            result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v37 + 8LL))(v37);
        }
      }
      v41 = v78;
      if ( v78 )
      {
        v78 = 0LL;
        result = (*(__int64 (__fastcall **)(__int64 *))(*v41 + 16))(v41);
      }
      v42 = v79;
      if ( v79 )
      {
        v79 = 0LL;
        result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v42 + 16LL))(v42);
      }
      v43 = (volatile signed __int32 *)*((_QWORD *)&v80 + 1);
      if ( *((_QWORD *)&v80 + 1) )
      {
        result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v80 + 1) + 8LL));
        if ( !(_DWORD)result )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v43)(v43);
          result = (unsigned int)_InterlockedDecrement(v43 + 3);
          if ( !(_DWORD)result )
            result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v43 + 8LL))(v43);
        }
      }
    }
  }
  if ( v13 )
  {
    v44 = _InterlockedExchangeAdd(v13 + 2, 0xFFFFFFFF);
    v17 = v44 == 1;
    result = (unsigned int)(v44 - 1);
    if ( v17 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v13)(v13);
      result = (unsigned int)_InterlockedDecrement(v13 + 3);
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
    }
  }
  v45 = *(_QWORD *)(v8 + 56);
  if ( v45 )
  {
    LOBYTE(v14) = v45 != v8;
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v45 + 32LL))(v45, v14);
    *(_QWORD *)(v8 + 56) = 0LL;
  }
  return result;
}
