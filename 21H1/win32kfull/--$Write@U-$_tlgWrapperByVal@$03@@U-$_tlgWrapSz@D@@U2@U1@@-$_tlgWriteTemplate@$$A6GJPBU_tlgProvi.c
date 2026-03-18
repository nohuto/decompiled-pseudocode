/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U1@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByVal@$03@@ABU?$_tlgWrapSz@D@@43@Z @ 0xE8D60
 * Callers:
 *     ?RemoveInkFeedbackProvider@InkFeedbackServer@@QAEJPAVInkFeedbackProviderBase@@@Z @ 0xD377E (-RemoveInkFeedbackProvider@InkFeedbackServer@@QAEJPAVInkFeedbackProviderBase@@@Z.c)
 *     ?AddInkFeedbackProvider@InkFeedbackServer@@QAEJPAVInkFeedbackProviderBase@@@Z @ 0xE8CFA (-AddInkFeedbackProvider@InkFeedbackServer@@QAEJPAVInkFeedbackProviderBase@@@Z.c)
 * Callees:
 *     __tlgWriteTransfer_EtwWriteTransfer@24 @ 0xE8E1E (__tlgWriteTransfer_EtwWriteTransfer@24.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

int __fastcall _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        const char **a6,
        const char **a7,
        int a8)
{
  const char *v9; // edx
  unsigned int v10; // esi
  unsigned int v11; // ecx
  const char *v12; // edx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [esp+Ch] [ebp-64h] BYREF
  int v15; // [esp+2Ch] [ebp-44h]
  int v16; // [esp+30h] [ebp-40h]
  int v17; // [esp+34h] [ebp-3Ch]
  int v18; // [esp+38h] [ebp-38h]
  const char *v19; // [esp+3Ch] [ebp-34h]
  int v20; // [esp+40h] [ebp-30h]
  unsigned int v21; // [esp+44h] [ebp-2Ch]
  int v22; // [esp+48h] [ebp-28h]
  const char *v23; // [esp+4Ch] [ebp-24h]
  int v24; // [esp+50h] [ebp-20h]
  unsigned int v25; // [esp+54h] [ebp-1Ch]
  int v26; // [esp+58h] [ebp-18h]
  int v27; // [esp+5Ch] [ebp-14h]
  int v28; // [esp+60h] [ebp-10h]
  int v29; // [esp+64h] [ebp-Ch]
  int v30; // [esp+68h] [ebp-8h]

  v27 = a8;
  v29 = 4;
  v9 = *a7;
  v10 = 1;
  v28 = 0;
  v30 = 0;
  if ( v9 )
  {
    v11 = strlen(v9) + 1;
  }
  else
  {
    v9 = byte_FC858;
    v11 = 1;
  }
  v23 = v9;
  v24 = 0;
  v25 = v11;
  v12 = *a6;
  v26 = 0;
  if ( v12 )
    v10 = strlen(v12) + 1;
  else
    v12 = byte_FC858;
  v15 = a5;
  v19 = v12;
  v20 = 0;
  v21 = v10;
  v22 = 0;
  v16 = 0;
  v17 = 4;
  v18 = 0;
  return _tlgWriteTransfer_EtwWriteTransfer((int)&CallbackContext, a2, 0, 0, 6u, &UserData);
}
