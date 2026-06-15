/*
 * XREFs of sub_180127FF8 @ 0x180127FF8
 * Callers:
 *     sub_180127590 @ 0x180127590 (sub_180127590.c)
 *     sub_180128AF0 @ 0x180128AF0 (sub_180128AF0.c)
 * Callees:
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_180109778 @ 0x180109778 (sub_180109778.c)
 */

__int64 __fastcall sub_180127FF8(__int64 a1, _QWORD *a2, _WORD *a3, __int64 a4)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  unsigned __int16 v8; // si
  int v9; // eax
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int v12; // ebx
  unsigned __int16 v13; // r15
  int v14; // eax
  __int64 v15; // rax
  int v17; // [rsp+40h] [rbp-29h] BYREF
  int v18; // [rsp+44h] [rbp-25h] BYREF
  __int64 v19; // [rsp+48h] [rbp-21h] BYREF
  PROPVARIANT pvar[2]; // [rsp+50h] [rbp-19h] BYREF
  __int64 v21; // [rsp+60h] [rbp-9h]
  __int128 v22; // [rsp+68h] [rbp-1h] BYREF
  int v23; // [rsp+78h] [rbp+Fh]

  v4 = (struct _RTL_CRITICAL_SECTION *)(a1 + 64);
  v19 = a4;
  v21 = 0LL;
  *(_OWORD *)pvar = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 64));
  v8 = 0;
  if ( v4 )
    LeaveCriticalSection(v4);
  v9 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, PROPVARIANT *))(**(_QWORD **)(a1 + 408) + 40LL))(
         *(_QWORD *)(a1 + 408),
         &xmmword_180160C60,
         pvar);
  v12 = v9;
  if ( v9 >= 0 )
  {
    if ( LOWORD(pvar[0]) == 2 )
    {
      v13 = (unsigned __int16)pvar[1];
      v22 = xmmword_180173A38;
      v23 = 2;
      PropVariantClear(pvar);
      v21 = 0LL;
      *(_OWORD *)pvar = 0LL;
      if ( !v13 )
      {
LABEL_20:
        v12 = -2004286973;
        goto LABEL_21;
      }
      while ( 1 )
      {
        v14 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, PROPVARIANT *))(**(_QWORD **)(a1 + 408) + 40LL))(
                *(_QWORD *)(a1 + 408),
                &v22,
                pvar);
        v12 = v14;
        if ( v14 < 0 )
        {
          if ( (unsigned int)dword_18019C480 > 2 )
          {
            v18 = v14;
            v17 = 467;
            v19 = (__int64)"SpatialAudioDevicePropertyReader::GetPropertyIndexForMetadataFormatID";
            sub_180109778(
              (__int64)&dword_18019C480,
              byte_18016C0FA,
              v10,
              v11,
              (const CHAR **)&v19,
              (__int64)&v17,
              (__int64)&v18);
          }
          goto LABEL_21;
        }
        if ( LOWORD(pvar[0]) != 65 || LODWORD(pvar[1]) != 18 )
          break;
        v15 = *a2 - *(_QWORD *)v21;
        if ( *a2 == *(_QWORD *)v21 )
          v15 = a2[1] - *(_QWORD *)(v21 + 8);
        if ( !v15 )
        {
          if ( a3 )
            *a3 = *(_WORD *)(v21 + 16);
          *(_DWORD *)v19 = v8;
          goto LABEL_21;
        }
        PropVariantClear(pvar);
        ++v23;
        if ( ++v8 >= v13 )
          goto LABEL_20;
      }
      if ( (unsigned int)dword_18019C480 <= 2 )
        goto LABEL_11;
      v17 = 469;
    }
    else
    {
      if ( (unsigned int)dword_18019C480 <= 2 )
      {
LABEL_11:
        v12 = -2147024809;
        goto LABEL_21;
      }
      v17 = 456;
    }
    v19 = (__int64)"SpatialAudioDevicePropertyReader::GetPropertyIndexForMetadataFormatID";
    v18 = -2147024809;
    sub_180109778(
      (__int64)&dword_18019C480,
      byte_18016C12C,
      v10,
      v11,
      (const CHAR **)&v19,
      (__int64)&v17,
      (__int64)&v18);
    goto LABEL_11;
  }
  if ( (unsigned int)dword_18019C480 > 2 )
  {
    v17 = v9;
    v18 = 454;
    v19 = (__int64)"SpatialAudioDevicePropertyReader::GetPropertyIndexForMetadataFormatID";
    sub_180109778(
      (__int64)&dword_18019C480,
      byte_18016C0FA,
      v10,
      v11,
      (const CHAR **)&v19,
      (__int64)&v18,
      (__int64)&v17);
  }
LABEL_21:
  PropVariantClear(pvar);
  return v12;
}
