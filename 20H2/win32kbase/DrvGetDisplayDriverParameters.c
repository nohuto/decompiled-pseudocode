/*
 * XREFs of DrvGetDisplayDriverParameters @ 0x1C000F8C0
 * Callers:
 *     DrvEnumDisplaySettings @ 0x1C000C480 (DrvEnumDisplaySettings.c)
 *     ?DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z @ 0x1C000EABC (-DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHH3@Z.c)
 * Callees:
 *     ?DrvGetDisplayDriverDpiSetting@@YAXPEAU_devicemodeW@@@Z @ 0x1C000FDC4 (-DrvGetDisplayDriverDpiSetting@@YAXPEAU_devicemodeW@@@Z.c)
 *     ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEBKPEAGKPEAJ@Z @ 0x1C0056EB4 (-DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@.c)
 *     ?DrvLogDisplayDriverEvent@@YAXW4_DISP_DRIVER_LOG@@@Z @ 0x1C00BEEF4 (-DrvLogDisplayDriverEvent@@YAXW4_DISP_DRIVER_LOG@@@Z.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     memset @ 0x1C00D3740 (memset.c)
 *     memmove @ 0x1C00D3840 (memmove.c)
 */

__int64 __fastcall DrvGetDisplayDriverParameters(__int64 a1, struct _devicemodeW *a2, int a3, __int64 a4)
{
  NTSTATUS v7; // r14d
  int v8; // edi
  unsigned int v9; // r10d
  DWORD *p_dmBitsPerPel; // rcx
  DWORD *p_dmPelsWidth; // rdx
  PCWSTR *p_Name; // rcx
  __int64 v13; // r9
  wchar_t **v14; // r8
  const WCHAR *v15; // rax
  unsigned int v16; // edi
  const WCHAR *RegistryHandleFromDeviceMap; // rax
  WCHAR *v18; // r15
  int v19; // r9d
  __int64 v21; // rax
  unsigned __int64 v22; // xmm0_8
  WORD dmDriverExtra; // cx
  _OWORD *v24; // rdx
  __int128 v25; // xmm0
  _OWORD *v26; // rdx
  int v27; // [rsp+30h] [rbp-D0h] BYREF
  int v28; // [rsp+34h] [rbp-CCh] BYREF
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v30; // [rsp+78h] [rbp-88h]
  int v31; // [rsp+80h] [rbp-80h]
  __int64 v32; // [rsp+88h] [rbp-78h]
  DWORD *v33; // [rsp+90h] [rbp-70h]
  int v34; // [rsp+98h] [rbp-68h]
  __int64 v35; // [rsp+A0h] [rbp-60h]
  int v36; // [rsp+A8h] [rbp-58h]
  __int64 v37; // [rsp+B0h] [rbp-50h]
  int v38; // [rsp+B8h] [rbp-48h]
  __int64 v39; // [rsp+C0h] [rbp-40h]
  DWORD *p_dmPelsHeight; // [rsp+C8h] [rbp-38h]
  int v41; // [rsp+D0h] [rbp-30h]
  __int64 v42; // [rsp+D8h] [rbp-28h]
  int v43; // [rsp+E0h] [rbp-20h]
  __int64 v44; // [rsp+E8h] [rbp-18h]
  int v45; // [rsp+F0h] [rbp-10h]
  __int64 v46; // [rsp+F8h] [rbp-8h]
  DWORD *p_dmDisplayFrequency; // [rsp+100h] [rbp+0h]
  int v48; // [rsp+108h] [rbp+8h]
  __int64 v49; // [rsp+110h] [rbp+10h]
  int v50; // [rsp+118h] [rbp+18h]
  __int64 v51; // [rsp+120h] [rbp+20h]
  int v52; // [rsp+128h] [rbp+28h]
  __int64 v53; // [rsp+130h] [rbp+30h]
  union _devicemodeW::$4FBEBCCE69364E072421C9DF045BB77C *p_dmDisplayFlags; // [rsp+138h] [rbp+38h]
  int v55; // [rsp+140h] [rbp+40h]
  __int64 v56; // [rsp+148h] [rbp+48h]
  int v57; // [rsp+150h] [rbp+50h]
  __int64 v58; // [rsp+158h] [rbp+58h]
  int v59; // [rsp+160h] [rbp+60h]
  __int64 v60; // [rsp+168h] [rbp+68h]
  DWORD *p_dmPanningWidth; // [rsp+170h] [rbp+70h]
  int v62; // [rsp+178h] [rbp+78h]
  __int64 v63; // [rsp+180h] [rbp+80h]
  int v64; // [rsp+188h] [rbp+88h]
  __int64 v65; // [rsp+190h] [rbp+90h]
  int v66; // [rsp+198h] [rbp+98h]
  __int64 v67; // [rsp+1A0h] [rbp+A0h]
  DWORD *p_dmPanningHeight; // [rsp+1A8h] [rbp+A8h]
  int v69; // [rsp+1B0h] [rbp+B0h]
  __int64 v70; // [rsp+1B8h] [rbp+B8h]
  int v71; // [rsp+1C0h] [rbp+C0h]
  __int64 v72; // [rsp+1C8h] [rbp+C8h]
  int v73; // [rsp+1D0h] [rbp+D0h]
  __int64 v74; // [rsp+1D8h] [rbp+D8h]
  DWORD *p_dmDisplayOrientation; // [rsp+1E0h] [rbp+E0h]
  int v76; // [rsp+1E8h] [rbp+E8h]
  __int64 v77; // [rsp+1F0h] [rbp+F0h]
  int v78; // [rsp+1F8h] [rbp+F8h]
  __int64 v79; // [rsp+200h] [rbp+100h]
  int v80; // [rsp+208h] [rbp+108h]
  __int64 v81; // [rsp+210h] [rbp+110h]
  DWORD *p_dmDisplayFixedOutput; // [rsp+218h] [rbp+118h]
  int v83; // [rsp+220h] [rbp+120h]
  __int64 v84; // [rsp+228h] [rbp+128h]
  int v85; // [rsp+230h] [rbp+130h]
  __int64 v86; // [rsp+238h] [rbp+138h]
  int v87; // [rsp+240h] [rbp+140h]
  __int64 v88; // [rsp+248h] [rbp+148h]
  union _devicemodeW::$5A39A2C3BB0B1D2D5888DFEE2BA0B23C *p_dmOrientation; // [rsp+250h] [rbp+150h]
  int v90; // [rsp+258h] [rbp+158h]
  __int64 v91; // [rsp+260h] [rbp+160h]
  int v92; // [rsp+268h] [rbp+168h]
  __int64 v93; // [rsp+270h] [rbp+170h]
  int v94; // [rsp+278h] [rbp+178h]
  __int64 v95; // [rsp+280h] [rbp+180h]
  LONG *p_y; // [rsp+288h] [rbp+188h]
  int v97; // [rsp+290h] [rbp+190h]
  __int64 v98; // [rsp+298h] [rbp+198h]
  int v99; // [rsp+2A0h] [rbp+1A0h]
  __int64 v100; // [rsp+2A8h] [rbp+1A8h]
  int v101; // [rsp+2B0h] [rbp+1B0h]
  __int64 v102; // [rsp+2B8h] [rbp+1B8h]
  int *v103; // [rsp+2C0h] [rbp+1C0h]
  int v104; // [rsp+2C8h] [rbp+1C8h]
  __int64 v105; // [rsp+2D0h] [rbp+1D0h]
  int v106; // [rsp+2D8h] [rbp+1D8h]
  int (*v107)(unsigned __int16 *, unsigned int, void *, unsigned int, void *, void *); // [rsp+2E0h] [rbp+1E0h]
  int v108; // [rsp+2E8h] [rbp+1E8h]
  __int64 v109; // [rsp+2F0h] [rbp+1F0h]
  struct _devicemodeW *v110; // [rsp+2F8h] [rbp+1F8h]
  int v111; // [rsp+300h] [rbp+200h]
  int *v112; // [rsp+308h] [rbp+208h]
  int v113; // [rsp+310h] [rbp+210h]
  __int64 v114; // [rsp+318h] [rbp+218h]
  int v115; // [rsp+320h] [rbp+220h]
  __int128 v116; // [rsp+328h] [rbp+228h]
  __int128 v117; // [rsp+338h] [rbp+238h]
  __int64 v118; // [rsp+348h] [rbp+248h]

  v27 = 0;
  v28 = 0;
  v7 = 0;
  v8 = 0;
  v9 = 1;
  if ( a3 )
  {
    memset(a2, 0, sizeof(struct _devicemodeW));
  }
  else
  {
    p_dmBitsPerPel = &a2->dmBitsPerPel;
    p_dmPelsWidth = &a2->dmPelsWidth;
    if ( a4 )
    {
      *p_dmBitsPerPel = *(_DWORD *)(a4 + 168);
      dmDriverExtra = a2->dmDriverExtra;
      *p_dmPelsWidth = *(_DWORD *)(a4 + 172);
      a2->dmPelsHeight = *(_DWORD *)(a4 + 176);
      a2->dmDisplayFrequency = *(_DWORD *)(a4 + 184);
      a2->dmDisplayFlags = *(_DWORD *)(a4 + 180);
      a2->dmPanningWidth = *(_DWORD *)(a4 + 212);
      a2->dmPanningHeight = *(_DWORD *)(a4 + 216);
      a2->dmPosition.x = *(_DWORD *)(a4 + 76);
      a2->dmPosition.y = *(_DWORD *)(a4 + 80);
      a2->dmDisplayOrientation = *(_DWORD *)(a4 + 84);
      a2->dmDisplayFixedOutput = *(_DWORD *)(a4 + 88);
      if ( dmDriverExtra >= *(_WORD *)(a4 + 70) )
        dmDriverExtra = *(_WORD *)(a4 + 70);
      a2->dmDriverExtra = dmDriverExtra;
      memmove(&a2[1], (const void *)(a4 + 220), dmDriverExtra);
      if ( (*(_DWORD *)(a4 + 72) & 0x20) != 0 )
      {
        v8 = 1;
        v27 = 1;
      }
      goto LABEL_13;
    }
    QueryTable.QueryRoutine = 0LL;
    QueryTable.Name = 0LL;
    QueryTable.DefaultData = 0LL;
    QueryTable.DefaultLength = 0;
    v30 = 0LL;
    v32 = 0LL;
    p_dmDisplayOrientation = &a2->dmDisplayOrientation;
    p_dmDisplayFixedOutput = &a2->dmDisplayFixedOutput;
    p_dmOrientation = (union _devicemodeW::$5A39A2C3BB0B1D2D5888DFEE2BA0B23C *)&a2->dmOrientation;
    QueryTable.EntryContext = p_dmBitsPerPel;
    v33 = p_dmPelsWidth;
    p_y = &a2->dmPosition.y;
    QueryTable.Flags = 288;
    QueryTable.DefaultType = 0x4000000;
    v31 = 288;
    v34 = 0x4000000;
    v35 = 0LL;
    v36 = 0;
    v37 = 0LL;
    v38 = 288;
    v39 = 0LL;
    p_dmPelsHeight = &a2->dmPelsHeight;
    v41 = 0x4000000;
    v42 = 0LL;
    v43 = 0;
    v44 = 0LL;
    v45 = 288;
    v46 = 0LL;
    p_dmDisplayFrequency = &a2->dmDisplayFrequency;
    v48 = 0x4000000;
    v49 = 0LL;
    v50 = 0;
    v51 = 0LL;
    v52 = 288;
    v53 = 0LL;
    p_dmDisplayFlags = (union _devicemodeW::$4FBEBCCE69364E072421C9DF045BB77C *)&a2->dmDisplayFlags;
    v55 = 0x4000000;
    v56 = 0LL;
    v57 = 0;
    v58 = 0LL;
    v59 = 288;
    v60 = 0LL;
    p_dmPanningWidth = &a2->dmPanningWidth;
    v62 = 0x4000000;
    v63 = 0LL;
    v64 = 0;
    v65 = 0LL;
    v66 = 288;
    v67 = 0LL;
    p_dmPanningHeight = &a2->dmPanningHeight;
    v69 = 0x4000000;
    v70 = 0LL;
    v71 = 0;
    v72 = 0LL;
    v73 = 288;
    v74 = 0LL;
    v76 = 0x4000000;
    v77 = 0LL;
    v78 = 0;
    v79 = 0LL;
    v80 = 288;
    v81 = 0LL;
    v83 = 0x4000000;
    v84 = 0LL;
    v85 = 0;
    v86 = 0LL;
    v87 = 288;
    v88 = 0LL;
    v90 = 0x4000000;
    v91 = 0LL;
    v92 = 0;
    v93 = 0LL;
    v94 = 288;
    v95 = 0LL;
    v97 = 0x4000000;
    v98 = 0LL;
    v103 = &v27;
    v99 = 0;
    v107 = DrvDriverExtraCallback;
    v112 = &v28;
    v100 = 0LL;
    v101 = 288;
    v102 = 0LL;
    v104 = 0x4000000;
    v105 = 0LL;
    v106 = 0;
    v108 = 0;
    v109 = 0LL;
    v110 = a2;
    v111 = 4;
    v113 = 0x10000;
    v114 = 0LL;
    v115 = 0;
    v116 = 0LL;
    v118 = 0LL;
    v117 = 0LL;
    if ( !a2->dmDriverExtra )
    {
      v107 = 0LL;
      v108 = 0;
      v109 = 0LL;
      a2->dmDriverExtra = 0;
    }
    if ( (unsigned __int16)(gProtocolType - 1) > 0xFFFDu
      || (*(_DWORD *)(a1 + 160) & 8) == 0
      || (v24 = *(_OWORD **)(a1 + 272)) == 0LL )
    {
      p_Name = &QueryTable.Name;
      v13 = 13LL;
      v14 = off_1C0204120;
      do
      {
        v15 = *v14++;
        *p_Name = v15;
        p_Name += 7;
        --v13;
      }
      while ( v13 );
      v16 = 1;
      while ( 1 )
      {
        RegistryHandleFromDeviceMap = (const WCHAR *)DrvGetRegistryHandleFromDeviceMap(a1, v9, 0LL, 0LL, 0, 0LL);
        v18 = (WCHAR *)RegistryHandleFromDeviceMap;
        if ( RegistryHandleFromDeviceMap )
        {
          v7 = RtlQueryRegistryValues(0x40000000u, RegistryHandleFromDeviceMap, &QueryTable, 0LL, 0LL);
          ZwClose(v18);
          if ( v7 >= 0 )
          {
            v8 = v27;
            if ( v27
              && !a2->dmBitsPerPel
              && !a2->dmPelsWidth
              && !a2->dmPelsHeight
              && !a2->dmDisplayFrequency
              && !a2->dmDisplayFlags
              && !gbBaseVideo )
            {
              DrvLogDisplayDriverEvent(6LL);
              v8 = v27;
            }
            goto LABEL_13;
          }
        }
        else
        {
          v7 = -1073741823;
        }
        ++v16;
        v9 = 0;
        if ( v16 > 2 )
          return (unsigned int)v7;
      }
    }
    *(_OWORD *)a2->dmDeviceName = *v24;
    *(_OWORD *)&a2->dmDeviceName[8] = v24[1];
    *(_OWORD *)&a2->dmDeviceName[16] = v24[2];
    *(_OWORD *)&a2->dmDeviceName[24] = v24[3];
    *(_OWORD *)&a2->dmSpecVersion = v24[4];
    *(union _devicemodeW::$5A39A2C3BB0B1D2D5888DFEE2BA0B23C *)((char *)&a2->76 + 4) = (union _devicemodeW::$5A39A2C3BB0B1D2D5888DFEE2BA0B23C)v24[5];
    *(_OWORD *)&a2->dmYResolution = v24[6];
    v25 = v24[7];
    v26 = v24 + 8;
    *(_OWORD *)&a2->dmFormName[5] = v25;
    *(_OWORD *)&a2->dmFormName[13] = *v26;
    *(_OWORD *)&a2->dmFormName[21] = v26[1];
    *(_OWORD *)&a2->dmFormName[29] = v26[2];
    *(_OWORD *)&a2->dmPelsHeight = v26[3];
    *(_OWORD *)&a2->dmICMIntent = v26[4];
    *(_QWORD *)&a2->dmReserved2 = *((_QWORD *)v26 + 10);
    a2->dmPanningHeight = *((_DWORD *)v26 + 22);
    memmove(&a2[1], (const void *)(*(_QWORD *)(a1 + 272) + 220LL), a2->dmDriverExtra);
  }
LABEL_13:
  *(_DWORD *)&a2->dmSpecVersion = 67175425;
  a2->dmSize = 220;
  DrvGetDisplayDriverDpiSetting(a2);
  v19 = 410910848;
  a2->dmFields = 410910848;
  if ( v8 )
  {
    v19 = 410910880;
    a2->dmFields = 410910880;
  }
  if ( a2->dmDisplayFixedOutput )
  {
    v19 |= 0x20000000u;
    a2->dmFields = v19;
  }
  if ( (*(_DWORD *)(a1 + 160) & 0x2000000) != 0 )
  {
    v21 = *(_QWORD *)(*(_QWORD *)gpDispInfo + 24LL);
    v22 = _mm_srli_si128(*(__m128i *)(*(_QWORD *)gpDispInfo + 24LL), 8).m128i_u64[0];
    a2->dmBitsPerPel = *((unsigned __int8 *)gpsi + 7003);
    a2->dmFields = v19;
    a2->dmPelsWidth = v22 - v21;
    a2->dmPelsHeight = HIDWORD(v22) - HIDWORD(v21);
  }
  return (unsigned int)v7;
}
