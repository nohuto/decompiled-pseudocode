/*
 * XREFs of ??$Write@U?$_tlgWrapSz@D@@U1@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapSz@D@@3ABU?$_tlgWrapperByVal@$03@@444444444444ABU?$_tlgWrapSz@G@@@Z @ 0x142A3C
 * Callers:
 *     ?zzzInternalSetSystemCursor@@YGXPAUtagCURSOR@@IPAU_UNICODE_STRING@@W4InputTracing_SetSystemCursorReason@@@Z @ 0xD8F80 (-zzzInternalSetSystemCursor@@YGXPAUtagCURSOR@@IPAU_UNICODE_STRING@@W4InputTracing_SetSystemCurso.c)
 * Callees:
 *     __tlgWriteTransfer_EtwWriteTransfer@24 @ 0xE8E1E (__tlgWriteTransfer_EtwWriteTransfer@24.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ??$_tlgCreate1Sz@G@@YGXPAU_EVENT_DATA_DESCRIPTOR@@PBG@Z @ 0x142F12 (--$_tlgCreate1Sz@G@@YGXPAU_EVENT_DATA_DESCRIPTOR@@PBG@Z.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
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
        _DWORD *a20)
{
  unsigned __int8 *v20; // edi
  const char *v22; // edx
  unsigned int v23; // esi
  unsigned int v24; // ecx
  int v25; // ecx
  const char *v26; // edx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [esp+10h] [ebp-124h] BYREF
  const char *v30; // [esp+30h] [ebp-104h]
  int v31; // [esp+34h] [ebp-100h]
  unsigned int v32; // [esp+38h] [ebp-FCh]
  int v33; // [esp+3Ch] [ebp-F8h]
  const char *v34; // [esp+40h] [ebp-F4h]
  int v35; // [esp+44h] [ebp-F0h]
  int v36; // [esp+48h] [ebp-ECh]
  int v37; // [esp+4Ch] [ebp-E8h]
  int v38; // [esp+50h] [ebp-E4h]
  int v39; // [esp+54h] [ebp-E0h]
  int v40; // [esp+58h] [ebp-DCh]
  int v41; // [esp+5Ch] [ebp-D8h]
  int v42; // [esp+60h] [ebp-D4h]
  int v43; // [esp+64h] [ebp-D0h]
  int v44; // [esp+68h] [ebp-CCh]
  int v45; // [esp+6Ch] [ebp-C8h]
  int v46; // [esp+70h] [ebp-C4h]
  int v47; // [esp+74h] [ebp-C0h]
  int v48; // [esp+78h] [ebp-BCh]
  int v49; // [esp+7Ch] [ebp-B8h]
  int v50; // [esp+80h] [ebp-B4h]
  int v51; // [esp+84h] [ebp-B0h]
  int v52; // [esp+88h] [ebp-ACh]
  int v53; // [esp+8Ch] [ebp-A8h]
  int v54; // [esp+90h] [ebp-A4h]
  int v55; // [esp+94h] [ebp-A0h]
  int v56; // [esp+98h] [ebp-9Ch]
  int v57; // [esp+9Ch] [ebp-98h]
  int v58; // [esp+A0h] [ebp-94h]
  int v59; // [esp+A4h] [ebp-90h]
  int v60; // [esp+A8h] [ebp-8Ch]
  int v61; // [esp+ACh] [ebp-88h]
  int v62; // [esp+B0h] [ebp-84h]
  int v63; // [esp+B4h] [ebp-80h]
  int v64; // [esp+B8h] [ebp-7Ch]
  int v65; // [esp+BCh] [ebp-78h]
  int v66; // [esp+C0h] [ebp-74h]
  int v67; // [esp+C4h] [ebp-70h]
  int v68; // [esp+C8h] [ebp-6Ch]
  int v69; // [esp+CCh] [ebp-68h]
  int v70; // [esp+D0h] [ebp-64h]
  int v71; // [esp+D4h] [ebp-60h]
  int v72; // [esp+D8h] [ebp-5Ch]
  int v73; // [esp+DCh] [ebp-58h]
  int v74; // [esp+E0h] [ebp-54h]
  int v75; // [esp+E4h] [ebp-50h]
  int v76; // [esp+E8h] [ebp-4Ch]
  int v77; // [esp+ECh] [ebp-48h]
  int v78; // [esp+F0h] [ebp-44h]
  int v79; // [esp+F4h] [ebp-40h]
  int v80; // [esp+F8h] [ebp-3Ch]
  int v81; // [esp+FCh] [ebp-38h]
  int v82; // [esp+100h] [ebp-34h]
  int v83; // [esp+104h] [ebp-30h]
  int v84; // [esp+108h] [ebp-2Ch]
  int v85; // [esp+10Ch] [ebp-28h]
  int v86; // [esp+110h] [ebp-24h]
  int v87; // [esp+114h] [ebp-20h]
  int v88; // [esp+118h] [ebp-1Ch]
  int v89; // [esp+11Ch] [ebp-18h]
  _BYTE v90[16]; // [esp+120h] [ebp-14h] BYREF

  v20 = a2;
  _tlgCreate1Sz<unsigned short>(v90, *a20);
  v86 = a19;
  v82 = a18;
  v78 = a17;
  v74 = a16;
  v70 = a15;
  v66 = a14;
  v62 = a13;
  v58 = a12;
  v54 = a11;
  v50 = a10;
  v46 = a9;
  v42 = a8;
  v38 = a7;
  v87 = 0;
  v89 = 0;
  v83 = 0;
  v85 = 0;
  v79 = 0;
  v81 = 0;
  v75 = 0;
  v77 = 0;
  v71 = 0;
  v73 = 0;
  v67 = 0;
  v69 = 0;
  v63 = 0;
  v65 = 0;
  v59 = 0;
  v61 = 0;
  v55 = 0;
  v57 = 0;
  v51 = 0;
  v53 = 0;
  v47 = 0;
  v49 = 0;
  v43 = 0;
  v45 = 0;
  v39 = 0;
  v41 = 0;
  v22 = *a6;
  v88 = 4;
  v84 = 4;
  v80 = 4;
  v76 = 4;
  v72 = 4;
  v68 = 4;
  v64 = 4;
  v60 = 4;
  v56 = 4;
  v52 = 4;
  v48 = 4;
  v44 = 4;
  v40 = 4;
  v23 = 1;
  if ( v22 )
  {
    v24 = strlen(v22);
    v20 = a2;
    v25 = v24 + 1;
  }
  else
  {
    v22 = byte_FC858;
    v25 = 1;
  }
  v35 = 0;
  v34 = v22;
  v36 = v25;
  v26 = *a5;
  v37 = 0;
  if ( v26 )
    v23 = strlen(v26) + 1;
  else
    v26 = byte_FC858;
  v30 = v26;
  v31 = 0;
  v32 = v23;
  v33 = 0;
  return _tlgWriteTransfer_EtwWriteTransfer(a1, v20, 0, 0, 0x12u, &UserData);
}
