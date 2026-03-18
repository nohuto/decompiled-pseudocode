/*
 * XREFs of ??$Write@U?$_tlgWrapSz@D@@U1@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapSz@D@@3ABU?$_tlgWrapperByVal@$03@@4444444444444444@Z @ 0x142804
 * Callers:
 *     _zzzUpdateCursorImage@0 @ 0x745FA (_zzzUpdateCursorImage@0.c)
 *     ?SetPointerInternal@@YGX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z @ 0xB1576 (-SetPointerInternal@@YGX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z.c)
 * Callees:
 *     __tlgWriteTransfer_EtwWriteTransfer@24 @ 0xE8E1E (__tlgWriteTransfer_EtwWriteTransfer@24.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        int a1,
        unsigned __int8 *a2,
        int a3,
        int a4,
        const char **a5,
        const char **a6,
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
        int a23)
{
  unsigned __int8 *v24; // edi
  unsigned int v25; // esi
  const char *v26; // edx
  unsigned int v27; // ecx
  int v28; // ecx
  const char *v29; // edx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [esp+10h] [ebp-154h] BYREF
  const char *v33; // [esp+30h] [ebp-134h]
  int v34; // [esp+34h] [ebp-130h]
  unsigned int v35; // [esp+38h] [ebp-12Ch]
  int v36; // [esp+3Ch] [ebp-128h]
  const char *v37; // [esp+40h] [ebp-124h]
  int v38; // [esp+44h] [ebp-120h]
  int v39; // [esp+48h] [ebp-11Ch]
  int v40; // [esp+4Ch] [ebp-118h]
  int v41; // [esp+50h] [ebp-114h]
  int v42; // [esp+54h] [ebp-110h]
  int v43; // [esp+58h] [ebp-10Ch]
  int v44; // [esp+5Ch] [ebp-108h]
  int v45; // [esp+60h] [ebp-104h]
  int v46; // [esp+64h] [ebp-100h]
  int v47; // [esp+68h] [ebp-FCh]
  int v48; // [esp+6Ch] [ebp-F8h]
  int v49; // [esp+70h] [ebp-F4h]
  int v50; // [esp+74h] [ebp-F0h]
  int v51; // [esp+78h] [ebp-ECh]
  int v52; // [esp+7Ch] [ebp-E8h]
  int v53; // [esp+80h] [ebp-E4h]
  int v54; // [esp+84h] [ebp-E0h]
  int v55; // [esp+88h] [ebp-DCh]
  int v56; // [esp+8Ch] [ebp-D8h]
  int v57; // [esp+90h] [ebp-D4h]
  int v58; // [esp+94h] [ebp-D0h]
  int v59; // [esp+98h] [ebp-CCh]
  int v60; // [esp+9Ch] [ebp-C8h]
  int v61; // [esp+A0h] [ebp-C4h]
  int v62; // [esp+A4h] [ebp-C0h]
  int v63; // [esp+A8h] [ebp-BCh]
  int v64; // [esp+ACh] [ebp-B8h]
  int v65; // [esp+B0h] [ebp-B4h]
  int v66; // [esp+B4h] [ebp-B0h]
  int v67; // [esp+B8h] [ebp-ACh]
  int v68; // [esp+BCh] [ebp-A8h]
  int v69; // [esp+C0h] [ebp-A4h]
  int v70; // [esp+C4h] [ebp-A0h]
  int v71; // [esp+C8h] [ebp-9Ch]
  int v72; // [esp+CCh] [ebp-98h]
  int v73; // [esp+D0h] [ebp-94h]
  int v74; // [esp+D4h] [ebp-90h]
  int v75; // [esp+D8h] [ebp-8Ch]
  int v76; // [esp+DCh] [ebp-88h]
  int v77; // [esp+E0h] [ebp-84h]
  int v78; // [esp+E4h] [ebp-80h]
  int v79; // [esp+E8h] [ebp-7Ch]
  int v80; // [esp+ECh] [ebp-78h]
  int v81; // [esp+F0h] [ebp-74h]
  int v82; // [esp+F4h] [ebp-70h]
  int v83; // [esp+F8h] [ebp-6Ch]
  int v84; // [esp+FCh] [ebp-68h]
  int v85; // [esp+100h] [ebp-64h]
  int v86; // [esp+104h] [ebp-60h]
  int v87; // [esp+108h] [ebp-5Ch]
  int v88; // [esp+10Ch] [ebp-58h]
  int v89; // [esp+110h] [ebp-54h]
  int v90; // [esp+114h] [ebp-50h]
  int v91; // [esp+118h] [ebp-4Ch]
  int v92; // [esp+11Ch] [ebp-48h]
  int v93; // [esp+120h] [ebp-44h]
  int v94; // [esp+124h] [ebp-40h]
  int v95; // [esp+128h] [ebp-3Ch]
  int v96; // [esp+12Ch] [ebp-38h]
  int v97; // [esp+130h] [ebp-34h]
  int v98; // [esp+134h] [ebp-30h]
  int v99; // [esp+138h] [ebp-2Ch]
  int v100; // [esp+13Ch] [ebp-28h]
  int v101; // [esp+140h] [ebp-24h]
  int v102; // [esp+144h] [ebp-20h]
  int v103; // [esp+148h] [ebp-1Ch]
  int v104; // [esp+14Ch] [ebp-18h]
  int v105; // [esp+150h] [ebp-14h]
  int v106; // [esp+154h] [ebp-10h]
  int v107; // [esp+158h] [ebp-Ch]
  int v108; // [esp+15Ch] [ebp-8h]

  v105 = a23;
  v101 = a22;
  v97 = a21;
  v93 = a20;
  v89 = a19;
  v85 = a18;
  v81 = a17;
  v77 = a16;
  v73 = a15;
  v69 = a14;
  v65 = a13;
  v61 = a12;
  v24 = a2;
  v57 = a11;
  v53 = a10;
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
  v82 = 0;
  v83 = 4;
  v84 = 0;
  v78 = 0;
  v79 = 4;
  v80 = 0;
  v74 = 0;
  v75 = 4;
  v76 = 0;
  v70 = 0;
  v71 = 4;
  v72 = 0;
  v66 = 0;
  v67 = 4;
  v68 = 0;
  v62 = 0;
  v63 = 4;
  v64 = 0;
  v58 = 0;
  v59 = 4;
  v60 = 0;
  v54 = 0;
  v55 = 4;
  v56 = 0;
  v49 = a9;
  v45 = a8;
  v25 = 1;
  v41 = a7;
  v50 = 0;
  v52 = 0;
  v46 = 0;
  v48 = 0;
  v42 = 0;
  v44 = 0;
  v26 = *a6;
  v51 = 4;
  v47 = 4;
  v43 = 4;
  if ( v26 )
  {
    v27 = strlen(v26);
    v24 = a2;
    v28 = v27 + 1;
  }
  else
  {
    v26 = byte_FC858;
    v28 = 1;
  }
  v38 = 0;
  v37 = v26;
  v39 = v28;
  v29 = *a5;
  v40 = 0;
  if ( v29 )
    v25 = strlen(v29) + 1;
  else
    v29 = byte_FC858;
  v33 = v29;
  v34 = 0;
  v35 = v25;
  v36 = 0;
  return _tlgWriteTransfer_EtwWriteTransfer(a1, v24, 0, 0, 0x15u, &UserData);
}
