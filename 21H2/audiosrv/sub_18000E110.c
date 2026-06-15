/*
 * XREFs of sub_18000E110 @ 0x18000E110
 * Callers:
 *     sub_18000DF70 @ 0x18000DF70 (sub_18000DF70.c)
 *     sub_180114C50 @ 0x180114C50 (sub_180114C50.c)
 * Callees:
 *     sub_18000E660 @ 0x18000E660 (sub_18000E660.c)
 *     sub_1800579A4 @ 0x1800579A4 (sub_1800579A4.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall sub_18000E110(__int64 a1, unsigned int a2, unsigned int a3, _QWORD *a4, _QWORD *a5)
{
  _QWORD *v5; // r15
  void (__fastcall ***v8)(_QWORD, void *, _QWORD *); // rdi
  void (__fastcall ***v9)(_QWORD, void *, _QWORD *); // rbx
  unsigned int v10; // r14d
  HRESULT v11; // esi
  unsigned int v12; // r12d
  void *v13; // rax
  _QWORD *v14; // rcx
  void (__fastcall ***v15)(_QWORD, void *, _QWORD *); // rcx
  void (__fastcall ***v16)(_QWORD, void *, _QWORD *); // rsi
  void (__fastcall ***v17)(_QWORD, void *, _QWORD *); // r14
  int v18; // r15d
  void (__fastcall ***v19)(_QWORD, void *, _QWORD *); // rcx
  void (__fastcall ***v20)(_QWORD, void *, _QWORD *); // r15
  __int64 v21; // r14
  void (__fastcall ***v22)(_QWORD, void *, _QWORD *); // r14
  void (__fastcall ***v23)(_QWORD, void *, _QWORD *); // rax
  void (__fastcall ***v25)(_QWORD, void *, _QWORD *); // rcx
  unsigned __int16 *v26; // rdx
  char *v27; // r10
  int v28; // r8d
  int v29; // r9d
  unsigned int v30; // eax
  void (__fastcall ***v31)(_QWORD, void *, _QWORD *); // rcx
  LPVOID pv; // [rsp+30h] [rbp-D0h] BYREF
  void (__fastcall ***v33)(_QWORD, void *, _QWORD *); // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v34; // [rsp+40h] [rbp-C0h]
  int v35; // [rsp+44h] [rbp-BCh] BYREF
  void (__fastcall ***v36)(_QWORD, void *, _QWORD *); // [rsp+48h] [rbp-B8h] BYREF
  void (__fastcall ***v37)(_QWORD, void *, _QWORD *); // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v38; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v39; // [rsp+5Ch] [rbp-A4h] BYREF
  unsigned int v40; // [rsp+60h] [rbp-A0h]
  struct _FILETIME FileTime; // [rsp+68h] [rbp-98h] BYREF
  __int64 v42; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v43; // [rsp+78h] [rbp-88h]
  __int64 v44; // [rsp+80h] [rbp-80h]
  void (__fastcall ***v45)(_QWORD, void *, _QWORD *); // [rsp+88h] [rbp-78h] BYREF
  _QWORD *v46; // [rsp+90h] [rbp-70h]
  LPVOID ppv; // [rsp+98h] [rbp-68h] BYREF
  __int64 v48; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v49; // [rsp+A8h] [rbp-58h]
  FILETIME FileTime2; // [rsp+B0h] [rbp-50h] BYREF
  FILETIME v51; // [rsp+B8h] [rbp-48h] BYREF
  _QWORD *v52; // [rsp+C0h] [rbp-40h]
  PROPVARIANT pvar[2]; // [rsp+C8h] [rbp-38h] BYREF
  SYSTEMTIME *v54; // [rsp+D8h] [rbp-28h]
  void (__fastcall ***v55)(_QWORD, void *, _QWORD *); // [rsp+E0h] [rbp-20h]
  SYSTEMTIME SystemTime; // [rsp+E8h] [rbp-18h] BYREF
  _BYTE v57[32]; // [rsp+F8h] [rbp-8h] BYREF
  char v58[32]; // [rsp+118h] [rbp+18h] BYREF

  v5 = a4;
  v52 = a4;
  v43 = a2;
  v46 = a5;
  ppv = 0LL;
  v42 = 0LL;
  v8 = 0LL;
  v45 = 0LL;
  v49 = -1LL;
  v40 = 0;
  FileTime2 = 0LL;
  v9 = 0LL;
  v55 = 0LL;
  v10 = 0;
  v34 = 0;
  v51 = 0LL;
  v11 = CoCreateInstance(&rclsid, 0LL, 0x17u, &stru_18015B0C0, &ppv);
  if ( v11 < 0 )
    goto LABEL_61;
  v11 = (*(__int64 (__fastcall **)(LPVOID, _QWORD, __int64, __int64 *))(*(_QWORD *)ppv + 24LL))(ppv, a2, 1LL, &v42);
  if ( v11 < 0 )
    goto LABEL_61;
  v11 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v42 + 24LL))(v42, &v39);
  if ( v11 < 0 )
    goto LABEL_61;
  if ( !v39 )
    goto LABEL_70;
  v11 = sub_18000E660(v58, 13LL, L"Level:%x", a3);
  if ( v11 < 0 )
    goto LABEL_61;
  v12 = 0;
  if ( !v39 )
  {
LABEL_105:
    if ( v8 )
    {
      v23 = v8;
      v8 = 0LL;
      v45 = 0LL;
LABEL_59:
      *v46 = v23;
    }
    else
    {
      v23 = (void (__fastcall ***)(_QWORD, void *, _QWORD *))*v46;
    }
    if ( v23 )
      goto LABEL_61;
LABEL_70:
    v11 = -2147023728;
    goto LABEL_61;
  }
  while ( 1 )
  {
    v33 = 0LL;
    v36 = 0LL;
    pv = 0LL;
    FileTime = 0LL;
    v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD *))(*(_QWORD *)v42 + 32LL))(v42, v12, &v33);
    if ( v11 < 0 )
    {
      CoTaskMemFree(pv);
      pv = 0LL;
      if ( v36 )
        ((void (__fastcall *)(void (__fastcall ***)(_QWORD, void *, _QWORD *)))(*v36)[2])(v36);
      v31 = v33;
      if ( v33 )
        goto LABEL_126;
      goto LABEL_61;
    }
    v35 = 0;
    if ( (int)MMDevAPI_16(v33, v43, a3, &v35) >= 0 && v35 )
    {
      CoTaskMemFree(pv);
      pv = 0LL;
      if ( v36 )
        ((void (__fastcall *)(void (__fastcall ***)(_QWORD, void *, _QWORD *)))(*v36)[2])(v36);
      v25 = v33;
      if ( !v33 )
        goto LABEL_55;
      goto LABEL_74;
    }
    v11 = ((__int64 (__fastcall *)(void (__fastcall ***)(_QWORD, void *, _QWORD *), LPVOID *))(*v33)[5])(v33, &pv);
    if ( v11 < 0 )
    {
      CoTaskMemFree(pv);
      pv = 0LL;
      if ( v36 )
        ((void (__fastcall *)(void (__fastcall ***)(_QWORD, void *, _QWORD *)))(*v36)[2])(v36);
      v31 = v33;
      if ( v33 )
        goto LABEL_126;
      goto LABEL_61;
    }
    v13 = pv;
    if ( !v5 )
      break;
    v14 = (_QWORD *)*v5;
    if ( !*v5 )
      break;
    while ( 1 )
    {
      v26 = (unsigned __int16 *)v14[2];
      v27 = (char *)((_BYTE *)pv - (_BYTE *)v26);
      do
      {
        v28 = *(unsigned __int16 *)&v27[(_QWORD)v26];
        v29 = *v26 - v28;
        if ( v29 )
          break;
        ++v26;
      }
      while ( v28 );
      if ( !v29 )
        break;
      v14 = (_QWORD *)*v14;
      if ( !v14 )
        goto LABEL_13;
    }
    CoTaskMemFree(pv);
    pv = 0LL;
    if ( v36 )
      ((void (__fastcall *)(void (__fastcall ***)(_QWORD, void *, _QWORD *)))(*v36)[2])(v36);
    v25 = v33;
    if ( !v33 )
      goto LABEL_55;
LABEL_74:
    ((void (__fastcall *)(void (__fastcall ***)(_QWORD, void *, _QWORD *)))(*v33)[2])(v25);
LABEL_55:
    if ( ++v12 >= v39 )
    {
      if ( v9 && (!v8 || v10 > v40 || v10 >= 0x60000000) )
      {
        v23 = v9;
        v9 = 0LL;
        goto LABEL_59;
      }
      goto LABEL_105;
    }
  }
LABEL_13:
  v15 = v36;
  if ( v36 != v33 )
  {
    v16 = v36;
    v15 = 0LL;
    v36 = 0LL;
    if ( v33 )
    {
      (**v33)(v33, &unk_18015B040, &v36);
      v15 = v36;
      v13 = pv;
    }
    if ( v16 )
    {
      ((void (__fastcall *)(void (__fastcall ***)(_QWORD, void *, _QWORD *)))(*v16)[2])(v16);
      v15 = v36;
      v13 = pv;
    }
  }
  if ( v15 )
  {
    v11 = ((__int64 (__fastcall *)(_QWORD, _QWORD, unsigned int *))(*v15)[9])(v15, a3, &v38);
    if ( v11 < 0 )
    {
      CoTaskMemFree(pv);
      pv = 0LL;
      if ( v36 )
        ((void (__fastcall *)(void (__fastcall ***)(_QWORD, void *, _QWORD *)))(*v36)[2])(v36);
      v31 = v33;
      if ( !v33 )
        goto LABEL_61;
    }
    else
    {
      v37 = 0LL;
      *(_DWORD *)&SystemTime.wYear = 67137;
      *(_QWORD *)&SystemTime.wDayOfWeek = 65537LL;
      *(_DWORD *)&SystemTime.wSecond = 0;
      *(_OWORD *)pvar = 0LL;
      v54 = 0LL;
      v11 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD *))(*v33)[4])(v33, 0LL, &v37);
      if ( v11 >= 0 )
      {
        v11 = ((__int64 (__fastcall *)(_QWORD, void *, PROPVARIANT *))(*v37)[5])(v37, &unk_18015B230, pvar);
        if ( v11 >= 0 )
        {
          if ( LOWORD(pvar[0]) != 65
            || LODWORD(pvar[1]) != 16
            || !v54
            || (SystemTime = *v54, !SystemTimeToFileTime(&SystemTime, &FileTime)) )
          {
            v11 = -2147467259;
          }
        }
      }
      PropVariantClear(pvar);
      if ( v37 )
        ((void (__fastcall *)(void (__fastcall ***)(_QWORD, void *, _QWORD *)))(*v37)[2])(v37);
      if ( v11 >= 0 )
      {
        v17 = v33;
        v37 = 0LL;
        v35 = 0;
        v48 = 0LL;
        v18 = sub_18000E660(v57, 13LL, L"Level:%x", a3);
        if ( v18 < 0 )
          goto LABEL_37;
        v19 = v37;
        if ( v37 != v17 )
        {
          v20 = v37;
          v19 = 0LL;
          v37 = 0LL;
          if ( v17 )
          {
            (**v17)(v17, &unk_18015B040, &v37);
            v19 = v37;
          }
          if ( v20 )
          {
            ((void (__fastcall *)(void (__fastcall ***)(_QWORD, void *, _QWORD *)))(*v20)[2])(v20);
            v19 = v37;
          }
        }
        if ( !v19 )
        {
          v18 = -2147024809;
          goto LABEL_38;
        }
        v35 = 8;
        v18 = ((__int64 (__fastcall *)(void (__fastcall ***)(_QWORD, void *, _QWORD *), _BYTE *, __int64, __int64 *, int *))(*v19)[15])(
                v19,
                v57,
                11LL,
                &v48,
                &v35);
        if ( v18 < 0 )
        {
LABEL_37:
          v19 = v37;
          goto LABEL_38;
        }
        v19 = v37;
        if ( v35 == 8 )
        {
          v21 = v48;
          v44 = v48;
        }
        else
        {
          v18 = -2147024809;
LABEL_38:
          v21 = v44;
        }
        if ( v19 )
          ((void (__fastcall *)(void (__fastcall ***)(_QWORD, void *, _QWORD *)))(*v19)[2])(v19);
        if ( v18 < 0 )
        {
          v10 = v34;
          if ( v38 > v34 || v38 == v34 && CompareFileTime(&FileTime, &v51) == 1 )
          {
            v22 = v33;
            if ( v9 != v33 )
            {
              if ( v33 )
                ((void (__fastcall *)(void (__fastcall ***)(_QWORD, void *, _QWORD *)))(*v33)[1])(v33);
              if ( v9 )
                ((void (__fastcall *)(void (__fastcall ***)(_QWORD, void *, _QWORD *)))(*v9)[2])(v9);
              v9 = v22;
              v55 = v22;
            }
            v10 = v38;
            v34 = v38;
            v51 = FileTime;
          }
          goto LABEL_50;
        }
        if ( v21 > v49 )
        {
LABEL_95:
          v30 = v38;
        }
        else
        {
          if ( v21 != v49 )
            goto LABEL_99;
          v30 = v38;
          if ( v38 <= v40 )
          {
            if ( v38 == v40 && CompareFileTime(&FileTime, &FileTime2) == 1 )
              goto LABEL_95;
LABEL_99:
            v10 = v34;
LABEL_50:
            CoTaskMemFree(pv);
            pv = 0LL;
            if ( v36 )
              ((void (__fastcall *)(void (__fastcall ***)(_QWORD, void *, _QWORD *)))(*v36)[2])(v36);
            if ( v33 )
              ((void (__fastcall *)(void (__fastcall ***)(_QWORD, void *, _QWORD *)))(*v33)[2])(v33);
            v5 = v52;
            goto LABEL_55;
          }
        }
        if ( v8 != v33 )
        {
          sub_1800579A4(&v45);
          v8 = v45;
          v30 = v38;
        }
        v49 = v21;
        v40 = v30;
        FileTime2 = FileTime;
        goto LABEL_99;
      }
      CoTaskMemFree(pv);
      pv = 0LL;
      if ( v36 )
        ((void (__fastcall *)(void (__fastcall ***)(_QWORD, void *, _QWORD *)))(*v36)[2])(v36);
      v31 = v33;
      if ( !v33 )
        goto LABEL_61;
    }
LABEL_126:
    ((void (__fastcall *)(void (__fastcall ***)(_QWORD, void *, _QWORD *)))(*v33)[2])(v31);
    goto LABEL_61;
  }
  v11 = -2147024809;
  CoTaskMemFree(v13);
  pv = 0LL;
  if ( v36 )
    ((void (__fastcall *)(void (__fastcall ***)(_QWORD, void *, _QWORD *)))(*v36)[2])(v36);
  v31 = v33;
  if ( v33 )
    goto LABEL_126;
LABEL_61:
  if ( v9 )
    ((void (__fastcall *)(void (__fastcall ***)(_QWORD, void *, _QWORD *)))(*v9)[2])(v9);
  if ( v8 )
    ((void (__fastcall *)(void (__fastcall ***)(_QWORD, void *, _QWORD *)))(*v8)[2])(v8);
  if ( v42 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v42 + 16LL))(v42);
  if ( ppv )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
  return (unsigned int)v11;
}
