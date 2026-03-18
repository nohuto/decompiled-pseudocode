/*
 * XREFs of ?TdrInit@@YAXXZ @ 0x1C018C2A4
 * Callers:
 *     DriverEntry @ 0x1C0305D00 (DriverEntry.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     ?TdrHistoryInit@@YAXPEAU_TDR_HISTORY@@@Z @ 0x1C0158820 (-TdrHistoryInit@@YAXPEAU_TDR_HISTORY@@@Z.c)
 */

void TdrInit(void)
{
  volatile int v0; // ebx
  int v1; // eax
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rdi
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  unsigned int v25; // [rsp+38h] [rbp-D0h] BYREF
  unsigned int v26; // [rsp+3Ch] [rbp-CCh] BYREF
  unsigned int v27; // [rsp+40h] [rbp-C8h] BYREF
  unsigned int v28; // [rsp+44h] [rbp-C4h] BYREF
  unsigned int v29; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int v30; // [rsp+4Ch] [rbp-BCh] BYREF
  unsigned int v31; // [rsp+50h] [rbp-B8h] BYREF
  unsigned int v32; // [rsp+54h] [rbp-B4h] BYREF
  int v33; // [rsp+58h] [rbp-B0h] BYREF
  int v34; // [rsp+5Ch] [rbp-ACh] BYREF
  int v35; // [rsp+60h] [rbp-A8h] BYREF
  int v36; // [rsp+64h] [rbp-A4h] BYREF
  int v37; // [rsp+68h] [rbp-A0h] BYREF
  int v38; // [rsp+6Ch] [rbp-9Ch] BYREF
  __int64 v39; // [rsp+70h] [rbp-98h] BYREF
  __int64 v40; // [rsp+78h] [rbp-90h] BYREF
  int v41; // [rsp+80h] [rbp-88h]
  const wchar_t *v42; // [rsp+88h] [rbp-80h]
  unsigned int *v43; // [rsp+90h] [rbp-78h]
  int v44; // [rsp+98h] [rbp-70h]
  int *v45; // [rsp+A0h] [rbp-68h]
  int v46; // [rsp+A8h] [rbp-60h]
  __int64 v47; // [rsp+B0h] [rbp-58h]
  int v48; // [rsp+B8h] [rbp-50h]
  const wchar_t *v49; // [rsp+C0h] [rbp-48h]
  unsigned int *v50; // [rsp+C8h] [rbp-40h]
  int v51; // [rsp+D0h] [rbp-38h]
  int *v52; // [rsp+D8h] [rbp-30h]
  int v53; // [rsp+E0h] [rbp-28h]
  __int64 v54; // [rsp+E8h] [rbp-20h]
  int v55; // [rsp+F0h] [rbp-18h]
  const wchar_t *v56; // [rsp+F8h] [rbp-10h]
  unsigned int *v57; // [rsp+100h] [rbp-8h]
  int v58; // [rsp+108h] [rbp+0h]
  int *v59; // [rsp+110h] [rbp+8h]
  int v60; // [rsp+118h] [rbp+10h]
  __int64 v61; // [rsp+120h] [rbp+18h]
  int v62; // [rsp+128h] [rbp+20h]
  const wchar_t *v63; // [rsp+130h] [rbp+28h]
  unsigned int *v64; // [rsp+138h] [rbp+30h]
  int v65; // [rsp+140h] [rbp+38h]
  int *v66; // [rsp+148h] [rbp+40h]
  int v67; // [rsp+150h] [rbp+48h]
  __int64 v68; // [rsp+158h] [rbp+50h]
  int v69; // [rsp+160h] [rbp+58h]
  const wchar_t *v70; // [rsp+168h] [rbp+60h]
  unsigned int *v71; // [rsp+170h] [rbp+68h]
  int v72; // [rsp+178h] [rbp+70h]
  int *v73; // [rsp+180h] [rbp+78h]
  int v74; // [rsp+188h] [rbp+80h]
  __int64 v75; // [rsp+190h] [rbp+88h]
  int v76; // [rsp+198h] [rbp+90h]
  const wchar_t *v77; // [rsp+1A0h] [rbp+98h]
  unsigned int *v78; // [rsp+1A8h] [rbp+A0h]
  int v79; // [rsp+1B0h] [rbp+A8h]
  int *v80; // [rsp+1B8h] [rbp+B0h]
  int v81; // [rsp+1C0h] [rbp+B8h]
  __int64 v82; // [rsp+1C8h] [rbp+C0h]
  int v83; // [rsp+1D0h] [rbp+C8h]
  const wchar_t *v84; // [rsp+1D8h] [rbp+D0h]
  unsigned int *v85; // [rsp+1E0h] [rbp+D8h]
  int v86; // [rsp+1E8h] [rbp+E0h]
  __int64 *v87; // [rsp+1F0h] [rbp+E8h]
  int v88; // [rsp+1F8h] [rbp+F0h]
  __int64 v89; // [rsp+200h] [rbp+F8h]
  int v90; // [rsp+208h] [rbp+100h]
  const wchar_t *v91; // [rsp+210h] [rbp+108h]
  unsigned int *v92; // [rsp+218h] [rbp+110h]
  int v93; // [rsp+220h] [rbp+118h]
  char *v94; // [rsp+228h] [rbp+120h]
  int v95; // [rsp+230h] [rbp+128h]
  __int64 v96; // [rsp+238h] [rbp+130h]
  int v97; // [rsp+240h] [rbp+138h]
  __int128 v98; // [rsp+248h] [rbp+140h]
  __int128 v99; // [rsp+258h] [rbp+150h]
  __int64 v100; // [rsp+268h] [rbp+160h]

  v33 = 3;
  v30 = 0;
  v26 = 0;
  v27 = 0;
  v42 = L"TdrLevel";
  v0 = 2;
  v34 = 2;
  v35 = 2;
  v43 = &v30;
  v36 = 2;
  v45 = &v33;
  v49 = L"TdrDelay";
  v50 = &v26;
  v52 = &v34;
  v56 = L"TdrDodPresentDelay";
  v57 = &v27;
  v59 = &v35;
  v63 = L"TdrDodVSyncDelay";
  v64 = &v28;
  v66 = &v36;
  v70 = L"TdrDdiDelay";
  v71 = &v29;
  v73 = &v37;
  v77 = L"TdrLimitCount";
  v78 = &v31;
  v80 = &v38;
  v28 = 0;
  v37 = 5;
  v29 = 0;
  v25 = 0;
  v38 = 5;
  v31 = 0;
  v39 = 0x20000003CLL;
  v32 = 0;
  v40 = 0LL;
  v41 = 288;
  v44 = 67108868;
  v46 = 4;
  v47 = 0LL;
  v48 = 288;
  v51 = 67108868;
  v53 = 4;
  v54 = 0LL;
  v55 = 288;
  v58 = 67108868;
  v60 = 4;
  v61 = 0LL;
  v62 = 288;
  v65 = 67108868;
  v67 = 4;
  v68 = 0LL;
  v69 = 288;
  v72 = 67108868;
  v74 = 4;
  v75 = 0LL;
  v76 = 288;
  v79 = 67108868;
  v81 = 4;
  v83 = 288;
  v84 = L"TdrLimitTime";
  v86 = 67108868;
  v85 = &v32;
  v87 = &v39;
  v91 = L"TdrDebugMode";
  v92 = &v25;
  v94 = (char *)&v39 + 4;
  v88 = 4;
  v90 = 288;
  v93 = 67108868;
  v95 = 4;
  v100 = 0LL;
  v82 = 0LL;
  v89 = 0LL;
  v96 = 0LL;
  v97 = 0;
  v98 = 0LL;
  v99 = 0LL;
  v1 = RtlQueryRegistryValuesEx(
         0LL,
         L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers",
         &v40,
         0LL,
         0LL);
  v5 = v1;
  if ( v1 < 0 )
  {
    v30 = 3;
    v26 = 2;
    v27 = 2;
    v28 = 2;
    v29 = 5;
    v25 = 2;
    v16 = WdLogNewEntry5_WdWarning(v3, v2, v4);
    *(_QWORD *)(v16 + 24) = v5;
    WdLogEvent5_WdWarning(v16);
  }
  if ( v30 == 3 || v30 <= 1 )
  {
    g_TdrConfig = v30;
  }
  else
  {
    g_TdrConfig = 3;
    v17 = WdLogNewEntry5_WdWarning(v3, v2, v4);
    *(_QWORD *)(v17 + 24) = v30;
    *(_QWORD *)(v17 + 32) = g_TdrConfig;
    WdLogEvent5_WdWarning(v17);
  }
  v6 = v26;
  if ( v26 )
  {
    if ( v26 > 0x384 )
      v6 = 900;
    dword_1C00B1164 = v6;
  }
  else
  {
    dword_1C00B1164 = 1;
  }
  if ( dword_1C00B1164 != v26 )
  {
    v18 = WdLogNewEntry5_WdWarning(v3, v2, v4);
    *(_QWORD *)(v18 + 24) = v26;
    *(_QWORD *)(v18 + 32) = (unsigned int)dword_1C00B1164;
    WdLogEvent5_WdWarning(v18);
  }
  v7 = v27;
  if ( v27 )
  {
    if ( v27 > 0x384 )
      v7 = 900;
    dword_1C00B1168 = v7;
  }
  else
  {
    dword_1C00B1168 = 1;
  }
  if ( dword_1C00B1168 != v27 )
  {
    v19 = WdLogNewEntry5_WdWarning(v3, v2, v4);
    *(_QWORD *)(v19 + 24) = v27;
    *(_QWORD *)(v19 + 32) = (unsigned int)dword_1C00B1168;
    WdLogEvent5_WdWarning(v19);
  }
  v8 = v28;
  if ( v28 )
  {
    if ( v28 > 0x384 )
      v8 = 900;
    dword_1C00B116C = v8;
  }
  else
  {
    dword_1C00B116C = 1;
  }
  if ( dword_1C00B116C != v28 )
  {
    v20 = WdLogNewEntry5_WdWarning(v3, v2, v4);
    *(_QWORD *)(v20 + 24) = v28;
    *(_QWORD *)(v20 + 32) = (unsigned int)dword_1C00B116C;
    WdLogEvent5_WdWarning(v20);
  }
  v9 = v29;
  if ( v29 )
  {
    if ( v29 > 0x384 )
      v9 = 900;
    dword_1C00B1170 = v9;
  }
  else
  {
    dword_1C00B1170 = 1;
  }
  if ( dword_1C00B1170 != v29 )
  {
    v21 = WdLogNewEntry5_WdWarning(v3, v2, v4);
    *(_QWORD *)(v21 + 24) = v29;
    *(_QWORD *)(v21 + 32) = (unsigned int)dword_1C00B1170;
    WdLogEvent5_WdWarning(v21);
  }
  v10 = v31;
  if ( v31 > 0x20 )
  {
    dword_1C00B1178 = 32;
  }
  else
  {
    if ( !v31 )
      v10 = 1;
    dword_1C00B1178 = v10;
  }
  if ( dword_1C00B1178 != v31 )
  {
    v22 = WdLogNewEntry5_WdWarning(v3, v2, v4);
    *(_QWORD *)(v22 + 24) = v31;
    *(_QWORD *)(v22 + 32) = (unsigned int)dword_1C00B1178;
    WdLogEvent5_WdWarning(v22);
  }
  v11 = v32;
  v12 = 3600LL;
  if ( v32 > 0xE10 )
  {
    dword_1C00B117C = 3600;
  }
  else
  {
    if ( v32 < 5 )
      v11 = 5;
    dword_1C00B117C = v11;
  }
  if ( dword_1C00B117C != v32 )
  {
    v23 = WdLogNewEntry5_WdWarning(3600LL, v2, v4);
    *(_QWORD *)(v23 + 24) = v32;
    *(_QWORD *)(v23 + 32) = (unsigned int)dword_1C00B117C;
    WdLogEvent5_WdWarning(v23);
  }
  LOBYTE(v12) = 1;
  byte_1C00B1174 = (unsigned __int8)WdIsDebuggerPresent(v12) != 0;
  if ( v25 <= 3 )
    v0 = v25;
  g_TdrDebugMode = v0;
  if ( v0 != v25 )
  {
    v24 = WdLogNewEntry5_WdWarning(v14, v13, v15);
    *(_QWORD *)(v24 + 24) = v25;
    *(_QWORD *)(v24 + 32) = g_TdrDebugMode;
    WdLogEvent5_WdWarning(v24);
  }
  TdrHistoryInit(&g_TdrHistory);
}
