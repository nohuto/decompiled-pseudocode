/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U?$_tlgWrapperByVal@$00@@U1@U1@U1@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByVal@$03@@ABU?$_tlgWrapSz@D@@4ABU?$_tlgWrapperByVal@$00@@333@Z @ 0x1AF604
 * Callers:
 *     ?AddActiveCommand@InkFeedbackProviderBase@@IAEXPAVActiveCommand@1@@Z @ 0x1AF7A7 (-AddActiveCommand@InkFeedbackProviderBase@@IAEXPAVActiveCommand@1@@Z.c)
 *     ?RemoveActiveCommand@InkFeedbackProviderBase@@IAEXPAVActiveCommand@1@@Z @ 0x1AFD94 (-RemoveActiveCommand@InkFeedbackProviderBase@@IAEXPAVActiveCommand@1@@Z.c)
 * Callees:
 *     __tlgWriteTransfer_EtwWriteTransfer@24 @ 0xE8E1E (__tlgWriteTransfer_EtwWriteTransfer@24.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        int a1,
        unsigned __int8 *a2,
        int a3,
        int a4,
        int a5,
        const char **a6,
        const char **a7,
        int a8,
        int a9,
        int a10,
        int a11)
{
  unsigned int v12; // esi
  const char *v13; // edx
  unsigned int v14; // ecx
  const char *v15; // edx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [esp+Ch] [ebp-94h] BYREF
  int v18; // [esp+2Ch] [ebp-74h]
  int v19; // [esp+30h] [ebp-70h]
  int v20; // [esp+34h] [ebp-6Ch]
  int v21; // [esp+38h] [ebp-68h]
  const char *v22; // [esp+3Ch] [ebp-64h]
  int v23; // [esp+40h] [ebp-60h]
  unsigned int v24; // [esp+44h] [ebp-5Ch]
  int v25; // [esp+48h] [ebp-58h]
  const char *v26; // [esp+4Ch] [ebp-54h]
  int v27; // [esp+50h] [ebp-50h]
  unsigned int v28; // [esp+54h] [ebp-4Ch]
  int v29; // [esp+58h] [ebp-48h]
  int v30; // [esp+5Ch] [ebp-44h]
  int v31; // [esp+60h] [ebp-40h]
  int v32; // [esp+64h] [ebp-3Ch]
  int v33; // [esp+68h] [ebp-38h]
  int v34; // [esp+6Ch] [ebp-34h]
  int v35; // [esp+70h] [ebp-30h]
  int v36; // [esp+74h] [ebp-2Ch]
  int v37; // [esp+78h] [ebp-28h]
  int v38; // [esp+7Ch] [ebp-24h]
  int v39; // [esp+80h] [ebp-20h]
  int v40; // [esp+84h] [ebp-1Ch]
  int v41; // [esp+88h] [ebp-18h]
  int v42; // [esp+8Ch] [ebp-14h]
  int v43; // [esp+90h] [ebp-10h]
  int v44; // [esp+94h] [ebp-Ch]
  int v45; // [esp+98h] [ebp-8h]

  v42 = a11;
  v38 = a10;
  v34 = a9;
  v12 = 1;
  v30 = a8;
  v43 = 0;
  v13 = *a7;
  v44 = 4;
  v45 = 0;
  v39 = 0;
  v40 = 4;
  v41 = 0;
  v35 = 0;
  v36 = 4;
  v37 = 0;
  v31 = 0;
  v32 = 1;
  v33 = 0;
  if ( v13 )
  {
    v14 = strlen(v13) + 1;
  }
  else
  {
    v13 = byte_FC858;
    v14 = 1;
  }
  v26 = v13;
  v27 = 0;
  v28 = v14;
  v15 = *a6;
  v29 = 0;
  if ( v15 )
    v12 = strlen(v15) + 1;
  else
    v15 = byte_FC858;
  v18 = a5;
  v22 = v15;
  v23 = 0;
  v24 = v12;
  v25 = 0;
  v19 = 0;
  v20 = 4;
  v21 = 0;
  return _tlgWriteTransfer_EtwWriteTransfer((int)&CallbackContext, a2, 0, 0, 9u, &UserData);
}
