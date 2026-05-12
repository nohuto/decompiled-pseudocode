/*
 * XREFs of McTemplateK0quuujjqzsssztuqquuuuuuqqi_EtwWriteTransfer @ 0x1C0003374
 * Callers:
 *     StorpTelemetrySendUnitUniqueErrorData @ 0x1C0002DF0 (StorpTelemetrySendUnitUniqueErrorData.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C0003E98 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C0019FC0 (__security_check_cookie.c)
 */

__int64 __fastcall McTemplateK0quuujjqzsssztuqquuuuuuqqi_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
        char a6,
        char a7,
        __int64 a8,
        __int64 a9,
        char a10,
        const wchar_t *a11,
        const char *a12,
        const char *a13,
        const char *a14,
        const wchar_t *a15,
        char a16,
        __int64 a17,
        char a18,
        char a19,
        char a20,
        char a21,
        char a22,
        char a23,
        char a24,
        char a25,
        char a26,
        char a27,
        char a28)
{
  int v28; // r9d
  __int64 v29; // rcx
  const wchar_t *v30; // rax
  __int64 v31; // rdx
  int v32; // r8d
  const char *v33; // rdx
  __int64 v34; // rax
  int v35; // eax
  const char *v36; // rdx
  __int64 v37; // rax
  int v38; // eax
  const char *v39; // rdx
  __int64 v40; // rax
  int v41; // eax
  const wchar_t *v42; // rax
  bool v43; // zf
  char v45; // [rsp+38h] [rbp-D0h] BYREF
  _BYTE v46[16]; // [rsp+48h] [rbp-C0h] BYREF
  int *v47; // [rsp+58h] [rbp-B0h]
  __int64 v48; // [rsp+60h] [rbp-A8h]
  char *v49; // [rsp+68h] [rbp-A0h]
  __int64 v50; // [rsp+70h] [rbp-98h]
  char *v51; // [rsp+78h] [rbp-90h]
  __int64 v52; // [rsp+80h] [rbp-88h]
  char *v53; // [rsp+88h] [rbp-80h]
  __int64 v54; // [rsp+90h] [rbp-78h]
  __int64 v55; // [rsp+98h] [rbp-70h]
  __int64 v56; // [rsp+A0h] [rbp-68h]
  __int64 v57; // [rsp+A8h] [rbp-60h]
  __int64 v58; // [rsp+B0h] [rbp-58h]
  char *v59; // [rsp+B8h] [rbp-50h]
  __int64 v60; // [rsp+C0h] [rbp-48h]
  const wchar_t *v61; // [rsp+C8h] [rbp-40h]
  int v62; // [rsp+D0h] [rbp-38h]
  int v63; // [rsp+D4h] [rbp-34h]
  const char *v64; // [rsp+D8h] [rbp-30h]
  int v65; // [rsp+E0h] [rbp-28h]
  int v66; // [rsp+E4h] [rbp-24h]
  const char *v67; // [rsp+E8h] [rbp-20h]
  int v68; // [rsp+F0h] [rbp-18h]
  int v69; // [rsp+F4h] [rbp-14h]
  const char *v70; // [rsp+F8h] [rbp-10h]
  int v71; // [rsp+100h] [rbp-8h]
  int v72; // [rsp+104h] [rbp-4h]
  const wchar_t *v73; // [rsp+108h] [rbp+0h]
  int v74; // [rsp+110h] [rbp+8h]
  int v75; // [rsp+114h] [rbp+Ch]
  char *v76; // [rsp+118h] [rbp+10h]
  __int64 v77; // [rsp+120h] [rbp+18h]
  char *v78; // [rsp+128h] [rbp+20h]
  __int64 v79; // [rsp+130h] [rbp+28h]
  char *v80; // [rsp+138h] [rbp+30h]
  __int64 v81; // [rsp+140h] [rbp+38h]
  char *v82; // [rsp+148h] [rbp+40h]
  __int64 v83; // [rsp+150h] [rbp+48h]
  char *v84; // [rsp+158h] [rbp+50h]
  __int64 v85; // [rsp+160h] [rbp+58h]
  char *v86; // [rsp+168h] [rbp+60h]
  __int64 v87; // [rsp+170h] [rbp+68h]
  char *v88; // [rsp+178h] [rbp+70h]
  __int64 v89; // [rsp+180h] [rbp+78h]
  char *v90; // [rsp+188h] [rbp+80h]
  __int64 v91; // [rsp+190h] [rbp+88h]
  char *v92; // [rsp+198h] [rbp+90h]
  __int64 v93; // [rsp+1A0h] [rbp+98h]
  char *v94; // [rsp+1A8h] [rbp+A0h]
  __int64 v95; // [rsp+1B0h] [rbp+A8h]
  char *v96; // [rsp+1B8h] [rbp+B0h]
  __int64 v97; // [rsp+1C0h] [rbp+B8h]
  char *v98; // [rsp+1C8h] [rbp+C0h]
  __int64 v99; // [rsp+1D0h] [rbp+C8h]
  char *v100; // [rsp+1D8h] [rbp+D0h]
  __int64 v101; // [rsp+1E0h] [rbp+D8h]
  int v102; // [rsp+220h] [rbp+118h] BYREF

  v102 = a4;
  v48 = 4LL;
  v45 = 1;
  v47 = &v102;
  v50 = 1LL;
  v49 = &a5;
  v28 = 10;
  v52 = 1LL;
  v51 = &a6;
  v29 = -1LL;
  v54 = 1LL;
  v53 = &a7;
  v55 = a8;
  v57 = a9;
  v59 = &a10;
  v30 = a11;
  v56 = 16LL;
  v58 = 16LL;
  v60 = 4LL;
  if ( a11 )
  {
    v31 = -1LL;
    do
      ++v31;
    while ( a11[v31] );
    v32 = 2 * v31 + 2;
  }
  else
  {
    v32 = 10;
  }
  v33 = a12;
  v62 = v32;
  v63 = 0;
  if ( !a11 )
    v30 = L"NULL";
  v61 = v30;
  if ( a12 )
  {
    v34 = -1LL;
    do
      ++v34;
    while ( a12[v34] );
    v35 = v34 + 1;
  }
  else
  {
    v35 = 5;
  }
  v65 = v35;
  v66 = 0;
  if ( !a12 )
    v33 = "NULL";
  v64 = v33;
  v36 = a13;
  if ( a13 )
  {
    v37 = -1LL;
    do
      ++v37;
    while ( a13[v37] );
    v38 = v37 + 1;
  }
  else
  {
    v38 = 5;
  }
  v68 = v38;
  v69 = 0;
  if ( !a13 )
    v36 = "NULL";
  v67 = v36;
  v39 = a14;
  if ( a14 )
  {
    v40 = -1LL;
    do
      ++v40;
    while ( a14[v40] );
    v41 = v40 + 1;
  }
  else
  {
    v41 = 5;
  }
  v71 = v41;
  v42 = a15;
  if ( !a14 )
    v39 = "NULL";
  v72 = 0;
  v70 = v39;
  v43 = a15 == 0LL;
  if ( a15 )
  {
    do
      ++v29;
    while ( a15[v29] );
    v28 = 2 * v29 + 2;
    v43 = a15 == 0LL;
  }
  if ( v43 )
    v42 = L"NULL";
  v74 = v28;
  v73 = v42;
  v75 = 0;
  v76 = &a16;
  v77 = 4LL;
  v78 = &v45;
  v79 = 1LL;
  v80 = &a18;
  v82 = &a19;
  v84 = &a20;
  v86 = &a21;
  v88 = &a22;
  v90 = &a23;
  v92 = &a24;
  v94 = &a25;
  v96 = &a26;
  v98 = &a27;
  v100 = &a28;
  v81 = 4LL;
  v83 = 4LL;
  v85 = 1LL;
  v87 = 1LL;
  v89 = 1LL;
  v91 = 1LL;
  v93 = 1LL;
  v95 = 1LL;
  v97 = 4LL;
  v99 = 4LL;
  v101 = 8LL;
  return McGenEventWrite_EtwWriteTransfer(v29, &EventUnitUniqueErrorData, 0LL, 26LL, v46);
}
