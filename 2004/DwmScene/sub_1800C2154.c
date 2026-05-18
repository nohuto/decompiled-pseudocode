/*
 * XREFs of sub_1800C2154 @ 0x1800C2154
 * Callers:
 *     sub_1800B9740 @ 0x1800B9740 (sub_1800B9740.c)
 *     sub_1800BE160 @ 0x1800BE160 (sub_1800BE160.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800113F8 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     sub_180069698 @ 0x180069698 (sub_180069698.c)
 *     sub_1800697E8 @ 0x1800697E8 (sub_1800697E8.c)
 *     sub_180074F40 @ 0x180074F40 (sub_180074F40.c)
 *     sub_1800752B4 @ 0x1800752B4 (sub_1800752B4.c)
 *     sub_1800839A4 @ 0x1800839A4 (sub_1800839A4.c)
 *     sub_18008B774 @ 0x18008B774 (sub_18008B774.c)
 *     sub_18008B780 @ 0x18008B780 (sub_18008B780.c)
 *     sub_18008B784 @ 0x18008B784 (sub_18008B784.c)
 *     sub_1800AA45C @ 0x1800AA45C (sub_1800AA45C.c)
 *     sub_1800B5F5C @ 0x1800B5F5C (sub_1800B5F5C.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
void *__fastcall sub_1800C2154(__int64 a1, __int64 *a2)
{
  __int64 v3; // rdx
  _UNKNOWN **v4; // r15
  volatile signed __int32 **v5; // r12
  volatile signed __int32 *v6; // rdi
  __int64 v7; // rax
  __int64 v8; // r14
  volatile signed __int32 *v9; // rsi
  __int64 v10; // rbx
  char v11; // al
  double v12; // xmm0_8
  int v13; // xmm9_4
  double v14; // xmm0_8
  int v15; // xmm10_4
  double v16; // xmm0_8
  int v17; // xmm11_4
  double v18; // xmm0_8
  int v19; // xmm12_4
  double v20; // xmm0_8
  int v21; // xmm13_4
  double v22; // xmm0_8
  int v23; // xmm14_4
  double v24; // xmm0_8
  int v25; // xmm6_4
  double v26; // xmm0_8
  int v27; // xmm7_4
  double v28; // xmm0_8
  int v29; // xmm8_4
  double v30; // xmm0_8
  int v31; // xmm15_4
  int v32; // eax
  double v33; // xmm0_8
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  volatile signed __int32 *v37; // r15
  __int64 v38; // rdx
  signed __int32 v39; // eax
  __int64 v40; // rdx
  unsigned __int128 v41; // kr00_16
  signed __int32 v42; // eax
  unsigned __int64 v43; // rbx
  unsigned __int64 v44; // r14
  __int64 v45; // rbx
  volatile signed __int32 *v46; // rbx
  void *result; // rax
  __int64 v48; // [rsp+28h] [rbp-E0h]
  char v49; // [rsp+30h] [rbp-D8h]
  char v50; // [rsp+31h] [rbp-D7h]
  char v51; // [rsp+32h] [rbp-D6h]
  _UNKNOWN **v52; // [rsp+38h] [rbp-D0h]
  __int64 v53; // [rsp+40h] [rbp-C8h]
  __int128 v54; // [rsp+50h] [rbp-B8h]
  int v55; // [rsp+70h] [rbp-98h]
  int v56; // [rsp+74h] [rbp-94h]
  int v57; // [rsp+78h] [rbp-90h]
  int v58; // [rsp+7Ch] [rbp-8Ch]
  float v59; // [rsp+80h] [rbp-88h]
  __int128 v60; // [rsp+88h] [rbp-80h] BYREF
  __int64 *v61; // [rsp+98h] [rbp-70h] BYREF
  __int128 v62; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v63; // [rsp+B0h] [rbp-58h]
  _QWORD v64[2]; // [rsp+C0h] [rbp-48h] BYREF
  __int64 *v65; // [rsp+D0h] [rbp-38h]
  __int64 *v66; // [rsp+D8h] [rbp-30h]
  __int128 v67; // [rsp+E0h] [rbp-28h] BYREF

  v63 = a1;
  v48 = sub_1800752B4(a1, *(_DWORD *)(*a2 + 112));
  v4 = &off_18020C880;
  v52 = &off_18020C880;
  v5 = (volatile signed __int32 **)(sub_1800B5F5C(*a2, v3) + 64);
  do
  {
    v6 = *(v5 - 6);
    if ( v6 )
    {
      _InterlockedIncrement(v6 + 2);
      v6 = *(v5 - 6);
    }
    v7 = (__int64)*(v5 - 7);
    v8 = v7;
    v53 = v7;
    v9 = *v5;
    if ( *v5 )
    {
      _InterlockedIncrement(v9 + 2);
      v9 = *v5;
      v8 = v7;
    }
    v10 = (__int64)*(v5 - 1);
    if ( v7 && v10 )
    {
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v48 + 64LL))(v48, *(v4 - 2), 0LL);
      v50 = v11;
      v12 = (*(double (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v48 + 88LL))(v48, *(v4 - 1));
      v13 = LODWORD(v12);
      v14 = (*(double (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v48 + 88LL))(v48, *v4);
      v15 = LODWORD(v14);
      v16 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v48 + 88LL))(v48, v4[1]);
      v17 = LODWORD(v16);
      v18 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v48 + 88LL))(v48, v4[2]);
      v19 = LODWORD(v18);
      v20 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v48 + 88LL))(v48, v4[3]);
      v21 = LODWORD(v20);
      v22 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v48 + 88LL))(v48, v4[4]);
      v23 = LODWORD(v22);
      v24 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v48 + 88LL))(v48, v4[5]);
      v25 = LODWORD(v24);
      v26 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v48 + 88LL))(v48, v4[6]);
      v27 = LODWORD(v26);
      v28 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v48 + 88LL))(v48, v4[7]);
      v29 = LODWORD(v28);
      v30 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v48 + 88LL))(v48, v4[8]);
      v31 = LODWORD(v30);
      v56 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v48 + 72LL))(v48, v4[9], 0LL);
      (*(void (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v48 + 72LL))(v48, v4[10], 0LL);
      v57 = v32;
      v33 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v48 + 88LL))(v48, v4[11]);
      v58 = LODWORD(v33);
      v59 = (*(float (__fastcall **)(__int64, void *))(*(_QWORD *)v48 + 88LL))(v48, v4[12]);
      v49 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v48 + 64LL))(v48, v4[13], 0LL);
      v51 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v48 + 64LL))(v48, v4[14], 0LL);
      v55 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v48 + 72LL))(v48, v4[15], 0LL);
      v67 = 0LL;
      v62 = 0LL;
      v34 = a2[1];
      if ( v34 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v34 + 8));
        v34 = a2[1];
        v8 = v53;
      }
      *(_QWORD *)&v62 = *a2;
      *((_QWORD *)&v62 + 1) = v34;
      sub_180074F40(v63, &v67, 0LL, &v62);
      v35 = v67;
      v36 = 0LL;
      v37 = 0LL;
      v38 = *(_QWORD *)(v67 + 64);
      if ( v38 )
      {
        while ( 1 )
        {
          v39 = *(_DWORD *)(v38 + 8);
          if ( !v39 )
            break;
          if ( v39 == _InterlockedCompareExchange((volatile signed __int32 *)(v38 + 8), v39 + 1, v39) )
          {
            v36 = *(_QWORD *)(v35 + 56);
            v37 = *(volatile signed __int32 **)(v35 + 64);
            break;
          }
        }
        v8 = v53;
      }
      v64[0] = v36;
      v64[1] = v37;
      std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(v10 + 96), v64);
      if ( v37 )
      {
        if ( _InterlockedExchangeAdd(v37 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v37)(v37);
          if ( _InterlockedExchangeAdd(v37 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v37 + 8LL))(v37);
        }
        v8 = v53;
      }
      if ( v49 )
      {
        *(_DWORD *)(v10 + 88) = 1;
        *(_DWORD *)(v10 + 136) = -1077342245;
      }
      else
      {
        *(_DWORD *)(v10 + 88) = v55;
        *(_DWORD *)(v10 + 136) = 0;
      }
      *(_DWORD *)(v10 + 112) = v13;
      *(_DWORD *)(v10 + 116) = v15;
      *(_DWORD *)(v10 + 120) = v17;
      *(_DWORD *)(v10 + 124) = v19;
      *(_DWORD *)(v10 + 128) = v21;
      *(_DWORD *)(v10 + 132) = v23;
      *(_BYTE *)(v10 + 72) = v50;
      *(_DWORD *)(v10 + 152) = v25;
      *(_DWORD *)(v10 + 156) = v27;
      *(_DWORD *)(v10 + 160) = v29;
      *(_DWORD *)(v10 + 164) = 1065353216;
      *(_BYTE *)(v8 + 72) = v50;
      *(_DWORD *)(v8 + 88) = v25;
      *(_DWORD *)(v8 + 92) = v27;
      *(_DWORD *)(v8 + 96) = v29;
      *(_DWORD *)(v8 + 100) = 1065353216;
      *(_DWORD *)(v8 + 104) = v31;
      sub_18008B774(v8, v56);
      sub_18008B784(v8, v57);
      *(_DWORD *)(v8 + 116) = v58;
      *(float *)(v8 + 112) = v59;
      sub_18008B780(v8, v51);
      v60 = 0LL;
      v54 = 0LL;
      v40 = *(_QWORD *)(v8 + 64);
      if ( v40 )
      {
        while ( 1 )
        {
          v42 = *(_DWORD *)(v40 + 8);
          if ( !v42 )
            break;
          if ( v42 == _InterlockedCompareExchange((volatile signed __int32 *)(v40 + 8), v42 + 1, v42) )
          {
            v43 = *(_QWORD *)(v8 + 56);
            v44 = *(_QWORD *)(v8 + 64);
            *((_QWORD *)&v54 + 1) = v44;
            v41 = __PAIR128__(v44, v43);
            goto LABEL_27;
          }
        }
      }
      v41 = 0LL;
LABEL_27:
      sub_1800839A4(v41);
      v61 = 0LL;
      v65 = *(__int64 **)(v41 + 384);
      v66 = *(__int64 **)(v41 + 376);
      sub_1800697E8(&v61, v66, v65, 0);
      if ( v61 == *(__int64 **)(v41 + 384) )
        v60 = 0LL;
      else
        sub_180069698((__int64 *)&v60, v61);
      if ( *((_QWORD *)&v41 + 1) )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v41 + 1) + 8LL), 0xFFFFFFFF) == 1 )
        {
          (***((void (__fastcall ****)(_QWORD))&v54 + 1))(*((_QWORD *)&v54 + 1));
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v54 + 1) + 12LL), 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v54 + 1) + 8LL))(*((_QWORD *)&v54 + 1));
        }
      }
      if ( (_QWORD)v60 )
        sub_1800AA45C(v60);
      if ( *((_QWORD *)&v60 + 1) )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v60 + 1) + 8LL), 0xFFFFFFFF) == 1 )
        {
          v45 = *((_QWORD *)&v60 + 1);
          (***((void (__fastcall ****)(_QWORD))&v60 + 1))(*((_QWORD *)&v60 + 1));
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v45 + 12), 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v60 + 1) + 8LL))(*((_QWORD *)&v60 + 1));
        }
      }
      v46 = (volatile signed __int32 *)*((_QWORD *)&v67 + 1);
      if ( *((_QWORD *)&v67 + 1) )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v67 + 1) + 8LL), 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v46)(v46);
          if ( _InterlockedExchangeAdd(v46 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v46 + 8LL))(v46);
        }
      }
      if ( v9 )
      {
        if ( _InterlockedExchangeAdd(v9 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v9)(v9);
          if ( _InterlockedExchangeAdd(v9 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 8LL))(v9);
        }
      }
      if ( v6 && _InterlockedExchangeAdd(v6 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v6)(v6);
        if ( _InterlockedExchangeAdd(v6 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
      }
      v4 = v52;
    }
    else
    {
      if ( v9 )
      {
        if ( _InterlockedExchangeAdd(v9 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v9)(v9);
          if ( _InterlockedExchangeAdd(v9 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 8LL))(v9);
        }
      }
      if ( v6 )
      {
        if ( _InterlockedExchangeAdd(v6 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v6)(v6);
          if ( _InterlockedExchangeAdd(v6 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
        }
      }
    }
    v5 += 2;
    v4 += 18;
    v52 = v4;
    result = &unk_18020CA30;
  }
  while ( (__int64)v4 < (__int64)&unk_18020CA30 );
  return result;
}
