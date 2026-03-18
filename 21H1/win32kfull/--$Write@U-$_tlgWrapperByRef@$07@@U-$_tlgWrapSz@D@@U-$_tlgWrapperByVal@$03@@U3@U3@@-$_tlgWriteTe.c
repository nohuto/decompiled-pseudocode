/*
 * XREFs of ??$Write@U?$_tlgWrapperByRef@$07@@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U3@U3@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByRef@$07@@ABU?$_tlgWrapSz@D@@ABU?$_tlgWrapperByVal@$03@@55@Z @ 0x185C84
 * Callers:
 *     ?TraceLoggingTouchInjection@@YGXHHHK@Z @ 0x187129 (-TraceLoggingTouchInjection@@YGXHHHK@Z.c)
 * Callees:
 *     __tlgWriteTransfer_EtwWriteTransfer@24 @ 0xE8E1E (__tlgWriteTransfer_EtwWriteTransfer@24.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<8>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        int a1,
        unsigned __int8 *a2,
        int a3,
        int a4,
        int *a5,
        const char **a6,
        int a7,
        int a8,
        int a9)
{
  const char *v10; // edx
  unsigned int v11; // ecx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [esp+8h] [ebp-74h] BYREF
  int v14; // [esp+28h] [ebp-54h]
  int v15; // [esp+2Ch] [ebp-50h]
  int v16; // [esp+30h] [ebp-4Ch]
  int v17; // [esp+34h] [ebp-48h]
  const char *v18; // [esp+38h] [ebp-44h]
  int v19; // [esp+3Ch] [ebp-40h]
  unsigned int v20; // [esp+40h] [ebp-3Ch]
  int v21; // [esp+44h] [ebp-38h]
  int v22; // [esp+48h] [ebp-34h]
  int v23; // [esp+4Ch] [ebp-30h]
  int v24; // [esp+50h] [ebp-2Ch]
  int v25; // [esp+54h] [ebp-28h]
  int v26; // [esp+58h] [ebp-24h]
  int v27; // [esp+5Ch] [ebp-20h]
  int v28; // [esp+60h] [ebp-1Ch]
  int v29; // [esp+64h] [ebp-18h]
  int v30; // [esp+68h] [ebp-14h]
  int v31; // [esp+6Ch] [ebp-10h]
  int v32; // [esp+70h] [ebp-Ch]
  int v33; // [esp+74h] [ebp-8h]

  v30 = a9;
  v26 = a8;
  v22 = a7;
  v31 = 0;
  v10 = *a6;
  v32 = 4;
  v33 = 0;
  v27 = 0;
  v28 = 4;
  v29 = 0;
  v23 = 0;
  v24 = 4;
  v25 = 0;
  if ( v10 )
  {
    v11 = strlen(v10) + 1;
  }
  else
  {
    v10 = byte_FC858;
    v11 = 1;
  }
  v18 = v10;
  v19 = 0;
  v20 = v11;
  v14 = *a5;
  v21 = 0;
  v15 = 0;
  v16 = 8;
  v17 = 0;
  return _tlgWriteTransfer_EtwWriteTransfer((int)&dword_266280, a2, 0, 0, 7u, &UserData);
}
