/*
 * XREFs of sub_180127590 @ 0x180127590
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800461B8 @ 0x1800461B8 (sub_1800461B8.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_180109778 @ 0x180109778 (sub_180109778.c)
 *     sub_180127FF8 @ 0x180127FF8 (sub_180127FF8.c)
 *     sub_18012D4A4 @ 0x18012D4A4 (sub_18012D4A4.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180127590(__int64 a1, __int64 a2, __int64 a3)
{
  struct _RTL_CRITICAL_SECTION *v6; // rbx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // ebx
  int v10; // eax
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdi
  unsigned int v14; // ebx
  __int64 v16; // [rsp+48h] [rbp-29h] BYREF
  __int64 v17; // [rsp+50h] [rbp-21h] BYREF
  __int64 (__fastcall ***v18)(_QWORD, void *, __int64); // [rsp+58h] [rbp-19h] BYREF
  PROPVARIANT pvar[2]; // [rsp+60h] [rbp-11h] BYREF
  __int64 v20; // [rsp+70h] [rbp-1h]
  __int64 v21; // [rsp+78h] [rbp+7h]
  __int128 v22; // [rsp+80h] [rbp+Fh] BYREF
  int v23; // [rsp+90h] [rbp+1Fh]

  v21 = -2LL;
  HIDWORD(v16) = 0;
  LOWORD(v16) = 0;
  v18 = 0LL;
  *(_OWORD *)pvar = 0LL;
  v20 = 0LL;
  v6 = (struct _RTL_CRITICAL_SECTION *)(a1 + 64);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 64));
  if ( v6 )
    LeaveCriticalSection(v6);
  if ( !a3 )
  {
    if ( (unsigned int)dword_18019C480 > 2 )
    {
      v16 = 0x8007005700000221uLL;
      v17 = (__int64)"SpatialAudioDevicePropertyReader::CreateMetadataDictionary";
      sub_180109778(
        (__int64)&dword_18019C480,
        byte_18016C12C,
        v7,
        v8,
        (const CHAR **)&v17,
        (__int64)&v16,
        (__int64)&v16 + 4);
    }
    v9 = -2147024809;
    goto LABEL_24;
  }
  v10 = sub_180127FF8(a1, a2, &v16, (char *)&v16 + 4);
  v9 = v10;
  if ( v10 < 0 )
  {
    if ( (unsigned int)dword_18019C480 <= 2 )
      goto LABEL_24;
    LODWORD(v16) = 548;
    goto LABEL_23;
  }
  v22 = xmmword_180173A20;
  v23 = HIDWORD(v16) + 2;
  v10 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, PROPVARIANT *))(**(_QWORD **)(a1 + 408) + 40LL))(
          *(_QWORD *)(a1 + 408),
          &v22,
          pvar);
  v9 = v10;
  if ( v10 < 0 )
  {
    if ( (unsigned int)dword_18019C480 <= 2 )
      goto LABEL_24;
    LODWORD(v16) = 554;
    goto LABEL_23;
  }
  if ( LOWORD(pvar[0]) == 65 )
  {
    v13 = v20;
    v14 = (unsigned int)pvar[1];
    sub_1800461B8((__int64 *)&v18);
    v10 = sub_18012D4A4((unsigned __int16)v16, v13, v14, &v18);
    v9 = v10;
    if ( v10 >= 0 )
    {
      v10 = (**v18)(v18, &unk_180174478, a3);
      v9 = v10;
      if ( v10 >= 0 || (unsigned int)dword_18019C480 <= 2 )
        goto LABEL_24;
      LODWORD(v16) = 565;
    }
    else
    {
      if ( (unsigned int)dword_18019C480 <= 2 )
        goto LABEL_24;
      LODWORD(v16) = 562;
    }
LABEL_23:
    HIDWORD(v16) = v10;
    v17 = (__int64)"SpatialAudioDevicePropertyReader::CreateMetadataDictionary";
    sub_180109778(
      (__int64)&dword_18019C480,
      byte_18016C0FA,
      v11,
      v12,
      (const CHAR **)&v17,
      (__int64)&v16,
      (__int64)&v16 + 4);
    goto LABEL_24;
  }
  if ( (unsigned int)dword_18019C480 > 2 )
  {
    v16 = 0x8000FFFF0000022CuLL;
    v17 = (__int64)"SpatialAudioDevicePropertyReader::CreateMetadataDictionary";
    sub_180109778(
      (__int64)&dword_18019C480,
      byte_18016C12C,
      v11,
      v12,
      (const CHAR **)&v17,
      (__int64)&v16,
      (__int64)&v16 + 4);
  }
  v9 = -2147418113;
LABEL_24:
  PropVariantClear(pvar);
  sub_1800461B8((__int64 *)&v18);
  return v9;
}
