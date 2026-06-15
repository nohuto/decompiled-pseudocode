/*
 * XREFs of sub_180017CA0 @ 0x180017CA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001B8D0 @ 0x18001B8D0 (sub_18001B8D0.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_180053914 @ 0x180053914 (sub_180053914.c)
 *     sub_180065874 @ 0x180065874 (sub_180065874.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     atexit @ 0x18006A128 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800DC664 @ 0x1800DC664 (sub_1800DC664.c)
 *     sub_1800F5A74 @ 0x1800F5A74 (sub_1800F5A74.c)
 */

__int64 __fastcall sub_180017CA0(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // ebx
  __int64 v6; // r8
  __int64 v7; // r14
  unsigned __int64 CurrentThreadId; // rdi
  unsigned __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 *v11; // rcx
  signed int v12; // r14d
  __int64 v13; // rcx
  __int64 v14; // rdx
  int v15; // eax
  unsigned int v16; // edi
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // r13
  int v20; // ebx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rdi
  _WORD *v24; // rax
  __int64 v25; // rcx
  int v27; // edx
  __int64 v28; // rcx
  _QWORD *v29; // rcx
  _QWORD *v30; // rax
  double v31; // xmm6_8
  __int64 v32; // rdx
  __int64 v33; // rbx
  __int64 v34; // rcx
  int v35; // eax
  BYTE *v36; // rbx
  __int64 v37; // rcx
  const WCHAR *v38; // r12
  DWORD v39; // r13d
  LSTATUS v40; // eax
  LSTATUS v41; // eax
  __int64 v42; // rcx
  volatile signed __int32 *v43; // rbx
  __int64 v45; // rax
  signed __int64 v46; // rdx
  signed __int64 v47; // rax
  int v48; // ebx
  __int64 v49; // r9
  __int64 v50; // rdx
  __int64 v51; // rdx
  int dwOptions; // [rsp+28h] [rbp-E0h]
  unsigned __int16 **samDesired; // [rsp+30h] [rbp-D8h]
  int v54; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int v55; // [rsp+5Ch] [rbp-ACh]
  __int64 v56; // [rsp+60h] [rbp-A8h] BYREF
  HKEY hKey; // [rsp+68h] [rbp-A0h] BYREF
  WINBOOL fPending; // [rsp+70h] [rbp-98h] BYREF
  int v59; // [rsp+74h] [rbp-94h] BYREF
  __int64 v60; // [rsp+78h] [rbp-90h] BYREF
  LPVOID Context; // [rsp+80h] [rbp-88h] BYREF
  __int64 v62; // [rsp+88h] [rbp-80h] BYREF
  BYTE *lpData; // [rsp+90h] [rbp-78h] BYREF
  __int64 v64; // [rsp+98h] [rbp-70h] BYREF
  int *v65; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v66; // [rsp+A8h] [rbp-60h]
  char v67; // [rsp+B0h] [rbp-58h]
  _QWORD v68[5]; // [rsp+B8h] [rbp-50h] BYREF
  _QWORD v69[2]; // [rsp+E0h] [rbp-28h] BYREF
  __int64 v70; // [rsp+F0h] [rbp-18h]
  DWORD v71; // [rsp+F8h] [rbp-10h]
  __int64 v72; // [rsp+100h] [rbp-8h]
  __int64 v73; // [rsp+108h] [rbp+0h] BYREF
  _DWORD v74[2]; // [rsp+110h] [rbp+8h] BYREF
  __int64 v75; // [rsp+118h] [rbp+10h]
  HKEY *p_hKey; // [rsp+120h] [rbp+18h] BYREF
  char v77; // [rsp+128h] [rbp+20h]
  __int64 v78; // [rsp+130h] [rbp+28h]
  unsigned __int16 *v79; // [rsp+148h] [rbp+40h] BYREF
  int v80; // [rsp+150h] [rbp+48h]
  int v81; // [rsp+154h] [rbp+4Ch]
  void *v82; // [rsp+158h] [rbp+50h]
  int v83; // [rsp+160h] [rbp+58h]
  int v84; // [rsp+164h] [rbp+5Ch]
  __int64 *v85; // [rsp+168h] [rbp+60h]
  __int64 v86; // [rsp+170h] [rbp+68h]
  __int64 *v87; // [rsp+178h] [rbp+70h]
  __int64 v88; // [rsp+180h] [rbp+78h]
  _WORD *v89; // [rsp+188h] [rbp+80h]
  int v90; // [rsp+190h] [rbp+88h]
  int v91; // [rsp+194h] [rbp+8Ch]
  int *v92; // [rsp+198h] [rbp+90h]
  __int64 v93; // [rsp+1A0h] [rbp+98h]
  void *retaddr; // [rsp+1F0h] [rbp+E8h]

  v3 = a3;
  v55 = a3;
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 224));
  v7 = qword_18019E3A0;
  v65 = &v54;
  v78 = a1;
  v68[0] = off_1801467A8;
  v68[1] = (char *)&v54 + 1;
  v68[2] = &v54;
  v68[4] = &v65;
  v69[1] = v68;
  LOWORD(v54) = 0;
  v66 = a1;
  v67 = 1;
  v68[3] = a1;
  v69[0] = 0LL;
  v70 = 0LL;
  v71 = 0;
  v72 = 0LL;
  if ( !qword_18019E3A0 )
    goto LABEL_74;
  CurrentThreadId = GetCurrentThreadId();
  v9 = CurrentThreadId % 0xA;
  v10 = *(_QWORD *)(v7 + 8 * (CurrentThreadId % 0xA));
  if ( !v10 )
  {
LABEL_69:
    v45 = sub_180065874(0, 0x18uLL);
    v46 = v45;
    if ( v45 )
    {
      v11 = (__int64 *)(v45 + 16);
      *(_DWORD *)v45 = CurrentThreadId;
      *(_QWORD *)(v45 + 16) = 0LL;
      *(_QWORD *)(v45 + 8) = 0LL;
      _m_prefetchw((const void *)(v7 + 8 * v9));
      do
      {
        v47 = *(_QWORD *)(v7 + 8 * v9);
        *(_QWORD *)(v46 + 8) = v47;
      }
      while ( v47 != _InterlockedCompareExchange64((volatile signed __int64 *)(v7 + 8 * v9), v46, v47) );
      v3 = v55;
      goto LABEL_5;
    }
    v3 = v55;
LABEL_74:
    v11 = 0LL;
    goto LABEL_5;
  }
  while ( *(_DWORD *)v10 != (_DWORD)CurrentThreadId )
  {
    v10 = *(_QWORD *)(v10 + 8);
    if ( !v10 )
      goto LABEL_69;
  }
  v3 = v55;
  v11 = (__int64 *)(v10 + 16);
LABEL_5:
  v69[0] = v11;
  if ( v11 )
  {
    v70 = *v11;
    *v11 = (__int64)v69;
    v71 = GetCurrentThreadId();
  }
  v12 = -2147024809;
  if ( !*(_DWORD *)(a1 + 184) )
  {
    v48 = -2004287487;
    sub_18004BD84(retaddr, 2082LL, "avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp", 2290679809LL);
LABEL_84:
    v16 = v48;
    goto LABEL_31;
  }
  v13 = *(_QWORD *)(a1 + 168);
  if ( !v13 )
  {
    v48 = -2004287487;
    sub_18004BD84(retaddr, 2083LL, "avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp", 2290679809LL);
    goto LABEL_84;
  }
  v14 = *(_QWORD *)(a1 + 192);
  if ( *(_BYTE *)(v14 + 432) )
  {
    v48 = -2005139336;
    goto LABEL_84;
  }
  if ( a2 != *(_QWORD *)(v14 + 56) )
  {
    sub_18004BD84(retaddr, 4863LL, "avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp", 2147942487LL);
    sub_18004BD84(retaddr, 2084LL, "avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp", 2147942487LL);
    v48 = -2147024809;
    goto LABEL_84;
  }
  if ( v3 == 1 )
    LOBYTE(v6) = 1;
  else
    v6 = 0LL;
  v15 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v13 + 344LL))(v13, v14, v6);
  v16 = v15;
  if ( v15 < 0 )
  {
    v48 = -2004287484;
    if ( v15 != -2004287484 )
    {
      sub_18004BD84(retaddr, 2087LL, "avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp", (unsigned int)v15);
      goto LABEL_31;
    }
    goto LABEL_84;
  }
  if ( !*(_BYTE *)(a1 + 188) )
  {
LABEL_30:
    v16 = 0;
    goto LABEL_31;
  }
  v17 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 168) + 304LL))(
          *(_QWORD *)(a1 + 168),
          *(_QWORD *)(a1 + 192));
  v16 = v17;
  if ( v17 >= 0 )
  {
    *(_BYTE *)(a1 + 188) = 0;
    QueryPerformanceCounter((LARGE_INTEGER *)(a1 + 512));
    v18 = *(_QWORD *)(a1 + 192);
    LOBYTE(v54) = 1;
    if ( v18 && *(_QWORD *)(a1 + 168) )
    {
      v62 = 0LL;
      if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)(v18 + 8) + 24LL))(v18 + 8, &v62) >= 0 )
      {
        Context = 0LL;
        if ( InitOnceBeginInitialize(&InitOnce, 0, &fPending, &Context) && fPending )
        {
          Context = &qword_18019E828;
          qword_18019E828 = (__int64)off_1801462A0;
          qword_18019E840 = (__int64)&unk_18019C388;
          atexit(sub_1800B6240);
          sub_180053914(&qword_18019E828, qword_18019E840, sub_1800DAE90);
          InitOnceComplete(&InitOnce, 0, &qword_18019E828);
        }
        v19 = *((_QWORD *)Context + 1);
        if ( *(_DWORD *)v19 > 4u )
        {
          v20 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v62 + 40LL))(v62);
          v21 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(a1 + 192) + 8LL) + 80LL))(*(_QWORD *)(a1 + 192) + 8LL);
          v22 = *(_QWORD *)(a1 + 168);
          v23 = v21;
          v59 = v20;
          v24 = (_WORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v22 + 64LL))(v22);
          LODWORD(v60) = v55;
          v92 = &v59;
          v73 = v23;
          v93 = 4LL;
          if ( v24 )
          {
            v25 = -1LL;
            while ( v24[++v25] != 0 )
              ;
            v27 = 2 * v25 + 2;
          }
          else
          {
            v24 = &unk_18015C744;
            v27 = 2;
          }
          v89 = v24;
          v90 = v27;
          v87 = &v73;
          v91 = 0;
          v85 = &v60;
          v74[1] = 4;
          v79 = *(unsigned __int16 **)(v19 + 8);
          v88 = 8LL;
          v86 = 4LL;
          v74[0] = 184549376;
          v75 = 0LL;
          v80 = *v79;
          v82 = &unk_18016742A;
          v81 = 2;
          v28 = *(_QWORD *)(v19 + 32);
          v83 = 92;
          v84 = 1;
          v55 = (unsigned int)&unk_18016D102 - (unsigned int)&unk_180165C78;
          samDesired = &v79;
          dwOptions = 6;
          EtwEventWriteTransfer(v28, v74, 0LL);
        }
      }
      if ( v62 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v62 + 16LL))(v62);
    }
    goto LABEL_30;
  }
  sub_18004BD84(retaddr, 2092LL, "avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp", (unsigned int)v17);
LABEL_31:
  if ( v71 )
  {
    if ( v71 != GetCurrentThreadId() )
      sub_1800DC664(
        retaddr,
        944LL,
        "onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result.h",
        2147943068LL,
        dwOptions,
        samDesired);
    v29 = (_QWORD *)v69[0];
    v71 = 0;
    v30 = *(_QWORD **)v69[0];
    if ( *(_QWORD *)v69[0] )
    {
      while ( v30 != v69 )
      {
        v29 = v30 + 2;
        v69[0] = v30 + 2;
        v30 = (_QWORD *)v30[2];
        if ( !v30 )
          goto LABEL_37;
      }
      *v29 = v70;
    }
LABEL_37:
    v69[0] = 0LL;
  }
  if ( v67 )
  {
    v67 = 0;
    if ( *(_BYTE *)v65 )
    {
      v64 = 0LL;
      (*(void (__fastcall **)(PVOID, _QWORD, _QWORD, _QWORD, __int64 *))(*(_QWORD *)pv + 24LL))(
        pv,
        *(_QWORD *)(v66 + 216),
        0LL,
        0LL,
        &v64);
      v31 = 0.0;
      v32 = *(_QWORD *)(v66 + 520);
      if ( v32 )
        v31 = (double)(*(_DWORD *)(v66 + 512) - *(_DWORD *)(v66 + 504)) / (double)(int)v32;
      v33 = v64;
      EnterCriticalSection(&stru_18019EF98);
      if ( byte_18019EF90 )
      {
        v35 = sub_18001B8D0(v34, v33, &lpData, &v56);
        if ( v35 >= 0 )
        {
          *(double *)&lpData[200 * (int)v56 + 168] = v31 + *(double *)&lpData[200 * (int)v56 + 168];
          v36 = lpData;
          v37 = 200LL * (int)v56;
          if ( !*(_DWORD *)&lpData[v37 + 148] )
          {
            *(_DWORD *)&lpData[v37 + 148] = 1;
            v36 = lpData;
          }
          if ( v36 == (BYTE *)&unk_18019F078 )
          {
            v38 = L"Render";
            v39 = 600;
          }
          else if ( v36 == (BYTE *)&unk_18019F2D0 )
          {
            v38 = L"Capture";
            v39 = 400;
          }
          else
          {
            if ( v36 != (BYTE *)&unk_18019F460 )
            {
              sub_18004BD84(retaddr, 493LL, "avcore\\audiocore\\server\\audiosrv\\dll\\audiojournal.cpp", 2147942487LL);
LABEL_97:
              v49 = (unsigned int)v12;
              v50 = 336LL;
              goto LABEL_98;
            }
            v38 = L"UnknownStream";
            v39 = 200;
          }
          v77 = 1;
          p_hKey = &hKey;
          hKey = 0LL;
          v40 = RegCreateKeyExW(HKEY_LOCAL_MACHINE, &word_18019F528, 0, 0LL, 0, 2u, 0LL, &hKey, 0LL);
          v12 = v40;
          if ( v40 > 0 )
            v12 = (unsigned __int16)v40 | 0x80070000;
          if ( v12 < 0 )
          {
            v51 = 452LL;
          }
          else
          {
            v41 = RegSetValueExW(hKey, v38, 0, 3u, v36, v39);
            v12 = v41;
            if ( v41 > 0 )
              v12 = (unsigned __int16)v41 | 0x80070000;
            if ( v12 >= 0 )
            {
              if ( hKey )
                RegCloseKey(hKey);
              LeaveCriticalSection(&stru_18019EF98);
              goto LABEL_57;
            }
            v51 = 455LL;
          }
          sub_18004BD84(retaddr, v51, "avcore\\audiocore\\server\\audiosrv\\dll\\audiojournal.cpp", (unsigned int)v12);
          sub_1800F5A74(&p_hKey);
          sub_18004BD84(retaddr, 496LL, "avcore\\audiocore\\server\\audiosrv\\dll\\audiojournal.cpp", (unsigned int)v12);
          goto LABEL_97;
        }
        v49 = (unsigned int)v35;
        v50 = 314LL;
      }
      else
      {
        v49 = 2147549183LL;
        v50 = 312LL;
      }
LABEL_98:
      sub_18004BD84(retaddr, v50, "avcore\\audiocore\\server\\audiosrv\\dll\\audiojournal.cpp", v49);
      LeaveCriticalSection(&stru_18019EF98);
LABEL_57:
      if ( v64 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v64 + 16LL))(v64);
    }
  }
  v42 = *(_QWORD *)(a1 + 496);
  *(_QWORD *)(a1 + 496) = 0LL;
  if ( v42 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v42 + 16LL))(v42);
  v43 = *(volatile signed __int32 **)(a1 + 464);
  *(_QWORD *)(a1 + 456) = 0LL;
  *(_QWORD *)(a1 + 464) = 0LL;
  if ( v43 )
  {
    if ( _InterlockedExchangeAdd(v43 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v43)(v43);
      if ( _InterlockedExchangeAdd(v43 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v43 + 8LL))(v43);
    }
  }
  if ( a1 != -224 )
    LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 224));
  return v16;
}
