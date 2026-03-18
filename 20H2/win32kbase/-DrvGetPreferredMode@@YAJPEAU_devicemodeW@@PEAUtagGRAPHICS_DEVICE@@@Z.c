/*
 * XREFs of ?DrvGetPreferredMode@@YAJPEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C000A958
 * Callers:
 *     DrvEnumDisplaySettings @ 0x1C000C480 (DrvEnumDisplaySettings.c)
 * Callees:
 *     DrvDisplayConfigGetDeviceInfo @ 0x1C000DD30 (DrvDisplayConfigGetDeviceInfo.c)
 *     UpdateMonitorDevices @ 0x1C00137F0 (UpdateMonitorDevices.c)
 *     PALLOCMEM2 @ 0x1C003C5B0 (PALLOCMEM2.c)
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D3740 (memset.c)
 */

__int64 __fastcall DrvGetPreferredMode(struct _devicemodeW *a1, struct tagGRAPHICS_DEVICE *a2)
{
  struct _devicemodeW *v3; // rdi
  unsigned int v4; // r12d
  int v5; // ebx
  unsigned int v6; // r14d
  _DWORD *v7; // rsi
  unsigned int v8; // r13d
  __int64 *v9; // rcx
  _BYTE *v10; // rdx
  __int64 v11; // rax
  int DeviceInfo; // ebx
  int v13; // eax
  unsigned int v14; // eax
  __int64 result; // rax
  __int64 v16; // rcx
  __int64 v17; // r8
  int v18; // [rsp+20h] [rbp-8D8h]
  __int64 v19; // [rsp+28h] [rbp-8D0h]
  _OWORD v21[5]; // [rsp+40h] [rbp-8B8h] BYREF
  _BYTE v22[944]; // [rsp+90h] [rbp-868h] BYREF
  _OWORD v23[13]; // [rsp+440h] [rbp-4B8h] BYREF
  __int64 v24; // [rsp+510h] [rbp-3E8h] BYREF
  __int64 v25; // [rsp+518h] [rbp-3E0h]
  __int128 v26; // [rsp+520h] [rbp-3D8h]
  __int128 v27; // [rsp+530h] [rbp-3C8h]
  __m128i v28; // [rsp+540h] [rbp-3B8h]
  __int128 v29; // [rsp+550h] [rbp-3A8h]
  __int64 v30; // [rsp+8A4h] [rbp-54h]
  int v31; // [rsp+8BCh] [rbp-3Ch]

  v3 = a1;
  UpdateMonitorDevices();
  if ( (*((_DWORD *)a2 + 40) & 0x800000) == 0 )
    return 3221225711LL;
  v4 = 0x7FFF;
  v5 = 0x7FFF;
  v18 = 0x7FFF;
  v6 = 0x7FFF;
  v7 = (_DWORD *)PALLOCMEM2(0x100DBuLL);
  if ( !v7 )
    return 3221225495LL;
  v8 = 0;
  if ( !*((_DWORD *)a2 + 54) )
    goto LABEL_16;
  do
  {
    v19 = *((_QWORD *)a2 + 28);
    if ( (*(_BYTE *)(v19 + 20LL * v8) & 3) == 3 )
    {
      v31 = 0;
      memset(v22, 0, 0x3ACuLL);
      v9 = &v24;
      v10 = v22;
      v11 = 7LL;
      do
      {
        *(_OWORD *)v9 = *(_OWORD *)v10;
        *((_OWORD *)v9 + 1) = *((_OWORD *)v10 + 1);
        *((_OWORD *)v9 + 2) = *((_OWORD *)v10 + 2);
        *((_OWORD *)v9 + 3) = *((_OWORD *)v10 + 3);
        *((_OWORD *)v9 + 4) = *((_OWORD *)v10 + 4);
        *((_OWORD *)v9 + 5) = *((_OWORD *)v10 + 5);
        *((_OWORD *)v9 + 6) = *((_OWORD *)v10 + 6);
        v9 += 16;
        *((_OWORD *)v9 - 1) = *((_OWORD *)v10 + 7);
        v10 += 128;
        --v11;
      }
      while ( v11 );
      *(_OWORD *)v9 = *(_OWORD *)v10;
      *((_OWORD *)v9 + 1) = *((_OWORD *)v10 + 1);
      v9[4] = *((_QWORD *)v10 + 4);
      *((_DWORD *)v9 + 10) = *((_DWORD *)v10 + 10);
      v24 = 0x3ACFFFFFFF9LL;
      v25 = *(_QWORD *)(v19 + 20LL * v8 + 8);
      LODWORD(v26) = *(_DWORD *)(v19 + 20LL * v8 + 4);
      DeviceInfo = DrvDisplayConfigGetDeviceInfo(&v24, v10, 128LL);
      memset(v23, 0, 0xC8uLL);
      if ( DeviceInfo < 0 )
      {
        memset(v21, 0, sizeof(v21));
        v25 = *((_QWORD *)&v21[0] + 1);
        v26 = v21[1];
        v27 = v21[2];
        v28 = (__m128i)v21[3];
        v29 = v21[4];
        v24 = 0x5000000003LL;
        v16 = *((_QWORD *)a2 + 28);
        v25 = *(_QWORD *)(v16 + 20LL * v8 + 8);
        LODWORD(v26) = *(_DWORD *)(v16 + 20LL * v8 + 4);
        if ( (int)DrvDisplayConfigGetDeviceInfo(&v24, 5LL * v8, v17) < 0 )
          goto LABEL_23;
        v23[2] = v27;
        v23[3] = v28;
        v23[4] = v29;
        *((_QWORD *)&v23[5] + 1) = __PAIR64__(
                                     _mm_cvtsi128_si32(_mm_srli_si128(v28, 12)),
                                     _mm_cvtsi128_si32(_mm_srli_si128(v28, 8)));
        HIDWORD(v23[7]) = DWORD1(v26);
        v13 = DWORD2(v26);
      }
      else
      {
        *((_QWORD *)&v23[3] + 1) = v30;
        v13 = HIDWORD(v30);
        *(_QWORD *)&v23[3] = 0xFFFFFFFEFFFFFFFEuLL;
        HIDWORD(v23[4]) = 1;
        *((_QWORD *)&v23[5] + 1) = v30;
        HIDWORD(v23[7]) = v30;
      }
      LODWORD(v23[8]) = v13;
      *(_QWORD *)&v23[0] = 197511LL;
      LODWORD(v23[7]) = 1;
      DWORD2(v23[6]) = 1;
      LODWORD(v23[6]) = 21;
      if ( (int)((__int64 (__fastcall *)(_OWORD *, _DWORD *))qword_1C024AAF0)(v23, v7) >= 0 )
      {
        v14 = v7[46];
        if ( v14 >= v6 )
          v14 = v6;
        v6 = v14;
        if ( v7[43] <= v4 )
        {
          v4 = v7[43];
          v5 = v7[44];
          v18 = v5;
          goto LABEL_14;
        }
      }
    }
LABEL_23:
    v5 = v18;
LABEL_14:
    ++v8;
  }
  while ( v8 < *((_DWORD *)a2 + 54) );
  v3 = a1;
LABEL_16:
  Win32FreePool(v7);
  result = 3221225713LL;
  if ( v4 != 0x7FFF )
    result = 0LL;
  v3->dmDisplayFrequency = v6;
  v3->dmPelsWidth = v4;
  v3->dmPelsHeight = v5;
  v3->dmFields = 5767168;
  return result;
}
