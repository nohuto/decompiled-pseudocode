/*
 * XREFs of sub_18005B330 @ 0x18005B330
 * Callers:
 *     <none>
 * Callees:
 *     sub_18005B54C @ 0x18005B54C (sub_18005B54C.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_180109778 @ 0x180109778 (sub_180109778.c)
 */

__int64 __fastcall sub_18005B330(__int64 a1, __int128 *a2, __int64 a3, unsigned int a4)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  unsigned __int64 v5; // r14
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // r14
  unsigned __int64 v11; // rcx
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  int v16; // eax
  unsigned int v17; // ebx
  int v18; // eax
  unsigned int v19; // r15d
  __int64 v20; // rcx
  int v21; // eax
  int v23; // [rsp+40h] [rbp-99h] BYREF
  int v24; // [rsp+44h] [rbp-95h] BYREF
  __int64 v25; // [rsp+48h] [rbp-91h] BYREF
  __int128 v26; // [rsp+50h] [rbp-89h] BYREF
  int *v27; // [rsp+60h] [rbp-79h]
  __int128 v28; // [rsp+70h] [rbp-69h] BYREF
  int v29; // [rsp+80h] [rbp-59h]
  int v30; // [rsp+90h] [rbp-49h] BYREF
  __int128 v31; // [rsp+94h] [rbp-45h]
  __int128 v32; // [rsp+A4h] [rbp-35h]
  __int128 v33; // [rsp+B4h] [rbp-25h]
  __int128 v34; // [rsp+C4h] [rbp-15h]
  __int64 v35; // [rsp+D4h] [rbp-5h]

  v4 = (struct _RTL_CRITICAL_SECTION *)(a1 + 48);
  v5 = a4;
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 48));
  if ( v4 )
    LeaveCriticalSection(v4);
  v9 = v5;
  v10 = v5 / 0x342;
  v11 = v9 - 834 * v10;
  if ( !a2 || v11 )
  {
    if ( (unsigned int)dword_18019C480 > 2 )
    {
      v23 = 466;
      goto LABEL_28;
    }
    return (unsigned int)-2147024809;
  }
  v12 = *a2;
  v30 = 1509949441;
  v13 = a2[1];
  v27 = &v30;
  v31 = v12;
  v14 = a2[2];
  v29 = 2;
  v32 = v13;
  v15 = a2[3];
  v33 = v14;
  v35 = *((_QWORD *)a2 + 8);
  v34 = v15;
  v28 = xmmword_18015B680;
  v26 = 0LL;
  LOWORD(v26) = 65;
  DWORD2(v26) = 76;
  v16 = sub_18005B54C(a1, &v28, &v26);
  v17 = v16;
  if ( v16 < 0 )
  {
    if ( (unsigned int)dword_18019C480 > 2 )
    {
      v23 = v16;
      v24 = 482;
      v25 = (__int64)"SpatialAudioDevicePropertyWriter::SetDeviceSettings";
      sub_180109778((int)&dword_18019C480, (__int64)&v25, (__int64)&v24, (__int64)&v23);
    }
    return v17;
  }
  v26 = 0LL;
  v27 = 0LL;
  v28 = xmmword_18015B698;
  LOWORD(v26) = 2;
  WORD4(v26) = v10;
  v29 = 2;
  v18 = sub_18005B54C(a1, &v28, &v26);
  v17 = v18;
  if ( v18 < 0 )
  {
    if ( (unsigned int)dword_18019C480 > 2 )
    {
      v24 = v18;
      v23 = 489;
      v25 = (__int64)"SpatialAudioDevicePropertyWriter::SetDeviceSettings";
      sub_180109778((int)&dword_18019C480, (__int64)&v25, (__int64)&v23, (__int64)&v24);
    }
    return v17;
  }
  if ( !(_DWORD)v10 )
  {
LABEL_14:
    if ( !*(_DWORD *)(a1 + 96) )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 32LL))(a1);
    return v17;
  }
  if ( !a3 )
  {
    if ( (unsigned int)dword_18019C480 > 2 )
    {
      v23 = 493;
LABEL_28:
      v25 = (__int64)"SpatialAudioDevicePropertyWriter::SetDeviceSettings";
      v24 = -2147024809;
      sub_180109778((int)&dword_18019C480, (__int64)&v25, (__int64)&v23, (__int64)&v24);
      return (unsigned int)-2147024809;
    }
    return (unsigned int)-2147024809;
  }
  v19 = 0;
  while ( 1 )
  {
    v28 = xmmword_180160950;
    v26 = 0LL;
    LOWORD(v26) = 65;
    DWORD2(v26) = 834;
    v27 = (int *)(a3 + 834LL * v19);
    v20 = *(_QWORD *)(a1 + 104);
    v29 = v19 + 2;
    v21 = v20
        ? (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int128 *, __int128 *))(*(_QWORD *)v20 + 96LL))(
            v20,
            a1 + 112,
            0LL,
            &v28,
            &v26)
        : (*(unsigned __int64 (__fastcall **)(_QWORD, __int128 *, __int128 *))(**(_QWORD **)(a1 + 88) + 48LL))(
            *(_QWORD *)(a1 + 88),
            &v28,
            &v26);
    v17 = v21;
    if ( v21 < 0 )
      break;
    if ( ++v19 >= (unsigned int)v10 )
      goto LABEL_14;
  }
  if ( (unsigned int)dword_18019C480 > 2 )
  {
    v24 = v21;
    v25 = (__int64)"SpatialAudioDevicePropertyWriter::SetDeviceSettings";
    v23 = 506;
    sub_180109778((int)&dword_18019C480, (__int64)&v25, (__int64)&v23, (__int64)&v24);
  }
  return v17;
}
