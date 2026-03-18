/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByVal@$03@@333333333333@Z @ 0x142DD2
 * Callers:
 *     ?EnsureDpiCursor@Cursor@InputTraceLogging@@SGXPAUtagCURSOR@@@Z @ 0x143024 (-EnsureDpiCursor@Cursor@InputTraceLogging@@SGXPAUtagCURSOR@@@Z.c)
 * Callees:
 *     __tlgWriteTransfer_EtwWriteTransfer@24 @ 0xE8E1E (__tlgWriteTransfer_EtwWriteTransfer@24.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
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
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [esp+8h] [ebp-F4h] BYREF
  int v19; // [esp+28h] [ebp-D4h]
  int v20; // [esp+2Ch] [ebp-D0h]
  int v21; // [esp+30h] [ebp-CCh]
  int v22; // [esp+34h] [ebp-C8h]
  int v23; // [esp+38h] [ebp-C4h]
  int v24; // [esp+3Ch] [ebp-C0h]
  int v25; // [esp+40h] [ebp-BCh]
  int v26; // [esp+44h] [ebp-B8h]
  int v27; // [esp+48h] [ebp-B4h]
  int v28; // [esp+4Ch] [ebp-B0h]
  int v29; // [esp+50h] [ebp-ACh]
  int v30; // [esp+54h] [ebp-A8h]
  int v31; // [esp+58h] [ebp-A4h]
  int v32; // [esp+5Ch] [ebp-A0h]
  int v33; // [esp+60h] [ebp-9Ch]
  int v34; // [esp+64h] [ebp-98h]
  int v35; // [esp+68h] [ebp-94h]
  int v36; // [esp+6Ch] [ebp-90h]
  int v37; // [esp+70h] [ebp-8Ch]
  int v38; // [esp+74h] [ebp-88h]
  int v39; // [esp+78h] [ebp-84h]
  int v40; // [esp+7Ch] [ebp-80h]
  int v41; // [esp+80h] [ebp-7Ch]
  int v42; // [esp+84h] [ebp-78h]
  int v43; // [esp+88h] [ebp-74h]
  int v44; // [esp+8Ch] [ebp-70h]
  int v45; // [esp+90h] [ebp-6Ch]
  int v46; // [esp+94h] [ebp-68h]
  int v47; // [esp+98h] [ebp-64h]
  int v48; // [esp+9Ch] [ebp-60h]
  int v49; // [esp+A0h] [ebp-5Ch]
  int v50; // [esp+A4h] [ebp-58h]
  int v51; // [esp+A8h] [ebp-54h]
  int v52; // [esp+ACh] [ebp-50h]
  int v53; // [esp+B0h] [ebp-4Ch]
  int v54; // [esp+B4h] [ebp-48h]
  int v55; // [esp+B8h] [ebp-44h]
  int v56; // [esp+BCh] [ebp-40h]
  int v57; // [esp+C0h] [ebp-3Ch]
  int v58; // [esp+C4h] [ebp-38h]
  int v59; // [esp+C8h] [ebp-34h]
  int v60; // [esp+CCh] [ebp-30h]
  int v61; // [esp+D0h] [ebp-2Ch]
  int v62; // [esp+D4h] [ebp-28h]
  int v63; // [esp+D8h] [ebp-24h]
  int v64; // [esp+DCh] [ebp-20h]
  int v65; // [esp+E0h] [ebp-1Ch]
  int v66; // [esp+E4h] [ebp-18h]
  int v67; // [esp+E8h] [ebp-14h]
  int v68; // [esp+ECh] [ebp-10h]
  int v69; // [esp+F0h] [ebp-Ch]
  int v70; // [esp+F4h] [ebp-8h]

  v67 = a17;
  v63 = a16;
  v59 = a15;
  v55 = a14;
  v51 = a13;
  v47 = a12;
  v43 = a11;
  v39 = a10;
  v35 = a9;
  v31 = a8;
  v27 = a7;
  v23 = a6;
  v19 = a5;
  v68 = 0;
  v69 = 4;
  v70 = 0;
  v64 = 0;
  v65 = 4;
  v66 = 0;
  v60 = 0;
  v61 = 4;
  v62 = 0;
  v56 = 0;
  v57 = 4;
  v58 = 0;
  v52 = 0;
  v53 = 4;
  v54 = 0;
  v48 = 0;
  v49 = 4;
  v50 = 0;
  v44 = 0;
  v45 = 4;
  v46 = 0;
  v40 = 0;
  v41 = 4;
  v42 = 0;
  v36 = 0;
  v37 = 4;
  v38 = 0;
  v32 = 0;
  v33 = 4;
  v34 = 0;
  v28 = 0;
  v29 = 4;
  v30 = 0;
  v24 = 0;
  v25 = 4;
  v26 = 0;
  v20 = 0;
  v21 = 4;
  v22 = 0;
  return _tlgWriteTransfer_EtwWriteTransfer(a1, a2, 0, 0, 0xFu, &UserData);
}
