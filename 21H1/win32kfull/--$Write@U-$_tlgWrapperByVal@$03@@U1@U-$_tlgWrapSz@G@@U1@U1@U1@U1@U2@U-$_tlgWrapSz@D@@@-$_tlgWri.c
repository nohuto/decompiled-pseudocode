/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapSz@G@@U1@U1@U1@U1@U2@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByVal@$03@@3ABU?$_tlgWrapSz@G@@33334ABU?$_tlgWrapSz@D@@@Z @ 0x1795DA
 * Callers:
 *     _xxxWindowFromPoint@8 @ 0x9ADAE (_xxxWindowFromPoint@8.c)
 * Callees:
 *     __tlgWriteTransfer_EtwWriteTransfer@24 @ 0xE8E1E (__tlgWriteTransfer_EtwWriteTransfer@24.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ??$_tlgCreate1Sz@G@@YGXPAU_EVENT_DATA_DESCRIPTOR@@PBG@Z @ 0x142F12 (--$_tlgCreate1Sz@G@@YGXPAU_EVENT_DATA_DESCRIPTOR@@PBG@Z.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<char>>(
        int a1,
        unsigned __int8 *a2,
        int a3,
        int a4,
        int a5,
        int a6,
        char **a7,
        char *a8,
        char *a9,
        char *a10,
        char *a11,
        char **a12,
        const char **a13)
{
  char *v13; // esi
  int v16; // ecx
  char *v17; // edx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [esp+14h] [ebp-B4h] BYREF
  int v20; // [esp+34h] [ebp-94h]
  int v21; // [esp+38h] [ebp-90h]
  int v22; // [esp+3Ch] [ebp-8Ch]
  int v23; // [esp+40h] [ebp-88h]
  int v24; // [esp+44h] [ebp-84h]
  int v25; // [esp+48h] [ebp-80h]
  int v26; // [esp+4Ch] [ebp-7Ch]
  int v27; // [esp+50h] [ebp-78h]
  char *v28[20]; // [esp+54h] [ebp-74h] BYREF
  char *v29[8]; // [esp+A4h] [ebp-24h] BYREF

  v13 = (char *)*a13;
  if ( *a13 )
  {
    v16 = &(*a13)[strlen(*a13) + 1] - v13;
  }
  else
  {
    v13 = byte_FC858;
    v16 = 1;
  }
  v29[6] = (char *)v16;
  v29[5] = 0;
  v29[7] = 0;
  v29[4] = v13;
  _tlgCreate1Sz<unsigned short>(v29, *a12);
  v28[16] = a11;
  v28[12] = a10;
  v17 = *a7;
  v28[17] = 0;
  v28[19] = 0;
  v28[13] = 0;
  v28[15] = 0;
  v28[8] = a9;
  v28[9] = 0;
  v28[11] = 0;
  v28[5] = 0;
  v28[7] = 0;
  v28[18] = (char *)4;
  v28[14] = (char *)4;
  v28[10] = (char *)4;
  v28[4] = a8;
  v28[6] = (char *)4;
  _tlgCreate1Sz<unsigned short>(v28, v17);
  v24 = a6;
  v20 = a5;
  v25 = 0;
  v26 = 4;
  v27 = 0;
  v21 = 0;
  v22 = 4;
  v23 = 0;
  return _tlgWriteTransfer_EtwWriteTransfer(a1, a2, 0, 0, 0xBu, &UserData);
}
