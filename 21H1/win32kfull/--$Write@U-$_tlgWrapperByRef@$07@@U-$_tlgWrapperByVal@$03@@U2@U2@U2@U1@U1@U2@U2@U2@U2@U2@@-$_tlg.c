/*
 * XREFs of ??$Write@U?$_tlgWrapperByRef@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U1@U1@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByRef@$07@@ABU?$_tlgWrapperByVal@$03@@4443344444@Z @ 0x14BCD0
 * Callers:
 *     ?ScanSysQueue@Delivery@InputTraceLogging@@SGXPBUtagQMSG@@PBUtagMSG@@PBUtagTHREADINFO@@_N@Z @ 0x466E8 (-ScanSysQueue@Delivery@InputTraceLogging@@SGXPBUtagQMSG@@PBUtagMSG@@PBUtagTHREADINFO@@_N@Z.c)
 * Callees:
 *     __tlgWriteTransfer_EtwWriteTransfer@24 @ 0xE8E1E (__tlgWriteTransfer_EtwWriteTransfer@24.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<8>,_tlgWrapperByRef<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        int a1,
        unsigned __int8 *a2,
        int a3,
        int a4,
        int *a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int *a10,
        int *a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [esp+Ch] [ebp-E4h] BYREF
  int v18; // [esp+2Ch] [ebp-C4h]
  int v19; // [esp+30h] [ebp-C0h]
  int v20; // [esp+34h] [ebp-BCh]
  int v21; // [esp+38h] [ebp-B8h]
  int v22; // [esp+3Ch] [ebp-B4h]
  int v23; // [esp+40h] [ebp-B0h]
  int v24; // [esp+44h] [ebp-ACh]
  int v25; // [esp+48h] [ebp-A8h]
  int v26; // [esp+4Ch] [ebp-A4h]
  int v27; // [esp+50h] [ebp-A0h]
  int v28; // [esp+54h] [ebp-9Ch]
  int v29; // [esp+58h] [ebp-98h]
  int v30; // [esp+5Ch] [ebp-94h]
  int v31; // [esp+60h] [ebp-90h]
  int v32; // [esp+64h] [ebp-8Ch]
  int v33; // [esp+68h] [ebp-88h]
  int v34; // [esp+6Ch] [ebp-84h]
  int v35; // [esp+70h] [ebp-80h]
  int v36; // [esp+74h] [ebp-7Ch]
  int v37; // [esp+78h] [ebp-78h]
  int v38; // [esp+7Ch] [ebp-74h]
  int v39; // [esp+80h] [ebp-70h]
  int v40; // [esp+84h] [ebp-6Ch]
  int v41; // [esp+88h] [ebp-68h]
  int v42; // [esp+8Ch] [ebp-64h]
  int v43; // [esp+90h] [ebp-60h]
  int v44; // [esp+94h] [ebp-5Ch]
  int v45; // [esp+98h] [ebp-58h]
  int v46; // [esp+9Ch] [ebp-54h]
  int v47; // [esp+A0h] [ebp-50h]
  int v48; // [esp+A4h] [ebp-4Ch]
  int v49; // [esp+A8h] [ebp-48h]
  int v50; // [esp+ACh] [ebp-44h]
  int v51; // [esp+B0h] [ebp-40h]
  int v52; // [esp+B4h] [ebp-3Ch]
  int v53; // [esp+B8h] [ebp-38h]
  int v54; // [esp+BCh] [ebp-34h]
  int v55; // [esp+C0h] [ebp-30h]
  int v56; // [esp+C4h] [ebp-2Ch]
  int v57; // [esp+C8h] [ebp-28h]
  int v58; // [esp+CCh] [ebp-24h]
  int v59; // [esp+D0h] [ebp-20h]
  int v60; // [esp+D4h] [ebp-1Ch]
  int v61; // [esp+D8h] [ebp-18h]
  int v62; // [esp+DCh] [ebp-14h]
  int v63; // [esp+E0h] [ebp-10h]
  int v64; // [esp+E4h] [ebp-Ch]
  int v65; // [esp+E8h] [ebp-8h]

  v62 = a16;
  v58 = a15;
  v54 = a14;
  v50 = a13;
  v46 = a12;
  v42 = *a11;
  v38 = *a10;
  v34 = a9;
  v30 = a8;
  v26 = a7;
  v22 = a6;
  v63 = 0;
  v18 = *a5;
  v64 = 4;
  v65 = 0;
  v59 = 0;
  v60 = 4;
  v61 = 0;
  v55 = 0;
  v56 = 4;
  v57 = 0;
  v51 = 0;
  v52 = 4;
  v53 = 0;
  v47 = 0;
  v48 = 4;
  v49 = 0;
  v43 = 0;
  v44 = 8;
  v45 = 0;
  v39 = 0;
  v40 = 8;
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
  v23 = 0;
  v24 = 4;
  v25 = 0;
  v19 = 0;
  v20 = 8;
  v21 = 0;
  return _tlgWriteTransfer_EtwWriteTransfer(a1, a2, 0, 0, 0xEu, &UserData);
}
