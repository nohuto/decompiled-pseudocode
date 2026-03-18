/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U1@U?$_tlgWrapperByVal@$00@@U_tlgWrapperBinary@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByVal@$03@@ABU?$_tlgWrapSz@D@@43ABU?$_tlgWrapperByVal@$00@@ABU_tlgWrapperBinary@@@Z @ 0x1B01CC
 * Callers:
 *     ?CreateAndSendSuperWetInkPayloadForCommand@InkDevice@@EAEJW4INK_FEEDBACK_COMMAND@@PBXIM@Z @ 0x1B034C (-CreateAndSendSuperWetInkPayloadForCommand@InkDevice@@EAEJW4INK_FEEDBACK_COMMAND@@PBXIM@Z.c)
 * Callees:
 *     __tlgWriteTransfer_EtwWriteTransfer@24 @ 0xE8E1E (__tlgWriteTransfer_EtwWriteTransfer@24.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperBinary>(
        int a1,
        unsigned __int8 *a2,
        int a3,
        int a4,
        int a5,
        const char **a6,
        const char **a7,
        int a8,
        int a9,
        int *a10)
{
  unsigned int v11; // esi
  const char *v12; // edx
  unsigned int v13; // ecx
  const char *v14; // edx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [esp+Ch] [ebp-94h] BYREF
  int v17; // [esp+2Ch] [ebp-74h]
  int v18; // [esp+30h] [ebp-70h]
  int v19; // [esp+34h] [ebp-6Ch]
  int v20; // [esp+38h] [ebp-68h]
  const char *v21; // [esp+3Ch] [ebp-64h]
  int v22; // [esp+40h] [ebp-60h]
  unsigned int v23; // [esp+44h] [ebp-5Ch]
  int v24; // [esp+48h] [ebp-58h]
  const char *v25; // [esp+4Ch] [ebp-54h]
  int v26; // [esp+50h] [ebp-50h]
  unsigned int v27; // [esp+54h] [ebp-4Ch]
  int v28; // [esp+58h] [ebp-48h]
  int v29; // [esp+5Ch] [ebp-44h]
  int v30; // [esp+60h] [ebp-40h]
  int v31; // [esp+64h] [ebp-3Ch]
  int v32; // [esp+68h] [ebp-38h]
  int v33; // [esp+6Ch] [ebp-34h]
  int v34; // [esp+70h] [ebp-30h]
  int v35; // [esp+74h] [ebp-2Ch]
  int v36; // [esp+78h] [ebp-28h]
  _DWORD *v37; // [esp+7Ch] [ebp-24h]
  int v38; // [esp+80h] [ebp-20h]
  int v39; // [esp+84h] [ebp-1Ch]
  int v40; // [esp+88h] [ebp-18h]
  int v41; // [esp+8Ch] [ebp-14h]
  int v42; // [esp+90h] [ebp-10h]
  _DWORD v43[2]; // [esp+94h] [ebp-Ch] BYREF

  v37 = v43;
  v41 = *a10;
  v11 = 1;
  v43[0] = *((unsigned __int16 *)a10 + 2);
  v33 = a9;
  v29 = a8;
  v39 = 2;
  v38 = 0;
  v12 = *a7;
  v40 = 0;
  v42 = 0;
  v43[1] = 0;
  v34 = 0;
  v35 = 1;
  v36 = 0;
  v30 = 0;
  v31 = 4;
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
  return _tlgWriteTransfer_EtwWriteTransfer((int)&CallbackContext, a2, 0, 0, 9u, &UserData);
}
