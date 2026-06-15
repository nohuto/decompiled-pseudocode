/*
 * XREFs of sub_18001BBB0 @ 0x18001BBB0
 * Callers:
 *     sub_18001CFF0 @ 0x18001CFF0 (sub_18001CFF0.c)
 * Callees:
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     sub_18006A1B0 @ 0x18006A1B0 (sub_18006A1B0.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_180109778 @ 0x180109778 (sub_180109778.c)
 */

__int64 __fastcall sub_18001BBB0(__int64 a1)
{
  __int64 v2; // rcx
  int v3; // eax
  unsigned int v4; // esi
  unsigned int v5; // ebx
  bool v6; // zf
  _OWORD *v7; // rax
  int v8; // eax
  unsigned int v9; // eax
  __int64 v10; // rax
  unsigned __int64 v11; // kr00_8
  __int64 v12; // rax
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rcx
  _OWORD *v16; // rax
  __int64 v17; // rdx
  __int128 v18; // xmm0
  __int64 v20; // [rsp+40h] [rbp+7h] BYREF
  __int64 v21; // [rsp+48h] [rbp+Fh] BYREF
  PROPVARIANT pvar[2]; // [rsp+50h] [rbp+17h] BYREF
  _OWORD *v23; // [rsp+60h] [rbp+27h]
  __int128 v24; // [rsp+68h] [rbp+2Fh] BYREF
  unsigned int v25; // [rsp+78h] [rbp+3Fh]

  v23 = 0LL;
  v2 = *(_QWORD *)(a1 + 408);
  *(_OWORD *)pvar = 0LL;
  v3 = (*(__int64 (__fastcall **)(__int64, __int128 *, PROPVARIANT *))(*(_QWORD *)v2 + 40LL))(
         v2,
         &xmmword_18015B680,
         pvar);
  v4 = v3;
  if ( v3 < 0 )
  {
    if ( (unsigned int)dword_18019C480 > 2 )
    {
      v20 = (unsigned int)v3 | 0x16400000000LL;
      v21 = (__int64)"SpatialAudioDevicePropertyReader::LoadDeviceSettings";
      sub_180109778((int)&dword_18019C480, (__int64)&v21, (__int64)&v20 + 4, (__int64)&v20);
    }
    goto LABEL_17;
  }
  v4 = -2004286463;
  v5 = 0;
  v6 = LOWORD(pvar[0]) == 65;
  *(_DWORD *)(a1 + 512) = 0;
  if ( !v6
    || LODWORD(pvar[1]) != 76
    || (v7 = v23,
        *(_OWORD *)(a1 + 428) = *v23,
        *(_OWORD *)(a1 + 444) = v7[1],
        *(_OWORD *)(a1 + 460) = v7[2],
        *(_OWORD *)(a1 + 476) = v7[3],
        *(_QWORD *)(a1 + 492) = *((_QWORD *)v7 + 8),
        *(_DWORD *)(a1 + 500) = *((_DWORD *)v7 + 18),
        *(_DWORD *)(a1 + 428) != 1509949441) )
  {
    if ( (unsigned int)dword_18019C480 <= 2 )
      goto LABEL_17;
    v20 = 0x8889040100000173uLL;
    goto LABEL_36;
  }
  *(_DWORD *)(a1 + 512) = 1;
  PropVariantClear(pvar);
  v8 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, PROPVARIANT *))(**(_QWORD **)(a1 + 408) + 40LL))(
         *(_QWORD *)(a1 + 408),
         &xmmword_18015B698,
         pvar);
  v4 = v8;
  if ( v8 < 0 )
  {
    if ( (unsigned int)dword_18019C480 <= 2 )
      goto LABEL_17;
    HIDWORD(v20) = v8;
    LODWORD(v20) = 376;
LABEL_36:
    v21 = (__int64)"SpatialAudioDevicePropertyReader::LoadDeviceSettings";
    sub_180109778((int)&dword_18019C480, (__int64)&v21, (__int64)&v20, (__int64)&v20 + 4);
    goto LABEL_17;
  }
  if ( LOWORD(pvar[0]) != 2 )
  {
    if ( (unsigned int)dword_18019C480 > 2 )
    {
      LODWORD(v20) = 378;
LABEL_28:
      v21 = (__int64)"SpatialAudioDevicePropertyReader::LoadDeviceSettings";
      HIDWORD(v20) = -2147024809;
      sub_180109778((int)&dword_18019C480, (__int64)&v21, (__int64)&v20, (__int64)&v20 + 4);
    }
LABEL_29:
    v4 = -2147024809;
    goto LABEL_17;
  }
  v9 = SLOWORD(pvar[1]);
  if ( (unsigned int)SLOWORD(pvar[1]) > 8 )
  {
    if ( (unsigned int)dword_18019C480 > 2 )
    {
      LODWORD(v20) = 379;
      goto LABEL_28;
    }
    goto LABEL_29;
  }
  *(_DWORD *)(a1 + 424) = SLOWORD(pvar[1]);
  v11 = v9;
  v10 = 834LL * v9;
  if ( !is_mul_ok(v11, 0x342uLL) )
    v10 = -1LL;
  v12 = sub_18006A1B0(v10, &unk_18019F848);
  *(_QWORD *)(a1 + 504) = v12;
  if ( !v12 )
  {
    v4 = -2147024882;
    if ( (unsigned int)dword_18019C480 <= 2 )
      goto LABEL_17;
    v20 = 0x8007000E00000180uLL;
    goto LABEL_36;
  }
  v4 = 0;
  if ( *(_DWORD *)(a1 + 424) )
  {
    while ( 1 )
    {
      v13 = *(_QWORD *)(a1 + 408);
      v25 = v5 + 2;
      v24 = xmmword_180160950;
      v14 = (*(__int64 (__fastcall **)(__int64, __int128 *, PROPVARIANT *))(*(_QWORD *)v13 + 40LL))(v13, &v24, pvar);
      v4 = v14;
      if ( v14 < 0 )
        break;
      if ( LOWORD(pvar[0]) != 65 )
      {
        if ( (unsigned int)dword_18019C480 <= 2 )
          goto LABEL_29;
        LODWORD(v20) = 395;
        goto LABEL_28;
      }
      v15 = 6LL;
      v16 = v23;
      v17 = *(_QWORD *)(a1 + 504) + 834LL * v5;
      do
      {
        v17 += 128LL;
        v18 = *v16;
        v16 += 8;
        *(_OWORD *)(v17 - 128) = v18;
        *(_OWORD *)(v17 - 112) = *(v16 - 7);
        *(_OWORD *)(v17 - 96) = *(v16 - 6);
        *(_OWORD *)(v17 - 80) = *(v16 - 5);
        *(_OWORD *)(v17 - 64) = *(v16 - 4);
        *(_OWORD *)(v17 - 48) = *(v16 - 3);
        *(_OWORD *)(v17 - 32) = *(v16 - 2);
        *(_OWORD *)(v17 - 16) = *(v16 - 1);
        --v15;
      }
      while ( v15 );
      *(_OWORD *)v17 = *v16;
      *(_OWORD *)(v17 + 16) = v16[1];
      *(_OWORD *)(v17 + 32) = v16[2];
      *(_OWORD *)(v17 + 48) = v16[3];
      *(_WORD *)(v17 + 64) = *((_WORD *)v16 + 32);
      PropVariantClear(pvar);
      if ( ++v5 >= *(_DWORD *)(a1 + 424) )
        goto LABEL_17;
    }
    if ( (unsigned int)dword_18019C480 <= 2 )
      goto LABEL_17;
    HIDWORD(v20) = v14;
    LODWORD(v20) = 393;
    goto LABEL_36;
  }
LABEL_17:
  PropVariantClear(pvar);
  return v4;
}
