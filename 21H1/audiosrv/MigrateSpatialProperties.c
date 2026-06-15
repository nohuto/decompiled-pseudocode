/*
 * XREFs of MigrateSpatialProperties @ 0x18005CDEC
 * Callers:
 *     ?MakeActive@CSpatialProperties@@QEAAJPEBG_NPEAUIPropertyStore@@@Z @ 0x18005C43C (-MakeActive@CSpatialProperties@@QEAAJPEBG_NPEAUIPropertyStore@@@Z.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180057AD0 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     Create_SpatialAudioDevicePropertyWriter @ 0x18005C7E4 (Create_SpatialAudioDevicePropertyWriter.c)
 *     __security_check_cookie @ 0x18006A480 (__security_check_cookie.c)
 *     memset_0 @ 0x18006B59C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MigrateSpatialProperties(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned int v5; // r8d
  unsigned int v6; // r9d
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // [rsp+30h] [rbp-D0h] BYREF
  PROPVARIANT pvar[2]; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v11; // [rsp+48h] [rbp-B8h]
  _DWORD v12[3]; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v13; // [rsp+5Ch] [rbp-A4h]
  __int128 v14; // [rsp+6Ch] [rbp-94h]
  int v15; // [rsp+8Ch] [rbp-74h]
  BOOL v16; // [rsp+94h] [rbp-6Ch]
  unsigned __int16 v17[256]; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int16 v18[128]; // [rsp+2A0h] [rbp+1A0h] BYREF
  __int128 v19; // [rsp+3A0h] [rbp+2A0h]
  int v20; // [rsp+3B0h] [rbp+2B0h]
  int v21; // [rsp+3B4h] [rbp+2B4h]
  int v22; // [rsp+3B8h] [rbp+2B8h]
  int v23; // [rsp+3BCh] [rbp+2BCh]
  int v24; // [rsp+3C0h] [rbp+2C0h]
  int v25; // [rsp+3C4h] [rbp+2C4h]
  int v26; // [rsp+3C8h] [rbp+2C8h]
  __int128 v27; // [rsp+3CCh] [rbp+2CCh]
  __int16 v28; // [rsp+3DCh] [rbp+2DCh]
  __int16 v29; // [rsp+3DEh] [rbp+2DEh]
  __int16 v30; // [rsp+3E0h] [rbp+2E0h]

  memset_0(v12, 0, 0x48uLL);
  memset_0(v17, 0, 0x342uLL);
  v9 = 0LL;
  *(_OWORD *)pvar = 0LL;
  v11 = 0LL;
  if ( (*(int (__fastcall **)(__int64, __int128 *, PROPVARIANT *))(*(_QWORD *)a1 + 40LL))(
         a1,
         &PKEY_SpatialAudio_Endpoint_Settings,
         pvar) < 0 )
    goto LABEL_3;
  if ( LOWORD(pvar[0]) == 65 )
    goto LABEL_3;
  PropVariantClear(pvar);
  if ( (*(int (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)a1 + 40LL))(
         a1,
         &PKEY_RS2_SpatialAudioEndpoint_Settings,
         pvar) < 0
    || LOWORD(pvar[0]) != 65
    || LODWORD(pvar[1]) < 0x50
    || (int)Create_SpatialAudioDevicePropertyWriter(a2, a1, &v9) < 0 )
  {
    goto LABEL_3;
  }
  v5 = 0;
  v6 = *(_DWORD *)(v11 + 68);
  if ( !v6 )
    goto LABEL_16;
  while ( 1 )
  {
    v7 = 842LL * v5 + v11 + 80;
    v8 = *(_QWORD *)(v7 + 776) - *(_QWORD *)(v11 + 20);
    if ( !v8 )
      v8 = *(_QWORD *)(v7 + 784) - *(_QWORD *)(v11 + 28);
    if ( !v8 )
      break;
    if ( ++v5 >= v6 )
      goto LABEL_16;
  }
  if ( !v7 )
  {
LABEL_16:
    if ( *(_DWORD *)(v11 + 8) || !v6 )
      goto LABEL_3;
    v7 = v11 + 80;
  }
  v12[0] = *(_DWORD *)(v11 + 8);
  v15 = *(_DWORD *)(v11 + 72);
  v12[1] = *(_DWORD *)(v11 + 12);
  v12[2] = *(_DWORD *)(v11 + 16);
  v16 = *(_DWORD *)(v11 + 16) != 0;
  v13 = *(_OWORD *)(v11 + 20);
  v14 = *(_OWORD *)(v11 + 36);
  v19 = *(_OWORD *)(v7 + 776);
  v20 = *(_DWORD *)(v7 + 792);
  v21 = *(_DWORD *)(v7 + 796);
  v22 = *(_DWORD *)(v7 + 800);
  v23 = *(_DWORD *)(v7 + 804);
  v24 = *(_DWORD *)(v7 + 808);
  v25 = *(_DWORD *)(v7 + 812);
  v26 = *(_DWORD *)(v7 + 816);
  v27 = *(_OWORD *)(v7 + 820);
  v28 = *(_WORD *)(v7 + 836);
  v29 = *(_WORD *)(v7 + 838);
  v30 = *(_WORD *)(v7 + 840);
  StringCchCopyW((char *)v17, 256LL, (char *)(v7 + 8));
  StringCchCopyW((char *)v18, 128LL, (char *)(v7 + 520));
  (*(void (__fastcall **)(__int64, _DWORD *, unsigned __int16 *, __int64))(*(_QWORD *)v9 + 64LL))(v9, v12, v17, 834LL);
LABEL_3:
  PropVariantClear(pvar);
  result = (*(__int64 (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)a1 + 48LL))(
             a1,
             &PKEY_RS2_SpatialAudioEndpoint_Settings,
             pvar);
  if ( v9 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  return result;
}
