/*
 * XREFs of ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$01@@U2@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapSz@D@@ABU?$_tlgWrapperByVal@$01@@4@Z @ 0x1B3FB8
 * Callers:
 *     ?UpdateWaveformInfoList@SimpleHapticsController@@IAEJGG@Z @ 0x1B551A (-UpdateWaveformInfoList@SimpleHapticsController@@IAEJGG@Z.c)
 * Callees:
 *     __tlgWriteTransfer_EtwWriteTransfer@24 @ 0xE8E1E (__tlgWriteTransfer_EtwWriteTransfer@24.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>>(
        int a1,
        unsigned __int8 *a2,
        int a3,
        int a4,
        const char **a5,
        int a6,
        int a7)
{
  const char *v8; // edx
  unsigned int v9; // ecx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [esp+8h] [ebp-54h] BYREF
  const char *v12; // [esp+28h] [ebp-34h]
  int v13; // [esp+2Ch] [ebp-30h]
  unsigned int v14; // [esp+30h] [ebp-2Ch]
  int v15; // [esp+34h] [ebp-28h]
  int v16; // [esp+38h] [ebp-24h]
  int v17; // [esp+3Ch] [ebp-20h]
  int v18; // [esp+40h] [ebp-1Ch]
  int v19; // [esp+44h] [ebp-18h]
  int v20; // [esp+48h] [ebp-14h]
  int v21; // [esp+4Ch] [ebp-10h]
  int v22; // [esp+50h] [ebp-Ch]
  int v23; // [esp+54h] [ebp-8h]

  v20 = a7;
  v16 = a6;
  v21 = 0;
  v8 = *a5;
  v22 = 2;
  v23 = 0;
  v17 = 0;
  v18 = 2;
  v19 = 0;
  if ( v8 )
  {
    v9 = strlen(v8) + 1;
  }
  else
  {
    v8 = byte_FC858;
    v9 = 1;
  }
  v12 = v8;
  v13 = 0;
  v14 = v9;
  v15 = 0;
  return _tlgWriteTransfer_EtwWriteTransfer((int)&dword_2662D0, a2, 0, 0, 5u, &UserData);
}
