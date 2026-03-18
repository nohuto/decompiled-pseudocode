/*
 * XREFs of ?TdrInit@@YAXXZ @ 0x1C01F63B8
 * Callers:
 *     DriverEntry @ 0x1C03C7238 (DriverEntry.c)
 * Callees:
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ?TdrHistoryInit@@YAXPEAU_TDR_HISTORY@@@Z @ 0x1C01DCB80 (-TdrHistoryInit@@YAXPEAU_TDR_HISTORY@@@Z.c)
 */

void TdrInit(void)
{
  volatile int v0; // ebx
  int v1; // eax
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // [rsp+38h] [rbp-D0h] BYREF
  unsigned int v10; // [rsp+3Ch] [rbp-CCh] BYREF
  unsigned int v11; // [rsp+40h] [rbp-C8h] BYREF
  unsigned int v12; // [rsp+44h] [rbp-C4h] BYREF
  unsigned int v13; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int v14; // [rsp+4Ch] [rbp-BCh] BYREF
  unsigned int v15; // [rsp+50h] [rbp-B8h] BYREF
  unsigned int v16; // [rsp+54h] [rbp-B4h] BYREF
  int v17; // [rsp+58h] [rbp-B0h] BYREF
  int v18; // [rsp+5Ch] [rbp-ACh] BYREF
  int v19; // [rsp+60h] [rbp-A8h] BYREF
  int v20; // [rsp+64h] [rbp-A4h] BYREF
  int v21; // [rsp+68h] [rbp-A0h] BYREF
  int v22; // [rsp+6Ch] [rbp-9Ch] BYREF
  __int64 v23; // [rsp+70h] [rbp-98h] BYREF
  __int64 v24; // [rsp+78h] [rbp-90h] BYREF
  int v25; // [rsp+80h] [rbp-88h]
  const wchar_t *v26; // [rsp+88h] [rbp-80h]
  unsigned int *v27; // [rsp+90h] [rbp-78h]
  int v28; // [rsp+98h] [rbp-70h]
  int *v29; // [rsp+A0h] [rbp-68h]
  int v30; // [rsp+A8h] [rbp-60h]
  __int64 v31; // [rsp+B0h] [rbp-58h]
  int v32; // [rsp+B8h] [rbp-50h]
  const wchar_t *v33; // [rsp+C0h] [rbp-48h]
  unsigned int *v34; // [rsp+C8h] [rbp-40h]
  int v35; // [rsp+D0h] [rbp-38h]
  int *v36; // [rsp+D8h] [rbp-30h]
  int v37; // [rsp+E0h] [rbp-28h]
  __int64 v38; // [rsp+E8h] [rbp-20h]
  int v39; // [rsp+F0h] [rbp-18h]
  const wchar_t *v40; // [rsp+F8h] [rbp-10h]
  unsigned int *v41; // [rsp+100h] [rbp-8h]
  int v42; // [rsp+108h] [rbp+0h]
  int *v43; // [rsp+110h] [rbp+8h]
  int v44; // [rsp+118h] [rbp+10h]
  __int64 v45; // [rsp+120h] [rbp+18h]
  int v46; // [rsp+128h] [rbp+20h]
  const wchar_t *v47; // [rsp+130h] [rbp+28h]
  unsigned int *v48; // [rsp+138h] [rbp+30h]
  int v49; // [rsp+140h] [rbp+38h]
  int *v50; // [rsp+148h] [rbp+40h]
  int v51; // [rsp+150h] [rbp+48h]
  __int64 v52; // [rsp+158h] [rbp+50h]
  int v53; // [rsp+160h] [rbp+58h]
  const wchar_t *v54; // [rsp+168h] [rbp+60h]
  unsigned int *v55; // [rsp+170h] [rbp+68h]
  int v56; // [rsp+178h] [rbp+70h]
  int *v57; // [rsp+180h] [rbp+78h]
  int v58; // [rsp+188h] [rbp+80h]
  __int64 v59; // [rsp+190h] [rbp+88h]
  int v60; // [rsp+198h] [rbp+90h]
  const wchar_t *v61; // [rsp+1A0h] [rbp+98h]
  unsigned int *v62; // [rsp+1A8h] [rbp+A0h]
  int v63; // [rsp+1B0h] [rbp+A8h]
  int *v64; // [rsp+1B8h] [rbp+B0h]
  int v65; // [rsp+1C0h] [rbp+B8h]
  __int64 v66; // [rsp+1C8h] [rbp+C0h]
  int v67; // [rsp+1D0h] [rbp+C8h]
  const wchar_t *v68; // [rsp+1D8h] [rbp+D0h]
  unsigned int *v69; // [rsp+1E0h] [rbp+D8h]
  int v70; // [rsp+1E8h] [rbp+E0h]
  __int64 *v71; // [rsp+1F0h] [rbp+E8h]
  int v72; // [rsp+1F8h] [rbp+F0h]
  __int64 v73; // [rsp+200h] [rbp+F8h]
  int v74; // [rsp+208h] [rbp+100h]
  const wchar_t *v75; // [rsp+210h] [rbp+108h]
  unsigned int *v76; // [rsp+218h] [rbp+110h]
  int v77; // [rsp+220h] [rbp+118h]
  char *v78; // [rsp+228h] [rbp+120h]
  int v79; // [rsp+230h] [rbp+128h]
  __int64 v80; // [rsp+238h] [rbp+130h]
  int v81; // [rsp+240h] [rbp+138h]
  __int128 v82; // [rsp+248h] [rbp+140h]
  __int128 v83; // [rsp+258h] [rbp+150h]
  __int64 v84; // [rsp+268h] [rbp+160h]

  v23 = 0x20000003CLL;
  v14 = 0;
  v10 = 0;
  v11 = 0;
  v17 = 3;
  v26 = L"TdrLevel";
  v27 = &v14;
  v29 = &v17;
  v0 = 2;
  v12 = 0;
  v18 = 2;
  v33 = L"TdrDelay";
  v19 = 2;
  v34 = &v10;
  v36 = &v18;
  v40 = L"TdrDodPresentDelay";
  v41 = &v11;
  v43 = &v19;
  v47 = L"TdrDodVSyncDelay";
  v48 = &v12;
  v50 = &v20;
  v54 = L"TdrDdiDelay";
  v55 = &v13;
  v57 = &v21;
  v61 = L"TdrLimitCount";
  v62 = &v15;
  v20 = 2;
  v21 = 5;
  v13 = 0;
  v9 = 0;
  v22 = 5;
  v15 = 0;
  v16 = 0;
  v24 = 0LL;
  v25 = 288;
  v28 = 67108868;
  v30 = 4;
  v31 = 0LL;
  v32 = 288;
  v35 = 67108868;
  v37 = 4;
  v38 = 0LL;
  v39 = 288;
  v42 = 67108868;
  v44 = 4;
  v45 = 0LL;
  v46 = 288;
  v49 = 67108868;
  v51 = 4;
  v52 = 0LL;
  v53 = 288;
  v56 = 67108868;
  v58 = 4;
  v59 = 0LL;
  v60 = 288;
  v63 = 67108868;
  v64 = &v22;
  v65 = 4;
  v68 = L"TdrLimitTime";
  v67 = 288;
  v69 = &v16;
  v71 = &v23;
  v75 = L"TdrDebugMode";
  v76 = &v9;
  v78 = (char *)&v23 + 4;
  v70 = 67108868;
  v72 = 4;
  v74 = 288;
  v77 = 67108868;
  v79 = 4;
  v84 = 0LL;
  v66 = 0LL;
  v73 = 0LL;
  v80 = 0LL;
  v81 = 0;
  v82 = 0LL;
  v83 = 0LL;
  v1 = RtlQueryRegistryValuesEx(
         0LL,
         L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers",
         &v24,
         0LL,
         0LL);
  if ( v1 < 0 )
  {
    v14 = 3;
    v10 = 2;
    v11 = 2;
    v12 = 2;
    v13 = 5;
    v9 = 2;
    WdLogSingleEntry1(3LL, v1);
  }
  if ( v14 == 3 || v14 <= 1 )
  {
    g_TdrConfig = v14;
  }
  else
  {
    g_TdrConfig = 3;
    WdLogSingleEntry2(3LL, v14, 3LL);
  }
  v2 = v10;
  if ( v10 )
  {
    if ( v10 > 0x384 )
      v2 = 900;
    dword_1C0130BFC = v2;
  }
  else
  {
    dword_1C0130BFC = 1;
  }
  if ( dword_1C0130BFC != v10 )
    WdLogSingleEntry2(3LL, v10, (unsigned int)dword_1C0130BFC);
  v3 = v11;
  if ( v11 )
  {
    if ( v11 > 0x384 )
      v3 = 900;
    dword_1C0130C00 = v3;
  }
  else
  {
    dword_1C0130C00 = 1;
  }
  if ( dword_1C0130C00 != v11 )
    WdLogSingleEntry2(3LL, v11, (unsigned int)dword_1C0130C00);
  v4 = v12;
  if ( v12 )
  {
    if ( v12 > 0x384 )
      v4 = 900;
    dword_1C0130C04 = v4;
  }
  else
  {
    dword_1C0130C04 = 1;
  }
  if ( dword_1C0130C04 != v12 )
    WdLogSingleEntry2(3LL, v12, (unsigned int)dword_1C0130C04);
  v5 = v13;
  if ( v13 )
  {
    if ( v13 > 0x384 )
      v5 = 900;
    dword_1C0130C08 = v5;
  }
  else
  {
    dword_1C0130C08 = 1;
  }
  if ( dword_1C0130C08 != v13 )
    WdLogSingleEntry2(3LL, v13, (unsigned int)dword_1C0130C08);
  v6 = v15;
  if ( v15 > 0x20 )
  {
    dword_1C0130C10 = 32;
  }
  else
  {
    if ( !v15 )
      v6 = 1;
    dword_1C0130C10 = v6;
  }
  if ( dword_1C0130C10 != v15 )
    WdLogSingleEntry2(3LL, v15, (unsigned int)dword_1C0130C10);
  v7 = v16;
  v8 = 3600LL;
  if ( v16 > 0xE10 )
  {
    dword_1C0130C14 = 3600;
  }
  else
  {
    if ( v16 < 5 )
      v7 = 5;
    dword_1C0130C14 = v7;
  }
  if ( dword_1C0130C14 != v16 )
    WdLogSingleEntry2(3LL, v16, (unsigned int)dword_1C0130C14);
  LOBYTE(v8) = 1;
  byte_1C0130C0C = (unsigned __int8)WdIsDebuggerPresent(v8) != 0;
  if ( v9 <= 3 )
    v0 = v9;
  g_TdrDebugMode = v0;
  if ( v0 != v9 )
    WdLogSingleEntry2(3LL, v9, g_TdrDebugMode);
  TdrHistoryInit(&g_TdrHistory);
}
