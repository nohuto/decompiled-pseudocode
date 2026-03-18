/*
 * XREFs of ??$Write@U?$_tlgWrapperByRef@$07@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$00@@U2@U3@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$01@@U5@U4@U4@U4@U4@U4@U4@U4@U4@U4@U4@U4@U4@U4@U4@U4@U4@U4@U4@U1@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByRef@$07@@ABU?$_tlgWrapperByRef@$0BA@@@ABU?$_tlgWrapperByVal@$00@@45ABU?$_tlgWrapperByVal@$03@@ABU?$_tlgWrapperByVal@$01@@76666666666666666663@Z @ 0x185D34
 * Callers:
 *     ?TraceLoggingIntObjUsageSummaryEvent@@YGXPAUtagINTOBJTELEMETRYSTATE@@GGU_GUID@@1_K@Z @ 0x18687E (-TraceLoggingIntObjUsageSummaryEvent@@YGXPAUtagINTOBJTELEMETRYSTATE@@GGU_GUID@@1_K@Z.c)
 * Callees:
 *     __tlgWriteTransfer_EtwWriteTransfer@24 @ 0xE8E1E (__tlgWriteTransfer_EtwWriteTransfer@24.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<8>,_tlgWrapperByRef<16>,_tlgWrapperByVal<1>,_tlgWrapperByRef<16>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<8>>(
        int a1,
        unsigned __int8 *a2,
        int a3,
        int a4,
        int *a5,
        int *a6,
        int a7,
        int *a8,
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
        int a24,
        int a25,
        int a26,
        int a27,
        int a28,
        int a29,
        int a30,
        int *a31)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [esp+Ch] [ebp-1D4h] BYREF
  int v33; // [esp+2Ch] [ebp-1B4h]
  int v34; // [esp+30h] [ebp-1B0h]
  int v35; // [esp+34h] [ebp-1ACh]
  int v36; // [esp+38h] [ebp-1A8h]
  int v37; // [esp+3Ch] [ebp-1A4h]
  int v38; // [esp+40h] [ebp-1A0h]
  int v39; // [esp+44h] [ebp-19Ch]
  int v40; // [esp+48h] [ebp-198h]
  int v41; // [esp+4Ch] [ebp-194h]
  int v42; // [esp+50h] [ebp-190h]
  int v43; // [esp+54h] [ebp-18Ch]
  int v44; // [esp+58h] [ebp-188h]
  int v45; // [esp+5Ch] [ebp-184h]
  int v46; // [esp+60h] [ebp-180h]
  int v47; // [esp+64h] [ebp-17Ch]
  int v48; // [esp+68h] [ebp-178h]
  int v49; // [esp+6Ch] [ebp-174h]
  int v50; // [esp+70h] [ebp-170h]
  int v51; // [esp+74h] [ebp-16Ch]
  int v52; // [esp+78h] [ebp-168h]
  int v53; // [esp+7Ch] [ebp-164h]
  int v54; // [esp+80h] [ebp-160h]
  int v55; // [esp+84h] [ebp-15Ch]
  int v56; // [esp+88h] [ebp-158h]
  int v57; // [esp+8Ch] [ebp-154h]
  int v58; // [esp+90h] [ebp-150h]
  int v59; // [esp+94h] [ebp-14Ch]
  int v60; // [esp+98h] [ebp-148h]
  int v61; // [esp+9Ch] [ebp-144h]
  int v62; // [esp+A0h] [ebp-140h]
  int v63; // [esp+A4h] [ebp-13Ch]
  int v64; // [esp+A8h] [ebp-138h]
  int v65; // [esp+ACh] [ebp-134h]
  int v66; // [esp+B0h] [ebp-130h]
  int v67; // [esp+B4h] [ebp-12Ch]
  int v68; // [esp+B8h] [ebp-128h]
  int v69; // [esp+BCh] [ebp-124h]
  int v70; // [esp+C0h] [ebp-120h]
  int v71; // [esp+C4h] [ebp-11Ch]
  int v72; // [esp+C8h] [ebp-118h]
  int v73; // [esp+CCh] [ebp-114h]
  int v74; // [esp+D0h] [ebp-110h]
  int v75; // [esp+D4h] [ebp-10Ch]
  int v76; // [esp+D8h] [ebp-108h]
  int v77; // [esp+DCh] [ebp-104h]
  int v78; // [esp+E0h] [ebp-100h]
  int v79; // [esp+E4h] [ebp-FCh]
  int v80; // [esp+E8h] [ebp-F8h]
  int v81; // [esp+ECh] [ebp-F4h]
  int v82; // [esp+F0h] [ebp-F0h]
  int v83; // [esp+F4h] [ebp-ECh]
  int v84; // [esp+F8h] [ebp-E8h]
  int v85; // [esp+FCh] [ebp-E4h]
  int v86; // [esp+100h] [ebp-E0h]
  int v87; // [esp+104h] [ebp-DCh]
  int v88; // [esp+108h] [ebp-D8h]
  int v89; // [esp+10Ch] [ebp-D4h]
  int v90; // [esp+110h] [ebp-D0h]
  int v91; // [esp+114h] [ebp-CCh]
  int v92; // [esp+118h] [ebp-C8h]
  int v93; // [esp+11Ch] [ebp-C4h]
  int v94; // [esp+120h] [ebp-C0h]
  int v95; // [esp+124h] [ebp-BCh]
  int v96; // [esp+128h] [ebp-B8h]
  int v97; // [esp+12Ch] [ebp-B4h]
  int v98; // [esp+130h] [ebp-B0h]
  int v99; // [esp+134h] [ebp-ACh]
  int v100; // [esp+138h] [ebp-A8h]
  int v101; // [esp+13Ch] [ebp-A4h]
  int v102; // [esp+140h] [ebp-A0h]
  int v103; // [esp+144h] [ebp-9Ch]
  int v104; // [esp+148h] [ebp-98h]
  int v105; // [esp+14Ch] [ebp-94h]
  int v106; // [esp+150h] [ebp-90h]
  int v107; // [esp+154h] [ebp-8Ch]
  int v108; // [esp+158h] [ebp-88h]
  int v109; // [esp+15Ch] [ebp-84h]
  int v110; // [esp+160h] [ebp-80h]
  int v111; // [esp+164h] [ebp-7Ch]
  int v112; // [esp+168h] [ebp-78h]
  int v113; // [esp+16Ch] [ebp-74h]
  int v114; // [esp+170h] [ebp-70h]
  int v115; // [esp+174h] [ebp-6Ch]
  int v116; // [esp+178h] [ebp-68h]
  int v117; // [esp+17Ch] [ebp-64h]
  int v118; // [esp+180h] [ebp-60h]
  int v119; // [esp+184h] [ebp-5Ch]
  int v120; // [esp+188h] [ebp-58h]
  int v121; // [esp+18Ch] [ebp-54h]
  int v122; // [esp+190h] [ebp-50h]
  int v123; // [esp+194h] [ebp-4Ch]
  int v124; // [esp+198h] [ebp-48h]
  int v125; // [esp+19Ch] [ebp-44h]
  int v126; // [esp+1A0h] [ebp-40h]
  int v127; // [esp+1A4h] [ebp-3Ch]
  int v128; // [esp+1A8h] [ebp-38h]
  int v129; // [esp+1ACh] [ebp-34h]
  int v130; // [esp+1B0h] [ebp-30h]
  int v131; // [esp+1B4h] [ebp-2Ch]
  int v132; // [esp+1B8h] [ebp-28h]
  int v133; // [esp+1BCh] [ebp-24h]
  int v134; // [esp+1C0h] [ebp-20h]
  int v135; // [esp+1C4h] [ebp-1Ch]
  int v136; // [esp+1C8h] [ebp-18h]
  int v137; // [esp+1CCh] [ebp-14h]
  int v138; // [esp+1D0h] [ebp-10h]
  int v139; // [esp+1D4h] [ebp-Ch]
  int v140; // [esp+1D8h] [ebp-8h]

  v137 = *a31;
  v133 = a30;
  v129 = a29;
  v125 = a28;
  v121 = a27;
  v117 = a26;
  v113 = a25;
  v109 = a24;
  v105 = a23;
  v101 = a22;
  v97 = a21;
  v93 = a20;
  v89 = a19;
  v85 = a18;
  v138 = 0;
  v139 = 8;
  v140 = 0;
  v134 = 0;
  v135 = 4;
  v136 = 0;
  v130 = 0;
  v131 = 4;
  v132 = 0;
  v126 = 0;
  v127 = 4;
  v128 = 0;
  v122 = 0;
  v123 = 4;
  v124 = 0;
  v118 = 0;
  v119 = 4;
  v120 = 0;
  v114 = 0;
  v115 = 4;
  v116 = 0;
  v110 = 0;
  v111 = 4;
  v112 = 0;
  v106 = 0;
  v107 = 4;
  v108 = 0;
  v102 = 0;
  v103 = 4;
  v104 = 0;
  v98 = 0;
  v99 = 4;
  v100 = 0;
  v94 = 0;
  v95 = 4;
  v96 = 0;
  v90 = 0;
  v91 = 4;
  v92 = 0;
  v86 = 0;
  v87 = 4;
  v88 = 0;
  v81 = a17;
  v77 = a16;
  v73 = a15;
  v69 = a14;
  v65 = a13;
  v61 = a12;
  v57 = a11;
  v53 = a10;
  v49 = a9;
  v45 = *a8;
  v41 = a7;
  v63 = 2;
  v59 = 2;
  v37 = *a6;
  v83 = 4;
  v79 = 4;
  v75 = 4;
  v33 = *a5;
  v71 = 4;
  v67 = 4;
  v55 = 4;
  v82 = 0;
  v84 = 0;
  v78 = 0;
  v80 = 0;
  v74 = 0;
  v76 = 0;
  v70 = 0;
  v72 = 0;
  v66 = 0;
  v68 = 0;
  v62 = 0;
  v64 = 0;
  v58 = 0;
  v60 = 0;
  v54 = 0;
  v56 = 0;
  v50 = 0;
  v51 = 1;
  v52 = 0;
  v46 = 0;
  v47 = 16;
  v48 = 0;
  v42 = 0;
  v43 = 1;
  v44 = 0;
  v38 = 0;
  v39 = 16;
  v40 = 0;
  v34 = 0;
  v35 = 8;
  v36 = 0;
  return _tlgWriteTransfer_EtwWriteTransfer((int)&dword_266280, a2, 0, 0, 0x1Du, &UserData);
}
