/*
 * XREFs of ??$Write@U?$_tlgWrapperByRef@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByRef@$07@@ABU?$_tlgWrapperByVal@$03@@444@Z @ 0x14BB32
 * Callers:
 *     ?PostInputMessage@Delivery@InputTraceLogging@@SGXPBUtagQMSG@@PBUtagQ@@@Z @ 0x4676E (-PostInputMessage@Delivery@InputTraceLogging@@SGXPBUtagQMSG@@PBUtagQ@@@Z.c)
 *     ?TraceLoggingScreenOrientationArStateChangeEvent@@YGXKW4arInitiatedBy@@W4tagAR_STATE@@@Z @ 0x186EF4 (-TraceLoggingScreenOrientationArStateChangeEvent@@YGXKW4arInitiatedBy@@W4tagAR_STATE@@@Z.c)
 *     ?TraceLoggingScreenOrientationChangeEvent@@YGXKW4arInitiatedBy@@HW4arFailureReason@@@Z @ 0x186F6A (-TraceLoggingScreenOrientationChangeEvent@@YGXKW4arInitiatedBy@@HW4arFailureReason@@@Z.c)
 *     _TraceLoggingPTPWarpBack@24 @ 0x18757D (_TraceLoggingPTPWarpBack@24.c)
 * Callees:
 *     __tlgWriteTransfer_EtwWriteTransfer@24 @ 0xE8E1E (__tlgWriteTransfer_EtwWriteTransfer@24.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        int a1,
        unsigned __int8 *a2,
        int a3,
        int a4,
        int *a5,
        int a6,
        int a7,
        int a8,
        int a9)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [esp+8h] [ebp-74h] BYREF
  int v11; // [esp+28h] [ebp-54h]
  int v12; // [esp+2Ch] [ebp-50h]
  int v13; // [esp+30h] [ebp-4Ch]
  int v14; // [esp+34h] [ebp-48h]
  int v15; // [esp+38h] [ebp-44h]
  int v16; // [esp+3Ch] [ebp-40h]
  int v17; // [esp+40h] [ebp-3Ch]
  int v18; // [esp+44h] [ebp-38h]
  int v19; // [esp+48h] [ebp-34h]
  int v20; // [esp+4Ch] [ebp-30h]
  int v21; // [esp+50h] [ebp-2Ch]
  int v22; // [esp+54h] [ebp-28h]
  int v23; // [esp+58h] [ebp-24h]
  int v24; // [esp+5Ch] [ebp-20h]
  int v25; // [esp+60h] [ebp-1Ch]
  int v26; // [esp+64h] [ebp-18h]
  int v27; // [esp+68h] [ebp-14h]
  int v28; // [esp+6Ch] [ebp-10h]
  int v29; // [esp+70h] [ebp-Ch]
  int v30; // [esp+74h] [ebp-8h]

  v27 = a9;
  v23 = a8;
  v19 = a7;
  v15 = a6;
  v28 = 0;
  v11 = *a5;
  v29 = 4;
  v30 = 0;
  v24 = 0;
  v25 = 4;
  v26 = 0;
  v20 = 0;
  v21 = 4;
  v22 = 0;
  v16 = 0;
  v17 = 4;
  v18 = 0;
  v12 = 0;
  v13 = 8;
  v14 = 0;
  return _tlgWriteTransfer_EtwWriteTransfer(a1, a2, 0, 0, 7u, &UserData);
}
