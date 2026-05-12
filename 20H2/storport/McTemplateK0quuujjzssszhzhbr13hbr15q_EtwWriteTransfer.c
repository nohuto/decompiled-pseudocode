/*
 * XREFs of McTemplateK0quuujjzssszhzhbr13hbr15q_EtwWriteTransfer @ 0x1C00375C0
 * Callers:
 *     StorpMarkDeviceFailed @ 0x1C003C5F8 (StorpMarkDeviceFailed.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C000DC24 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C001CB10 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0quuujjzssszhzhbr13hbr15q_EtwWriteTransfer(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
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
        const wchar_t *a14,
        char a15,
        const wchar_t *a16,
        unsigned __int16 a17,
        __int64 a18,
        unsigned __int16 a19,
        __int64 a20,
        char a21)
{
  const wchar_t *v22; // rdx
  int v23; // r9d
  __int64 v24; // rcx
  __int64 v25; // rax
  int v26; // r8d
  const char *v27; // rdx
  __int64 v28; // rax
  int v29; // eax
  const char *v30; // rdx
  __int64 v31; // rax
  int v32; // eax
  const char *v33; // rdx
  __int64 v34; // rax
  int v35; // eax
  const wchar_t *v36; // rax
  __int64 v37; // rdx
  int v38; // r8d
  const wchar_t *v39; // rax
  bool v40; // zf
  struct _EVENT_DATA_DESCRIPTOR v42; // [rsp+38h] [rbp-D0h] BYREF
  int *v43; // [rsp+48h] [rbp-C0h]
  __int64 v44; // [rsp+50h] [rbp-B8h]
  char *v45; // [rsp+58h] [rbp-B0h]
  __int64 v46; // [rsp+60h] [rbp-A8h]
  char *v47; // [rsp+68h] [rbp-A0h]
  __int64 v48; // [rsp+70h] [rbp-98h]
  char *v49; // [rsp+78h] [rbp-90h]
  __int64 v50; // [rsp+80h] [rbp-88h]
  __int64 v51; // [rsp+88h] [rbp-80h]
  __int64 v52; // [rsp+90h] [rbp-78h]
  __int64 v53; // [rsp+98h] [rbp-70h]
  __int64 v54; // [rsp+A0h] [rbp-68h]
  const wchar_t *v55; // [rsp+A8h] [rbp-60h]
  int v56; // [rsp+B0h] [rbp-58h]
  int v57; // [rsp+B4h] [rbp-54h]
  const char *v58; // [rsp+B8h] [rbp-50h]
  int v59; // [rsp+C0h] [rbp-48h]
  int v60; // [rsp+C4h] [rbp-44h]
  const char *v61; // [rsp+C8h] [rbp-40h]
  int v62; // [rsp+D0h] [rbp-38h]
  int v63; // [rsp+D4h] [rbp-34h]
  const char *v64; // [rsp+D8h] [rbp-30h]
  int v65; // [rsp+E0h] [rbp-28h]
  int v66; // [rsp+E4h] [rbp-24h]
  const wchar_t *v67; // [rsp+E8h] [rbp-20h]
  int v68; // [rsp+F0h] [rbp-18h]
  int v69; // [rsp+F4h] [rbp-14h]
  char *v70; // [rsp+F8h] [rbp-10h]
  __int64 v71; // [rsp+100h] [rbp-8h]
  const wchar_t *v72; // [rsp+108h] [rbp+0h]
  int v73; // [rsp+110h] [rbp+8h]
  int v74; // [rsp+114h] [rbp+Ch]
  unsigned __int16 *v75; // [rsp+118h] [rbp+10h]
  __int64 v76; // [rsp+120h] [rbp+18h]
  __int64 v77; // [rsp+128h] [rbp+20h]
  int v78; // [rsp+130h] [rbp+28h]
  int v79; // [rsp+134h] [rbp+2Ch]
  unsigned __int16 *v80; // [rsp+138h] [rbp+30h]
  __int64 v81; // [rsp+140h] [rbp+38h]
  __int64 v82; // [rsp+148h] [rbp+40h]
  int v83; // [rsp+150h] [rbp+48h]
  int v84; // [rsp+154h] [rbp+4Ch]
  char *v85; // [rsp+158h] [rbp+50h]
  __int64 v86; // [rsp+160h] [rbp+58h]
  int v87; // [rsp+1A0h] [rbp+98h] BYREF

  v87 = a4;
  v44 = 4LL;
  v43 = &v87;
  v46 = 1LL;
  v45 = &a5;
  v22 = a10;
  v47 = &a6;
  v23 = 10;
  v48 = 1LL;
  v49 = &a7;
  v24 = -1LL;
  v51 = a8;
  v53 = a9;
  v50 = 1LL;
  v52 = 16LL;
  v54 = 16LL;
  if ( a10 )
  {
    v25 = -1LL;
    do
      ++v25;
    while ( a10[v25] );
    v26 = 2 * v25 + 2;
  }
  else
  {
    v26 = 10;
  }
  v56 = v26;
  v57 = 0;
  if ( !a10 )
    v22 = L"NULL";
  v55 = v22;
  v27 = a11;
  if ( a11 )
  {
    v28 = -1LL;
    do
      ++v28;
    while ( a11[v28] );
    v29 = v28 + 1;
  }
  else
  {
    v29 = 5;
  }
  v59 = v29;
  v60 = 0;
  if ( !a11 )
    v27 = "NULL";
  v58 = v27;
  v30 = a12;
  if ( a12 )
  {
    v31 = -1LL;
    do
      ++v31;
    while ( a12[v31] );
    v32 = v31 + 1;
  }
  else
  {
    v32 = 5;
  }
  v62 = v32;
  v63 = 0;
  if ( !a12 )
    v30 = "NULL";
  v61 = v30;
  v33 = a13;
  if ( a13 )
  {
    v34 = -1LL;
    do
      ++v34;
    while ( a13[v34] );
    v35 = v34 + 1;
  }
  else
  {
    v35 = 5;
  }
  v65 = v35;
  v36 = a14;
  if ( !a13 )
    v33 = "NULL";
  v66 = 0;
  v64 = v33;
  if ( a14 )
  {
    v37 = -1LL;
    do
      ++v37;
    while ( a14[v37] );
    v38 = 2 * v37 + 2;
  }
  else
  {
    v38 = 10;
  }
  v68 = v38;
  v69 = 0;
  if ( !a14 )
    v36 = L"NULL";
  v71 = 2LL;
  v67 = v36;
  v70 = &a15;
  v39 = a16;
  v40 = a16 == 0LL;
  if ( a16 )
  {
    do
      ++v24;
    while ( a16[v24] );
    v23 = 2 * v24 + 2;
    v40 = a16 == 0LL;
  }
  if ( v40 )
    v39 = L"NULL";
  v73 = v23;
  v72 = v39;
  v74 = 0;
  v75 = &a17;
  v77 = a18;
  v78 = a17;
  v80 = &a19;
  v82 = a20;
  v83 = a19;
  v85 = &a21;
  v76 = 2LL;
  v79 = 0;
  v81 = 2LL;
  v84 = 0;
  v86 = 4LL;
  return McGenEventWrite_EtwWriteTransfer(v24, a2, 0LL, 0x13u, &v42);
}
