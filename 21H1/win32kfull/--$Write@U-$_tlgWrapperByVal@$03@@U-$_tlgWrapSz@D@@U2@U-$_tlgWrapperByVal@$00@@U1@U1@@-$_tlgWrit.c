/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U?$_tlgWrapperByVal@$00@@U1@U1@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByVal@$03@@ABU?$_tlgWrapSz@D@@4ABU?$_tlgWrapperByVal@$00@@33@Z @ 0x1AF51F
 * Callers:
 *     ?EndActiveCommandsByOwnerThread@InkFeedbackProviderBase@@UAEXPBX@Z @ 0x99BCC (-EndActiveCommandsByOwnerThread@InkFeedbackProviderBase@@UAEXPBX@Z.c)
 *     ?EndActiveCommandsByPointerId@InkFeedbackProviderBase@@UAEXI@Z @ 0x1AF909 (-EndActiveCommandsByPointerId@InkFeedbackProviderBase@@UAEXI@Z.c)
 * Callees:
 *     __tlgWriteTransfer_EtwWriteTransfer@24 @ 0xE8E1E (__tlgWriteTransfer_EtwWriteTransfer@24.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        int a1,
        unsigned __int8 *a2,
        int a3,
        int a4,
        int a5,
        const char **a6,
        const char **a7,
        int a8,
        int a9,
        int a10)
{
  unsigned int v11; // esi
  const char *v12; // edx
  unsigned int v13; // ecx
  const char *v14; // edx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [esp+Ch] [ebp-84h] BYREF
  int v17; // [esp+2Ch] [ebp-64h]
  int v18; // [esp+30h] [ebp-60h]
  int v19; // [esp+34h] [ebp-5Ch]
  int v20; // [esp+38h] [ebp-58h]
  const char *v21; // [esp+3Ch] [ebp-54h]
  int v22; // [esp+40h] [ebp-50h]
  unsigned int v23; // [esp+44h] [ebp-4Ch]
  int v24; // [esp+48h] [ebp-48h]
  const char *v25; // [esp+4Ch] [ebp-44h]
  int v26; // [esp+50h] [ebp-40h]
  unsigned int v27; // [esp+54h] [ebp-3Ch]
  int v28; // [esp+58h] [ebp-38h]
  int v29; // [esp+5Ch] [ebp-34h]
  int v30; // [esp+60h] [ebp-30h]
  int v31; // [esp+64h] [ebp-2Ch]
  int v32; // [esp+68h] [ebp-28h]
  int v33; // [esp+6Ch] [ebp-24h]
  int v34; // [esp+70h] [ebp-20h]
  int v35; // [esp+74h] [ebp-1Ch]
  int v36; // [esp+78h] [ebp-18h]
  int v37; // [esp+7Ch] [ebp-14h]
  int v38; // [esp+80h] [ebp-10h]
  int v39; // [esp+84h] [ebp-Ch]
  int v40; // [esp+88h] [ebp-8h]

  v37 = a10;
  v33 = a9;
  v11 = 1;
  v29 = a8;
  v38 = 0;
  v12 = *a7;
  v39 = 4;
  v40 = 0;
  v34 = 0;
  v35 = 4;
  v36 = 0;
  v30 = 0;
  v31 = 1;
  v32 = 0;
  if ( v12 )
  {
    v13 = strlen(v12) + 1;
  }
  else
  {
    v12 = byte_FC858;
    v13 = 1;
  }
  v25 = v12;
  v26 = 0;
  v27 = v13;
  v14 = *a6;
  v28 = 0;
  if ( v14 )
    v11 = strlen(v14) + 1;
  else
    v14 = byte_FC858;
  v17 = a5;
  v21 = v14;
  v22 = 0;
  v23 = v11;
  v24 = 0;
  v18 = 0;
  v19 = 4;
  v20 = 0;
  return _tlgWriteTransfer_EtwWriteTransfer((int)&CallbackContext, a2, 0, 0, 8u, &UserData);
}
