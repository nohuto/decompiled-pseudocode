/*
 * XREFs of ?UnregisterObjects@Details@WRL@Microsoft@@YAJPEAVModuleBase@123@PEBG@Z @ 0x1800BAB3C
 * Callers:
 *     ?DisconnectCallback@ServiceModule@Internal@Windows@@UEAAJXZ @ 0x1800B8990 (-DisconnectCallback@ServiceModule@Internal@Windows@@UEAAJXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180033A40 (--3@YAXPEAX@Z.c)
 *     ?CountObjectEntries@Details@WRL@Microsoft@@YAIPEAPEBUCreatorMap@123@0PEBG@Z @ 0x180055DC4 (-CountObjectEntries@Details@WRL@Microsoft@@YAIPEAPEBUCreatorMap@123@0PEBG@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006A360 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 *     ?TerminateMap@Details@WRL@Microsoft@@YA_NPEAVModuleBase@123@PEBG_N@Z @ 0x1800BA84C (-TerminateMap@Details@WRL@Microsoft@@YA_NPEAVModuleBase@123@PEBG_N@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::UnregisterObjects(
        Microsoft::WRL::Details *this,
        const struct Microsoft::WRL::Details::CreatorMap **a2,
        const unsigned __int16 *a3)
{
  int v5; // ebp
  Microsoft::WRL::Details *v6; // rsi
  const struct Microsoft::WRL::Details::CreatorMap **v7; // r13
  const unsigned __int16 *v8; // r9
  unsigned int v9; // eax
  unsigned __int64 v10; // r12
  SIZE_T v11; // rax
  _DWORD *v12; // r14
  const struct Microsoft::WRL::Details::CreatorMap **v13; // rsi
  unsigned __int64 v14; // r11
  const struct Microsoft::WRL::Details::CreatorMap **v15; // r10
  unsigned __int64 v16; // rbx
  const struct Microsoft::WRL::Details::CreatorMap *v17; // r9
  char *v18; // rax
  char *v19; // r8
  int v20; // edx
  int v21; // ecx
  __int64 v22; // rcx
  unsigned int v23; // r11d
  unsigned __int64 i; // r10
  const struct Microsoft::WRL::Details::CreatorMap *v25; // r8
  char *v26; // rax
  char *v27; // r9
  int v28; // edx
  int v29; // ecx
  __int64 v30; // rax
  __int64 *v31; // rsi
  unsigned __int64 v32; // rbx
  __int64 *v33; // rcx
  __int64 v34; // r10
  char *v35; // rax
  char *v36; // r9
  int v37; // r8d
  int v38; // edx
  unsigned __int64 v39; // r9
  unsigned __int64 v40; // rbx
  __int64 v41; // rdx
  char *v42; // rax
  char *v43; // r10
  int v44; // r8d
  int v45; // ecx

  v5 = 0;
  v6 = (Microsoft::WRL::Details *)(*(__int64 (__fastcall **)(Microsoft::WRL::Details *, const struct Microsoft::WRL::Details::CreatorMap **, const unsigned __int16 *))(*(_QWORD *)this + 32LL))(
                                    this,
                                    a2,
                                    a3);
  v7 = (const struct Microsoft::WRL::Details::CreatorMap **)(*(__int64 (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)this + 40LL))(this);
  v9 = Microsoft::WRL::Details::CountObjectEntries(v6, v7, a2, v8);
  v10 = v9;
  if ( !v9 )
    goto LABEL_53;
  v11 = 4LL * v9;
  if ( !is_mul_ok(v10, 4uLL) )
    v11 = -1LL;
  v12 = operator new[](v11, (const struct std::nothrow_t *)&std::nothrow);
  if ( v12 )
  {
    v13 = (const struct Microsoft::WRL::Details::CreatorMap **)((char *)v6 + 8);
    v14 = 0LL;
    v15 = v13;
    v16 = (unsigned __int64)((char *)v7 - (char *)v13 + 7) >> 3;
    if ( v13 > v7 )
      v16 = 0LL;
    if ( v16 )
    {
      do
      {
        v17 = *v15;
        if ( *v15 )
        {
          if ( !a2 )
            goto LABEL_16;
          v18 = (char *)*((_QWORD *)v17 + 4);
          if ( v18 )
          {
            v19 = (char *)((char *)a2 - v18);
            do
            {
              v20 = *(unsigned __int16 *)&v19[(_QWORD)v18];
              v21 = *(unsigned __int16 *)v18 - v20;
              if ( v21 )
                break;
              v18 += 2;
            }
            while ( v20 );
            if ( !v21 )
            {
LABEL_16:
              v22 = (unsigned int)v5++;
              v12[v22] = *(_DWORD *)(*((_QWORD *)v17 + 3) + 8LL);
            }
          }
        }
        ++v15;
        ++v14;
      }
      while ( v14 < v16 );
    }
    v5 = (*(__int64 (__fastcall **)(Microsoft::WRL::Details *, const struct Microsoft::WRL::Details::CreatorMap **, _DWORD *, _QWORD))(*(_QWORD *)this + 88LL))(
           this,
           a2,
           v12,
           (unsigned int)v10);
    v23 = 0;
    for ( i = 0LL; i < v16; ++i )
    {
      v25 = *v13;
      if ( *v13 )
      {
        if ( !a2 )
          goto LABEL_26;
        v26 = (char *)*((_QWORD *)v25 + 4);
        if ( v26 )
        {
          v27 = (char *)((char *)a2 - v26);
          do
          {
            v28 = *(unsigned __int16 *)&v27[(_QWORD)v26];
            v29 = *(unsigned __int16 *)v26 - v28;
            if ( v29 )
              break;
            v26 += 2;
          }
          while ( v28 );
          if ( !v29 )
          {
LABEL_26:
            v30 = v23++;
            *(_DWORD *)(*((_QWORD *)v25 + 3) + 8LL) = v12[v30];
          }
        }
      }
      ++v13;
    }
  }
  else
  {
    v5 = -2147024882;
  }
  operator delete(v12);
  if ( v5 >= 0 )
  {
LABEL_53:
    v31 = (__int64 *)(v7 + 1);
    v32 = (*(__int64 (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)this + 48LL))(this);
    v33 = (__int64 *)(v7 + 1);
    if ( (unsigned __int64)(v7 + 1) < v32 )
    {
      while ( 1 )
      {
        v34 = *v33;
        if ( *v33 )
        {
          if ( !a2 )
            break;
          v35 = *(char **)(v34 + 32);
          if ( v35 )
          {
            v36 = (char *)((char *)a2 - v35);
            do
            {
              v37 = *(unsigned __int16 *)&v36[(_QWORD)v35];
              v38 = *(unsigned __int16 *)v35 - v37;
              if ( v38 )
                break;
              v35 += 2;
            }
            while ( v37 );
            if ( !v38 )
              break;
          }
        }
        if ( (unsigned __int64)++v33 >= v32 )
          goto LABEL_50;
      }
      v5 = (*(__int64 (__fastcall **)(Microsoft::WRL::Details *, const struct Microsoft::WRL::Details::CreatorMap **, _QWORD))(*(_QWORD *)this + 72LL))(
             this,
             a2,
             *(_QWORD *)(*(_QWORD *)(v34 + 24) + 8LL));
      if ( v5 >= 0 )
      {
        v39 = 0LL;
        v40 = (v32 - (unsigned __int64)v31 + 7) >> 3;
        if ( v40 )
        {
          do
          {
            v41 = *v31;
            if ( *v31 )
            {
              if ( !a2 )
                goto LABEL_48;
              v42 = *(char **)(v41 + 32);
              if ( v42 )
              {
                v43 = (char *)((char *)a2 - v42);
                do
                {
                  v44 = *(unsigned __int16 *)&v43[(_QWORD)v42];
                  v45 = *(unsigned __int16 *)v42 - v44;
                  if ( v45 )
                    break;
                  v42 += 2;
                }
                while ( v44 );
                if ( !v45 )
LABEL_48:
                  *(_QWORD *)(*(_QWORD *)(v41 + 24) + 8LL) = 0LL;
              }
            }
            ++v31;
            ++v39;
          }
          while ( v39 < v40 );
        }
      }
    }
  }
LABEL_50:
  Microsoft::WRL::Details::TerminateMap(this, (struct Microsoft::WRL::Details::ModuleBase *)a2, 0LL);
  return (unsigned int)v5;
}
