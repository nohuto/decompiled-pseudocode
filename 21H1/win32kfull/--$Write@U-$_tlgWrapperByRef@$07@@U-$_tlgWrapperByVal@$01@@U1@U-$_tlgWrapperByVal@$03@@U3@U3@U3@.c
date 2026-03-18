/*
 * XREFs of ??$Write@U?$_tlgWrapperByRef@$07@@U?$_tlgWrapperByVal@$01@@U1@U?$_tlgWrapperByVal@$03@@U3@U3@U3@U3@U1@U1@U3@U3@U3@U3@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByRef@$07@@ABU?$_tlgWrapperByVal@$01@@3ABU?$_tlgWrapperByVal@$03@@5555335555@Z @ 0x14B73D
 * Callers:
 *     ?ScanSysQueue@Delivery@InputTraceLogging@@SGXPBUtagQMSG@@PBUtagMSG@@PBUtagTHREADINFO@@_N@Z @ 0x466E8 (-ScanSysQueue@Delivery@InputTraceLogging@@SGXPBUtagQMSG@@PBUtagMSG@@PBUtagTHREADINFO@@_N@Z.c)
 * Callees:
 *     __tlgWriteTransfer_EtwWriteTransfer@24 @ 0xE8E1E (__tlgWriteTransfer_EtwWriteTransfer@24.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<8>,_tlgWrapperByVal<2>,_tlgWrapperByRef<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<8>,_tlgWrapperByRef<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        int a1,
        unsigned __int8 *a2,
        int a3,
        int a4,
        int *a5,
        int a6,
        int *a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int *a13,
        int *a14,
        int a15,
        int a16,
        int a17,
        int a18)
{
  int v18; // eax
  struct _EVENT_DATA_DESCRIPTOR UserData; // [esp+Ch] [ebp-104h] BYREF
  int v21; // [esp+2Ch] [ebp-E4h]
  int v22; // [esp+30h] [ebp-E0h]
  int v23; // [esp+34h] [ebp-DCh]
  int v24; // [esp+38h] [ebp-D8h]
  int v25; // [esp+3Ch] [ebp-D4h]
  int v26; // [esp+40h] [ebp-D0h]
  int v27; // [esp+44h] [ebp-CCh]
  int v28; // [esp+48h] [ebp-C8h]
  int v29; // [esp+4Ch] [ebp-C4h]
  int v30; // [esp+50h] [ebp-C0h]
  int v31; // [esp+54h] [ebp-BCh]
  int v32; // [esp+58h] [ebp-B8h]
  int v33; // [esp+5Ch] [ebp-B4h]
  int v34; // [esp+60h] [ebp-B0h]
  int v35; // [esp+64h] [ebp-ACh]
  int v36; // [esp+68h] [ebp-A8h]
  int v37; // [esp+6Ch] [ebp-A4h]
  int v38; // [esp+70h] [ebp-A0h]
  int v39; // [esp+74h] [ebp-9Ch]
  int v40; // [esp+78h] [ebp-98h]
  int v41; // [esp+7Ch] [ebp-94h]
  int v42; // [esp+80h] [ebp-90h]
  int v43; // [esp+84h] [ebp-8Ch]
  int v44; // [esp+88h] [ebp-88h]
  int v45; // [esp+8Ch] [ebp-84h]
  int v46; // [esp+90h] [ebp-80h]
  int v47; // [esp+94h] [ebp-7Ch]
  int v48; // [esp+98h] [ebp-78h]
  int v49; // [esp+9Ch] [ebp-74h]
  int v50; // [esp+A0h] [ebp-70h]
  int v51; // [esp+A4h] [ebp-6Ch]
  int v52; // [esp+A8h] [ebp-68h]
  int v53; // [esp+ACh] [ebp-64h]
  int v54; // [esp+B0h] [ebp-60h]
  int v55; // [esp+B4h] [ebp-5Ch]
  int v56; // [esp+B8h] [ebp-58h]
  int v57; // [esp+BCh] [ebp-54h]
  int v58; // [esp+C0h] [ebp-50h]
  int v59; // [esp+C4h] [ebp-4Ch]
  int v60; // [esp+C8h] [ebp-48h]
  int v61; // [esp+CCh] [ebp-44h]
  int v62; // [esp+D0h] [ebp-40h]
  int v63; // [esp+D4h] [ebp-3Ch]
  int v64; // [esp+D8h] [ebp-38h]
  int v65; // [esp+DCh] [ebp-34h]
  int v66; // [esp+E0h] [ebp-30h]
  int v67; // [esp+E4h] [ebp-2Ch]
  int v68; // [esp+E8h] [ebp-28h]
  int v69; // [esp+ECh] [ebp-24h]
  int v70; // [esp+F0h] [ebp-20h]
  int v71; // [esp+F4h] [ebp-1Ch]
  int v72; // [esp+F8h] [ebp-18h]
  int v73; // [esp+FCh] [ebp-14h]
  int v74; // [esp+100h] [ebp-10h]
  int v75; // [esp+104h] [ebp-Ch]
  int v76; // [esp+108h] [ebp-8h]

  v73 = a18;
  v69 = a17;
  v65 = a16;
  v61 = a15;
  v27 = 2;
  v57 = *a14;
  v53 = *a13;
  v49 = a12;
  v45 = a11;
  v41 = a10;
  v37 = a9;
  v33 = a8;
  v74 = 0;
  v29 = *a7;
  v25 = a6;
  v75 = 4;
  v76 = 0;
  v70 = 0;
  v18 = *a5;
  v71 = 4;
  v72 = 0;
  v66 = 0;
  v67 = 4;
  v68 = 0;
  v62 = 0;
  v63 = 4;
  v64 = 0;
  v58 = 0;
  v59 = 8;
  v60 = 0;
  v54 = 0;
  v55 = 8;
  v56 = 0;
  v50 = 0;
  v51 = 4;
  v52 = 0;
  v46 = 0;
  v47 = 4;
  v48 = 0;
  v42 = 0;
  v43 = 4;
  v44 = 0;
  v38 = 0;
  v39 = 4;
  v40 = 0;
  v34 = 0;
  v35 = 4;
  v36 = 0;
  v30 = 0;
  v31 = 8;
  v32 = 0;
  v26 = 0;
  v28 = 0;
  v21 = v18;
  v22 = 0;
  v23 = 8;
  v24 = 0;
  return _tlgWriteTransfer_EtwWriteTransfer(a1, a2, 0, 0, 0x10u, &UserData);
}
