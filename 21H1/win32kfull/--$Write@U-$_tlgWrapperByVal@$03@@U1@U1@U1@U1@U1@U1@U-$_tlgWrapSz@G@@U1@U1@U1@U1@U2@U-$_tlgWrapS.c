/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@U?$_tlgWrapSz@G@@U1@U1@U1@U1@U2@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByVal@$03@@333333ABU?$_tlgWrapSz@G@@33334ABU?$_tlgWrapSz@D@@@Z @ 0x14C58A
 * Callers:
 *     ?GetMessageW@Delivery@InputTraceLogging@@SGXPBUtagMSG@@PBUtagTHREADINFO@@PAUtagWND@@PAUtagBWND@@_N@Z @ 0x6A6A0 (-GetMessageW@Delivery@InputTraceLogging@@SGXPBUtagMSG@@PBUtagTHREADINFO@@PAUtagWND@@PAUtagBWND@@.c)
 * Callees:
 *     __tlgWriteTransfer_EtwWriteTransfer@24 @ 0xE8E1E (__tlgWriteTransfer_EtwWriteTransfer@24.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ??$_tlgCreate1Sz@G@@YGXPAU_EVENT_DATA_DESCRIPTOR@@PBG@Z @ 0x142F12 (--$_tlgCreate1Sz@G@@YGXPAU_EVENT_DATA_DESCRIPTOR@@PBG@Z.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<char>>(
        int a1,
        unsigned __int8 *a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        char **a12,
        char *a13,
        char *a14,
        char *a15,
        char *a16,
        char **a17,
        const char **a18)
{
  char *v18; // esi
  int v21; // ecx
  char *v22; // edx
  char *v23; // edx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [esp+14h] [ebp-104h] BYREF
  int v26; // [esp+34h] [ebp-E4h]
  int v27; // [esp+38h] [ebp-E0h]
  int v28; // [esp+3Ch] [ebp-DCh]
  int v29; // [esp+40h] [ebp-D8h]
  int v30; // [esp+44h] [ebp-D4h]
  int v31; // [esp+48h] [ebp-D0h]
  int v32; // [esp+4Ch] [ebp-CCh]
  int v33; // [esp+50h] [ebp-C8h]
  int v34; // [esp+54h] [ebp-C4h]
  int v35; // [esp+58h] [ebp-C0h]
  int v36; // [esp+5Ch] [ebp-BCh]
  int v37; // [esp+60h] [ebp-B8h]
  int v38; // [esp+64h] [ebp-B4h]
  int v39; // [esp+68h] [ebp-B0h]
  int v40; // [esp+6Ch] [ebp-ACh]
  int v41; // [esp+70h] [ebp-A8h]
  int v42; // [esp+74h] [ebp-A4h]
  int v43; // [esp+78h] [ebp-A0h]
  int v44; // [esp+7Ch] [ebp-9Ch]
  int v45; // [esp+80h] [ebp-98h]
  int v46; // [esp+84h] [ebp-94h]
  int v47; // [esp+88h] [ebp-90h]
  int v48; // [esp+8Ch] [ebp-8Ch]
  int v49; // [esp+90h] [ebp-88h]
  int v50; // [esp+94h] [ebp-84h]
  int v51; // [esp+98h] [ebp-80h]
  int v52; // [esp+9Ch] [ebp-7Ch]
  int v53; // [esp+A0h] [ebp-78h]
  char *v54[20]; // [esp+A4h] [ebp-74h] BYREF
  char *v55[8]; // [esp+F4h] [ebp-24h] BYREF

  v18 = (char *)*a18;
  if ( *a18 )
  {
    v21 = &(*a18)[strlen(*a18) + 1] - v18;
  }
  else
  {
    v18 = byte_FC858;
    v21 = 1;
  }
  v55[5] = 0;
  v55[7] = 0;
  v55[6] = (char *)v21;
  v22 = *a17;
  v55[4] = v18;
  _tlgCreate1Sz<unsigned short>(v55, v22);
  v54[16] = a16;
  v54[12] = a15;
  v23 = *a12;
  v54[17] = 0;
  v54[19] = 0;
  v54[13] = 0;
  v54[15] = 0;
  v54[8] = a14;
  v54[9] = 0;
  v54[11] = 0;
  v54[5] = 0;
  v54[7] = 0;
  v54[18] = (char *)4;
  v54[14] = (char *)4;
  v54[10] = (char *)4;
  v54[4] = a13;
  v54[6] = (char *)4;
  _tlgCreate1Sz<unsigned short>(v54, v23);
  v50 = a11;
  v46 = a10;
  v42 = a9;
  v38 = a8;
  v34 = a7;
  v30 = a6;
  v26 = a5;
  v51 = 0;
  v52 = 4;
  v53 = 0;
  v47 = 0;
  v48 = 4;
  v49 = 0;
  v43 = 0;
  v44 = 4;
  v45 = 0;
  v39 = 0;
  v40 = 4;
  v41 = 0;
  v35 = 0;
  v36 = 4;
  v37 = 0;
  v31 = 0;
  v32 = 4;
  v33 = 0;
  v27 = 0;
  v28 = 4;
  v29 = 0;
  return _tlgWriteTransfer_EtwWriteTransfer(a1, a2, 0, 0, 0x10u, &UserData);
}
