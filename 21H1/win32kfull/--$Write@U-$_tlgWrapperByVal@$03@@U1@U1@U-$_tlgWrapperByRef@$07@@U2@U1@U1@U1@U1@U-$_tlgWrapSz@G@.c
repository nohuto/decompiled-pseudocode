/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapperByRef@$07@@U2@U1@U1@U1@U1@U?$_tlgWrapSz@G@@U1@U1@U1@U1@U3@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByVal@$03@@33ABU?$_tlgWrapperByRef@$07@@43333ABU?$_tlgWrapSz@G@@33335ABU?$_tlgWrapSz@D@@@Z @ 0x14C912
 * Callers:
 *     ?GetMessageW@Delivery@InputTraceLogging@@SGXPBUtagMSG@@PBUtagTHREADINFO@@PAUtagWND@@PAUtagBWND@@_N@Z @ 0x6A6A0 (-GetMessageW@Delivery@InputTraceLogging@@SGXPBUtagMSG@@PBUtagTHREADINFO@@PAUtagWND@@PAUtagBWND@@.c)
 * Callees:
 *     __tlgWriteTransfer_EtwWriteTransfer@24 @ 0xE8E1E (__tlgWriteTransfer_EtwWriteTransfer@24.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ??$_tlgCreate1Sz@G@@YGXPAU_EVENT_DATA_DESCRIPTOR@@PBG@Z @ 0x142F12 (--$_tlgCreate1Sz@G@@YGXPAU_EVENT_DATA_DESCRIPTOR@@PBG@Z.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<8>,_tlgWrapperByRef<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<char>>(
        int a1,
        unsigned __int8 *a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int *a8,
        int *a9,
        int a10,
        int a11,
        int a12,
        int a13,
        char **a14,
        char *a15,
        char *a16,
        char *a17,
        char *a18,
        char **a19,
        const char **a20)
{
  char *v20; // esi
  int v23; // ecx
  char *v24; // edx
  char *v25; // edx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [esp+14h] [ebp-124h] BYREF
  int v28; // [esp+34h] [ebp-104h]
  int v29; // [esp+38h] [ebp-100h]
  int v30; // [esp+3Ch] [ebp-FCh]
  int v31; // [esp+40h] [ebp-F8h]
  int v32; // [esp+44h] [ebp-F4h]
  int v33; // [esp+48h] [ebp-F0h]
  int v34; // [esp+4Ch] [ebp-ECh]
  int v35; // [esp+50h] [ebp-E8h]
  int v36; // [esp+54h] [ebp-E4h]
  int v37; // [esp+58h] [ebp-E0h]
  int v38; // [esp+5Ch] [ebp-DCh]
  int v39; // [esp+60h] [ebp-D8h]
  int v40; // [esp+64h] [ebp-D4h]
  int v41; // [esp+68h] [ebp-D0h]
  int v42; // [esp+6Ch] [ebp-CCh]
  int v43; // [esp+70h] [ebp-C8h]
  int v44; // [esp+74h] [ebp-C4h]
  int v45; // [esp+78h] [ebp-C0h]
  int v46; // [esp+7Ch] [ebp-BCh]
  int v47; // [esp+80h] [ebp-B8h]
  int v48; // [esp+84h] [ebp-B4h]
  int v49; // [esp+88h] [ebp-B0h]
  int v50; // [esp+8Ch] [ebp-ACh]
  int v51; // [esp+90h] [ebp-A8h]
  int v52; // [esp+94h] [ebp-A4h]
  int v53; // [esp+98h] [ebp-A0h]
  int v54; // [esp+9Ch] [ebp-9Ch]
  int v55; // [esp+A0h] [ebp-98h]
  int v56; // [esp+A4h] [ebp-94h]
  int v57; // [esp+A8h] [ebp-90h]
  int v58; // [esp+ACh] [ebp-8Ch]
  int v59; // [esp+B0h] [ebp-88h]
  int v60; // [esp+B4h] [ebp-84h]
  int v61; // [esp+B8h] [ebp-80h]
  int v62; // [esp+BCh] [ebp-7Ch]
  int v63; // [esp+C0h] [ebp-78h]
  char *v64[20]; // [esp+C4h] [ebp-74h] BYREF
  char *v65[8]; // [esp+114h] [ebp-24h] BYREF

  v20 = (char *)*a20;
  if ( *a20 )
  {
    v23 = &(*a20)[strlen(*a20) + 1] - v20;
  }
  else
  {
    v20 = byte_FC858;
    v23 = 1;
  }
  v65[5] = 0;
  v65[7] = 0;
  v65[6] = (char *)v23;
  v24 = *a19;
  v65[4] = v20;
  _tlgCreate1Sz<unsigned short>(v65, v24);
  v64[16] = a18;
  v64[12] = a17;
  v25 = *a14;
  v64[17] = 0;
  v64[19] = 0;
  v64[13] = 0;
  v64[15] = 0;
  v64[8] = a16;
  v64[9] = 0;
  v64[11] = 0;
  v64[5] = 0;
  v64[7] = 0;
  v64[18] = (char *)4;
  v64[14] = (char *)4;
  v64[10] = (char *)4;
  v64[4] = a15;
  v64[6] = (char *)4;
  _tlgCreate1Sz<unsigned short>(v64, v25);
  v60 = a13;
  v56 = a12;
  v52 = a11;
  v48 = a10;
  v61 = 0;
  v44 = *a9;
  v62 = 4;
  v63 = 0;
  v57 = 0;
  v40 = *a8;
  v36 = a7;
  v32 = a6;
  v58 = 4;
  v59 = 0;
  v53 = 0;
  v54 = 4;
  v55 = 0;
  v49 = 0;
  v50 = 4;
  v51 = 0;
  v45 = 0;
  v46 = 8;
  v47 = 0;
  v41 = 0;
  v42 = 8;
  v43 = 0;
  v37 = 0;
  v38 = 4;
  v39 = 0;
  v33 = 0;
  v34 = 4;
  v35 = 0;
  v28 = a5;
  v29 = 0;
  v30 = 4;
  v31 = 0;
  return _tlgWriteTransfer_EtwWriteTransfer(a1, a2, 0, 0, 0x12u, &UserData);
}
