/*
 * XREFs of ??$RegisterObjects@$01@Details@WRL@Microsoft@@YAJPEAVModuleBase@012@PEBG@Z @ 0x1800562A4
 * Callers:
 *     ?ConnectCallback@ServiceModule@Internal@Windows@@UEAAJXZ @ 0x180069BD0 (-ConnectCallback@ServiceModule@Internal@Windows@@UEAAJXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800340C0 (--3@YAXPEAX@Z.c)
 *     ?CountObjectEntries@Details@WRL@Microsoft@@YAIPEAPEBUCreatorMap@123@0PEBG@Z @ 0x180056564 (-CountObjectEntries@Details@WRL@Microsoft@@YAIPEAPEBUCreatorMap@123@0PEBG@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006ACC0 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RegisterObjects<2>(
        __int64 a1,
        const struct Microsoft::WRL::Details::CreatorMap **a2)
{
  int v4; // edi
  Microsoft::WRL::Details *v5; // r15
  const struct Microsoft::WRL::Details::CreatorMap **v6; // rbp
  const unsigned __int16 *v7; // r9
  unsigned int v8; // eax
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // kr00_8
  unsigned __int64 v12; // rax
  _QWORD *v13; // r12
  unsigned __int64 v14; // rax
  void *v15; // rax
  void *v16; // rcx
  char *v17; // r15
  __int64 v18; // rbx
  char *v19; // r14
  __int64 v20; // r10
  __int64 v21; // r8
  unsigned __int64 v22; // r11
  unsigned __int64 v23; // rdx
  __int64 v24; // r10
  int v25; // eax
  _QWORD *v26; // r14
  const struct Microsoft::WRL::Details::CreatorMap **v27; // r15
  const unsigned __int16 *v28; // r9
  unsigned int v29; // eax
  char *v31; // rax
  signed __int64 v32; // r8
  int v33; // edx
  int v34; // ecx
  char *v35; // rax
  signed __int64 v36; // r9
  int v37; // r8d
  int v38; // ecx
  unsigned __int64 v39; // rax
  unsigned __int64 v40; // kr10_8
  _QWORD *v41; // r12
  const struct Microsoft::WRL::Details::CreatorMap **v42; // r14
  unsigned int v43; // edi
  signed __int64 v44; // rbx
  unsigned __int64 v45; // rbp
  unsigned __int64 v46; // rbx
  bool v47; // cc
  const struct Microsoft::WRL::Details::CreatorMap **v48; // r15
  const struct Microsoft::WRL::Details::CreatorMap *v49; // r9
  char *v50; // rax
  signed __int64 v51; // r8
  int v52; // edx
  int v53; // ecx
  __int64 v54; // rax
  __int64 v55; // rcx
  unsigned __int64 i; // rdx
  const struct Microsoft::WRL::Details::CreatorMap *v57; // r9
  char *v58; // rax
  signed __int64 v59; // r10
  int v60; // r8d
  int v61; // ecx
  void *v62; // [rsp+40h] [rbp-48h]
  __int64 v63[8]; // [rsp+48h] [rbp-40h] BYREF
  __int64 v64; // [rsp+90h] [rbp+8h] BYREF
  unsigned int v65; // [rsp+A0h] [rbp+18h]
  void *v66; // [rsp+A8h] [rbp+20h]

  v4 = 0;
  v5 = (Microsoft::WRL::Details *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 32LL))(a1);
  v6 = (const struct Microsoft::WRL::Details::CreatorMap **)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 40LL))(a1);
  v8 = Microsoft::WRL::Details::CountObjectEntries(v5, v6, a2, v7);
  v65 = v8;
  if ( v8 )
  {
    v9 = v8;
    v11 = v8;
    v10 = 4LL * v8;
    if ( !is_mul_ok(v11, 4uLL) )
      v10 = -1LL;
    v62 = operator new[](v10, (const struct std::nothrow_t *)&std::nothrow);
    v12 = 8 * v9;
    if ( !is_mul_ok(v9, 8uLL) )
      v12 = -1LL;
    v13 = operator new[](v12, (const struct std::nothrow_t *)&std::nothrow);
    v14 = 16 * v9;
    if ( !is_mul_ok(v9, 0x10uLL) )
      v14 = -1LL;
    v15 = operator new[](v14, (const struct std::nothrow_t *)&std::nothrow);
    v66 = v15;
    v16 = v15;
    if ( !v62 || !v13 || !v15 )
    {
      v4 = -2147024882;
      goto LABEL_30;
    }
    v17 = (char *)v5 + 8;
    v18 = 0LL;
    v19 = v17;
    if ( v17 < (char *)v6 )
    {
      while ( 1 )
      {
        if ( v4 < 0 )
          goto LABEL_27;
        v20 = *(_QWORD *)v19;
        if ( *(_QWORD *)v19 )
        {
          if ( a2 )
          {
            v31 = *(char **)(v20 + 32);
            if ( !v31 )
              goto LABEL_17;
            v32 = (char *)a2 - v31;
            do
            {
              v33 = *(unsigned __int16 *)&v31[v32];
              v34 = *(unsigned __int16 *)v31 - v33;
              if ( v34 )
                break;
              v31 += 2;
            }
            while ( v33 );
            if ( v34 )
            {
LABEL_39:
              v16 = v66;
              goto LABEL_17;
            }
          }
          v63[0] = 0LL;
          LODWORD(v64) = 2;
          v4 = (*(__int64 (__fastcall **)(__int64 *, __int64, GUID *, __int64 *))v20)(
                 &v64,
                 v20,
                 &GUID_00000001_0000_0000_c000_000000000046,
                 v63);
          if ( v4 < 0 )
            goto LABEL_39;
          v13[v18] = v63[0];
          v21 = 2LL * (unsigned int)v18;
          v18 = (unsigned int)(v18 + 1);
          v16 = v66;
          *(_OWORD *)((char *)v66 + 8 * v21) = *(_OWORD *)*(_QWORD *)(*(_QWORD *)v19 + 8LL);
        }
LABEL_17:
        v19 += 8;
        if ( v19 >= (char *)v6 )
        {
          if ( v4 < 0 )
            goto LABEL_27;
          break;
        }
      }
    }
    v4 = (*(__int64 (__fastcall **)(__int64, const struct Microsoft::WRL::Details::CreatorMap **, void *, _QWORD *, void *, unsigned int))(*(_QWORD *)a1 + 80LL))(
           a1,
           a2,
           v16,
           v13,
           v62,
           v65);
    if ( v4 >= 0 )
    {
      v18 = 0LL;
      v22 = 0LL;
      v23 = (unsigned __int64)((char *)v6 - v17 + 7) >> 3;
      if ( v17 > (char *)v6 )
        v23 = 0LL;
      if ( !v23 )
      {
LABEL_30:
        operator delete(v62);
        operator delete(v66);
        operator delete(v13);
        if ( v4 < 0 )
          return (unsigned int)v4;
        goto LABEL_31;
      }
      do
      {
        v24 = *(_QWORD *)v17;
        if ( *(_QWORD *)v17 )
        {
          if ( !a2 )
            goto LABEL_25;
          v35 = *(char **)(v24 + 32);
          if ( v35 )
          {
            v36 = (char *)a2 - v35;
            do
            {
              v37 = *(unsigned __int16 *)&v35[v36];
              v38 = *(unsigned __int16 *)v35 - v37;
              if ( v38 )
                break;
              v35 += 2;
            }
            while ( v37 );
            if ( !v38 )
            {
LABEL_25:
              v25 = *((_DWORD *)v62 + v18);
              v18 = (unsigned int)(v18 + 1);
              *(_DWORD *)(*(_QWORD *)(v24 + 24) + 8LL) = v25;
            }
          }
        }
        v17 += 8;
        ++v22;
      }
      while ( v22 < v23 );
    }
LABEL_27:
    if ( (_DWORD)v18 )
    {
      v26 = v13;
      do
      {
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v26 + 16LL))(*v26);
        ++v26;
        --v18;
      }
      while ( v18 );
    }
    goto LABEL_30;
  }
LABEL_31:
  v27 = (const struct Microsoft::WRL::Details::CreatorMap **)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 48LL))(a1);
  v29 = Microsoft::WRL::Details::CountObjectEntries((Microsoft::WRL::Details *)v6, v27, a2, v28);
  if ( v29 )
  {
    v40 = v29;
    v39 = 8LL * v29;
    if ( !is_mul_ok(v40, 8uLL) )
      v39 = -1LL;
    v41 = operator new[](v39, (const struct std::nothrow_t *)&std::nothrow);
    if ( !v41 )
      v4 = -2147024882;
    if ( v4 >= 0 )
    {
      v42 = v6 + 1;
      v64 = 0LL;
      v43 = 0;
      v44 = (char *)v27 - (char *)(v6 + 1);
      v45 = 0LL;
      v46 = (unsigned __int64)(v44 + 7) >> 3;
      v47 = v42 <= v27;
      v48 = v42;
      if ( !v47 )
        v46 = 0LL;
      if ( v46 )
      {
        do
        {
          v49 = *v48;
          if ( *v48 )
          {
            if ( !a2 )
              goto LABEL_61;
            v50 = (char *)*((_QWORD *)v49 + 4);
            if ( v50 )
            {
              v51 = (char *)a2 - v50;
              do
              {
                v52 = *(unsigned __int16 *)&v50[v51];
                v53 = *(unsigned __int16 *)v50 - v52;
                if ( v53 )
                  break;
                v50 += 2;
              }
              while ( v52 );
              if ( !v53 )
              {
LABEL_61:
                v54 = (*((__int64 (**)(void))v49 + 1))();
                v55 = v43++;
                v41[v55] = v54;
              }
            }
          }
          ++v48;
          ++v45;
        }
        while ( v45 < v46 );
      }
      v4 = (*(__int64 (__fastcall **)(__int64, const struct Microsoft::WRL::Details::CreatorMap **, _QWORD *, __int64 *, unsigned int))(*(_QWORD *)a1 + 64LL))(
             a1,
             a2,
             v41,
             &v64,
             v43);
      if ( v4 >= 0 )
      {
        for ( i = 0LL; i < v46; ++i )
        {
          v57 = *v42;
          if ( *v42 )
          {
            if ( !a2 )
              goto LABEL_72;
            v58 = (char *)*((_QWORD *)v57 + 4);
            if ( v58 )
            {
              v59 = (char *)a2 - v58;
              do
              {
                v60 = *(unsigned __int16 *)&v58[v59];
                v61 = *(unsigned __int16 *)v58 - v60;
                if ( v61 )
                  break;
                v58 += 2;
              }
              while ( v60 );
              if ( !v61 )
LABEL_72:
                *(_QWORD *)(*((_QWORD *)v57 + 3) + 8LL) = v64;
            }
          }
          ++v42;
        }
      }
    }
    operator delete(v41);
  }
  return (unsigned int)v4;
}
