/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U1@U1@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByVal@$03@@ABU?$_tlgWrapSz@D@@33@Z @ 0x148E33
 * Callers:
 *     ?InjectInput@RIM@InputTraceLogging@@SGXPBURIMDEV@@W4InputTracing_RimInjectionSource@@K@Z @ 0xF0CC8 (-InjectInput@RIM@InputTraceLogging@@SGXPBURIMDEV@@W4InputTracing_RimInjectionSource@@K@Z.c)
 *     ?OnDeviceClosed@InkProcessor@@QAEXPAURawInputManagerDeviceObject@@@Z @ 0x1ABFB7 (-OnDeviceClosed@InkProcessor@@QAEXPAURawInputManagerDeviceObject@@@Z.c)
 *     ?OnDeviceOpened@InkProcessor@@QAEXPAURawInputManagerDeviceObject@@@Z @ 0x1AC085 (-OnDeviceOpened@InkProcessor@@QAEXPAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     __tlgWriteTransfer_EtwWriteTransfer@24 @ 0xE8E1E (__tlgWriteTransfer_EtwWriteTransfer@24.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        int a1,
        unsigned __int8 *a2,
        int a3,
        int a4,
        int a5,
        const char **a6,
        int a7,
        int a8)
{
  const char *v10; // edx
  unsigned int v11; // ecx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [esp+Ch] [ebp-64h] BYREF
  int v14; // [esp+2Ch] [ebp-44h]
  int v15; // [esp+30h] [ebp-40h]
  int v16; // [esp+34h] [ebp-3Ch]
  int v17; // [esp+38h] [ebp-38h]
  const char *v18; // [esp+3Ch] [ebp-34h]
  int v19; // [esp+40h] [ebp-30h]
  unsigned int v20; // [esp+44h] [ebp-2Ch]
  int v21; // [esp+48h] [ebp-28h]
  int v22; // [esp+4Ch] [ebp-24h]
  int v23; // [esp+50h] [ebp-20h]
  int v24; // [esp+54h] [ebp-1Ch]
  int v25; // [esp+58h] [ebp-18h]
  int v26; // [esp+5Ch] [ebp-14h]
  int v27; // [esp+60h] [ebp-10h]
  int v28; // [esp+64h] [ebp-Ch]
  int v29; // [esp+68h] [ebp-8h]

  v26 = a8;
  v22 = a7;
  v27 = 0;
  v10 = *a6;
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
  v14 = a5;
  v18 = v10;
  v19 = 0;
  v20 = v11;
  v21 = 0;
  v15 = 0;
  v16 = 4;
  v17 = 0;
  return _tlgWriteTransfer_EtwWriteTransfer(a1, a2, 0, 0, 6u, &UserData);
}
