/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$03@@U2@U2@U?$_tlgWrapperByRef@$07@@U3@U2@U2@U2@U2@U2@U?$_tlgWrapSz@G@@U2@U2@U2@U2@U4@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByVal@$01@@ABU?$_tlgWrapperByVal@$03@@44ABU?$_tlgWrapperByRef@$07@@544444ABU?$_tlgWrapSz@G@@44446ABU?$_tlgWrapSz@D@@@Z @ 0x14C37B
 * Callers:
 *     ?GetMessageW@Delivery@InputTraceLogging@@SGXPBUtagMSG@@PBUtagTHREADINFO@@PAUtagWND@@PAUtagBWND@@_N@Z @ 0x6A6A0 (-GetMessageW@Delivery@InputTraceLogging@@SGXPBUtagMSG@@PBUtagTHREADINFO@@PAUtagWND@@PAUtagBWND@@.c)
 * Callees:
 *     __tlgWriteTransfer_EtwWriteTransfer@24 @ 0xE8E1E (__tlgWriteTransfer_EtwWriteTransfer@24.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ??$_tlgCreate1Sz@G@@YGXPAU_EVENT_DATA_DESCRIPTOR@@PBG@Z @ 0x142F12 (--$_tlgCreate1Sz@G@@YGXPAU_EVENT_DATA_DESCRIPTOR@@PBG@Z.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<8>,_tlgWrapperByRef<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<char>>(
        int a1,
        unsigned __int8 *a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int *a9,
        int *a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        char **a16,
        char *a17,
        char *a18,
        char *a19,
        char *a20,
        char **a21,
        const char **a22)
{
  char *v22; // esi
  int v25; // ecx
  char *v26; // edx
  char *v27; // edx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [esp+14h] [ebp-144h] BYREF
  int v30; // [esp+34h] [ebp-124h]
  int v31; // [esp+38h] [ebp-120h]
  int v32; // [esp+3Ch] [ebp-11Ch]
  int v33; // [esp+40h] [ebp-118h]
  int v34; // [esp+44h] [ebp-114h]
  int v35; // [esp+48h] [ebp-110h]
  int v36; // [esp+4Ch] [ebp-10Ch]
  int v37; // [esp+50h] [ebp-108h]
  int v38; // [esp+54h] [ebp-104h]
  int v39; // [esp+58h] [ebp-100h]
  int v40; // [esp+5Ch] [ebp-FCh]
  int v41; // [esp+60h] [ebp-F8h]
  int v42; // [esp+64h] [ebp-F4h]
  int v43; // [esp+68h] [ebp-F0h]
  int v44; // [esp+6Ch] [ebp-ECh]
  int v45; // [esp+70h] [ebp-E8h]
  int v46; // [esp+74h] [ebp-E4h]
  int v47; // [esp+78h] [ebp-E0h]
  int v48; // [esp+7Ch] [ebp-DCh]
  int v49; // [esp+80h] [ebp-D8h]
  int v50; // [esp+84h] [ebp-D4h]
  int v51; // [esp+88h] [ebp-D0h]
  int v52; // [esp+8Ch] [ebp-CCh]
  int v53; // [esp+90h] [ebp-C8h]
  int v54; // [esp+94h] [ebp-C4h]
  int v55; // [esp+98h] [ebp-C0h]
  int v56; // [esp+9Ch] [ebp-BCh]
  int v57; // [esp+A0h] [ebp-B8h]
  int v58; // [esp+A4h] [ebp-B4h]
  int v59; // [esp+A8h] [ebp-B0h]
  int v60; // [esp+ACh] [ebp-ACh]
  int v61; // [esp+B0h] [ebp-A8h]
  int v62; // [esp+B4h] [ebp-A4h]
  int v63; // [esp+B8h] [ebp-A0h]
  int v64; // [esp+BCh] [ebp-9Ch]
  int v65; // [esp+C0h] [ebp-98h]
  int v66; // [esp+C4h] [ebp-94h]
  int v67; // [esp+C8h] [ebp-90h]
  int v68; // [esp+CCh] [ebp-8Ch]
  int v69; // [esp+D0h] [ebp-88h]
  int v70; // [esp+D4h] [ebp-84h]
  int v71; // [esp+D8h] [ebp-80h]
  int v72; // [esp+DCh] [ebp-7Ch]
  int v73; // [esp+E0h] [ebp-78h]
  char *v74[20]; // [esp+E4h] [ebp-74h] BYREF
  char *v75[8]; // [esp+134h] [ebp-24h] BYREF

  v22 = (char *)*a22;
  if ( *a22 )
  {
    v25 = &(*a22)[strlen(*a22) + 1] - v22;
  }
  else
  {
    v22 = byte_FC858;
    v25 = 1;
  }
  v75[5] = 0;
  v75[7] = 0;
  v75[6] = (char *)v25;
  v26 = *a21;
  v75[4] = v22;
  _tlgCreate1Sz<unsigned short>(v75, v26);
  v74[16] = a20;
  v74[12] = a19;
  v27 = *a16;
  v74[17] = 0;
  v74[19] = 0;
  v74[13] = 0;
  v74[15] = 0;
  v74[8] = a18;
  v74[9] = 0;
  v74[11] = 0;
  v74[5] = 0;
  v74[7] = 0;
  v74[18] = (char *)4;
  v74[14] = (char *)4;
  v74[10] = (char *)4;
  v74[4] = a17;
  v74[6] = (char *)4;
  _tlgCreate1Sz<unsigned short>(v74, v27);
  v70 = a15;
  v66 = a14;
  v62 = a13;
  v58 = a12;
  v54 = a11;
  v71 = 0;
  v50 = *a10;
  v72 = 4;
  v73 = 0;
  v67 = 0;
  v46 = *a9;
  v42 = a8;
  v68 = 4;
  v69 = 0;
  v63 = 0;
  v64 = 4;
  v65 = 0;
  v59 = 0;
  v60 = 4;
  v61 = 0;
  v55 = 0;
  v56 = 4;
  v57 = 0;
  v51 = 0;
  v52 = 8;
  v53 = 0;
  v47 = 0;
  v48 = 8;
  v49 = 0;
  v43 = 0;
  v44 = 4;
  v45 = 0;
  v38 = a7;
  v34 = a6;
  v30 = a5;
  v39 = 0;
  v40 = 4;
  v41 = 0;
  v35 = 0;
  v36 = 4;
  v37 = 0;
  v31 = 0;
  v32 = 2;
  v33 = 0;
  return _tlgWriteTransfer_EtwWriteTransfer(a1, a2, 0, 0, 0x14u, &UserData);
}
