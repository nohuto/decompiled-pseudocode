/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U1@U1@U?$_tlgWrapperByVal@$00@@U3@U3@U3@U3@U1@U3@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByVal@$03@@ABU?$_tlgWrapSz@D@@433ABU?$_tlgWrapperByVal@$00@@5555353333333333333@Z @ 0x1AFEFB
 * Callers:
 *     ?DoSuperWetInkStart@InkDevice@@AAEJPBUIFC_SUPERWET_INK_START_DATA@@@Z @ 0x1B04AA (-DoSuperWetInkStart@InkDevice@@AAEJPBUIFC_SUPERWET_INK_START_DATA@@@Z.c)
 *     ?ProcessInkFeedbackCommand@InkDevice@@EAEJW4INK_FEEDBACK_COMMAND@@PBXI@Z @ 0x1B0D08 (-ProcessInkFeedbackCommand@InkDevice@@EAEJW4INK_FEEDBACK_COMMAND@@PBXI@Z.c)
 * Callees:
 *     __tlgWriteTransfer_EtwWriteTransfer@24 @ 0xE8E1E (__tlgWriteTransfer_EtwWriteTransfer@24.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        int a1,
        unsigned __int8 *a2,
        int a3,
        int a4,
        int a5,
        const char **a6,
        const char **a7,
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
        int a24,
        int a25,
        int a26,
        int a27,
        int a28,
        int a29)
{
  unsigned int v30; // esi
  const char *v31; // edx
  unsigned int v32; // ecx
  const char *v33; // edx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [esp+Ch] [ebp-1B4h] BYREF
  int v36; // [esp+2Ch] [ebp-194h]
  int v37; // [esp+30h] [ebp-190h]
  int v38; // [esp+34h] [ebp-18Ch]
  int v39; // [esp+38h] [ebp-188h]
  const char *v40; // [esp+3Ch] [ebp-184h]
  int v41; // [esp+40h] [ebp-180h]
  unsigned int v42; // [esp+44h] [ebp-17Ch]
  int v43; // [esp+48h] [ebp-178h]
  const char *v44; // [esp+4Ch] [ebp-174h]
  int v45; // [esp+50h] [ebp-170h]
  unsigned int v46; // [esp+54h] [ebp-16Ch]
  int v47; // [esp+58h] [ebp-168h]
  int v48; // [esp+5Ch] [ebp-164h]
  int v49; // [esp+60h] [ebp-160h]
  int v50; // [esp+64h] [ebp-15Ch]
  int v51; // [esp+68h] [ebp-158h]
  int v52; // [esp+6Ch] [ebp-154h]
  int v53; // [esp+70h] [ebp-150h]
  int v54; // [esp+74h] [ebp-14Ch]
  int v55; // [esp+78h] [ebp-148h]
  int v56; // [esp+7Ch] [ebp-144h]
  int v57; // [esp+80h] [ebp-140h]
  int v58; // [esp+84h] [ebp-13Ch]
  int v59; // [esp+88h] [ebp-138h]
  int v60; // [esp+8Ch] [ebp-134h]
  int v61; // [esp+90h] [ebp-130h]
  int v62; // [esp+94h] [ebp-12Ch]
  int v63; // [esp+98h] [ebp-128h]
  int v64; // [esp+9Ch] [ebp-124h]
  int v65; // [esp+A0h] [ebp-120h]
  int v66; // [esp+A4h] [ebp-11Ch]
  int v67; // [esp+A8h] [ebp-118h]
  int v68; // [esp+ACh] [ebp-114h]
  int v69; // [esp+B0h] [ebp-110h]
  int v70; // [esp+B4h] [ebp-10Ch]
  int v71; // [esp+B8h] [ebp-108h]
  int v72; // [esp+BCh] [ebp-104h]
  int v73; // [esp+C0h] [ebp-100h]
  int v74; // [esp+C4h] [ebp-FCh]
  int v75; // [esp+C8h] [ebp-F8h]
  int v76; // [esp+CCh] [ebp-F4h]
  int v77; // [esp+D0h] [ebp-F0h]
  int v78; // [esp+D4h] [ebp-ECh]
  int v79; // [esp+D8h] [ebp-E8h]
  int v80; // [esp+DCh] [ebp-E4h]
  int v81; // [esp+E0h] [ebp-E0h]
  int v82; // [esp+E4h] [ebp-DCh]
  int v83; // [esp+E8h] [ebp-D8h]
  int v84; // [esp+ECh] [ebp-D4h]
  int v85; // [esp+F0h] [ebp-D0h]
  int v86; // [esp+F4h] [ebp-CCh]
  int v87; // [esp+F8h] [ebp-C8h]
  int v88; // [esp+FCh] [ebp-C4h]
  int v89; // [esp+100h] [ebp-C0h]
  int v90; // [esp+104h] [ebp-BCh]
  int v91; // [esp+108h] [ebp-B8h]
  int v92; // [esp+10Ch] [ebp-B4h]
  int v93; // [esp+110h] [ebp-B0h]
  int v94; // [esp+114h] [ebp-ACh]
  int v95; // [esp+118h] [ebp-A8h]
  int v96; // [esp+11Ch] [ebp-A4h]
  int v97; // [esp+120h] [ebp-A0h]
  int v98; // [esp+124h] [ebp-9Ch]
  int v99; // [esp+128h] [ebp-98h]
  int v100; // [esp+12Ch] [ebp-94h]
  int v101; // [esp+130h] [ebp-90h]
  int v102; // [esp+134h] [ebp-8Ch]
  int v103; // [esp+138h] [ebp-88h]
  int v104; // [esp+13Ch] [ebp-84h]
  int v105; // [esp+140h] [ebp-80h]
  int v106; // [esp+144h] [ebp-7Ch]
  int v107; // [esp+148h] [ebp-78h]
  int v108; // [esp+14Ch] [ebp-74h]
  int v109; // [esp+150h] [ebp-70h]
  int v110; // [esp+154h] [ebp-6Ch]
  int v111; // [esp+158h] [ebp-68h]
  int v112; // [esp+15Ch] [ebp-64h]
  int v113; // [esp+160h] [ebp-60h]
  int v114; // [esp+164h] [ebp-5Ch]
  int v115; // [esp+168h] [ebp-58h]
  int v116; // [esp+16Ch] [ebp-54h]
  int v117; // [esp+170h] [ebp-50h]
  int v118; // [esp+174h] [ebp-4Ch]
  int v119; // [esp+178h] [ebp-48h]
  int v120; // [esp+17Ch] [ebp-44h]
  int v121; // [esp+180h] [ebp-40h]
  int v122; // [esp+184h] [ebp-3Ch]
  int v123; // [esp+188h] [ebp-38h]
  int v124; // [esp+18Ch] [ebp-34h]
  int v125; // [esp+190h] [ebp-30h]
  int v126; // [esp+194h] [ebp-2Ch]
  int v127; // [esp+198h] [ebp-28h]
  int v128; // [esp+19Ch] [ebp-24h]
  int v129; // [esp+1A0h] [ebp-20h]
  int v130; // [esp+1A4h] [ebp-1Ch]
  int v131; // [esp+1A8h] [ebp-18h]
  int v132; // [esp+1ACh] [ebp-14h]
  int v133; // [esp+1B0h] [ebp-10h]
  int v134; // [esp+1B4h] [ebp-Ch]
  int v135; // [esp+1B8h] [ebp-8h]

  v132 = a29;
  v128 = a28;
  v124 = a27;
  v120 = a26;
  v116 = a25;
  v112 = a24;
  v108 = a23;
  v104 = a22;
  v100 = a21;
  v96 = a20;
  v92 = a19;
  v88 = a18;
  v30 = 1;
  v84 = a17;
  v80 = a16;
  v133 = 0;
  v134 = 4;
  v135 = 0;
  v129 = 0;
  v130 = 4;
  v131 = 0;
  v125 = 0;
  v126 = 4;
  v127 = 0;
  v121 = 0;
  v122 = 4;
  v123 = 0;
  v117 = 0;
  v118 = 4;
  v119 = 0;
  v113 = 0;
  v114 = 4;
  v115 = 0;
  v109 = 0;
  v110 = 4;
  v111 = 0;
  v105 = 0;
  v106 = 4;
  v107 = 0;
  v101 = 0;
  v102 = 4;
  v103 = 0;
  v97 = 0;
  v98 = 4;
  v99 = 0;
  v93 = 0;
  v94 = 4;
  v95 = 0;
  v89 = 0;
  v90 = 4;
  v91 = 0;
  v85 = 0;
  v86 = 4;
  v87 = 0;
  v81 = 0;
  v82 = 1;
  v83 = 0;
  v76 = a15;
  v72 = a14;
  v68 = a13;
  v64 = a12;
  v60 = a11;
  v56 = a10;
  v52 = a9;
  v48 = a8;
  v77 = 0;
  v78 = 4;
  v79 = 0;
  v31 = *a7;
  v73 = 0;
  v74 = 1;
  v75 = 0;
  v69 = 0;
  v70 = 1;
  v71 = 0;
  v65 = 0;
  v66 = 1;
  v67 = 0;
  v61 = 0;
  v62 = 1;
  v63 = 0;
  v57 = 0;
  v58 = 1;
  v59 = 0;
  v53 = 0;
  v54 = 4;
  v55 = 0;
  v49 = 0;
  v50 = 4;
  v51 = 0;
  if ( v31 )
  {
    v32 = strlen(v31) + 1;
  }
  else
  {
    v31 = byte_FC858;
    v32 = 1;
  }
  v44 = v31;
  v45 = 0;
  v46 = v32;
  v33 = *a6;
  v47 = 0;
  if ( v33 )
    v30 = strlen(v33) + 1;
  else
    v33 = byte_FC858;
  v36 = a5;
  v40 = v33;
  v41 = 0;
  v42 = v30;
  v43 = 0;
  v37 = 0;
  v38 = 4;
  v39 = 0;
  return _tlgWriteTransfer_EtwWriteTransfer((int)&CallbackContext, a2, 0, 0, 0x1Bu, &UserData);
}
