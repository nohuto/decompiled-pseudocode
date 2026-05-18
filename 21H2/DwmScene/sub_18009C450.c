/*
 * XREFs of sub_18009C450 @ 0x18009C450
 * Callers:
 *     sub_18010A840 @ 0x18010A840 (sub_18010A840.c)
 * Callees:
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z @ 0x1800136F8 (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z.c)
 *     sub_180031B44 @ 0x180031B44 (sub_180031B44.c)
 *     sub_18006DB10 @ 0x18006DB10 (sub_18006DB10.c)
 *     sub_18006DF74 @ 0x18006DF74 (sub_18006DF74.c)
 *     sub_18006E194 @ 0x18006E194 (sub_18006E194.c)
 *     sub_180085584 @ 0x180085584 (sub_180085584.c)
 *     sub_180086244 @ 0x180086244 (sub_180086244.c)
 *     sub_1800898F4 @ 0x1800898F4 (sub_1800898F4.c)
 *     sub_180091B68 @ 0x180091B68 (sub_180091B68.c)
 *     sub_180098190 @ 0x180098190 (sub_180098190.c)
 *     sub_1800995B8 @ 0x1800995B8 (sub_1800995B8.c)
 *     sub_18009B3BC @ 0x18009B3BC (sub_18009B3BC.c)
 *     sub_18009B5F4 @ 0x18009B5F4 (sub_18009B5F4.c)
 *     sub_18009CD10 @ 0x18009CD10 (sub_18009CD10.c)
 *     sub_1800AA300 @ 0x1800AA300 (sub_1800AA300.c)
 *     sub_1800D5BC0 @ 0x1800D5BC0 (sub_1800D5BC0.c)
 *     sub_1800F46B8 @ 0x1800F46B8 (sub_1800F46B8.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=13
unsigned __int64 __fastcall sub_18009C450(__int64 a1, __int64 *a2, __int64 a3, __int64 *a4)
{
  __int64 v5; // r13
  __int64 v8; // rcx
  _QWORD *v9; // r8
  __int64 v10; // rdx
  signed __int32 v11; // eax
  __int64 v12; // rcx
  __int64 v13; // r8
  volatile signed __int32 *v14; // rdi
  __int64 v15; // rdx
  signed __int32 v16; // eax
  _QWORD *v17; // rbx
  char *v18; // rax
  _QWORD *v19; // rax
  __m128i *v20; // rax
  unsigned __int64 *v21; // rax
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rcx
  char *v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rbx
  __int64 v30; // r8
  volatile signed __int32 *v31; // rbx
  __int64 v32; // rdx
  signed __int32 v33; // eax
  __int128 *v34; // rax
  char v35; // r15
  unsigned __int64 v36; // r14
  __int64 v37; // rcx
  unsigned __int64 result; // rax
  __int64 v39; // rdi
  __int64 v40; // rbx
  __int64 v41; // r15
  int v42; // ecx
  bool v43; // zf
  volatile signed __int32 *v44; // rdi
  __int64 v45; // rcx
  _QWORD *v46; // rax
  volatile signed __int32 *v47; // rbx
  __int64 v48; // r13
  unsigned int v49; // ebx
  __int64 v50; // rcx
  __int64 v51; // rax
  __int64 v52; // rcx
  __int64 v53; // rcx
  __int64 v54; // rcx
  volatile signed __int32 *v55; // rbx
  __int64 v56; // rbx
  __int64 v57; // rcx
  int v58; // ett
  __int64 v59; // rbx
  char v60; // [rsp+30h] [rbp-D0h]
  __int64 v61; // [rsp+38h] [rbp-C8h]
  unsigned __int128 v62; // [rsp+40h] [rbp-C0h]
  __int128 v63; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v64; // [rsp+60h] [rbp-A0h]
  __m128i v65; // [rsp+68h] [rbp-98h] BYREF
  __m128i si128; // [rsp+78h] [rbp-88h]
  __int128 v67; // [rsp+88h] [rbp-78h]
  __int64 v68; // [rsp+98h] [rbp-68h] BYREF
  __m128i v69; // [rsp+A8h] [rbp-58h]
  char *Src; // [rsp+B8h] [rbp-48h] BYREF
  __m128i v71; // [rsp+C8h] [rbp-38h]
  __int64 v72; // [rsp+D8h] [rbp-28h] BYREF
  __m128i v73; // [rsp+E8h] [rbp-18h]
  __int64 v74; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v75; // [rsp+100h] [rbp+0h]
  __int64 v76; // [rsp+108h] [rbp+8h]
  volatile signed __int32 *v77; // [rsp+110h] [rbp+10h]
  char v78[8]; // [rsp+118h] [rbp+18h] BYREF
  __int64 v79; // [rsp+120h] [rbp+20h]
  __int64 v80; // [rsp+128h] [rbp+28h]
  volatile signed __int32 *v81; // [rsp+130h] [rbp+30h]
  char v82[8]; // [rsp+138h] [rbp+38h] BYREF
  volatile signed __int32 *v83; // [rsp+140h] [rbp+40h]
  __int128 v84; // [rsp+150h] [rbp+50h] BYREF
  __int128 v85; // [rsp+160h] [rbp+60h]
  __int128 v86; // [rsp+170h] [rbp+70h]
  __int128 v87; // [rsp+180h] [rbp+80h]
  __int128 v88; // [rsp+190h] [rbp+90h]
  __int128 v89[4]; // [rsp+1A0h] [rbp+A0h] BYREF
  __int128 v90; // [rsp+1E0h] [rbp+E0h]
  unsigned __int128 v91; // [rsp+1F0h] [rbp+F0h]
  __int64 v92; // [rsp+200h] [rbp+100h] BYREF
  volatile signed __int32 *v93; // [rsp+208h] [rbp+108h]
  unsigned int v94; // [rsp+210h] [rbp+110h]

  v5 = a3;
  v64 = a3;
  v8 = *a4;
  if ( (*(_DWORD *)(*a4 + 440) & 0x810000) == 0x810000 )
  {
    sub_18009CD10(a1, a2);
    v8 = *a4;
  }
  v62 = 0LL;
  if ( (*(_DWORD *)(v8 + 440) & 0x4000000) != 0 )
  {
    v9 = sub_18006DB10((_QWORD *)*a2, &v74);
    v90 = 0LL;
    v10 = v9[1];
    if ( v10 )
    {
      while ( 1 )
      {
        v11 = *(_DWORD *)(v10 + 8);
        if ( !v11 )
          break;
        if ( v11 == _InterlockedCompareExchange((volatile signed __int32 *)(v10 + 8), v11 + 1, v11) )
        {
          v90 = *(_OWORD *)v9;
          break;
        }
      }
    }
    v12 = v75;
    if ( v75 && _InterlockedExchangeAdd((volatile signed __int32 *)(v75 + 12), 0xFFFFFFFF) == 1 )
      (*(void (__fastcall **)(__int64, __int64, _QWORD *))(*(_QWORD *)v12 + 8LL))(v12, v10, v9);
    if ( (_QWORD)v90 )
    {
      v13 = 0LL;
      v14 = 0LL;
      v15 = *(_QWORD *)(a1 + 64);
      if ( v15 )
      {
        while ( 1 )
        {
          v16 = *(_DWORD *)(v15 + 8);
          if ( !v16 )
            break;
          if ( v16 == _InterlockedCompareExchange((volatile signed __int32 *)(v15 + 8), v16 + 1, v16) )
          {
            v13 = *(_QWORD *)(a1 + 56);
            v14 = *(volatile signed __int32 **)(a1 + 64);
            break;
          }
        }
      }
      v76 = v13;
      v77 = v14;
      v17 = sub_180085584(v13, &v72);
      v18 = (char *)sub_180031B44((const void **)&Src, (_QWORD *)(*a4 + 24), "_");
      v19 = (_QWORD *)sub_1800995B8((__int64)&v68, v18, v17);
      v20 = (__m128i *)std::string::append(v19, "_Render", 7uLL);
      si128 = 0LL;
      v65 = *v20;
      si128 = v20[1];
      v20[1].m128i_i64[0] = 0LL;
      v20[1].m128i_i64[1] = 15LL;
      v20->m128i_i8[0] = 0;
      v21 = (unsigned __int64 *)sub_1800D5BC0(v90, v78, &v65, a2);
      v22 = *v21;
      v23 = v21[1];
      *v21 = 0LL;
      v21[1] = 0LL;
      v62 = __PAIR128__(v23, v22);
      v24 = v79;
      if ( v79 && _InterlockedExchangeAdd((volatile signed __int32 *)(v79 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 8LL))(v24);
      if ( si128.m128i_i64[1] >= 0x10uLL )
      {
        v25 = v65.m128i_i64[0];
        if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 )
        {
          v25 = *(_QWORD *)(v65.m128i_i64[0] - 8);
          if ( (unsigned __int64)(v65.m128i_i64[0] - v25 - 8) > 0x1F )
          {
            o__invalid_parameter_noinfo_noreturn(v25, si128.m128i_i64[1] + 40);
            __debugbreak();
          }
        }
        j_j__o_free(v25);
      }
      si128 = _mm_load_si128((const __m128i *)&xmmword_180140550);
      v65.m128i_i8[0] = 0;
      if ( v69.m128i_i64[1] >= 0x10uLL )
      {
        v26 = v68;
        if ( (unsigned __int64)(v69.m128i_i64[1] + 1) >= 0x1000 )
        {
          v26 = *(_QWORD *)(v68 - 8);
          if ( (unsigned __int64)(v68 - v26 - 8) > 0x1F )
          {
            o__invalid_parameter_noinfo_noreturn(v26, v69.m128i_i64[1] + 40);
            __debugbreak();
          }
        }
        j_j__o_free(v26);
      }
      v69 = _mm_load_si128((const __m128i *)&xmmword_180140550);
      LOBYTE(v68) = 0;
      if ( v71.m128i_i64[1] >= 0x10uLL )
      {
        v27 = Src;
        if ( (unsigned __int64)(v71.m128i_i64[1] + 1) >= 0x1000 )
        {
          v27 = (char *)*((_QWORD *)Src - 1);
          if ( (unsigned __int64)(Src - v27 - 8) > 0x1F )
          {
            o__invalid_parameter_noinfo_noreturn(v27, v71.m128i_i64[1] + 40);
            __debugbreak();
          }
        }
        j_j__o_free(v27);
      }
      v71 = _mm_load_si128((const __m128i *)&xmmword_180140550);
      LOBYTE(Src) = 0;
      v10 = v73.m128i_i64[1];
      if ( v73.m128i_i64[1] >= 0x10uLL )
      {
        v28 = v72;
        if ( (unsigned __int64)(v73.m128i_i64[1] + 1) >= 0x1000 )
        {
          v28 = *(_QWORD *)(v72 - 8);
          if ( (unsigned __int64)(v72 - v28 - 8) > 0x1F )
          {
            o__invalid_parameter_noinfo_noreturn(v28, v73.m128i_i64[1] + 40);
            __debugbreak();
          }
        }
        j_j__o_free(v28);
      }
      v73 = _mm_load_si128((const __m128i *)&xmmword_180140550);
      LOBYTE(v72) = 0;
      if ( v14 )
      {
        if ( _InterlockedExchangeAdd(v14 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v14)(v14);
          if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
        }
      }
    }
    if ( *((_QWORD *)&v90 + 1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v90 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        v29 = *((_QWORD *)&v90 + 1);
        (***((void (__fastcall ****)(_QWORD, __int64, _QWORD *))&v90 + 1))(*((_QWORD *)&v90 + 1), v10, v9);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v29 + 12), 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v90 + 1) + 8LL))(*((_QWORD *)&v90 + 1));
      }
    }
  }
  v30 = 0LL;
  v31 = 0LL;
  v32 = *(_QWORD *)(a1 + 64);
  if ( v32 )
  {
    while ( 1 )
    {
      v33 = *(_DWORD *)(v32 + 8);
      if ( !v33 )
        break;
      if ( v33 == _InterlockedCompareExchange((volatile signed __int32 *)(v32 + 8), v33 + 1, v33) )
      {
        v30 = *(_QWORD *)(a1 + 56);
        v31 = *(volatile signed __int32 **)(a1 + 64);
        break;
      }
    }
  }
  v80 = v30;
  v81 = v31;
  v34 = sub_180086244(v30, v89);
  if ( !v34 )
    wassert(L"pSource", L"OneCoreUap\\External\\Sdk\\Inc\\DirectXMathConvert.inl", 0x495u);
  v85 = *v34;
  v86 = v34[1];
  v87 = v34[2];
  v88 = v34[3];
  sub_1800898F4(*(double *)&v85, *(double *)&v86, *(double *)&v87, *(double *)&v88);
  v35 = (unsigned int)o__fdsign() != 0;
  v60 = v35;
  if ( v31 )
  {
    if ( _InterlockedExchangeAdd(v31 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v31)(v31);
      if ( _InterlockedExchangeAdd(v31 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v31 + 8LL))(v31);
    }
  }
  v36 = 0LL;
  v37 = *(_QWORD *)(a1 + 112) - *(_QWORD *)(a1 + 104);
  result = (unsigned __int64)((unsigned __int128)(v37 * (__int128)0x2E8BA2E8BA2E8BA3LL) >> 64) >> 63;
  if ( v37 / 88 )
  {
    v39 = 0LL;
    v61 = 0LL;
    while ( !sub_18009B5F4(a1, v36) || v36 < 0x20 && ((1 << v36) & dword_180213698) == 0 )
    {
LABEL_104:
      ++v36;
      v39 += 88LL;
      v61 = v39;
      v57 = *(_QWORD *)(a1 + 112) - *(_QWORD *)(a1 + 104);
      result = (unsigned __int64)((unsigned __int128)(v57 * (__int128)0x2E8BA2E8BA2E8BA3LL) >> 64) >> 63;
      if ( v36 >= v57 / 88 )
        goto LABEL_105;
    }
    v63 = 0LL;
    sub_18009B3BC(a1, &v63, v36);
    v40 = v63;
    if ( !(_QWORD)v63 )
    {
LABEL_100:
      if ( *((_QWORD *)&v63 + 1) )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v63 + 1) + 8LL), 0xFFFFFFFF) == 1 )
        {
          v56 = *((_QWORD *)&v63 + 1);
          (***((void (__fastcall ****)(_QWORD))&v63 + 1))(*((_QWORD *)&v63 + 1));
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v56 + 12), 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v63 + 1) + 8LL))(*((_QWORD *)&v63 + 1));
        }
      }
      goto LABEL_104;
    }
    sub_180091B68(v63, (__int64)&v92, v5, a2, v35);
    v41 = v92;
    v42 = *(_DWORD *)(v92 + 128);
    if ( v42 )
    {
      if ( v42 != 1 )
      {
LABEL_95:
        v55 = v93;
        if ( v93 )
        {
          if ( _InterlockedExchangeAdd(v93 + 2, 0xFFFFFFFF) == 1 )
          {
            (**(void (__fastcall ***)(volatile signed __int32 *))v55)(v55);
            if ( _InterlockedExchangeAdd(v55 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v55 + 8LL))(v55);
          }
        }
        v35 = v60;
        goto LABEL_100;
      }
      v43 = *(_QWORD *)(v92 + 144) == *(_QWORD *)(v92 + 152);
    }
    else
    {
      v43 = *(_QWORD *)(v92 + 136) == 0LL;
    }
    if ( !v43 )
    {
      v67 = 0LL;
      v44 = *(volatile signed __int32 **)(v40 + 144);
      if ( v44 )
      {
        _InterlockedIncrement(v44 + 2);
        v44 = *(volatile signed __int32 **)(v40 + 144);
      }
      v45 = *(_QWORD *)(v40 + 136);
      *(_QWORD *)&v67 = v45;
      *((_QWORD *)&v67 + 1) = v44;
      if ( v45 )
      {
        v46 = (_QWORD *)sub_1800AA300(v45, v82);
        (*(void (__fastcall **)(_QWORD, __int64, unsigned __int64))(*(_QWORD *)*v46 + 48LL))(*v46, a1, v36);
        v47 = v83;
        if ( v83 )
        {
          if ( _InterlockedExchangeAdd(v83 + 2, 0xFFFFFFFF) == 1 )
          {
            (**(void (__fastcall ***)(volatile signed __int32 *))v47)(v47);
            if ( _InterlockedExchangeAdd(v47 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v47 + 8LL))(v47);
          }
        }
        v48 = *(_QWORD *)(a1 + 104);
        v49 = v94;
        v50 = *(_QWORD *)(v61 + v48 + 24);
        if ( v50 )
          sub_1800F46B8(v50, a2, v94);
        sub_18006E194(*a2, *(_BYTE *)(a1 + 168));
        v84 = *(_OWORD *)(a1 + 172);
        sub_18006DF74(*a2, &v84);
        v51 = v61;
        v52 = *(_QWORD *)(v61 + v48 + 40);
        if ( v52 )
        {
          sub_1800F46B8(v52, a2, v49);
          v51 = v61;
        }
        v53 = *(_QWORD *)(v51 + v48 + 56);
        if ( v53 )
        {
          sub_1800F46B8(v53, a2, v49);
          v51 = v61;
        }
        v54 = *(_QWORD *)(v51 + v48 + 72);
        if ( v54 )
          sub_1800F46B8(v54, a2, v49);
        sub_180098190(*(_QWORD *)(a1 + 88), a2, *(_QWORD *)(v41 + 136));
        v5 = v64;
      }
      if ( v44 )
      {
        if ( _InterlockedExchangeAdd(v44 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v44)(v44);
          if ( _InterlockedExchangeAdd(v44 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v44 + 8LL))(v44);
        }
      }
      v39 = v61;
    }
    goto LABEL_95;
  }
LABEL_105:
  v91 = 0LL;
  if ( *((_QWORD *)&v62 + 1) )
  {
    while ( 1 )
    {
      result = *(unsigned int *)(*((_QWORD *)&v62 + 1) + 8LL);
      if ( !(_DWORD)result )
        break;
      v58 = *(_DWORD *)(*((_QWORD *)&v62 + 1) + 8LL);
      result = (unsigned int)_InterlockedCompareExchange(
                               (volatile signed __int32 *)(*((_QWORD *)&v62 + 1) + 8LL),
                               result + 1,
                               result);
      if ( v58 == (_DWORD)result )
      {
        v91 = v62;
        break;
      }
    }
  }
  if ( (_QWORD)v91 )
    result = (**(__int64 (__fastcall ***)(_QWORD))v91)(v91);
  if ( *((_QWORD *)&v91 + 1) )
  {
    result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v91 + 1) + 8LL));
    if ( !(_DWORD)result )
    {
      v59 = *((_QWORD *)&v91 + 1);
      (***((void (__fastcall ****)(_QWORD))&v91 + 1))(*((_QWORD *)&v91 + 1));
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v59 + 12));
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v91 + 1) + 8LL))(*((_QWORD *)&v91 + 1));
    }
  }
  if ( *((_QWORD *)&v62 + 1) )
  {
    result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v62 + 1) + 12LL));
    if ( !(_DWORD)result )
      return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v62 + 1) + 8LL))(*((_QWORD *)&v62 + 1));
  }
  return result;
}
