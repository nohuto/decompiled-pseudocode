/*
 * XREFs of ??$Write@U?$_tlgWrapperByRef@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByRef@$07@@ABU?$_tlgWrapperByVal@$03@@ABU?$_tlgWrapSz@D@@444444444444@Z @ 0x186418
 * Callers:
 *     ?TraceLoggingProcessUsageOnTerminationEvent@@YGXQAUtagPROCESSINFO@@@Z @ 0xB1FC2 (-TraceLoggingProcessUsageOnTerminationEvent@@YGXQAUtagPROCESSINFO@@@Z.c)
 * Callees:
 *     __tlgWriteTransfer_EtwWriteTransfer@24 @ 0xE8E1E (__tlgWriteTransfer_EtwWriteTransfer@24.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        int a1,
        unsigned __int8 *a2,
        int a3,
        int a4,
        int *a5,
        int a6,
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
        int a19)
{
  const char *v20; // edx
  unsigned int v21; // ecx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [esp+8h] [ebp-114h] BYREF
  int v24; // [esp+28h] [ebp-F4h]
  int v25; // [esp+2Ch] [ebp-F0h]
  int v26; // [esp+30h] [ebp-ECh]
  int v27; // [esp+34h] [ebp-E8h]
  int v28; // [esp+38h] [ebp-E4h]
  int v29; // [esp+3Ch] [ebp-E0h]
  int v30; // [esp+40h] [ebp-DCh]
  int v31; // [esp+44h] [ebp-D8h]
  const char *v32; // [esp+48h] [ebp-D4h]
  int v33; // [esp+4Ch] [ebp-D0h]
  unsigned int v34; // [esp+50h] [ebp-CCh]
  int v35; // [esp+54h] [ebp-C8h]
  int v36; // [esp+58h] [ebp-C4h]
  int v37; // [esp+5Ch] [ebp-C0h]
  int v38; // [esp+60h] [ebp-BCh]
  int v39; // [esp+64h] [ebp-B8h]
  int v40; // [esp+68h] [ebp-B4h]
  int v41; // [esp+6Ch] [ebp-B0h]
  int v42; // [esp+70h] [ebp-ACh]
  int v43; // [esp+74h] [ebp-A8h]
  int v44; // [esp+78h] [ebp-A4h]
  int v45; // [esp+7Ch] [ebp-A0h]
  int v46; // [esp+80h] [ebp-9Ch]
  int v47; // [esp+84h] [ebp-98h]
  int v48; // [esp+88h] [ebp-94h]
  int v49; // [esp+8Ch] [ebp-90h]
  int v50; // [esp+90h] [ebp-8Ch]
  int v51; // [esp+94h] [ebp-88h]
  int v52; // [esp+98h] [ebp-84h]
  int v53; // [esp+9Ch] [ebp-80h]
  int v54; // [esp+A0h] [ebp-7Ch]
  int v55; // [esp+A4h] [ebp-78h]
  int v56; // [esp+A8h] [ebp-74h]
  int v57; // [esp+ACh] [ebp-70h]
  int v58; // [esp+B0h] [ebp-6Ch]
  int v59; // [esp+B4h] [ebp-68h]
  int v60; // [esp+B8h] [ebp-64h]
  int v61; // [esp+BCh] [ebp-60h]
  int v62; // [esp+C0h] [ebp-5Ch]
  int v63; // [esp+C4h] [ebp-58h]
  int v64; // [esp+C8h] [ebp-54h]
  int v65; // [esp+CCh] [ebp-50h]
  int v66; // [esp+D0h] [ebp-4Ch]
  int v67; // [esp+D4h] [ebp-48h]
  int v68; // [esp+D8h] [ebp-44h]
  int v69; // [esp+DCh] [ebp-40h]
  int v70; // [esp+E0h] [ebp-3Ch]
  int v71; // [esp+E4h] [ebp-38h]
  int v72; // [esp+E8h] [ebp-34h]
  int v73; // [esp+ECh] [ebp-30h]
  int v74; // [esp+F0h] [ebp-2Ch]
  int v75; // [esp+F4h] [ebp-28h]
  int v76; // [esp+F8h] [ebp-24h]
  int v77; // [esp+FCh] [ebp-20h]
  int v78; // [esp+100h] [ebp-1Ch]
  int v79; // [esp+104h] [ebp-18h]
  int v80; // [esp+108h] [ebp-14h]
  int v81; // [esp+10Ch] [ebp-10h]
  int v82; // [esp+110h] [ebp-Ch]
  int v83; // [esp+114h] [ebp-8h]

  v80 = a19;
  v76 = a18;
  v72 = a17;
  v68 = a16;
  v64 = a15;
  v60 = a14;
  v56 = a13;
  v52 = a12;
  v48 = a11;
  v44 = a10;
  v40 = a9;
  v36 = a8;
  v81 = 0;
  v20 = *a7;
  v82 = 4;
  v83 = 0;
  v77 = 0;
  v78 = 4;
  v79 = 0;
  v73 = 0;
  v74 = 4;
  v75 = 0;
  v69 = 0;
  v70 = 4;
  v71 = 0;
  v65 = 0;
  v66 = 4;
  v67 = 0;
  v61 = 0;
  v62 = 4;
  v63 = 0;
  v57 = 0;
  v58 = 4;
  v59 = 0;
  v53 = 0;
  v54 = 4;
  v55 = 0;
  v49 = 0;
  v50 = 4;
  v51 = 0;
  v45 = 0;
  v46 = 4;
  v47 = 0;
  v41 = 0;
  v42 = 4;
  v43 = 0;
  v37 = 0;
  v38 = 4;
  v39 = 0;
  if ( v20 )
  {
    v21 = strlen(v20) + 1;
  }
  else
  {
    v20 = byte_FC858;
    v21 = 1;
  }
  v28 = a6;
  v32 = v20;
  v33 = 0;
  v34 = v21;
  v24 = *a5;
  v35 = 0;
  v29 = 0;
  v30 = 4;
  v31 = 0;
  v25 = 0;
  v26 = 8;
  v27 = 0;
  return _tlgWriteTransfer_EtwWriteTransfer((int)&dword_266280, a2, 0, 0, 0x11u, &UserData);
}
