/*
 * XREFs of sub_180029880 @ 0x180029880
 * Callers:
 *     sub_1800296D4 @ 0x1800296D4 (sub_1800296D4.c)
 * Callees:
 *     sub_180029B80 @ 0x180029B80 (sub_180029B80.c)
 *     sub_180029D24 @ 0x180029D24 (sub_180029D24.c)
 *     sub_1800461B8 @ 0x1800461B8 (sub_1800461B8.c)
 *     sub_180068310 @ 0x180068310 (sub_180068310.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     sub_18006A18C @ 0x18006A18C (sub_18006A18C.c)
 *     memset @ 0x18006AB8C (memset.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_180109778 @ 0x180109778 (sub_180109778.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180029880(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // r15
  __int64 v10; // rcx
  LPUNKNOWN v11; // rcx
  int v12; // r14d
  unsigned int v13; // ebx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  int v17; // eax
  int v18; // eax
  HRESULT v20; // eax
  int v21; // eax
  LPVOID v22; // rbx
  int v23; // eax
  LPVOID v24; // rbx
  int v25; // eax
  __int64 v26; // rsi
  __int64 v27; // rcx
  int v28; // eax
  __int64 v29; // [rsp+40h] [rbp-C0h] BYREF
  LPVOID ppv; // [rsp+48h] [rbp-B8h] BYREF
  LPUNKNOWN ppunkMarshal; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v32; // [rsp+58h] [rbp-A8h]
  HRESULT v33; // [rsp+60h] [rbp-A0h] BYREF
  int v34; // [rsp+64h] [rbp-9Ch] BYREF
  int v35; // [rsp+68h] [rbp-98h] BYREF
  int v36; // [rsp+6Ch] [rbp-94h] BYREF
  int v37; // [rsp+70h] [rbp-90h] BYREF
  int v38; // [rsp+74h] [rbp-8Ch] BYREF
  int v39; // [rsp+78h] [rbp-88h] BYREF
  int v40; // [rsp+7Ch] [rbp-84h] BYREF
  int v41; // [rsp+80h] [rbp-80h] BYREF
  int v42; // [rsp+84h] [rbp-7Ch] BYREF
  int v43; // [rsp+88h] [rbp-78h] BYREF
  int v44; // [rsp+8Ch] [rbp-74h] BYREF
  int v45; // [rsp+90h] [rbp-70h] BYREF
  int v46; // [rsp+94h] [rbp-6Ch] BYREF
  int v47; // [rsp+98h] [rbp-68h] BYREF
  int v48; // [rsp+9Ch] [rbp-64h] BYREF
  unsigned int v49; // [rsp+A0h] [rbp-60h] BYREF
  int v50; // [rsp+A4h] [rbp-5Ch] BYREF
  __int64 v51; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v52; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v53; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v54; // [rsp+C0h] [rbp-40h] BYREF
  const char *v55; // [rsp+C8h] [rbp-38h] BYREF
  const char *v56; // [rsp+D0h] [rbp-30h] BYREF
  const char *v57; // [rsp+D8h] [rbp-28h] BYREF
  const char *v58; // [rsp+E0h] [rbp-20h] BYREF
  const char *v59; // [rsp+E8h] [rbp-18h] BYREF
  _QWORD v60[2]; // [rsp+F0h] [rbp-10h] BYREF
  OLECHAR sz[40]; // [rsp+100h] [rbp+0h] BYREF

  v60[1] = -2LL;
  v6 = a1[52];
  if ( v6 )
  {
    a1[52] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  a1[52] = 0LL;
  v32 = 0LL;
  v7 = sub_18006A18C(616LL, &unk_18019F848);
  v8 = v7;
  if ( v7 )
  {
    memset((void *)(v7 + 8), 0, 0x208uLL);
    *(_QWORD *)(v8 + 528) = 0LL;
    *(_QWORD *)(v8 + 536) = 0LL;
    *(_QWORD *)v8 = off_180146F18;
    *(_OWORD *)(v8 + 544) = 0LL;
    *(_QWORD *)(v8 + 560) = 0LL;
    v9 = v8 + 568;
    *(_QWORD *)(v8 + 576) = &off_180146ED0;
    *(_QWORD *)(v8 + 600) = 0LL;
    ppunkMarshal = 0LL;
    if ( CoCreateFreeThreadedMarshaler(0LL, &ppunkMarshal) >= 0 )
    {
      v10 = *(_QWORD *)(v8 + 600);
      if ( v10 )
      {
        *(_QWORD *)(v8 + 600) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      }
      ((void (__fastcall *)(LPUNKNOWN, void *, __int64))ppunkMarshal->lpVtbl->QueryInterface)(
        ppunkMarshal,
        &unk_18015B8E0,
        v8 + 600);
    }
    v11 = ppunkMarshal;
    if ( ppunkMarshal )
    {
      ppunkMarshal = 0LL;
      ((void (__fastcall *)(LPUNKNOWN))v11->lpVtbl->Release)(v11);
    }
    *(_DWORD *)(v8 + 612) = 1;
    *(_QWORD *)v9 = off_180146DF8;
    *(_QWORD *)(v8 + 576) = off_180146D60;
    if ( qword_18019E418 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_18019E418 + 8LL))(qword_18019E418);
    *(_QWORD *)v8 = &off_180146DE8;
    *(_QWORD *)v9 = off_180146DA8;
    *(_QWORD *)(v8 + 576) = off_180146D60;
    v51 = v8;
    v12 = sub_180029D24(v8, a2, a3);
    if ( v12 < 0 || (v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8), v12 < 0) )
    {
      sub_180068310(&v51);
    }
    else
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v8 + 568);
      v32 = v8;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v8 + 568);
      v12 = 0;
    }
    v13 = v12;
    if ( v12 >= 0 )
    {
      v13 = (**(__int64 (__fastcall ***)(__int64, void *, __int64))(v32 + 568))(
              v32 + 568,
              &unk_18015B8C0,
              (__int64)(a1 + 52));
      goto LABEL_17;
    }
  }
  else
  {
    v12 = -2147024882;
    v13 = -2147024882;
  }
  if ( (unsigned int)dword_18019C480 > 2 )
  {
    v47 = v12;
    v48 = 53;
    v52 = (__int64)"Create_SpatialAudioDeviceStateReader";
    sub_180109778((int)&dword_18019C480, (__int64)&v52, (__int64)&v48, (__int64)&v47);
  }
LABEL_17:
  v14 = v32;
  if ( v32 )
  {
    v32 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(v14 + 568) + 16LL))(v14 + 568);
  }
  if ( (v13 & 0x80000000) == 0 )
  {
    if ( a3 )
    {
      if ( a1[51] != a3 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a3 + 8LL))(a3);
        v15 = a1[51];
        a1[51] = a3;
        if ( v15 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
      }
      goto LABEL_24;
    }
    ppv = 0LL;
    v29 = 0LL;
    sub_1800461B8(&ppv);
    v20 = CoCreateInstance(&stru_18015B088, 0LL, 0x17u, &stru_18015B0C0, &ppv);
    v13 = v20;
    if ( v20 >= 0 )
    {
      memset(sz, 0, 0x4EuLL);
      v21 = StringFromGUID2(&rguid, sz, 39);
      v13 = v21;
      if ( v21 >= 0 )
      {
        if ( a2 && (unsigned int)o__wcsicmp(a2, sz) )
        {
          v22 = ppv;
          sub_1800461B8(&v29);
          v23 = (*(__int64 (__fastcall **)(LPVOID, __int64, __int64 *))(*(_QWORD *)v22 + 40LL))(v22, a2, &v29);
          v13 = v23;
          if ( v23 < 0 )
          {
            if ( (unsigned int)dword_18019C480 > 2 )
            {
              v37 = v23;
              v38 = 227;
              v56 = "SpatialAudioDevicePropertyReader::RuntimeClassInitialize";
              sub_180109778((int)&dword_18019C480, (__int64)&v56, (__int64)&v38, (__int64)&v37);
            }
            goto LABEL_38;
          }
        }
        else
        {
          v24 = ppv;
          sub_1800461B8(&v29);
          v25 = (*(__int64 (__fastcall **)(LPVOID, _QWORD, __int64, __int64 *))(*(_QWORD *)v24 + 32LL))(
                  v24,
                  0LL,
                  1LL,
                  &v29);
          v13 = v25;
          if ( v25 < 0 )
          {
            if ( (unsigned int)dword_18019C480 > 2 )
            {
              v39 = v25;
              v40 = 222;
              v57 = "SpatialAudioDevicePropertyReader::RuntimeClassInitialize";
              sub_180109778((int)&dword_18019C480, (__int64)&v57, (__int64)&v40, (__int64)&v39);
            }
            goto LABEL_38;
          }
        }
        v26 = v29;
        v27 = a1[51];
        if ( v27 )
        {
          a1[51] = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
        }
        v28 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD *))(*(_QWORD *)v26 + 32LL))(v26, 0LL, a1 + 51);
        v13 = v28;
        if ( v28 >= 0 )
        {
          sub_1800461B8(&v29);
          sub_1800461B8(&ppv);
LABEL_24:
          v16 = a1[50];
          if ( v16 )
          {
            a1[50] = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
          }
          v17 = sub_180029B80(a1 + 50);
          v13 = v17;
          if ( v17 < 0 )
          {
            if ( (unsigned int)dword_18019C480 > 2 )
            {
              v43 = v17;
              v44 = 236;
              v59 = "SpatialAudioDevicePropertyReader::RuntimeClassInitialize";
              sub_180109778((int)&dword_18019C480, (__int64)&v59, (__int64)&v44, (__int64)&v43);
            }
          }
          else
          {
            v18 = (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 24LL))(a1);
            v13 = v18;
            if ( v18 < 0 && (unsigned int)dword_18019C480 > 2 )
            {
              v45 = v18;
              v46 = 240;
              v60[0] = "SpatialAudioDevicePropertyReader::RuntimeClassInitialize";
              sub_180109778((int)&dword_18019C480, (__int64)v60, (__int64)&v46, (__int64)&v45);
            }
          }
          return v13;
        }
        if ( (unsigned int)dword_18019C480 > 2 )
        {
          v41 = v28;
          v42 = 231;
          v58 = "SpatialAudioDevicePropertyReader::RuntimeClassInitialize";
          sub_180109778((int)&dword_18019C480, (__int64)&v58, (__int64)&v42, (__int64)&v41);
        }
      }
      else if ( (unsigned int)dword_18019C480 > 2 )
      {
        v35 = v21;
        v36 = 217;
        v55 = "SpatialAudioDevicePropertyReader::RuntimeClassInitialize";
        sub_180109778((int)&dword_18019C480, (__int64)&v55, (__int64)&v36, (__int64)&v35);
      }
    }
    else if ( (unsigned int)dword_18019C480 > 2 )
    {
      v33 = v20;
      v34 = 213;
      v54 = (__int64)"SpatialAudioDevicePropertyReader::RuntimeClassInitialize";
      sub_180109778((int)&dword_18019C480, (__int64)&v54, (__int64)&v34, (__int64)&v33);
    }
LABEL_38:
    sub_1800461B8(&v29);
    sub_1800461B8(&ppv);
    return v13;
  }
  if ( (unsigned int)dword_18019C480 > 2 )
  {
    v49 = v13;
    v50 = 201;
    v53 = (__int64)"SpatialAudioDevicePropertyReader::RuntimeClassInitialize";
    sub_180109778((int)&dword_18019C480, (__int64)&v53, (__int64)&v50, (__int64)&v49);
  }
  return v13;
}
