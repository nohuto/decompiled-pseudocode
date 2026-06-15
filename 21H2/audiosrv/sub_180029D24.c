/*
 * XREFs of sub_180029D24 @ 0x180029D24
 * Callers:
 *     sub_180029880 @ 0x180029880 (sub_180029880.c)
 *     sub_18005535C @ 0x18005535C (sub_18005535C.c)
 *     sub_18005C280 @ 0x18005C280 (sub_18005C280.c)
 * Callees:
 *     sub_1800461B8 @ 0x1800461B8 (sub_1800461B8.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     memset @ 0x18006AB8C (memset.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_180109778 @ 0x180109778 (sub_180109778.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180029D24(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rcx
  __int64 v7; // rcx
  unsigned int v8; // ebx
  HRESULT v10; // eax
  int v11; // eax
  LPVOID v12; // rbx
  int v13; // eax
  LPVOID v14; // rbx
  int v15; // eax
  __int64 v16; // rsi
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rcx
  HRESULT Instance; // eax
  int v21; // [rsp+48h] [rbp-49h] BYREF
  _DWORD v22[3]; // [rsp+4Ch] [rbp-45h] BYREF
  LPVOID ppv; // [rsp+58h] [rbp-39h] BYREF
  __int64 v24[3]; // [rsp+60h] [rbp-31h] BYREF
  OLECHAR sz[40]; // [rsp+78h] [rbp-19h] BYREF

  v24[1] = -2LL;
  if ( a3 )
  {
    if ( *(_QWORD *)(a1 + 528) != a3 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a3 + 8LL))(a3);
      v6 = *(_QWORD *)(a1 + 528);
      *(_QWORD *)(a1 + 528) = a3;
      if ( v6 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
    v7 = *(_QWORD *)(a1 + 536);
    if ( v7 )
    {
      *(_QWORD *)(a1 + 536) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
    return (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  }
  ppv = 0LL;
  *(_QWORD *)&v22[1] = 0LL;
  sub_1800461B8(&ppv);
  v10 = CoCreateInstance(&stru_18015B088, 0LL, 0x17u, &stru_18015B0C0, &ppv);
  v8 = v10;
  if ( v10 < 0 )
  {
    if ( (unsigned int)dword_18019C480 > 2 )
    {
      v21 = v10;
      v22[0] = 37;
      v24[0] = (__int64)"SpatialAudioIO::Initialize";
      sub_180109778((int)&dword_18019C480, (__int64)v24, (__int64)v22, (__int64)&v21);
    }
LABEL_12:
    sub_1800461B8(&v22[1]);
    sub_1800461B8(&ppv);
    return v8;
  }
  memset(sz, 0, 0x4EuLL);
  v11 = StringFromGUID2(&rguid, sz, 39);
  v8 = v11;
  if ( v11 < 0 )
  {
    if ( (unsigned int)dword_18019C480 > 2 )
    {
      v22[0] = v11;
      v21 = 41;
      v24[0] = (__int64)"SpatialAudioIO::Initialize";
      sub_180109778((int)&dword_18019C480, (__int64)v24, (__int64)&v21, (__int64)v22);
    }
    goto LABEL_12;
  }
  if ( a2 && (unsigned int)o__wcsicmp(a2, sz) )
  {
    v12 = ppv;
    sub_1800461B8(&v22[1]);
    v13 = (*(__int64 (__fastcall **)(LPVOID, __int64, _DWORD *))(*(_QWORD *)v12 + 40LL))(v12, a2, &v22[1]);
    v8 = v13;
    if ( v13 < 0 )
    {
      if ( (unsigned int)dword_18019C480 > 2 )
      {
        v22[0] = v13;
        v21 = 51;
        v24[0] = (__int64)"SpatialAudioIO::Initialize";
        sub_180109778((int)&dword_18019C480, (__int64)v24, (__int64)&v21, (__int64)v22);
      }
      goto LABEL_12;
    }
  }
  else
  {
    v14 = ppv;
    sub_1800461B8(&v22[1]);
    v15 = (*(__int64 (__fastcall **)(LPVOID, _QWORD, __int64, _DWORD *))(*(_QWORD *)v14 + 32LL))(v14, 0LL, 1LL, &v22[1]);
    v8 = v15;
    if ( v15 < 0 )
    {
      if ( (unsigned int)dword_18019C480 > 2 )
      {
        v22[0] = v15;
        v21 = 46;
        v24[0] = (__int64)"SpatialAudioIO::Initialize";
        sub_180109778((int)&dword_18019C480, (__int64)v24, (__int64)&v21, (__int64)v22);
      }
      goto LABEL_12;
    }
  }
  v16 = *(_QWORD *)&v22[1];
  v17 = *(_QWORD *)(a1 + 528);
  if ( v17 )
  {
    *(_QWORD *)(a1 + 528) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
  v18 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v16 + 32LL))(v16, 0LL, a1 + 528);
  v8 = v18;
  if ( v18 < 0 )
  {
    if ( (unsigned int)dword_18019C480 > 2 )
    {
      v22[0] = v18;
      v21 = 55;
      v24[0] = (__int64)"SpatialAudioIO::Initialize";
      sub_180109778((int)&dword_18019C480, (__int64)v24, (__int64)&v21, (__int64)v22);
    }
    goto LABEL_12;
  }
  v19 = *(_QWORD *)(a1 + 536);
  if ( v19 )
  {
    *(_QWORD *)(a1 + 536) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  }
  Instance = CoCreateInstance(&stru_18015E970, 0LL, 1u, &stru_18015B920, (LPVOID *)(a1 + 536));
  v8 = Instance;
  if ( Instance < 0 )
  {
    if ( (unsigned int)dword_18019C480 > 2 )
    {
      v22[0] = Instance;
      v21 = 58;
      v24[0] = (__int64)"SpatialAudioIO::Initialize";
      sub_180109778((int)&dword_18019C480, (__int64)v24, (__int64)&v21, (__int64)v22);
    }
    goto LABEL_12;
  }
  sub_1800461B8(&v22[1]);
  sub_1800461B8(&ppv);
  return (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
}
