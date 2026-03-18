/*
 * XREFs of ??$Write@U?$_tlgWrapperByRef@$07@@U?$_tlgWrapperByVal@$01@@U1@U?$_tlgWrapperByVal@$03@@U3@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByRef@$07@@ABU?$_tlgWrapperByVal@$01@@3ABU?$_tlgWrapperByVal@$03@@5ABU?$_tlgWrapSz@D@@@Z @ 0x14B8A9
 * Callers:
 *     ?HandleDelegatedInput@DManip@InputTraceLogging@@SGXPBUtagQMSG@@K@Z @ 0x14D206 (-HandleDelegatedInput@DManip@InputTraceLogging@@SGXPBUtagQMSG@@K@Z.c)
 * Callees:
 *     __tlgWriteTransfer_EtwWriteTransfer@24 @ 0xE8E1E (__tlgWriteTransfer_EtwWriteTransfer@24.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<8>,_tlgWrapperByVal<2>,_tlgWrapperByRef<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
        int a1,
        unsigned __int8 *a2,
        int a3,
        int a4,
        int *a5,
        int a6,
        int *a7,
        int a8,
        int a9,
        const char **a10)
{
  char *v10; // esi
  int v12; // ecx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [esp+Ch] [ebp-84h] BYREF
  int v15; // [esp+2Ch] [ebp-64h]
  int v16; // [esp+30h] [ebp-60h]
  int v17; // [esp+34h] [ebp-5Ch]
  int v18; // [esp+38h] [ebp-58h]
  int v19; // [esp+3Ch] [ebp-54h]
  int v20; // [esp+40h] [ebp-50h]
  int v21; // [esp+44h] [ebp-4Ch]
  int v22; // [esp+48h] [ebp-48h]
  int v23; // [esp+4Ch] [ebp-44h]
  int v24; // [esp+50h] [ebp-40h]
  int v25; // [esp+54h] [ebp-3Ch]
  int v26; // [esp+58h] [ebp-38h]
  int v27; // [esp+5Ch] [ebp-34h]
  int v28; // [esp+60h] [ebp-30h]
  int v29; // [esp+64h] [ebp-2Ch]
  int v30; // [esp+68h] [ebp-28h]
  int v31; // [esp+6Ch] [ebp-24h]
  int v32; // [esp+70h] [ebp-20h]
  int v33; // [esp+74h] [ebp-1Ch]
  int v34; // [esp+78h] [ebp-18h]
  char *v35; // [esp+7Ch] [ebp-14h]
  int v36; // [esp+80h] [ebp-10h]
  int v37; // [esp+84h] [ebp-Ch]
  int v38; // [esp+88h] [ebp-8h]

  v10 = (char *)*a10;
  if ( *a10 )
  {
    v12 = &(*a10)[strlen(*a10) + 1] - v10;
  }
  else
  {
    v10 = byte_FC858;
    v12 = 1;
  }
  v31 = a9;
  v27 = a8;
  v37 = v12;
  v23 = *a7;
  v19 = a6;
  v33 = 4;
  v29 = 4;
  v15 = *a5;
  v35 = v10;
  v36 = 0;
  v38 = 0;
  v32 = 0;
  v34 = 0;
  v28 = 0;
  v30 = 0;
  v24 = 0;
  v25 = 8;
  v26 = 0;
  v20 = 0;
  v21 = 2;
  v22 = 0;
  v16 = 0;
  v17 = 8;
  v18 = 0;
  return _tlgWriteTransfer_EtwWriteTransfer(a1, a2, 0, 0, 8u, &UserData);
}
