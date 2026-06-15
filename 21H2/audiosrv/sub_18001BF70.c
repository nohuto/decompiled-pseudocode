/*
 * XREFs of sub_18001BF70 @ 0x18001BF70
 * Callers:
 *     sub_18001BE70 @ 0x18001BE70 (sub_18001BE70.c)
 *     sub_18005841C @ 0x18005841C (sub_18005841C.c)
 * Callees:
 *     sub_18001D800 @ 0x18001D800 (sub_18001D800.c)
 *     sub_18001F9C0 @ 0x18001F9C0 (sub_18001F9C0.c)
 *     sub_180022AC0 @ 0x180022AC0 (sub_180022AC0.c)
 *     sub_180023320 @ 0x180023320 (sub_180023320.c)
 *     sub_1800233B0 @ 0x1800233B0 (sub_1800233B0.c)
 *     sub_1800271DC @ 0x1800271DC (sub_1800271DC.c)
 *     sub_18005B204 @ 0x18005B204 (sub_18005B204.c)
 *     sub_18005CD7C @ 0x18005CD7C (sub_18005CD7C.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     _Init_thread_footer @ 0x18006A3D0 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x18006A438 (_Init_thread_header.c)
 *     sub_18006D26C @ 0x18006D26C (sub_18006D26C.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BB2C8 @ 0x1800BB2C8 (sub_1800BB2C8.c)
 *     sub_18011F784 @ 0x18011F784 (sub_18011F784.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18001BF70(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 v4; // r14
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int128 *v7; // rcx
  int v8; // eax
  int v9; // eax
  void *v10; // rcx
  int v11; // eax
  void *v12; // rcx
  __int128 *v13; // rcx
  unsigned int v14; // edx
  __int64 result; // rax
  int v16; // r12d
  __int128 *v17; // r13
  __int64 v18; // r15
  __int64 v19; // rax
  __int64 v20; // rbx
  struct _RTL_CRITICAL_SECTION *v21; // rdi
  int v22; // edx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rax
  __int64 v26; // rdi
  struct _RTL_CRITICAL_SECTION *v27; // r14
  unsigned int v28; // ebx
  __int64 v29; // rax
  __int64 v30; // r14
  struct _RTL_CRITICAL_SECTION *v31; // r15
  int v32; // ebx
  __int64 v33; // rdi
  __int64 v34; // [rsp+40h] [rbp-C0h] BYREF
  LPVOID pv; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v36[24]; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v37; // [rsp+68h] [rbp-98h] BYREF
  __int64 v38; // [rsp+78h] [rbp-88h]
  __m256i v39; // [rsp+80h] [rbp-80h] BYREF
  __int64 v40; // [rsp+A0h] [rbp-60h]
  __m256i v41; // [rsp+A8h] [rbp-58h] BYREF
  __m256i *v42; // [rsp+E0h] [rbp-20h]
  __int128 v43; // [rsp+F0h] [rbp-10h] BYREF
  int v44; // [rsp+100h] [rbp+0h]
  __int128 v45; // [rsp+104h] [rbp+4h]
  int v46; // [rsp+114h] [rbp+14h]
  __int128 v47; // [rsp+118h] [rbp+18h]
  int v48; // [rsp+128h] [rbp+28h]
  __int128 v49; // [rsp+12Ch] [rbp+2Ch]
  int v50; // [rsp+13Ch] [rbp+3Ch]
  __int128 v51; // [rsp+140h] [rbp+40h]
  int v52; // [rsp+150h] [rbp+50h]
  __int128 v53; // [rsp+154h] [rbp+54h]
  int v54; // [rsp+164h] [rbp+64h]
  __int128 v55; // [rsp+168h] [rbp+68h]
  int v56; // [rsp+178h] [rbp+78h]
  void *retaddr; // [rsp+1C8h] [rbp+C8h]

  v4 = a2;
  v40 = a2;
  v5 = a1;
  v38 = a1;
  *a3 = 0;
  v43 = xmmword_18019D724;
  v44 = dword_18019D734;
  v45 = xmmword_18019D738;
  v46 = dword_18019D748;
  v47 = xmmword_18019D74C;
  v48 = dword_18019D75C;
  v49 = xmmword_18019D774;
  v50 = dword_18019D784;
  v51 = xmmword_18019D788;
  v52 = dword_18019D798;
  v53 = xmmword_18019D79C;
  v54 = dword_18019D7AC;
  v55 = xmmword_18015B7F8;
  v56 = 5;
  v6 = 0LL;
  v7 = &v43;
  while ( *(_DWORD *)(v4 + 16) != *((_DWORD *)v7 + 4)
       || *(_QWORD *)v4 != *(_QWORD *)v7
       || *(_QWORD *)(v4 + 8) != *((_QWORD *)v7 + 1) )
  {
    v6 = (unsigned int)(v6 + 1);
    v7 = (__int128 *)((char *)v7 + 20);
    if ( (unsigned int)v6 >= 7 )
      goto LABEL_9;
  }
  v8 = sub_18011F784(v5, v6);
  if ( v8 < 0 )
    sub_18006D26C(
      retaddr,
      7485LL,
      "avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (unsigned int)v8);
LABEL_9:
  if ( !*(_DWORD *)(v5 + 188) )
  {
    v9 = sub_18001D800(*(_QWORD *)(v5 + 16), v4);
    if ( v9 < 0 )
      sub_18006D26C(
        retaddr,
        7492LL,
        "avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (unsigned int)v9);
    if ( !*(_DWORD *)(v5 + 188)
      && (*(_QWORD *)v4 == *(_QWORD *)(v5 + 1852)
       && *(_QWORD *)(v4 + 8) == *(_QWORD *)(v5 + 1860)
       && *(_DWORD *)(v4 + 16) == *(_DWORD *)(v5 + 1868)
       || *(_QWORD *)v4 == 0x4E27082CF19F064DLL && *(_QWORD *)(v4 + 8) == 0x4C8EBBA1826873BCLL && !*(_DWORD *)(v4 + 16)) )
    {
      sub_1800271DC(v5, &v37);
      pv = 0LL;
      *(_QWORD *)v36 = &pv;
      *(_QWORD *)&v36[8] = 0LL;
      v36[16] = 1;
      sub_180022AC0(v5, &v39, 0LL, 1LL);
      v41.m256i_i64[0] = v5;
      v41.m256i_i32[2] = 0;
      *(_OWORD *)((char *)&v41.m256i_u64[1] + 4) = *(_OWORD *)v39.m256i_i8;
      v39 = v41;
      sub_18001F9C0(v5, 0, 0, 0, (__int64)&v39, (__int64)&v36[8]);
      if ( v36[16] )
      {
        v10 = **(void ***)v36;
        **(_QWORD **)v36 = *(_QWORD *)&v36[8];
        if ( v10 )
          CoTaskMemFree(v10);
      }
      *(_QWORD *)v36 = v5;
      *(_OWORD *)&v36[8] = v37;
      LOBYTE(v34) = 0;
      v11 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)qword_18019F760 + 48LL))(qword_18019F760, &v34);
      if ( v11 < 0 )
        sub_18006D26C(
          retaddr,
          7520LL,
          "avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (unsigned int)v11);
      v41.m256i_i64[0] = (__int64)off_180155C08;
      *(_OWORD *)&v41.m256i_u64[1] = *(_OWORD *)v36;
      v41.m256i_i64[3] = *(_QWORD *)&v36[16];
      v42 = &v41;
      sub_18005CD7C((LPCRITICAL_SECTION)(v5 + 1768), (__int64)&v34, (__int64)pv, (__int64)&v41, (__int64)a3);
      v12 = pv;
      pv = 0LL;
      if ( v12 )
        CoTaskMemFree(v12);
    }
  }
  if ( dword_18019EDF8 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex)
                                   + 4LL) )
  {
    Init_thread_header(&dword_18019EDF8);
    if ( dword_18019EDF8 == -1 )
    {
      xmmword_18019E440 = xmmword_18015B730;
      dword_18019E450 = 0;
      dword_18019E454 = 8;
      xmmword_18019E458 = xmmword_18015B730;
      dword_18019E468 = 0;
      dword_18019E46C = 4;
      xmmword_18019E470 = xmmword_18015B780;
      dword_18019E480 = 0;
      dword_18019E484 = 2;
      xmmword_18019E488 = xmmword_18015BE98;
      dword_18019E498 = 25;
      dword_18019E49C = 16;
      Init_thread_footer(&dword_18019EDF8);
    }
  }
  v13 = &xmmword_18019E440;
  v39.m256i_i64[0] = (__int64)&xmmword_18019E440;
  if ( xmmword_18019E440 == 0 )
  {
    ((void (*)(void))sub_18005B204)();
    sub_18005B204(&xmmword_18019E458);
    v13 = &xmmword_18019E440;
  }
  v14 = 0;
  LODWORD(pv) = 0;
  do
  {
    result = *((unsigned int *)v13 + 4);
    if ( *(_DWORD *)(v4 + 16) == (_DWORD)result )
    {
      result = *(_QWORD *)v4;
      if ( *(_QWORD *)v4 == *(_QWORD *)v13 )
      {
        result = *(_QWORD *)(v4 + 8);
        if ( result == *((_QWORD *)v13 + 1) )
        {
          v16 = *((_DWORD *)v13 + 5);
          *(_QWORD *)&v37 = 0x100000000LL;
          v17 = &v37;
          result = v5 + 1656;
          do
          {
            v18 = *(int *)v17;
            v19 = sub_1800233B0(result, v18);
            v20 = v19;
            if ( *(_BYTE *)(v19 + 52) )
            {
              v21 = (struct _RTL_CRITICAL_SECTION *)(v19 + 56);
              EnterCriticalSection((LPCRITICAL_SECTION)(v19 + 56));
              v22 = 0;
              if ( *(int *)(v20 + 40) > 0 )
              {
                v23 = 0LL;
                do
                {
                  if ( v23 < 0 || v22 >= *(_DWORD *)(v20 + 40) )
                  {
                    sub_1800BB2C8(3221225612LL);
                    __debugbreak();
                  }
                  v24 = *(_QWORD *)(v23 + *(_QWORD *)(v20 + 32));
                  if ( (v16 & *(_DWORD *)(v24 + 16)) != 0 )
                    *(_BYTE *)(v24 + 20) = 1;
                  ++v22;
                  v23 += 16LL;
                }
                while ( v22 < *(_DWORD *)(v20 + 40) );
              }
              if ( v21 )
                LeaveCriticalSection(v21);
            }
            v25 = sub_1800233B0(v5 + 1672, v18);
            v26 = v25;
            if ( *(_BYTE *)(v25 + 52) )
            {
              v27 = (struct _RTL_CRITICAL_SECTION *)(v25 + 56);
              EnterCriticalSection((LPCRITICAL_SECTION)(v25 + 56));
              v28 = 0;
              if ( *(int *)(v26 + 40) > 0 )
              {
                do
                {
                  if ( (v16 & *(_DWORD *)(*(_QWORD *)sub_180023320(v26 + 32, v28) + 16LL)) != 0 )
                    *(_BYTE *)(*(_QWORD *)sub_180023320(v26 + 32, v28) + 20LL) = 1;
                  ++v28;
                }
                while ( (signed int)v28 < *(_DWORD *)(v26 + 40) );
                v5 = v38;
              }
              if ( v27 )
                LeaveCriticalSection(v27);
            }
            v29 = sub_1800233B0(v5 + 1688, v18);
            v30 = v29;
            if ( *(_BYTE *)(v29 + 52) )
            {
              v31 = (struct _RTL_CRITICAL_SECTION *)(v29 + 56);
              EnterCriticalSection((LPCRITICAL_SECTION)(v29 + 56));
              v32 = 0;
              if ( *(int *)(v30 + 40) > 0 )
              {
                v33 = 0LL;
                do
                {
                  if ( v32 < 0 || v32 >= *(_DWORD *)(v30 + 40) )
                  {
                    sub_1800BB2C8(3221225612LL);
                    __debugbreak();
                  }
                  if ( (v16 & *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v30 + 32) + v33) + 16LL)) != 0 )
                    *(_BYTE *)(*(_QWORD *)sub_180023320(v30 + 32, (unsigned int)v32) + 20LL) = 1;
                  ++v32;
                  v33 += 16LL;
                }
                while ( v32 < *(_DWORD *)(v30 + 40) );
                v5 = v38;
              }
              if ( v31 )
                LeaveCriticalSection(v31);
            }
            v17 = (__int128 *)((char *)v17 + 4);
            result = v5 + 1656;
          }
          while ( v17 != (__int128 *)((char *)&v37 + 8) );
          v13 = (__int128 *)v39.m256i_i64[0];
          v4 = v40;
          v14 = (unsigned int)pv;
        }
      }
    }
    LODWORD(pv) = ++v14;
    v13 = (__int128 *)((char *)v13 + 24);
    v39.m256i_i64[0] = (__int64)v13;
  }
  while ( v14 < 4 );
  return result;
}
