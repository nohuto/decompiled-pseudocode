/*
 * XREFs of McTemplateK0zqjuuujssstsxx_EtwWriteTransfer @ 0x1C0045034
 * Callers:
 *     RaUnitStartIo @ 0x1C0004F30 (RaUnitStartIo.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1C0003E98 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C0019FC0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0zqjuuujssstsxx_EtwWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const wchar_t *a4,
        char a5,
        __int64 a6,
        char a7,
        char a8,
        char a9,
        __int64 a10,
        const char *a11,
        const char *a12,
        const char *a13,
        char a14,
        const char *a15,
        __int64 a16,
        char a17)
{
  __int64 v17; // rcx
  __int64 v18; // rax
  int v19; // edx
  const char *v20; // rdx
  __int64 v21; // rax
  int v22; // eax
  const char *v23; // rdx
  __int64 v24; // rax
  int v25; // eax
  const char *v26; // rdx
  __int64 v27; // rax
  int v28; // eax
  const char *v29; // rax
  __int64 v30; // rcx
  __int64 v32; // [rsp+30h] [rbp-D0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v33; // [rsp+40h] [rbp-C0h] BYREF
  const wchar_t *v34; // [rsp+50h] [rbp-B0h]
  int v35; // [rsp+58h] [rbp-A8h]
  int v36; // [rsp+5Ch] [rbp-A4h]
  char *v37; // [rsp+60h] [rbp-A0h]
  __int64 v38; // [rsp+68h] [rbp-98h]
  __int64 v39; // [rsp+70h] [rbp-90h]
  __int64 v40; // [rsp+78h] [rbp-88h]
  char *v41; // [rsp+80h] [rbp-80h]
  __int64 v42; // [rsp+88h] [rbp-78h]
  char *v43; // [rsp+90h] [rbp-70h]
  __int64 v44; // [rsp+98h] [rbp-68h]
  char *v45; // [rsp+A0h] [rbp-60h]
  __int64 v46; // [rsp+A8h] [rbp-58h]
  __int64 v47; // [rsp+B0h] [rbp-50h]
  __int64 v48; // [rsp+B8h] [rbp-48h]
  const char *v49; // [rsp+C0h] [rbp-40h]
  int v50; // [rsp+C8h] [rbp-38h]
  int v51; // [rsp+CCh] [rbp-34h]
  const char *v52; // [rsp+D0h] [rbp-30h]
  int v53; // [rsp+D8h] [rbp-28h]
  int v54; // [rsp+DCh] [rbp-24h]
  const char *v55; // [rsp+E0h] [rbp-20h]
  int v56; // [rsp+E8h] [rbp-18h]
  int v57; // [rsp+ECh] [rbp-14h]
  char *v58; // [rsp+F0h] [rbp-10h]
  __int64 v59; // [rsp+F8h] [rbp-8h]
  const char *v60; // [rsp+100h] [rbp+0h]
  int v61; // [rsp+108h] [rbp+8h]
  int v62; // [rsp+10Ch] [rbp+Ch]
  __int64 *v63; // [rsp+110h] [rbp+10h]
  __int64 v64; // [rsp+118h] [rbp+18h]
  char *v65; // [rsp+120h] [rbp+20h]
  __int64 v66; // [rsp+128h] [rbp+28h]

  v17 = -1LL;
  v32 = DeviceQueueIoWaitThreshold;
  if ( a4 )
  {
    v18 = -1LL;
    do
      ++v18;
    while ( a4[v18] );
    v19 = 2 * v18 + 2;
  }
  else
  {
    v19 = 10;
  }
  v35 = v19;
  v20 = a11;
  v36 = 0;
  v38 = 4LL;
  if ( !a4 )
    a4 = L"NULL";
  v40 = 16LL;
  v34 = a4;
  v37 = &a5;
  v39 = a6;
  v41 = &a7;
  v43 = &a8;
  v45 = &a9;
  v47 = a10;
  v42 = 1LL;
  v44 = 1LL;
  v46 = 1LL;
  v48 = 16LL;
  if ( a11 )
  {
    v21 = -1LL;
    do
      ++v21;
    while ( a11[v21] );
    v22 = v21 + 1;
  }
  else
  {
    v22 = 5;
  }
  v50 = v22;
  v51 = 0;
  if ( !a11 )
    v20 = "NULL";
  v49 = v20;
  v23 = a12;
  if ( a12 )
  {
    v24 = -1LL;
    do
      ++v24;
    while ( a12[v24] );
    v25 = v24 + 1;
  }
  else
  {
    v25 = 5;
  }
  v53 = v25;
  v54 = 0;
  if ( !a12 )
    v23 = "NULL";
  v52 = v23;
  v26 = a13;
  if ( a13 )
  {
    v27 = -1LL;
    do
      ++v27;
    while ( a13[v27] );
    v28 = v27 + 1;
  }
  else
  {
    v28 = 5;
  }
  v56 = v28;
  v57 = 0;
  if ( !a13 )
    v26 = "NULL";
  v58 = &a14;
  v29 = a15;
  v55 = v26;
  v59 = 4LL;
  if ( a15 )
  {
    do
      ++v17;
    while ( a15[v17] );
    v30 = (unsigned int)(v17 + 1);
  }
  else
  {
    v30 = 5LL;
  }
  v61 = v30;
  v62 = 0;
  if ( !a15 )
    v29 = "NULL";
  v64 = 8LL;
  v60 = v29;
  v66 = 8LL;
  v63 = &v32;
  v65 = &a17;
  return McGenEventWrite_EtwWriteTransfer(v30, &EventQueuedIoExceededThreshold, 0LL, 0xFu, &v33);
}
