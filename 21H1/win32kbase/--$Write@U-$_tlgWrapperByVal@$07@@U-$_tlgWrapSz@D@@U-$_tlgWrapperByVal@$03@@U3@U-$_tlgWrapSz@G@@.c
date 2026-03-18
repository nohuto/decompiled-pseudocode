/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U3@U?$_tlgWrapSz@G@@U4@U4@U4@U4@U4@U4@U4@U4@U3@U3@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@5AEBU?$_tlgWrapSz@G@@666666665533@Z @ 0x1C01AF038
 * Callers:
 *     ?HitTest@CSpatialProcessor@@QEAA?AVCInputDest@@PEAU_InputHitTestData@@W4DIT_HITTESTATTRIBUTES@@KPEAI@Z @ 0x1C0064348 (-HitTest@CSpatialProcessor@@QEAA-AVCInputDest@@PEAU_InputHitTestData@@W4DIT_HITTESTATTRIBUTES@@K.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C002874C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        void **a6,
        __int64 a7,
        __int64 a8,
        const WCHAR **a9,
        const WCHAR **a10,
        const WCHAR **a11,
        const WCHAR **a12,
        const WCHAR **a13,
        const WCHAR **a14,
        const WCHAR **a15,
        const WCHAR **a16,
        const WCHAR **a17,
        __int64 a18,
        __int64 a19,
        __int64 a20,
        __int64 a21)
{
  __int64 v22; // rcx
  int v24; // edx
  const WCHAR *v25; // r8
  __int64 v26; // rax
  int v27; // r9d
  const WCHAR *v28; // r8
  __int64 v29; // rax
  int v30; // r9d
  const WCHAR *v31; // r8
  __int64 v32; // rax
  int v33; // r9d
  const WCHAR *v34; // r8
  __int64 v35; // rax
  int v36; // r9d
  const WCHAR *v37; // r8
  __int64 v38; // rax
  int v39; // r9d
  const WCHAR *v40; // r8
  __int64 v41; // rax
  int v42; // r9d
  const WCHAR *v43; // r8
  __int64 v44; // rax
  int v45; // r9d
  const WCHAR *v46; // r8
  __int64 v47; // rax
  int v48; // r9d
  const WCHAR *v49; // r8
  __int64 v50; // rax
  _BYTE *v51; // rdx
  int v52; // ecx
  struct _EVENT_DATA_DESCRIPTOR v54; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v55; // [rsp+50h] [rbp-B0h]
  __int64 v56; // [rsp+58h] [rbp-A8h]
  _BYTE *v57; // [rsp+60h] [rbp-A0h]
  int v58; // [rsp+68h] [rbp-98h]
  int v59; // [rsp+6Ch] [rbp-94h]
  __int64 v60; // [rsp+70h] [rbp-90h]
  __int64 v61; // [rsp+78h] [rbp-88h]
  __int64 v62; // [rsp+80h] [rbp-80h]
  __int64 v63; // [rsp+88h] [rbp-78h]
  const WCHAR *v64; // [rsp+90h] [rbp-70h]
  int v65; // [rsp+98h] [rbp-68h]
  int v66; // [rsp+9Ch] [rbp-64h]
  const WCHAR *v67; // [rsp+A0h] [rbp-60h]
  int v68; // [rsp+A8h] [rbp-58h]
  int v69; // [rsp+ACh] [rbp-54h]
  const WCHAR *v70; // [rsp+B0h] [rbp-50h]
  int v71; // [rsp+B8h] [rbp-48h]
  int v72; // [rsp+BCh] [rbp-44h]
  const WCHAR *v73; // [rsp+C0h] [rbp-40h]
  int v74; // [rsp+C8h] [rbp-38h]
  int v75; // [rsp+CCh] [rbp-34h]
  const WCHAR *v76; // [rsp+D0h] [rbp-30h]
  int v77; // [rsp+D8h] [rbp-28h]
  int v78; // [rsp+DCh] [rbp-24h]
  const WCHAR *v79; // [rsp+E0h] [rbp-20h]
  int v80; // [rsp+E8h] [rbp-18h]
  int v81; // [rsp+ECh] [rbp-14h]
  const WCHAR *v82; // [rsp+F0h] [rbp-10h]
  int v83; // [rsp+F8h] [rbp-8h]
  int v84; // [rsp+FCh] [rbp-4h]
  const WCHAR *v85; // [rsp+100h] [rbp+0h]
  int v86; // [rsp+108h] [rbp+8h]
  int v87; // [rsp+10Ch] [rbp+Ch]
  const WCHAR *v88; // [rsp+110h] [rbp+10h]
  int v89; // [rsp+118h] [rbp+18h]
  int v90; // [rsp+11Ch] [rbp+1Ch]
  __int64 v91; // [rsp+120h] [rbp+20h]
  __int64 v92; // [rsp+128h] [rbp+28h]
  __int64 v93; // [rsp+130h] [rbp+30h]
  __int64 v94; // [rsp+138h] [rbp+38h]
  __int64 v95; // [rsp+140h] [rbp+40h]
  __int64 v96; // [rsp+148h] [rbp+48h]
  __int64 v97; // [rsp+150h] [rbp+50h]
  __int64 v98; // [rsp+158h] [rbp+58h]

  v97 = a21;
  v95 = a20;
  v22 = -1LL;
  v93 = a19;
  v24 = 2;
  v91 = a18;
  v98 = 8LL;
  v96 = 8LL;
  v94 = 4LL;
  v25 = *a17;
  v92 = 4LL;
  if ( v25 )
  {
    v26 = -1LL;
    do
      ++v26;
    while ( v25[v26] );
    v27 = 2 * v26 + 2;
  }
  else
  {
    v25 = &word_1C0211C10;
    v27 = 2;
  }
  v88 = v25;
  v89 = v27;
  v90 = 0;
  v28 = *a16;
  if ( *a16 )
  {
    v29 = -1LL;
    do
      ++v29;
    while ( v28[v29] );
    v30 = 2 * v29 + 2;
  }
  else
  {
    v28 = &word_1C0211C10;
    v30 = 2;
  }
  v85 = v28;
  v86 = v30;
  v87 = 0;
  v31 = *a15;
  if ( *a15 )
  {
    v32 = -1LL;
    do
      ++v32;
    while ( v31[v32] );
    v33 = 2 * v32 + 2;
  }
  else
  {
    v31 = &word_1C0211C10;
    v33 = 2;
  }
  v82 = v31;
  v83 = v33;
  v84 = 0;
  v34 = *a14;
  if ( *a14 )
  {
    v35 = -1LL;
    do
      ++v35;
    while ( v34[v35] );
    v36 = 2 * v35 + 2;
  }
  else
  {
    v34 = &word_1C0211C10;
    v36 = 2;
  }
  v79 = v34;
  v80 = v36;
  v81 = 0;
  v37 = *a13;
  if ( *a13 )
  {
    v38 = -1LL;
    do
      ++v38;
    while ( v37[v38] );
    v39 = 2 * v38 + 2;
  }
  else
  {
    v37 = &word_1C0211C10;
    v39 = 2;
  }
  v76 = v37;
  v77 = v39;
  v78 = 0;
  v40 = *a12;
  if ( *a12 )
  {
    v41 = -1LL;
    do
      ++v41;
    while ( v40[v41] );
    v42 = 2 * v41 + 2;
  }
  else
  {
    v40 = &word_1C0211C10;
    v42 = 2;
  }
  v73 = v40;
  v74 = v42;
  v75 = 0;
  v43 = *a11;
  if ( *a11 )
  {
    v44 = -1LL;
    do
      ++v44;
    while ( v43[v44] );
    v45 = 2 * v44 + 2;
  }
  else
  {
    v43 = &word_1C0211C10;
    v45 = 2;
  }
  v70 = v43;
  v71 = v45;
  v72 = 0;
  v46 = *a10;
  if ( *a10 )
  {
    v47 = -1LL;
    do
      ++v47;
    while ( v46[v47] );
    v48 = 2 * v47 + 2;
  }
  else
  {
    v46 = &word_1C0211C10;
    v48 = 2;
  }
  v67 = v46;
  v68 = v48;
  v69 = 0;
  v49 = *a9;
  if ( *a9 )
  {
    v50 = -1LL;
    do
      ++v50;
    while ( v49[v50] );
    v24 = 2 * v50 + 2;
  }
  else
  {
    v49 = &word_1C0211C10;
  }
  v62 = a8;
  v60 = a7;
  v65 = v24;
  v64 = v49;
  v66 = 0;
  v51 = *a6;
  v63 = 4LL;
  v61 = 4LL;
  if ( v51 )
  {
    do
      ++v22;
    while ( v51[v22] );
    v52 = v22 + 1;
  }
  else
  {
    v51 = &unk_1C0225CC8;
    v52 = 1;
  }
  v55 = a5;
  v57 = v51;
  v58 = v52;
  v59 = 0;
  v56 = 8LL;
  return tlgWriteTransfer_EtwWriteTransfer(a1, a2, 0LL, 0LL, 0x13u, &v54);
}
