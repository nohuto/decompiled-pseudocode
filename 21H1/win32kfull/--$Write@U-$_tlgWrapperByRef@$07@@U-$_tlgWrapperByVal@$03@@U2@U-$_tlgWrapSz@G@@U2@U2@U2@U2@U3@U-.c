/*
 * XREFs of ??$Write@U?$_tlgWrapperByRef@$07@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapSz@G@@U2@U2@U2@U2@U3@U?$_tlgWrapSz@D@@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByRef@$07@@ABU?$_tlgWrapperByVal@$03@@4ABU?$_tlgWrapSz@G@@44445ABU?$_tlgWrapSz@D@@4444@Z @ 0x14C08B
 * Callers:
 *     ?SecondaryHitTest@Mouse@InputTraceLogging@@SGXPBUtagQMSG@@ABUtagPOINT@@PAUtagWND@@@Z @ 0x9AE96 (-SecondaryHitTest@Mouse@InputTraceLogging@@SGXPBUtagQMSG@@ABUtagPOINT@@PAUtagWND@@@Z.c)
 * Callees:
 *     __tlgWriteTransfer_EtwWriteTransfer@24 @ 0xE8E1E (__tlgWriteTransfer_EtwWriteTransfer@24.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ??$_tlgCreate1Sz@G@@YGXPAU_EVENT_DATA_DESCRIPTOR@@PBG@Z @ 0x142F12 (--$_tlgCreate1Sz@G@@YGXPAU_EVENT_DATA_DESCRIPTOR@@PBG@Z.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        int a1,
        unsigned __int8 *a2,
        int a3,
        int a4,
        int *a5,
        int a6,
        int a7,
        char **a8,
        char *a9,
        char *a10,
        char *a11,
        char *a12,
        char **a13,
        const char **a14,
        char *a15,
        char *a16,
        char *a17,
        char *a18)
{
  const char *v20; // edx
  unsigned int v21; // ecx
  char *v22; // edx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [esp+14h] [ebp-104h] BYREF
  int v25; // [esp+34h] [ebp-E4h]
  int v26; // [esp+38h] [ebp-E0h]
  int v27; // [esp+3Ch] [ebp-DCh]
  int v28; // [esp+40h] [ebp-D8h]
  int v29; // [esp+44h] [ebp-D4h]
  int v30; // [esp+48h] [ebp-D0h]
  int v31; // [esp+4Ch] [ebp-CCh]
  int v32; // [esp+50h] [ebp-C8h]
  int v33; // [esp+54h] [ebp-C4h]
  int v34; // [esp+58h] [ebp-C0h]
  int v35; // [esp+5Ch] [ebp-BCh]
  int v36; // [esp+60h] [ebp-B8h]
  char *v37[20]; // [esp+64h] [ebp-B4h] BYREF
  char *v38[24]; // [esp+B4h] [ebp-64h] BYREF

  v38[20] = a18;
  v38[16] = a17;
  v38[12] = a16;
  v38[8] = a15;
  v38[21] = 0;
  v20 = *a14;
  v38[22] = (char *)4;
  v38[23] = 0;
  v38[17] = 0;
  v38[18] = (char *)4;
  v38[19] = 0;
  v38[13] = 0;
  v38[14] = (char *)4;
  v38[15] = 0;
  v38[9] = 0;
  v38[10] = (char *)4;
  v38[11] = 0;
  if ( v20 )
  {
    v21 = strlen(v20) + 1;
  }
  else
  {
    v20 = byte_FC858;
    v21 = 1;
  }
  v38[4] = (char *)v20;
  v38[6] = (char *)v21;
  v38[5] = 0;
  v38[7] = 0;
  _tlgCreate1Sz<unsigned short>(v38, *a13);
  v37[16] = a12;
  v22 = *a8;
  v37[12] = a11;
  v37[18] = (char *)4;
  v37[14] = (char *)4;
  v37[8] = a10;
  v37[10] = (char *)4;
  v37[6] = (char *)4;
  v37[17] = 0;
  v37[19] = 0;
  v37[13] = 0;
  v37[15] = 0;
  v37[9] = 0;
  v37[11] = 0;
  v37[4] = a9;
  v37[5] = 0;
  v37[7] = 0;
  _tlgCreate1Sz<unsigned short>(v37, v22);
  v33 = a7;
  v29 = a6;
  v34 = 0;
  v25 = *a5;
  v35 = 4;
  v36 = 0;
  v30 = 0;
  v31 = 4;
  v32 = 0;
  v26 = 0;
  v27 = 8;
  v28 = 0;
  return _tlgWriteTransfer_EtwWriteTransfer(a1, a2, 0, 0, 0x10u, &UserData);
}
