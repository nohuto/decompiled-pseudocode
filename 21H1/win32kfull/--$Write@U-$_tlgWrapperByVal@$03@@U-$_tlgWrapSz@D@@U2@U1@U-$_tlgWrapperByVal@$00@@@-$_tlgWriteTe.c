/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U1@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByVal@$03@@ABU?$_tlgWrapSz@D@@43ABU?$_tlgWrapperByVal@$00@@@Z @ 0x1AF44E
 * Callers:
 *     ?PreProcessInkFeedbackCommand_NoLock@HideInkCursorProvider@@UAEJW4INK_FEEDBACK_COMMAND@@PBXI@Z @ 0xF583A (-PreProcessInkFeedbackCommand_NoLock@HideInkCursorProvider@@UAEJW4INK_FEEDBACK_COMMAND@@PBXI@Z.c)
 *     ?PreProcessInkFeedbackCommand_NoLock@InkDevice@@EAEJW4INK_FEEDBACK_COMMAND@@PBXI@Z @ 0xF59E8 (-PreProcessInkFeedbackCommand_NoLock@InkDevice@@EAEJW4INK_FEEDBACK_COMMAND@@PBXI@Z.c)
 *     ?ProcessInkFeedbackCommand@HideInkCursorProvider@@UAEJW4INK_FEEDBACK_COMMAND@@PBXI@Z @ 0x1AFA6E (-ProcessInkFeedbackCommand@HideInkCursorProvider@@UAEJW4INK_FEEDBACK_COMMAND@@PBXI@Z.c)
 *     ?ProcessInkFeedbackCommand@InkDevice@@EAEJW4INK_FEEDBACK_COMMAND@@PBXI@Z @ 0x1B0D08 (-ProcessInkFeedbackCommand@InkDevice@@EAEJW4INK_FEEDBACK_COMMAND@@PBXI@Z.c)
 * Callees:
 *     __tlgWriteTransfer_EtwWriteTransfer@24 @ 0xE8E1E (__tlgWriteTransfer_EtwWriteTransfer@24.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>>(
        int a1,
        unsigned __int8 *a2,
        int a3,
        int a4,
        int a5,
        const char **a6,
        const char **a7,
        int a8,
        int a9)
{
  const char *v10; // edx
  unsigned int v11; // esi
  unsigned int v12; // ecx
  const char *v13; // edx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [esp+Ch] [ebp-74h] BYREF
  int v16; // [esp+2Ch] [ebp-54h]
  int v17; // [esp+30h] [ebp-50h]
  int v18; // [esp+34h] [ebp-4Ch]
  int v19; // [esp+38h] [ebp-48h]
  const char *v20; // [esp+3Ch] [ebp-44h]
  int v21; // [esp+40h] [ebp-40h]
  unsigned int v22; // [esp+44h] [ebp-3Ch]
  int v23; // [esp+48h] [ebp-38h]
  const char *v24; // [esp+4Ch] [ebp-34h]
  int v25; // [esp+50h] [ebp-30h]
  unsigned int v26; // [esp+54h] [ebp-2Ch]
  int v27; // [esp+58h] [ebp-28h]
  int v28; // [esp+5Ch] [ebp-24h]
  int v29; // [esp+60h] [ebp-20h]
  int v30; // [esp+64h] [ebp-1Ch]
  int v31; // [esp+68h] [ebp-18h]
  int v32; // [esp+6Ch] [ebp-14h]
  int v33; // [esp+70h] [ebp-10h]
  int v34; // [esp+74h] [ebp-Ch]
  int v35; // [esp+78h] [ebp-8h]

  v32 = a9;
  v28 = a8;
  v30 = 4;
  v10 = *a7;
  v11 = 1;
  v33 = 0;
  v34 = 1;
  v35 = 0;
  v29 = 0;
  v31 = 0;
  if ( v10 )
  {
    v12 = strlen(v10) + 1;
  }
  else
  {
    v10 = byte_FC858;
    v12 = 1;
  }
  v24 = v10;
  v25 = 0;
  v26 = v12;
  v13 = *a6;
  v27 = 0;
  if ( v13 )
    v11 = strlen(v13) + 1;
  else
    v13 = byte_FC858;
  v16 = a5;
  v20 = v13;
  v21 = 0;
  v22 = v11;
  v23 = 0;
  v17 = 0;
  v18 = 4;
  v19 = 0;
  return _tlgWriteTransfer_EtwWriteTransfer((int)&CallbackContext, a2, 0, 0, 7u, &UserData);
}
