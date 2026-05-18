/*
 * XREFs of sub_18009FAA4 @ 0x18009FAA4
 * Callers:
 *     sub_180040FD0 @ 0x180040FD0 (sub_180040FD0.c)
 *     sub_180068A0C @ 0x180068A0C (sub_180068A0C.c)
 *     sub_18009F96C @ 0x18009F96C (sub_18009F96C.c)
 *     sub_1800A046C @ 0x1800A046C (sub_1800A046C.c)
 *     sub_1800B9058 @ 0x1800B9058 (sub_1800B9058.c)
 *     sub_1800D0F5C @ 0x1800D0F5C (sub_1800D0F5C.c)
 *     sub_1800DD08C @ 0x1800DD08C (sub_1800DD08C.c)
 *     sub_180103A84 @ 0x180103A84 (sub_180103A84.c)
 * Callees:
 *     sub_18000F088 @ 0x18000F088 (sub_18000F088.c)
 *     sub_18000FE28 @ 0x18000FE28 (sub_18000FE28.c)
 *     sub_180012A18 @ 0x180012A18 (sub_180012A18.c)
 *     sub_180033634 @ 0x180033634 (sub_180033634.c)
 *     sub_18003659C @ 0x18003659C (sub_18003659C.c)
 *     sub_180067F50 @ 0x180067F50 (sub_180067F50.c)
 *     sub_180067F88 @ 0x180067F88 (sub_180067F88.c)
 *     sub_18006821C @ 0x18006821C (sub_18006821C.c)
 *     sub_18007E228 @ 0x18007E228 (sub_18007E228.c)
 *     sub_18009EBA0 @ 0x18009EBA0 (sub_18009EBA0.c)
 *     sub_18009EDC4 @ 0x18009EDC4 (sub_18009EDC4.c)
 *     sub_1800A027C @ 0x1800A027C (sub_1800A027C.c)
 *     sub_1800A02C8 @ 0x1800A02C8 (sub_1800A02C8.c)
 *     sub_1800A07D4 @ 0x1800A07D4 (sub_1800A07D4.c)
 *     sub_1800D1210 @ 0x1800D1210 (sub_1800D1210.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 *     memset @ 0x18012396A (memset.c)
 *     j__o_free @ 0x180123A7C (j__o_free.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x180124038 (--2@YAPEAX_K@Z.c)
 *     j_??2@YAPEAX_K@Z @ 0x180124450 (j_--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall sub_18009FAA4(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        const void *a8,
        size_t Size,
        __int64 a10)
{
  __int64 v11; // r13
  __int64 v12; // rsi
  unsigned __int64 v13; // r15
  __int64 v14; // rbx
  _QWORD *v15; // rax
  void (__fastcall ***v16)(_QWORD, __int64); // rcx
  __int64 *v17; // rcx
  char v18; // di
  int **v19; // r12
  int *v20; // rax
  int *v21; // rcx
  unsigned __int64 v22; // r14
  __int64 v23; // rdi
  char v24; // si
  __int64 *v25; // rbx
  __int64 *v26; // r13
  volatile signed __int32 *v27; // rdi
  __int64 v28; // rsi
  int *v29; // rbx
  int v30; // esi
  int v31; // r8d
  int v32; // edx
  char *v33; // rdi
  __int64 i; // rcx
  unsigned int v35; // ecx
  unsigned int v36; // edx
  void *v37; // rax
  void *v38; // rsi
  void *v39; // rbx
  void (__fastcall ***v40)(_QWORD, __int64); // rax
  void (__fastcall ***v41)(_QWORD, __int64); // rdi
  void (__fastcall ****v42)(_QWORD, __int64); // rdx
  void (__fastcall ***v43)(_QWORD, __int64); // rcx
  int *v44; // rcx
  int v45; // eax
  __m128 v46; // xmm0
  int v47; // eax
  __m128 v48; // xmm1
  __int64 result; // rax
  __int64 v50; // rcx
  unsigned __int64 v51; // rdx
  unsigned __int64 v52; // rdx
  unsigned int v53; // eax
  unsigned int v54; // eax
  char v55; // [rsp+40h] [rbp-C0h]
  __int64 v56; // [rsp+48h] [rbp-B8h]
  const void *v58; // [rsp+58h] [rbp-A8h]
  _QWORD v59[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v60; // [rsp+70h] [rbp-90h] BYREF
  __int64 v61; // [rsp+78h] [rbp-88h] BYREF
  __int128 v62; // [rsp+80h] [rbp-80h]
  char v63; // [rsp+90h] [rbp-70h] BYREF
  _DWORD v64[2]; // [rsp+A0h] [rbp-60h]
  char v65; // [rsp+A8h] [rbp-58h] BYREF
  int v66; // [rsp+F8h] [rbp-8h]
  int v67; // [rsp+FCh] [rbp-4h]
  int v68; // [rsp+100h] [rbp+0h]
  __int64 v69[4]; // [rsp+110h] [rbp+10h] BYREF
  _QWORD v70[4]; // [rsp+130h] [rbp+30h] BYREF
  __int64 v71[4]; // [rsp+150h] [rbp+50h] BYREF
  _QWORD v72[4]; // [rsp+170h] [rbp+70h] BYREF
  _BYTE v73[64]; // [rsp+190h] [rbp+90h] BYREF
  _BYTE pExceptionObject[64]; // [rsp+1D0h] [rbp+D0h] BYREF
  int v75; // [rsp+210h] [rbp+110h] BYREF
  int v76; // [rsp+218h] [rbp+118h] BYREF
  int v77; // [rsp+220h] [rbp+120h] BYREF
  int v78; // [rsp+228h] [rbp+128h]
  __int128 v79; // [rsp+230h] [rbp+130h] BYREF
  __int64 v80; // [rsp+240h] [rbp+140h]
  _BYTE v81[24]; // [rsp+248h] [rbp+148h] BYREF
  __int64 v82; // [rsp+260h] [rbp+160h]
  __int64 v83; // [rsp+270h] [rbp+170h]

  v11 = a1;
  v76 = a2;
  v75 = a3;
  v77 = a4;
  v12 = (__int64)a8;
  v58 = a8;
  v13 = (unsigned int)Size;
  v78 = Size;
  v14 = a10;
  v15 = (_QWORD *)(a1 + 136);
  v16 = *(void (__fastcall ****)(_QWORD, __int64))(a1 + 136);
  *v15 = 0LL;
  if ( v16 )
    (**v16)(v16, 1LL);
  if ( a4 )
  {
    v17 = sub_180033634(&v60, &v76, &v75, &v77, &a5, &a7, &a6);
    v18 = 2;
  }
  else
  {
    v17 = sub_18009EBA0(&v61, &v76, &v75, &a5, &a7, &a6);
    v18 = 1;
  }
  v19 = (int **)(v11 + 128);
  if ( (__int64 *)(v11 + 128) != v17 )
  {
    v20 = (int *)*v17;
    *v17 = 0LL;
    v21 = *v19;
    *v19 = v20;
    if ( v21 )
      j__o_free(v21);
  }
  if ( (v18 & 2) != 0 )
  {
    v18 &= ~2u;
    if ( v60 )
      j__o_free(v60);
  }
  if ( (v18 & 1) != 0 && v61 )
    j__o_free(v61);
  v22 = v13;
  sub_1800A027C(v81, *v19, v12, v13);
  if ( v14 )
    sub_18006821C(v11, 1, 1);
  v23 = sub_180067F50(v11);
  v56 = v23;
  v24 = 0;
  v55 = 0;
  if ( sub_180067F88(v11, 1) )
  {
    if ( v14 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v14 + 32LL))(v14) )
      {
        sub_18000FE28(v70);
        v54 = (unsigned int)sub_18000FE28(v69);
        sub_1800D1210((unsigned int)v73, v54, 636, (unsigned int)v70, 0);
        throw (Spectre::Engine::EngineException *)v73;
      }
      sub_1800A02C8(v11, v81, v14);
      sub_18006821C(v11, 2, 0);
      sub_18006821C(v11, 4, 0);
      v24 = 1;
    }
    else
    {
      v79 = 0LL;
      v80 = 0LL;
      sub_18007E228(v23, &v79);
      v26 = (__int64 *)*((_QWORD *)&v79 + 1);
      v25 = (__int64 *)v79;
      if ( (_QWORD)v79 != *((_QWORD *)&v79 + 1) )
      {
        do
        {
          v62 = 0LL;
          v27 = (volatile signed __int32 *)v25[1];
          if ( v27 )
          {
            _InterlockedIncrement(v27 + 2);
            v27 = (volatile signed __int32 *)v25[1];
          }
          v28 = *v25;
          *(_QWORD *)&v62 = v28;
          *((_QWORD *)&v62 + 1) = v27;
          if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v28 + 32LL))(v28) )
          {
            if ( v27 )
            {
              if ( _InterlockedExchangeAdd(v27 + 2, 0xFFFFFFFF) == 1 )
              {
                (**(void (__fastcall ***)(volatile signed __int32 *))v27)(v27);
                if ( _InterlockedExchangeAdd(v27 + 3, 0xFFFFFFFF) == 1 )
                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 8LL))(v27);
              }
            }
            v24 = v55;
          }
          else
          {
            sub_1800A02C8(a1, v81, v28);
            v24 = 1;
            v55 = 1;
            if ( v27 )
            {
              if ( _InterlockedExchangeAdd(v27 + 2, 0xFFFFFFFF) == 1 )
              {
                (**(void (__fastcall ***)(volatile signed __int32 *))v27)(v27);
                if ( _InterlockedExchangeAdd(v27 + 3, 0xFFFFFFFF) == 1 )
                  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 8LL))(v27);
              }
            }
          }
          v25 += 2;
        }
        while ( v25 != v26 );
        LODWORD(v13) = v78;
        v23 = v56;
      }
      sub_180012A18((__int64 *)&v79);
      v11 = a1;
    }
  }
  if ( v58 && (*(_DWORD *)(v23 + 552) == 1 || !v24) )
  {
    v29 = *v19;
    v30 = (*v19)[1];
    v31 = sub_18003659C((*v19)[4], **v19);
    v32 = 0;
    if ( v29[4] == 23 )
    {
      v36 = v30 + ((unsigned int)(v30 + 1) >> 1);
    }
    else
    {
      v64[0] = 0;
      v64[1] = 1;
      v33 = &v65;
      for ( i = 20LL; i; --i )
      {
        *(_DWORD *)v33 = 1;
        v33 += 4;
      }
      v66 = 4;
      v67 = 1;
      v68 = 1;
      v35 = v64[v29[4]];
      if ( !v35 )
      {
LABEL_48:
        if ( (v29[5] & 0x10) != 0 )
          v32 *= 6;
        if ( v29[2] * v32 != (_DWORD)v13 )
        {
          sub_18000FE28(v72);
          v53 = (unsigned int)sub_18000FE28(v71);
          sub_1800D1210((unsigned int)pExceptionObject, v53, 687, (unsigned int)v72, 1);
          throw (Spectre::Engine::EngineException *)pExceptionObject;
        }
        v37 = operator new(v22);
        v38 = v37;
        if ( v37 )
          memset(v37, 0, v22);
        else
          v38 = 0LL;
        v39 = v38;
        sub_18000F088(v38, v22, v58, v22);
        v40 = (void (__fastcall ***)(_QWORD, __int64))operator new(0x40uLL);
        v59[1] = v40;
        if ( v40 )
        {
          v39 = 0LL;
          v59[0] = v38;
          v40 = (void (__fastcall ***)(_QWORD, __int64))sub_18009EDC4((__int64)v40, (__int64)v81, v59, v22);
          v38 = 0LL;
        }
        v41 = v40;
        v42 = (void (__fastcall ****)(_QWORD, __int64))(v11 + 136);
        if ( (char *)(v11 + 136) != &v63 )
        {
          v41 = 0LL;
          v43 = *v42;
          *v42 = v40;
          if ( !v43 )
          {
LABEL_61:
            if ( v38 )
              j_j__o_free(v39);
            goto LABEL_63;
          }
          (**v43)(v43, 1LL);
          v40 = 0LL;
        }
        if ( v40 )
          (**v41)(v41, 1LL);
        goto LABEL_61;
      }
      v36 = (v35 + v30 - 1) / v35;
    }
    v32 = v31 * v36;
    goto LABEL_48;
  }
LABEL_63:
  v44 = *v19;
  if ( *v19 )
    v45 = *v44;
  else
    v45 = 0;
  v46 = 0LL;
  v46.m128_f32[0] = (float)v45;
  if ( v44 )
    v47 = v44[1];
  else
    v47 = 0;
  v48 = 0LL;
  v48.m128_f32[0] = (float)v47;
  result = sub_1800A07D4(v11, _mm_unpacklo_ps(v46, v48).m128_u64[0]);
  v50 = v82;
  if ( v82 )
  {
    v51 = (v83 - v82) & 0xFFFFFFFFFFFFFFE0uLL;
    if ( v51 >= 0x1000 )
    {
      v52 = v51 + 39;
      v50 = *(_QWORD *)(v82 - 8);
      if ( (unsigned __int64)(v82 - v50 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v50, v52);
        __debugbreak();
      }
    }
    return j_j__o_free(v50);
  }
  return result;
}
