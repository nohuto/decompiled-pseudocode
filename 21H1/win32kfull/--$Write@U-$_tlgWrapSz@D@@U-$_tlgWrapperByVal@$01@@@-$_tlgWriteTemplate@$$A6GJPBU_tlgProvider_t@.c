/*
 * XREFs of ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$01@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapSz@D@@ABU?$_tlgWrapperByVal@$01@@@Z @ 0x1B3F3A
 * Callers:
 *     ?SetAutoTriggerWaveform@SimpleHapticsController@@QAEJG@Z @ 0x1B5113 (-SetAutoTriggerWaveform@SimpleHapticsController@@QAEJG@Z.c)
 * Callees:
 *     __tlgWriteTransfer_EtwWriteTransfer@24 @ 0xE8E1E (__tlgWriteTransfer_EtwWriteTransfer@24.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<2>>(
        int a1,
        unsigned __int8 *a2,
        int a3,
        int a4,
        const char **a5,
        int a6)
{
  const char *v7; // edx
  unsigned int v8; // ecx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [esp+8h] [ebp-44h] BYREF
  const char *v11; // [esp+28h] [ebp-24h]
  int v12; // [esp+2Ch] [ebp-20h]
  unsigned int v13; // [esp+30h] [ebp-1Ch]
  int v14; // [esp+34h] [ebp-18h]
  int v15; // [esp+38h] [ebp-14h]
  int v16; // [esp+3Ch] [ebp-10h]
  int v17; // [esp+40h] [ebp-Ch]
  int v18; // [esp+44h] [ebp-8h]

  v15 = a6;
  v17 = 2;
  v16 = 0;
  v7 = *a5;
  v18 = 0;
  if ( v7 )
  {
    v8 = strlen(v7) + 1;
  }
  else
  {
    v7 = byte_FC858;
    v8 = 1;
  }
  v11 = v7;
  v12 = 0;
  v13 = v8;
  v14 = 0;
  return _tlgWriteTransfer_EtwWriteTransfer((int)&dword_2662D0, a2, 0, 0, 4u, &UserData);
}
