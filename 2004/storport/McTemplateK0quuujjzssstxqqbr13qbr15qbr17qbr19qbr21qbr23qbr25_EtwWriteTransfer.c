/*
 * XREFs of McTemplateK0quuujjzssstxqqbr13qbr15qbr17qbr19qbr21qbr23qbr25_EtwWriteTransfer @ 0x1C004FD78
 * Callers:
 *     StorpTelemetrySendUnitDeviceStatistics @ 0x1C00024C8 (StorpTelemetrySendUnitDeviceStatistics.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C0003F88 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C001BE70 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0quuujjzssstxqqbr13qbr15qbr17qbr19qbr21qbr23qbr25_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
        char a6,
        char a7,
        __int64 a8,
        __int64 a9,
        const wchar_t *a10,
        const char *a11,
        const char *a12,
        const char *a13,
        char a14,
        __int64 a15,
        char a16,
        int a17,
        __int64 a18,
        int a19,
        __int64 a20,
        int a21,
        __int64 a22,
        int a23,
        __int64 a24,
        int a25,
        __int64 a26,
        int a27,
        __int64 a28,
        int a29,
        __int64 a30)
{
  const wchar_t *v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rdx
  int v33; // r8d
  const char *v34; // rdx
  __int64 v35; // rcx
  int v36; // ecx
  const char *v37; // rdx
  __int64 v38; // rcx
  int v39; // ecx
  const char *v40; // rcx
  int v41; // eax
  __int64 v43; // [rsp+30h] [rbp-D0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v44; // [rsp+40h] [rbp-C0h] BYREF
  int *v45; // [rsp+50h] [rbp-B0h]
  __int64 v46; // [rsp+58h] [rbp-A8h]
  char *v47; // [rsp+60h] [rbp-A0h]
  __int64 v48; // [rsp+68h] [rbp-98h]
  char *v49; // [rsp+70h] [rbp-90h]
  __int64 v50; // [rsp+78h] [rbp-88h]
  char *v51; // [rsp+80h] [rbp-80h]
  __int64 v52; // [rsp+88h] [rbp-78h]
  __int64 v53; // [rsp+90h] [rbp-70h]
  __int64 v54; // [rsp+98h] [rbp-68h]
  __int64 v55; // [rsp+A0h] [rbp-60h]
  __int64 v56; // [rsp+A8h] [rbp-58h]
  const wchar_t *v57; // [rsp+B0h] [rbp-50h]
  int v58; // [rsp+B8h] [rbp-48h]
  int v59; // [rsp+BCh] [rbp-44h]
  const char *v60; // [rsp+C0h] [rbp-40h]
  int v61; // [rsp+C8h] [rbp-38h]
  int v62; // [rsp+CCh] [rbp-34h]
  const char *v63; // [rsp+D0h] [rbp-30h]
  int v64; // [rsp+D8h] [rbp-28h]
  int v65; // [rsp+DCh] [rbp-24h]
  const char *v66; // [rsp+E0h] [rbp-20h]
  int v67; // [rsp+E8h] [rbp-18h]
  int v68; // [rsp+ECh] [rbp-14h]
  char *v69; // [rsp+F0h] [rbp-10h]
  __int64 v70; // [rsp+F8h] [rbp-8h]
  __int64 *v71; // [rsp+100h] [rbp+0h]
  __int64 v72; // [rsp+108h] [rbp+8h]
  char *v73; // [rsp+110h] [rbp+10h]
  __int64 v74; // [rsp+118h] [rbp+18h]
  int *v75; // [rsp+120h] [rbp+20h]
  __int64 v76; // [rsp+128h] [rbp+28h]
  __int64 v77; // [rsp+130h] [rbp+30h]
  int v78; // [rsp+138h] [rbp+38h]
  int v79; // [rsp+13Ch] [rbp+3Ch]
  int *v80; // [rsp+140h] [rbp+40h]
  __int64 v81; // [rsp+148h] [rbp+48h]
  __int64 v82; // [rsp+150h] [rbp+50h]
  int v83; // [rsp+158h] [rbp+58h]
  int v84; // [rsp+15Ch] [rbp+5Ch]
  int *v85; // [rsp+160h] [rbp+60h]
  __int64 v86; // [rsp+168h] [rbp+68h]
  __int64 v87; // [rsp+170h] [rbp+70h]
  int v88; // [rsp+178h] [rbp+78h]
  int v89; // [rsp+17Ch] [rbp+7Ch]
  int *v90; // [rsp+180h] [rbp+80h]
  __int64 v91; // [rsp+188h] [rbp+88h]
  __int64 v92; // [rsp+190h] [rbp+90h]
  int v93; // [rsp+198h] [rbp+98h]
  int v94; // [rsp+19Ch] [rbp+9Ch]
  int *v95; // [rsp+1A0h] [rbp+A0h]
  __int64 v96; // [rsp+1A8h] [rbp+A8h]
  __int64 v97; // [rsp+1B0h] [rbp+B0h]
  int v98; // [rsp+1B8h] [rbp+B8h]
  int v99; // [rsp+1BCh] [rbp+BCh]
  int *v100; // [rsp+1C0h] [rbp+C0h]
  __int64 v101; // [rsp+1C8h] [rbp+C8h]
  __int64 v102; // [rsp+1D0h] [rbp+D0h]
  int v103; // [rsp+1D8h] [rbp+D8h]
  int v104; // [rsp+1DCh] [rbp+DCh]
  int *v105; // [rsp+1E0h] [rbp+E0h]
  __int64 v106; // [rsp+1E8h] [rbp+E8h]
  __int64 v107; // [rsp+1F0h] [rbp+F0h]
  int v108; // [rsp+1F8h] [rbp+F8h]
  int v109; // [rsp+1FCh] [rbp+FCh]
  int v110; // [rsp+238h] [rbp+138h] BYREF

  v110 = a4;
  v30 = a10;
  v43 = *(_QWORD *)&g_SystemUptime_s;
  v45 = &v110;
  v47 = &a5;
  v46 = 4LL;
  v49 = &a6;
  v51 = &a7;
  v53 = a8;
  v55 = a9;
  v31 = -1LL;
  v48 = 1LL;
  v50 = 1LL;
  v52 = 1LL;
  v54 = 16LL;
  v56 = 16LL;
  if ( a10 )
  {
    v32 = -1LL;
    do
      ++v32;
    while ( a10[v32] );
    v33 = 2 * v32 + 2;
  }
  else
  {
    v33 = 10;
  }
  v58 = v33;
  v59 = 0;
  if ( !a10 )
    v30 = L"NULL";
  v34 = a11;
  v57 = v30;
  if ( a11 )
  {
    v35 = -1LL;
    do
      ++v35;
    while ( a11[v35] );
    v36 = v35 + 1;
  }
  else
  {
    v36 = 5;
  }
  v61 = v36;
  v62 = 0;
  if ( !a11 )
    v34 = "NULL";
  v60 = v34;
  v37 = a12;
  if ( a12 )
  {
    v38 = -1LL;
    do
      ++v38;
    while ( a12[v38] );
    v39 = v38 + 1;
  }
  else
  {
    v39 = 5;
  }
  v64 = v39;
  v40 = a13;
  if ( !a12 )
    v37 = "NULL";
  v65 = 0;
  v63 = v37;
  if ( a13 )
  {
    do
      ++v31;
    while ( a13[v31] );
    v41 = v31 + 1;
  }
  else
  {
    v41 = 5;
  }
  v67 = v41;
  v68 = 0;
  v69 = &a14;
  v79 = 0;
  v71 = &v43;
  if ( !a13 )
    v40 = "NULL";
  v84 = 0;
  v73 = &a16;
  v89 = 0;
  v75 = &a17;
  v77 = a18;
  v78 = a17;
  v80 = &a19;
  v82 = a20;
  v83 = a19;
  v85 = &a21;
  v87 = a22;
  v88 = a21;
  v90 = &a23;
  v92 = a24;
  v93 = a23;
  v95 = &a25;
  v97 = a26;
  v98 = a25;
  v100 = &a27;
  v102 = a28;
  v103 = a27;
  v105 = &a29;
  v107 = a30;
  v108 = a29;
  v94 = 0;
  v99 = 0;
  v104 = 0;
  v109 = 0;
  v66 = v40;
  v70 = 4LL;
  v72 = 8LL;
  v74 = 4LL;
  v76 = 4LL;
  v81 = 4LL;
  v86 = 4LL;
  v91 = 4LL;
  v96 = 4LL;
  v101 = 4LL;
  v106 = 4LL;
  return McGenEventWrite_EtwWriteTransfer((__int64)v40, &EventUnitDeviceStatisticsLogs, 0LL, 0x1Cu, &v44);
}
