/*
 * XREFs of sub_180057BD8 @ 0x180057BD8
 * Callers:
 *     sub_18005C490 @ 0x18005C490 (sub_18005C490.c)
 * Callees:
 *     sub_1800042D4 @ 0x1800042D4 (sub_1800042D4.c)
 *     sub_1800461B8 @ 0x1800461B8 (sub_1800461B8.c)
 *     sub_180057300 @ 0x180057300 (sub_180057300.c)
 *     sub_180057C80 @ 0x180057C80 (sub_180057C80.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     memset @ 0x18006AB8C (memset.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_180109778 @ 0x180109778 (sub_180109778.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180057BD8(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v6; // ebx
  char *v7; // r15
  _WORD *v8; // rcx
  __int64 v9; // rcx
  int v11; // eax
  HRESULT v12; // eax
  LPVOID v13; // rbx
  HRESULT Instance; // eax
  LPVOID v15; // rbx
  __int64 v16; // rsi
  __int64 v17; // rcx
  LPVOID *v18; // rdi
  LPVOID v19; // rcx
  int v20; // [rsp+48h] [rbp-59h] BYREF
  int v21; // [rsp+4Ch] [rbp-55h] BYREF
  __int64 v22; // [rsp+50h] [rbp-51h] BYREF
  LPVOID ppv; // [rsp+58h] [rbp-49h] BYREF
  LPVOID pv; // [rsp+60h] [rbp-41h] BYREF
  _QWORD v25[2]; // [rsp+68h] [rbp-39h] BYREF
  OLECHAR sz[40]; // [rsp+78h] [rbp-29h] BYREF

  v25[1] = -2LL;
  v6 = 0;
  *(_DWORD *)(a1 + 96) = 0;
  v7 = (char *)(a1 + 112);
  v8 = (_WORD *)(a1 + 112);
  if ( a2 )
    sub_180057300(v8, 260LL, a2);
  else
    memset(v8, 0, 0x208uLL);
  if ( !a3 )
  {
    ppv = 0LL;
    v22 = 0LL;
    memset(sz, 0, 0x4EuLL);
    v11 = StringFromGUID2(&rguid, sz, 39);
    v6 = v11;
    if ( v11 < 0 )
    {
      if ( (unsigned int)dword_18019C480 > 2 )
      {
        v20 = v11;
        v21 = 123;
        pv = "SpatialAudioDevicePropertyWriter::RuntimeClassInitialize";
        sub_180109778((int)&dword_18019C480, (__int64)&pv, (__int64)&v21, (__int64)&v20);
      }
      goto LABEL_34;
    }
    sub_1800461B8((__int64 *)&ppv);
    v12 = CoCreateInstance(&stru_18015B088, 0LL, 0x17u, &stru_18015B0C0, &ppv);
    v6 = v12;
    if ( v12 < 0 )
    {
      if ( (unsigned int)dword_18019C480 > 2 )
      {
        v21 = v12;
        v20 = 126;
        pv = "SpatialAudioDevicePropertyWriter::RuntimeClassInitialize";
        sub_180109778((int)&dword_18019C480, (__int64)&pv, (__int64)&v20, (__int64)&v21);
      }
      goto LABEL_34;
    }
    if ( !a2 || !(unsigned int)o__wcsicmp(a2, sz) )
    {
      v13 = ppv;
      sub_1800461B8(&v22);
      Instance = (*(__int64 (__fastcall **)(LPVOID, _QWORD, __int64, __int64 *))(*(_QWORD *)v13 + 32LL))(
                   v13,
                   0LL,
                   1LL,
                   &v22);
      v6 = Instance;
      if ( Instance < 0 )
      {
        if ( (unsigned int)dword_18019C480 > 2 )
        {
          v20 = 131;
LABEL_33:
          v21 = Instance;
          v25[0] = "SpatialAudioDevicePropertyWriter::RuntimeClassInitialize";
          sub_180109778((int)&dword_18019C480, (__int64)v25, (__int64)&v20, (__int64)&v21);
          goto LABEL_34;
        }
        goto LABEL_34;
      }
      pv = 0LL;
      (*(void (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v22 + 40LL))(v22, &pv);
      sub_1800042D4(v7, 0x104uLL, (const char *)L"%s", pv);
      CoTaskMemFree(pv);
    }
    v15 = ppv;
    sub_1800461B8(&v22);
    Instance = (*(__int64 (__fastcall **)(LPVOID, char *, __int64 *))(*(_QWORD *)v15 + 40LL))(v15, v7, &v22);
    v6 = Instance;
    if ( Instance >= 0 )
    {
      v16 = v22;
      v17 = *(_QWORD *)(a1 + 88);
      if ( v17 )
      {
        *(_QWORD *)(a1 + 88) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
      }
      Instance = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v16 + 32LL))(v16, 0LL, a1 + 88);
      v6 = Instance;
      if ( Instance >= 0 )
      {
        v18 = (LPVOID *)(a1 + 104);
        v19 = *v18;
        if ( *v18 )
        {
          *v18 = 0LL;
          (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v19 + 16LL))(v19);
        }
        Instance = CoCreateInstance(&stru_18015E970, 0LL, 1u, &stru_18015B920, v18);
        v6 = Instance;
        if ( Instance >= 0 || (unsigned int)dword_18019C480 <= 2 )
          goto LABEL_34;
        v20 = 147;
        goto LABEL_33;
      }
      if ( (unsigned int)dword_18019C480 > 2 )
      {
        v20 = 144;
        goto LABEL_33;
      }
    }
    else if ( (unsigned int)dword_18019C480 > 2 )
    {
      v20 = 141;
      goto LABEL_33;
    }
LABEL_34:
    sub_1800461B8(&v22);
    sub_1800461B8((__int64 *)&ppv);
    return v6;
  }
  sub_180057C80(a1 + 88, a3);
  v9 = *(_QWORD *)(a1 + 104);
  if ( v9 )
  {
    *(_QWORD *)(a1 + 104) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  return v6;
}
