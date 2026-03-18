/*
 * XREFs of ??$Write@U?$_tlgWrapperByRef@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U1@U1@U2@U2@U2@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByRef@$07@@ABU?$_tlgWrapperByVal@$03@@444433444@Z @ 0x14BE9C
 * Callers:
 *     ?ScanSysQueue@Delivery@InputTraceLogging@@SGXPBUtagQMSG@@PBUtagMSG@@PBUtagTHREADINFO@@_N@Z @ 0x466E8 (-ScanSysQueue@Delivery@InputTraceLogging@@SGXPBUtagQMSG@@PBUtagMSG@@PBUtagTHREADINFO@@_N@Z.c)
 * Callees:
 *     __tlgWriteTransfer_EtwWriteTransfer@24 @ 0xE8E1E (__tlgWriteTransfer_EtwWriteTransfer@24.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<8>,_tlgWrapperByRef<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        int a1,
        unsigned __int8 *a2,
        int a3,
        int a4,
        int *a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int *a11,
        int *a12,
        int a13,
        int a14,
        int a15)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [esp+Ch] [ebp-D4h] BYREF
  int v17; // [esp+2Ch] [ebp-B4h]
  int v18; // [esp+30h] [ebp-B0h]
  int v19; // [esp+34h] [ebp-ACh]
  int v20; // [esp+38h] [ebp-A8h]
  int v21; // [esp+3Ch] [ebp-A4h]
  int v22; // [esp+40h] [ebp-A0h]
  int v23; // [esp+44h] [ebp-9Ch]
  int v24; // [esp+48h] [ebp-98h]
  int v25; // [esp+4Ch] [ebp-94h]
  int v26; // [esp+50h] [ebp-90h]
  int v27; // [esp+54h] [ebp-8Ch]
  int v28; // [esp+58h] [ebp-88h]
  int v29; // [esp+5Ch] [ebp-84h]
  int v30; // [esp+60h] [ebp-80h]
  int v31; // [esp+64h] [ebp-7Ch]
  int v32; // [esp+68h] [ebp-78h]
  int v33; // [esp+6Ch] [ebp-74h]
  int v34; // [esp+70h] [ebp-70h]
  int v35; // [esp+74h] [ebp-6Ch]
  int v36; // [esp+78h] [ebp-68h]
  int v37; // [esp+7Ch] [ebp-64h]
  int v38; // [esp+80h] [ebp-60h]
  int v39; // [esp+84h] [ebp-5Ch]
  int v40; // [esp+88h] [ebp-58h]
  int v41; // [esp+8Ch] [ebp-54h]
  int v42; // [esp+90h] [ebp-50h]
  int v43; // [esp+94h] [ebp-4Ch]
  int v44; // [esp+98h] [ebp-48h]
  int v45; // [esp+9Ch] [ebp-44h]
  int v46; // [esp+A0h] [ebp-40h]
  int v47; // [esp+A4h] [ebp-3Ch]
  int v48; // [esp+A8h] [ebp-38h]
  int v49; // [esp+ACh] [ebp-34h]
  int v50; // [esp+B0h] [ebp-30h]
  int v51; // [esp+B4h] [ebp-2Ch]
  int v52; // [esp+B8h] [ebp-28h]
  int v53; // [esp+BCh] [ebp-24h]
  int v54; // [esp+C0h] [ebp-20h]
  int v55; // [esp+C4h] [ebp-1Ch]
  int v56; // [esp+C8h] [ebp-18h]
  int v57; // [esp+CCh] [ebp-14h]
  int v58; // [esp+D0h] [ebp-10h]
  int v59; // [esp+D4h] [ebp-Ch]
  int v60; // [esp+D8h] [ebp-8h]

  v57 = a15;
  v53 = a14;
  v49 = a13;
  v45 = *a12;
  v41 = *a11;
  v37 = a10;
  v33 = a9;
  v29 = a8;
  v25 = a7;
  v21 = a6;
  v58 = 0;
  v17 = *a5;
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
  v34 = 0;
  v35 = 4;
  v36 = 0;
  v30 = 0;
  v31 = 4;
  v32 = 0;
  v26 = 0;
  v27 = 4;
  v28 = 0;
  v22 = 0;
  v23 = 4;
  v24 = 0;
  v18 = 0;
  v19 = 8;
  v20 = 0;
  return _tlgWriteTransfer_EtwWriteTransfer(a1, a2, 0, 0, 0xDu, &UserData);
}
