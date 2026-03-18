/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapperByRef@$07@@U2@U1@U1@U1@U1@U1@U?$_tlgWrapSz@G@@U1@U1@U1@U1@U3@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByVal@$03@@33ABU?$_tlgWrapperByRef@$07@@433333ABU?$_tlgWrapSz@G@@33335ABU?$_tlgWrapSz@D@@@Z @ 0x14C722
 * Callers:
 *     ?GetMessageW@Delivery@InputTraceLogging@@SGXPBUtagMSG@@PBUtagTHREADINFO@@PAUtagWND@@PAUtagBWND@@_N@Z @ 0x6A6A0 (-GetMessageW@Delivery@InputTraceLogging@@SGXPBUtagMSG@@PBUtagTHREADINFO@@PAUtagWND@@PAUtagBWND@@.c)
 * Callees:
 *     __tlgWriteTransfer_EtwWriteTransfer@24 @ 0xE8E1E (__tlgWriteTransfer_EtwWriteTransfer@24.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ??$_tlgCreate1Sz@G@@YGXPAU_EVENT_DATA_DESCRIPTOR@@PBG@Z @ 0x142F12 (--$_tlgCreate1Sz@G@@YGXPAU_EVENT_DATA_DESCRIPTOR@@PBG@Z.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<8>,_tlgWrapperByRef<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<char>>(
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
        int a14,
        char **a15,
        char *a16,
        char *a17,
        char *a18,
        char *a19,
        char **a20,
        const char **a21)
{
  char *v21; // esi
  int v24; // ecx
  char *v25; // edx
  char *v26; // edx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [esp+14h] [ebp-134h] BYREF
  int v29; // [esp+34h] [ebp-114h]
  int v30; // [esp+38h] [ebp-110h]
  int v31; // [esp+3Ch] [ebp-10Ch]
  int v32; // [esp+40h] [ebp-108h]
  int v33; // [esp+44h] [ebp-104h]
  int v34; // [esp+48h] [ebp-100h]
  int v35; // [esp+4Ch] [ebp-FCh]
  int v36; // [esp+50h] [ebp-F8h]
  int v37; // [esp+54h] [ebp-F4h]
  int v38; // [esp+58h] [ebp-F0h]
  int v39; // [esp+5Ch] [ebp-ECh]
  int v40; // [esp+60h] [ebp-E8h]
  int v41; // [esp+64h] [ebp-E4h]
  int v42; // [esp+68h] [ebp-E0h]
  int v43; // [esp+6Ch] [ebp-DCh]
  int v44; // [esp+70h] [ebp-D8h]
  int v45; // [esp+74h] [ebp-D4h]
  int v46; // [esp+78h] [ebp-D0h]
  int v47; // [esp+7Ch] [ebp-CCh]
  int v48; // [esp+80h] [ebp-C8h]
  int v49; // [esp+84h] [ebp-C4h]
  int v50; // [esp+88h] [ebp-C0h]
  int v51; // [esp+8Ch] [ebp-BCh]
  int v52; // [esp+90h] [ebp-B8h]
  int v53; // [esp+94h] [ebp-B4h]
  int v54; // [esp+98h] [ebp-B0h]
  int v55; // [esp+9Ch] [ebp-ACh]
  int v56; // [esp+A0h] [ebp-A8h]
  int v57; // [esp+A4h] [ebp-A4h]
  int v58; // [esp+A8h] [ebp-A0h]
  int v59; // [esp+ACh] [ebp-9Ch]
  int v60; // [esp+B0h] [ebp-98h]
  int v61; // [esp+B4h] [ebp-94h]
  int v62; // [esp+B8h] [ebp-90h]
  int v63; // [esp+BCh] [ebp-8Ch]
  int v64; // [esp+C0h] [ebp-88h]
  int v65; // [esp+C4h] [ebp-84h]
  int v66; // [esp+C8h] [ebp-80h]
  int v67; // [esp+CCh] [ebp-7Ch]
  int v68; // [esp+D0h] [ebp-78h]
  char *v69[20]; // [esp+D4h] [ebp-74h] BYREF
  char *v70[8]; // [esp+124h] [ebp-24h] BYREF

  v21 = (char *)*a21;
  if ( *a21 )
  {
    v24 = &(*a21)[strlen(*a21) + 1] - v21;
  }
  else
  {
    v21 = byte_FC858;
    v24 = 1;
  }
  v70[5] = 0;
  v70[7] = 0;
  v70[6] = (char *)v24;
  v25 = *a20;
  v70[4] = v21;
  _tlgCreate1Sz<unsigned short>(v70, v25);
  v69[16] = a19;
  v69[12] = a18;
  v26 = *a15;
  v69[17] = 0;
  v69[19] = 0;
  v69[13] = 0;
  v69[15] = 0;
  v69[8] = a17;
  v69[9] = 0;
  v69[11] = 0;
  v69[5] = 0;
  v69[7] = 0;
  v69[18] = (char *)4;
  v69[14] = (char *)4;
  v69[10] = (char *)4;
  v69[4] = a16;
  v69[6] = (char *)4;
  _tlgCreate1Sz<unsigned short>(v69, v26);
  v65 = a14;
  v61 = a13;
  v57 = a12;
  v53 = a11;
  v49 = a10;
  v66 = 0;
  v45 = *a9;
  v67 = 4;
  v68 = 0;
  v62 = 0;
  v41 = *a8;
  v37 = a7;
  v63 = 4;
  v64 = 0;
  v58 = 0;
  v59 = 4;
  v60 = 0;
  v54 = 0;
  v55 = 4;
  v56 = 0;
  v50 = 0;
  v51 = 4;
  v52 = 0;
  v46 = 0;
  v47 = 8;
  v48 = 0;
  v42 = 0;
  v43 = 8;
  v44 = 0;
  v38 = 0;
  v39 = 4;
  v40 = 0;
  v33 = a6;
  v29 = a5;
  v34 = 0;
  v35 = 4;
  v36 = 0;
  v30 = 0;
  v31 = 4;
  v32 = 0;
  return _tlgWriteTransfer_EtwWriteTransfer(a1, a2, 0, 0, 0x13u, &UserData);
}
