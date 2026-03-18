/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByVal@$03@@ABU?$_tlgWrapSz@D@@ABU?$_tlgWrapperByVal@$00@@@Z @ 0x1AF6F8
 * Callers:
 *     ?RunForAllProviders@InkFeedbackServer@@AAEJW4INK_FEEDBACK_COMMAND@@PBXIP6GJPAVInkFeedbackProviderBase@@01I@Z@Z @ 0xF5970 (-RunForAllProviders@InkFeedbackServer@@AAEJW4INK_FEEDBACK_COMMAND@@PBXIP6GJPAVInkFeedbackProvide.c)
 *     ?ValidatePointer@HideInkCursorProvider@@ABEJI@Z @ 0x1AFE5F (-ValidatePointer@HideInkCursorProvider@@ABEJI@Z.c)
 *     ?ValidatePointer@InkDevice@@ABEJI@Z @ 0x1B1401 (-ValidatePointer@InkDevice@@ABEJI@Z.c)
 * Callees:
 *     __tlgWriteTransfer_EtwWriteTransfer@24 @ 0xE8E1E (__tlgWriteTransfer_EtwWriteTransfer@24.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<1>>(
        int a1,
        unsigned __int8 *a2,
        int a3,
        int a4,
        int a5,
        const char **a6,
        int a7)
{
  unsigned int v7; // ecx
  const char *v9; // edx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [esp+8h] [ebp-54h] BYREF
  int v12; // [esp+28h] [ebp-34h]
  int v13; // [esp+2Ch] [ebp-30h]
  int v14; // [esp+30h] [ebp-2Ch]
  int v15; // [esp+34h] [ebp-28h]
  const char *v16; // [esp+38h] [ebp-24h]
  int v17; // [esp+3Ch] [ebp-20h]
  unsigned int v18; // [esp+40h] [ebp-1Ch]
  int v19; // [esp+44h] [ebp-18h]
  int v20; // [esp+48h] [ebp-14h]
  int v21; // [esp+4Ch] [ebp-10h]
  int v22; // [esp+50h] [ebp-Ch]
  int v23; // [esp+54h] [ebp-8h]

  v20 = a7;
  v7 = 1;
  v22 = 1;
  v21 = 0;
  v9 = *a6;
  v23 = 0;
  if ( v9 )
    v7 = strlen(v9) + 1;
  else
    v9 = byte_FC858;
  v12 = a5;
  v16 = v9;
  v17 = 0;
  v18 = v7;
  v19 = 0;
  v13 = 0;
  v14 = 4;
  v15 = 0;
  return _tlgWriteTransfer_EtwWriteTransfer((int)&CallbackContext, a2, 0, 0, 5u, &UserData);
}
