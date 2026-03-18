/*
 * XREFs of ??$Write@U?$_tlgWrapperByRef@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$01@@U1@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByRef@$07@@ABU?$_tlgWrapperByVal@$03@@ABU?$_tlgWrapperByVal@$01@@34444@Z @ 0x14C2B5
 * Callers:
 *     ?PostInputMessage@Delivery@InputTraceLogging@@SGXPBUtagQMSG@@PBUtagQ@@@Z @ 0x4676E (-PostInputMessage@Delivery@InputTraceLogging@@SGXPBUtagQMSG@@PBUtagQ@@@Z.c)
 * Callees:
 *     __tlgWriteTransfer_EtwWriteTransfer@24 @ 0xE8E1E (__tlgWriteTransfer_EtwWriteTransfer@24.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByRef<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        int a1,
        unsigned __int8 *a2,
        int a3,
        int a4,
        int *a5,
        int a6,
        int a7,
        int *a8,
        int a9,
        int a10,
        int a11,
        int a12)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [esp+Ch] [ebp-A4h] BYREF
  int v14; // [esp+2Ch] [ebp-84h]
  int v15; // [esp+30h] [ebp-80h]
  int v16; // [esp+34h] [ebp-7Ch]
  int v17; // [esp+38h] [ebp-78h]
  int v18; // [esp+3Ch] [ebp-74h]
  int v19; // [esp+40h] [ebp-70h]
  int v20; // [esp+44h] [ebp-6Ch]
  int v21; // [esp+48h] [ebp-68h]
  int v22; // [esp+4Ch] [ebp-64h]
  int v23; // [esp+50h] [ebp-60h]
  int v24; // [esp+54h] [ebp-5Ch]
  int v25; // [esp+58h] [ebp-58h]
  int v26; // [esp+5Ch] [ebp-54h]
  int v27; // [esp+60h] [ebp-50h]
  int v28; // [esp+64h] [ebp-4Ch]
  int v29; // [esp+68h] [ebp-48h]
  int v30; // [esp+6Ch] [ebp-44h]
  int v31; // [esp+70h] [ebp-40h]
  int v32; // [esp+74h] [ebp-3Ch]
  int v33; // [esp+78h] [ebp-38h]
  int v34; // [esp+7Ch] [ebp-34h]
  int v35; // [esp+80h] [ebp-30h]
  int v36; // [esp+84h] [ebp-2Ch]
  int v37; // [esp+88h] [ebp-28h]
  int v38; // [esp+8Ch] [ebp-24h]
  int v39; // [esp+90h] [ebp-20h]
  int v40; // [esp+94h] [ebp-1Ch]
  int v41; // [esp+98h] [ebp-18h]
  int v42; // [esp+9Ch] [ebp-14h]
  int v43; // [esp+A0h] [ebp-10h]
  int v44; // [esp+A4h] [ebp-Ch]
  int v45; // [esp+A8h] [ebp-8h]

  v42 = a12;
  v38 = a11;
  v34 = a10;
  v30 = a9;
  v26 = *a8;
  v22 = a7;
  v18 = a6;
  v43 = 0;
  v14 = *a5;
  v44 = 4;
  v45 = 0;
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
  v23 = 0;
  v24 = 2;
  v25 = 0;
  v19 = 0;
  v20 = 4;
  v21 = 0;
  v15 = 0;
  v16 = 8;
  v17 = 0;
  return _tlgWriteTransfer_EtwWriteTransfer(a1, a2, 0, 0, 0xAu, &UserData);
}
