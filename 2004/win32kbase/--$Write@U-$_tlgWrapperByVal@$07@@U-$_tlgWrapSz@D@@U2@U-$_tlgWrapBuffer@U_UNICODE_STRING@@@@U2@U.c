/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@U2@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U2@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapSz@G@@U1@U?$_tlgWrapperByVal@$00@@U6@U6@U1@U?$_tlgWrapperByVal@$03@@U7@U7@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@4AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@4AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapSz@G@@3AEBU?$_tlgWrapperByVal@$00@@883AEBU?$_tlgWrapperByVal@$03@@9933@Z @ 0x1C01539B4
 * Callers:
 *     ?RimDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@K@Z @ 0x1C0016168 (-RimDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@K@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0038CF8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapSz<char>,_tlgWrapperByRef<16>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        void **a6,
        void **a7,
        unsigned __int16 **a8,
        void **a9,
        __int64 *a10,
        const WCHAR **a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        __int64 a16,
        __int64 a17,
        __int64 a18,
        __int64 a19,
        __int64 a20,
        __int64 a21)
{
  __int64 v23; // rdx
  const WCHAR *v24; // rcx
  __int64 v25; // rax
  int v26; // r8d
  _BYTE *v27; // rcx
  __int64 v28; // rax
  int v29; // eax
  int v30; // ecx
  _BYTE *v31; // rcx
  __int64 v32; // rax
  int v33; // eax
  _BYTE *v34; // rcx
  int v35; // edx
  struct _EVENT_DATA_DESCRIPTOR v37; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v38; // [rsp+50h] [rbp-B0h]
  __int64 v39; // [rsp+58h] [rbp-A8h]
  _BYTE *v40; // [rsp+60h] [rbp-A0h]
  int v41; // [rsp+68h] [rbp-98h]
  int v42; // [rsp+6Ch] [rbp-94h]
  _BYTE *v43; // [rsp+70h] [rbp-90h]
  int v44; // [rsp+78h] [rbp-88h]
  int v45; // [rsp+7Ch] [rbp-84h]
  _DWORD *v46; // [rsp+80h] [rbp-80h]
  __int64 v47; // [rsp+88h] [rbp-78h]
  __int64 v48; // [rsp+90h] [rbp-70h]
  _DWORD v49[2]; // [rsp+98h] [rbp-68h] BYREF
  _BYTE *v50; // [rsp+A0h] [rbp-60h]
  int v51; // [rsp+A8h] [rbp-58h]
  int v52; // [rsp+ACh] [rbp-54h]
  __int64 v53; // [rsp+B0h] [rbp-50h]
  __int64 v54; // [rsp+B8h] [rbp-48h]
  const WCHAR *v55; // [rsp+C0h] [rbp-40h]
  int v56; // [rsp+C8h] [rbp-38h]
  int v57; // [rsp+CCh] [rbp-34h]
  __int64 v58; // [rsp+D0h] [rbp-30h]
  __int64 v59; // [rsp+D8h] [rbp-28h]
  __int64 v60; // [rsp+E0h] [rbp-20h]
  __int64 v61; // [rsp+E8h] [rbp-18h]
  __int64 v62; // [rsp+F0h] [rbp-10h]
  __int64 v63; // [rsp+F8h] [rbp-8h]
  __int64 v64; // [rsp+100h] [rbp+0h]
  __int64 v65; // [rsp+108h] [rbp+8h]
  __int64 v66; // [rsp+110h] [rbp+10h]
  __int64 v67; // [rsp+118h] [rbp+18h]
  __int64 v68; // [rsp+120h] [rbp+20h]
  __int64 v69; // [rsp+128h] [rbp+28h]
  __int64 v70; // [rsp+130h] [rbp+30h]
  __int64 v71; // [rsp+138h] [rbp+38h]
  __int64 v72; // [rsp+140h] [rbp+40h]
  __int64 v73; // [rsp+148h] [rbp+48h]
  __int64 v74; // [rsp+150h] [rbp+50h]
  __int64 v75; // [rsp+158h] [rbp+58h]
  __int64 v76; // [rsp+160h] [rbp+60h]
  __int64 v77; // [rsp+168h] [rbp+68h]

  v76 = a21;
  v74 = a20;
  v23 = -1LL;
  v72 = a19;
  v70 = a18;
  v68 = a17;
  v66 = a16;
  v64 = a15;
  v62 = a14;
  v60 = a13;
  v58 = a12;
  v77 = 8LL;
  v75 = 8LL;
  v73 = 4LL;
  v24 = *a11;
  v71 = 4LL;
  v69 = 4LL;
  v67 = 8LL;
  v65 = 1LL;
  v63 = 1LL;
  v61 = 1LL;
  v59 = 8LL;
  if ( v24 )
  {
    v25 = -1LL;
    do
      ++v25;
    while ( v24[v25] );
    v26 = 2 * v25 + 2;
  }
  else
  {
    v24 = &word_1C020BCB0;
    v26 = 2;
  }
  v55 = v24;
  v56 = v26;
  v57 = 0;
  v53 = *a10;
  v54 = 16LL;
  v27 = *a9;
  if ( *a9 )
  {
    v28 = -1LL;
    do
      ++v28;
    while ( v27[v28] );
    v29 = v28 + 1;
  }
  else
  {
    v27 = &unk_1C0220028;
    v29 = 1;
  }
  v51 = v29;
  v46 = v49;
  v50 = v27;
  v52 = 0;
  v47 = 2LL;
  v30 = **a8;
  v48 = *((_QWORD *)*a8 + 1);
  v49[0] = v30;
  v49[1] = 0;
  v31 = *a7;
  if ( *a7 )
  {
    v32 = -1LL;
    do
      ++v32;
    while ( v31[v32] );
    v33 = v32 + 1;
  }
  else
  {
    v31 = &unk_1C0220028;
    v33 = 1;
  }
  v44 = v33;
  v43 = v31;
  v45 = 0;
  v34 = *a6;
  if ( *a6 )
  {
    do
      ++v23;
    while ( v34[v23] );
    v35 = v23 + 1;
  }
  else
  {
    v34 = &unk_1C0220028;
    v35 = 1;
  }
  v38 = a5;
  v40 = v34;
  v41 = v35;
  v42 = 0;
  v39 = 8LL;
  return tlgWriteTransfer_EtwWriteTransfer(a1, a2, 0LL, 0LL, 0x14u, &v37);
}
