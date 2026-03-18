/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapSz@G@@U1@U1@U1@U1@U2@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByVal@$03@@33ABU?$_tlgWrapSz@G@@33334ABU?$_tlgWrapSz@D@@@Z @ 0x1875FF
 * Callers:
 *     _xxxCapture@12 @ 0xC4EA6 (_xxxCapture@12.c)
 *     ?SetCapture@Mouse@InputTraceLogging@@SGXPBUtagQ@@PAUtagWND@@_N@Z @ 0xC529E (-SetCapture@Mouse@InputTraceLogging@@SGXPBUtagQ@@PAUtagWND@@_N@Z.c)
 * Callees:
 *     __tlgWriteTransfer_EtwWriteTransfer@24 @ 0xE8E1E (__tlgWriteTransfer_EtwWriteTransfer@24.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ??$_tlgCreate1Sz@G@@YGXPAU_EVENT_DATA_DESCRIPTOR@@PBG@Z @ 0x142F12 (--$_tlgCreate1Sz@G@@YGXPAU_EVENT_DATA_DESCRIPTOR@@PBG@Z.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<char>>(
        int a1,
        unsigned __int8 *a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        char **a8,
        char *a9,
        char *a10,
        char *a11,
        char *a12,
        char **a13,
        const char **a14)
{
  char *v14; // esi
  int v17; // ecx
  char *v18; // edx
  char *v19; // edx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [esp+14h] [ebp-C4h] BYREF
  int v22; // [esp+34h] [ebp-A4h]
  int v23; // [esp+38h] [ebp-A0h]
  int v24; // [esp+3Ch] [ebp-9Ch]
  int v25; // [esp+40h] [ebp-98h]
  int v26; // [esp+44h] [ebp-94h]
  int v27; // [esp+48h] [ebp-90h]
  int v28; // [esp+4Ch] [ebp-8Ch]
  int v29; // [esp+50h] [ebp-88h]
  int v30; // [esp+54h] [ebp-84h]
  int v31; // [esp+58h] [ebp-80h]
  int v32; // [esp+5Ch] [ebp-7Ch]
  int v33; // [esp+60h] [ebp-78h]
  char *v34[20]; // [esp+64h] [ebp-74h] BYREF
  char *v35[8]; // [esp+B4h] [ebp-24h] BYREF

  v14 = (char *)*a14;
  if ( *a14 )
  {
    v17 = &(*a14)[strlen(*a14) + 1] - v14;
  }
  else
  {
    v14 = byte_FC858;
    v17 = 1;
  }
  v35[5] = 0;
  v35[7] = 0;
  v35[6] = (char *)v17;
  v18 = *a13;
  v35[4] = v14;
  _tlgCreate1Sz<unsigned short>(v35, v18);
  v34[16] = a12;
  v34[12] = a11;
  v19 = *a8;
  v34[17] = 0;
  v34[19] = 0;
  v34[13] = 0;
  v34[15] = 0;
  v34[8] = a10;
  v34[9] = 0;
  v34[11] = 0;
  v34[5] = 0;
  v34[7] = 0;
  v34[18] = (char *)4;
  v34[14] = (char *)4;
  v34[10] = (char *)4;
  v34[4] = a9;
  v34[6] = (char *)4;
  _tlgCreate1Sz<unsigned short>(v34, v19);
  v30 = a7;
  v26 = a6;
  v22 = a5;
  v31 = 0;
  v32 = 4;
  v33 = 0;
  v27 = 0;
  v28 = 4;
  v29 = 0;
  v23 = 0;
  v24 = 4;
  v25 = 0;
  return _tlgWriteTransfer_EtwWriteTransfer(a1, a2, 0, 0, 0xCu, &UserData);
}
