/*
 * XREFs of sub_18001BB10 @ 0x18001BB10
 * Callers:
 *     sub_18001CFF0 @ 0x18001CFF0 (sub_18001CFF0.c)
 * Callees:
 *     sub_1800461B8 @ 0x1800461B8 (sub_1800461B8.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_180109778 @ 0x180109778 (sub_180109778.c)
 *     sub_18012BA50 @ 0x18012BA50 (sub_18012BA50.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18001BB10(__int64 a1, _DWORD *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  _OWORD *v7; // rax
  __int64 v8; // rdx
  int v9; // eax
  __int64 v10[2]; // [rsp+40h] [rbp-30h] BYREF
  PROPVARIANT pvar[2]; // [rsp+50h] [rbp-20h] BYREF
  _OWORD *v12; // [rsp+60h] [rbp-10h]
  __int64 v13; // [rsp+90h] [rbp+20h] BYREF
  __int64 v14; // [rsp+A0h] [rbp+30h] BYREF
  __int64 v15; // [rsp+A8h] [rbp+38h] BYREF

  v10[1] = -2LL;
  *(_OWORD *)pvar = 0LL;
  v12 = 0LL;
  v4 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, PROPVARIANT *))(**(_QWORD **)(a1 + 408) + 40LL))(
         *(_QWORD *)(a1 + 408),
         &xmmword_18015B6B0,
         pvar);
  v5 = v4;
  if ( v4 >= 0 )
  {
    if ( LODWORD(pvar[1]) == 146 && LOWORD(pvar[0]) == 65 )
    {
      v7 = v12;
      *(_OWORD *)(a1 + 104) = *v12;
      *(_OWORD *)(a1 + 120) = v7[1];
      *(_OWORD *)(a1 + 136) = v7[2];
      *(_OWORD *)(a1 + 152) = v7[3];
      *(_OWORD *)(a1 + 168) = v7[4];
      *(_OWORD *)(a1 + 184) = v7[5];
      *(_OWORD *)(a1 + 200) = v7[6];
      *(_OWORD *)(a1 + 216) = v7[7];
      *(_OWORD *)(a1 + 232) = v7[8];
      *(_WORD *)(a1 + 248) = *((_WORD *)v7 + 72);
      if ( *(_DWORD *)(a1 + 104) == 1509949441 )
      {
        *a2 = 0;
        v5 = 0;
      }
    }
    if ( *a2 )
      goto LABEL_4;
    v15 = 0LL;
    sub_1800461B8(&v15);
    v9 = sub_18012BA50(a1 + 108, v8, &v15);
    v5 = v9;
    if ( v9 >= 0 )
    {
      v9 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v15 + 32LL))(v15, a1 + 250);
      v5 = v9;
      if ( v9 >= 0 || (unsigned int)dword_18019C480 <= 2 )
        goto LABEL_17;
      LODWORD(v14) = 339;
    }
    else
    {
      if ( (unsigned int)dword_18019C480 <= 2 )
      {
LABEL_17:
        sub_1800461B8(&v15);
        goto LABEL_4;
      }
      LODWORD(v14) = 336;
    }
    LODWORD(v13) = v9;
    v10[0] = (__int64)"SpatialAudioDevicePropertyReader::LoadDeviceProperties";
    sub_180109778((int)&dword_18019C480, (__int64)v10, (__int64)&v14, (__int64)&v13);
    goto LABEL_17;
  }
  if ( (unsigned int)dword_18019C480 > 2 )
  {
    LODWORD(v13) = v4;
    LODWORD(v14) = 317;
    v15 = (__int64)"SpatialAudioDevicePropertyReader::LoadDeviceProperties";
    sub_180109778((int)&dword_18019C480, (__int64)&v15, (__int64)&v14, (__int64)&v13);
  }
LABEL_4:
  PropVariantClear(pvar);
  return v5;
}
