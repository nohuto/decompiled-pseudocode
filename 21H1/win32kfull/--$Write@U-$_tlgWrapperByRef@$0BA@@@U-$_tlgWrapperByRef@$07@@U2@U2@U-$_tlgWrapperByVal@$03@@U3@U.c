/*
 * XREFs of ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByRef@$07@@U2@U2@U?$_tlgWrapperByVal@$03@@U3@U3@U3@U3@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByRef@$0BA@@@ABU?$_tlgWrapperByRef@$07@@44ABU?$_tlgWrapperByVal@$03@@5555@Z @ 0x1B63F0
 * Callers:
 *     LookUpTableFlushComplete @ 0x27A994 (LookUpTableFlushComplete.c)
 * Callees:
 *     __tlgWriteTransfer_EtwWriteTransfer@24 @ 0xE8E1E (__tlgWriteTransfer_EtwWriteTransfer@24.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByRef<8>,_tlgWrapperByRef<8>,_tlgWrapperByRef<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        int a1,
        unsigned __int8 *a2,
        int a3,
        int a4,
        int *a5,
        int *a6,
        int *a7,
        int *a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [esp+4h] [ebp-B4h] BYREF
  int v15; // [esp+24h] [ebp-94h]
  int v16; // [esp+28h] [ebp-90h]
  int v17; // [esp+2Ch] [ebp-8Ch]
  int v18; // [esp+30h] [ebp-88h]
  int v19; // [esp+34h] [ebp-84h]
  int v20; // [esp+38h] [ebp-80h]
  int v21; // [esp+3Ch] [ebp-7Ch]
  int v22; // [esp+40h] [ebp-78h]
  int v23; // [esp+44h] [ebp-74h]
  int v24; // [esp+48h] [ebp-70h]
  int v25; // [esp+4Ch] [ebp-6Ch]
  int v26; // [esp+50h] [ebp-68h]
  int v27; // [esp+54h] [ebp-64h]
  int v28; // [esp+58h] [ebp-60h]
  int v29; // [esp+5Ch] [ebp-5Ch]
  int v30; // [esp+60h] [ebp-58h]
  int v31; // [esp+64h] [ebp-54h]
  int v32; // [esp+68h] [ebp-50h]
  int v33; // [esp+6Ch] [ebp-4Ch]
  int v34; // [esp+70h] [ebp-48h]
  int v35; // [esp+74h] [ebp-44h]
  int v36; // [esp+78h] [ebp-40h]
  int v37; // [esp+7Ch] [ebp-3Ch]
  int v38; // [esp+80h] [ebp-38h]
  int v39; // [esp+84h] [ebp-34h]
  int v40; // [esp+88h] [ebp-30h]
  int v41; // [esp+8Ch] [ebp-2Ch]
  int v42; // [esp+90h] [ebp-28h]
  int v43; // [esp+94h] [ebp-24h]
  int v44; // [esp+98h] [ebp-20h]
  int v45; // [esp+9Ch] [ebp-1Ch]
  int v46; // [esp+A0h] [ebp-18h]
  int v47; // [esp+A4h] [ebp-14h]
  int v48; // [esp+A8h] [ebp-10h]
  int v49; // [esp+ACh] [ebp-Ch]
  int v50; // [esp+B0h] [ebp-8h]

  v47 = a13;
  v43 = a12;
  v39 = a11;
  v35 = a10;
  v31 = a9;
  v17 = 16;
  v27 = *a8;
  v49 = 4;
  v23 = *a7;
  v45 = 4;
  v41 = 4;
  v37 = 4;
  v19 = *a6;
  v33 = 4;
  v48 = 0;
  v15 = *a5;
  v50 = 0;
  v44 = 0;
  v46 = 0;
  v40 = 0;
  v42 = 0;
  v36 = 0;
  v38 = 0;
  v32 = 0;
  v34 = 0;
  v28 = 0;
  v29 = 8;
  v30 = 0;
  v24 = 0;
  v25 = 8;
  v26 = 0;
  v20 = 0;
  v21 = 8;
  v22 = 0;
  v16 = 0;
  v18 = 0;
  return _tlgWriteTransfer_EtwWriteTransfer((int)&dword_266320, a2, 0, 0, 0xBu, &UserData);
}
