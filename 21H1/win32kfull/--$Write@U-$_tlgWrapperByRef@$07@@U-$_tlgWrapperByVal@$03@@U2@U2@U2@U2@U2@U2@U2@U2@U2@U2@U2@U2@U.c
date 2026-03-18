/*
 * XREFs of ??$Write@U?$_tlgWrapperByRef@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByRef@$07@@ABU?$_tlgWrapperByVal@$03@@444444444444444444@Z @ 0x15E117
 * Callers:
 *     ?OnInput@InputSink@InputTraceLogging@@SGX_KPAUHWND__@@PBUCompositionInputObject@@_NABUtagINPUT_TRANSFORM@@@Z @ 0xF1E96 (-OnInput@InputSink@InputTraceLogging@@SGX_KPAUHWND__@@PBUCompositionInputObject@@_NABUtagINPUT_T.c)
 * Callees:
 *     __tlgWriteTransfer_EtwWriteTransfer@24 @ 0xE8E1E (__tlgWriteTransfer_EtwWriteTransfer@24.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
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
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        int a20,
        int a21,
        int a22,
        int a23,
        int a24)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [esp+8h] [ebp-164h] BYREF
  int v26; // [esp+28h] [ebp-144h]
  int v27; // [esp+2Ch] [ebp-140h]
  int v28; // [esp+30h] [ebp-13Ch]
  int v29; // [esp+34h] [ebp-138h]
  int v30; // [esp+38h] [ebp-134h]
  int v31; // [esp+3Ch] [ebp-130h]
  int v32; // [esp+40h] [ebp-12Ch]
  int v33; // [esp+44h] [ebp-128h]
  int v34; // [esp+48h] [ebp-124h]
  int v35; // [esp+4Ch] [ebp-120h]
  int v36; // [esp+50h] [ebp-11Ch]
  int v37; // [esp+54h] [ebp-118h]
  int v38; // [esp+58h] [ebp-114h]
  int v39; // [esp+5Ch] [ebp-110h]
  int v40; // [esp+60h] [ebp-10Ch]
  int v41; // [esp+64h] [ebp-108h]
  int v42; // [esp+68h] [ebp-104h]
  int v43; // [esp+6Ch] [ebp-100h]
  int v44; // [esp+70h] [ebp-FCh]
  int v45; // [esp+74h] [ebp-F8h]
  int v46; // [esp+78h] [ebp-F4h]
  int v47; // [esp+7Ch] [ebp-F0h]
  int v48; // [esp+80h] [ebp-ECh]
  int v49; // [esp+84h] [ebp-E8h]
  int v50; // [esp+88h] [ebp-E4h]
  int v51; // [esp+8Ch] [ebp-E0h]
  int v52; // [esp+90h] [ebp-DCh]
  int v53; // [esp+94h] [ebp-D8h]
  int v54; // [esp+98h] [ebp-D4h]
  int v55; // [esp+9Ch] [ebp-D0h]
  int v56; // [esp+A0h] [ebp-CCh]
  int v57; // [esp+A4h] [ebp-C8h]
  int v58; // [esp+A8h] [ebp-C4h]
  int v59; // [esp+ACh] [ebp-C0h]
  int v60; // [esp+B0h] [ebp-BCh]
  int v61; // [esp+B4h] [ebp-B8h]
  int v62; // [esp+B8h] [ebp-B4h]
  int v63; // [esp+BCh] [ebp-B0h]
  int v64; // [esp+C0h] [ebp-ACh]
  int v65; // [esp+C4h] [ebp-A8h]
  int v66; // [esp+C8h] [ebp-A4h]
  int v67; // [esp+CCh] [ebp-A0h]
  int v68; // [esp+D0h] [ebp-9Ch]
  int v69; // [esp+D4h] [ebp-98h]
  int v70; // [esp+D8h] [ebp-94h]
  int v71; // [esp+DCh] [ebp-90h]
  int v72; // [esp+E0h] [ebp-8Ch]
  int v73; // [esp+E4h] [ebp-88h]
  int v74; // [esp+E8h] [ebp-84h]
  int v75; // [esp+ECh] [ebp-80h]
  int v76; // [esp+F0h] [ebp-7Ch]
  int v77; // [esp+F4h] [ebp-78h]
  int v78; // [esp+F8h] [ebp-74h]
  int v79; // [esp+FCh] [ebp-70h]
  int v80; // [esp+100h] [ebp-6Ch]
  int v81; // [esp+104h] [ebp-68h]
  int v82; // [esp+108h] [ebp-64h]
  int v83; // [esp+10Ch] [ebp-60h]
  int v84; // [esp+110h] [ebp-5Ch]
  int v85; // [esp+114h] [ebp-58h]
  int v86; // [esp+118h] [ebp-54h]
  int v87; // [esp+11Ch] [ebp-50h]
  int v88; // [esp+120h] [ebp-4Ch]
  int v89; // [esp+124h] [ebp-48h]
  int v90; // [esp+128h] [ebp-44h]
  int v91; // [esp+12Ch] [ebp-40h]
  int v92; // [esp+130h] [ebp-3Ch]
  int v93; // [esp+134h] [ebp-38h]
  int v94; // [esp+138h] [ebp-34h]
  int v95; // [esp+13Ch] [ebp-30h]
  int v96; // [esp+140h] [ebp-2Ch]
  int v97; // [esp+144h] [ebp-28h]
  int v98; // [esp+148h] [ebp-24h]
  int v99; // [esp+14Ch] [ebp-20h]
  int v100; // [esp+150h] [ebp-1Ch]
  int v101; // [esp+154h] [ebp-18h]
  int v102; // [esp+158h] [ebp-14h]
  int v103; // [esp+15Ch] [ebp-10h]
  int v104; // [esp+160h] [ebp-Ch]
  int v105; // [esp+164h] [ebp-8h]

  v102 = a24;
  v98 = a23;
  v94 = a22;
  v90 = a21;
  v86 = a20;
  v82 = a19;
  v78 = a18;
  v74 = a17;
  v70 = a16;
  v66 = a15;
  v62 = a14;
  v58 = a13;
  v54 = a12;
  v50 = a11;
  v46 = a10;
  v103 = 0;
  v104 = 4;
  v105 = 0;
  v99 = 0;
  v100 = 4;
  v101 = 0;
  v95 = 0;
  v96 = 4;
  v97 = 0;
  v91 = 0;
  v92 = 4;
  v93 = 0;
  v87 = 0;
  v88 = 4;
  v89 = 0;
  v83 = 0;
  v84 = 4;
  v85 = 0;
  v79 = 0;
  v80 = 4;
  v81 = 0;
  v75 = 0;
  v76 = 4;
  v77 = 0;
  v71 = 0;
  v72 = 4;
  v73 = 0;
  v67 = 0;
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
  v52 = 4;
  v53 = 0;
  v47 = 0;
  v48 = 4;
  v49 = 0;
  v42 = a9;
  v38 = a8;
  v34 = a7;
  v30 = a6;
  v43 = 0;
  v44 = 4;
  v45 = 0;
  v26 = *a5;
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
  v28 = 8;
  v29 = 0;
  return _tlgWriteTransfer_EtwWriteTransfer(a1, a2, 0, 0, 0x16u, &UserData);
}
