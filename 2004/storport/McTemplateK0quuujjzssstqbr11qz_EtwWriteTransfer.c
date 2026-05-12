/*
 * XREFs of McTemplateK0quuujjzssstqbr11qz_EtwWriteTransfer @ 0x1C0036504
 * Callers:
 *     StorEtwMiniportLogError @ 0x1C0037660 (StorEtwMiniportLogError.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C0003F88 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C001BE70 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0quuujjzssstqbr11qz_EtwWriteTransfer(
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
        int a15,
        __int64 a16,
        char a17,
        const wchar_t *a18)
{
  const wchar_t *v18; // rdx
  __int64 v19; // rcx
  int v20; // r9d
  __int64 v21; // rax
  int v22; // r8d
  const char *v23; // rdx
  __int64 v24; // rax
  int v25; // eax
  const char *v26; // rdx
  __int64 v27; // rax
  int v28; // eax
  const char *v29; // rdx
  __int64 v30; // rax
  int v31; // eax
  const wchar_t *v32; // rax
  bool v33; // zf
  struct _EVENT_DATA_DESCRIPTOR v35; // [rsp+38h] [rbp-D0h] BYREF
  int *v36; // [rsp+48h] [rbp-C0h]
  __int64 v37; // [rsp+50h] [rbp-B8h]
  char *v38; // [rsp+58h] [rbp-B0h]
  __int64 v39; // [rsp+60h] [rbp-A8h]
  char *v40; // [rsp+68h] [rbp-A0h]
  __int64 v41; // [rsp+70h] [rbp-98h]
  char *v42; // [rsp+78h] [rbp-90h]
  __int64 v43; // [rsp+80h] [rbp-88h]
  __int64 v44; // [rsp+88h] [rbp-80h]
  __int64 v45; // [rsp+90h] [rbp-78h]
  __int64 v46; // [rsp+98h] [rbp-70h]
  __int64 v47; // [rsp+A0h] [rbp-68h]
  const wchar_t *v48; // [rsp+A8h] [rbp-60h]
  int v49; // [rsp+B0h] [rbp-58h]
  int v50; // [rsp+B4h] [rbp-54h]
  const char *v51; // [rsp+B8h] [rbp-50h]
  int v52; // [rsp+C0h] [rbp-48h]
  int v53; // [rsp+C4h] [rbp-44h]
  const char *v54; // [rsp+C8h] [rbp-40h]
  int v55; // [rsp+D0h] [rbp-38h]
  int v56; // [rsp+D4h] [rbp-34h]
  const char *v57; // [rsp+D8h] [rbp-30h]
  int v58; // [rsp+E0h] [rbp-28h]
  int v59; // [rsp+E4h] [rbp-24h]
  char *v60; // [rsp+E8h] [rbp-20h]
  __int64 v61; // [rsp+F0h] [rbp-18h]
  int *v62; // [rsp+F8h] [rbp-10h]
  __int64 v63; // [rsp+100h] [rbp-8h]
  __int64 v64; // [rsp+108h] [rbp+0h]
  int v65; // [rsp+110h] [rbp+8h]
  int v66; // [rsp+114h] [rbp+Ch]
  char *v67; // [rsp+118h] [rbp+10h]
  __int64 v68; // [rsp+120h] [rbp+18h]
  const wchar_t *v69; // [rsp+128h] [rbp+20h]
  int v70; // [rsp+130h] [rbp+28h]
  int v71; // [rsp+134h] [rbp+2Ch]
  int v72; // [rsp+170h] [rbp+68h] BYREF

  v72 = a4;
  v18 = a10;
  v36 = &v72;
  v37 = 4LL;
  v38 = &a5;
  v19 = -1LL;
  v45 = 16LL;
  v40 = &a6;
  v39 = 1LL;
  v42 = &a7;
  v20 = 10;
  v44 = a8;
  v46 = a9;
  v41 = 1LL;
  v43 = 1LL;
  v47 = 16LL;
  if ( a10 )
  {
    v21 = -1LL;
    do
      ++v21;
    while ( a10[v21] );
    v22 = 2 * v21 + 2;
  }
  else
  {
    v22 = 10;
  }
  v49 = v22;
  v50 = 0;
  if ( !a10 )
    v18 = L"NULL";
  v48 = v18;
  v23 = a11;
  if ( a11 )
  {
    v24 = -1LL;
    do
      ++v24;
    while ( a11[v24] );
    v25 = v24 + 1;
  }
  else
  {
    v25 = 5;
  }
  v52 = v25;
  v53 = 0;
  if ( !a11 )
    v23 = "NULL";
  v51 = v23;
  v26 = a12;
  if ( a12 )
  {
    v27 = -1LL;
    do
      ++v27;
    while ( a12[v27] );
    v28 = v27 + 1;
  }
  else
  {
    v28 = 5;
  }
  v55 = v28;
  v56 = 0;
  if ( !a12 )
    v26 = "NULL";
  v54 = v26;
  v29 = a13;
  if ( a13 )
  {
    v30 = -1LL;
    do
      ++v30;
    while ( a13[v30] );
    v31 = v30 + 1;
  }
  else
  {
    v31 = 5;
  }
  v58 = v31;
  v59 = 0;
  v60 = &a14;
  if ( !a13 )
    v29 = "NULL";
  v57 = v29;
  v62 = &a15;
  v64 = a16;
  v65 = a15;
  v67 = &a17;
  v32 = a18;
  v61 = 4LL;
  v63 = 4LL;
  v66 = 0;
  v68 = 4LL;
  v33 = a18 == 0LL;
  if ( a18 )
  {
    do
      ++v19;
    while ( a18[v19] );
    v20 = 2 * v19 + 2;
    v33 = a18 == 0LL;
  }
  if ( v33 )
    v32 = L"NULL";
  v70 = v20;
  v69 = v32;
  v71 = 0;
  return McGenEventWrite_EtwWriteTransfer(v19, &EventMiniportLogError, 0LL, 0x10u, &v35);
}
