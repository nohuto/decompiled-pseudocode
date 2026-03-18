/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByVal@$03@@3@Z @ 0x140661
 * Callers:
 *     ?UmfdClientSendAndWaitForCompletion@@YGJW4FontDriverType@@PAVFontDriverDdiRequest@@@Z @ 0x87410 (-UmfdClientSendAndWaitForCompletion@@YGJW4FontDriverType@@PAVFontDriverDdiRequest@@@Z.c)
 *     ?xxxRefreshDisplayOrientation@CLegacyRotationMgr@@UAEXXZ @ 0xB20A4 (-xxxRefreshDisplayOrientation@CLegacyRotationMgr@@UAEXXZ.c)
 *     ?xxxUserReinitializeAutoRotation@CLegacyRotationMgr@@UAEXXZ @ 0xE7672 (-xxxUserReinitializeAutoRotation@CLegacyRotationMgr@@UAEXXZ.c)
 *     ?xxxSetAutoRotationStateInternal@CLegacyRotationMgr@@AAEJH@Z @ 0x1412C3 (-xxxSetAutoRotationStateInternal@CLegacyRotationMgr@@AAEJH@Z.c)
 *     ?DeliverRawInput@RIM@InputTraceLogging@@SGXPBURIMDEV@@_N@Z @ 0x143AF1 (-DeliverRawInput@RIM@InputTraceLogging@@SGXPBURIMDEV@@_N@Z.c)
 *     ?LogFontLoadAttempt@@YGXPAXW4_W32KFontSourceType@@PBGH@Z @ 0x1D0476 (-LogFontLoadAttempt@@YGXPAXW4_W32KFontSourceType@@PBGH@Z.c)
 * Callees:
 *     __tlgWriteTransfer_EtwWriteTransfer@24 @ 0xE8E1E (__tlgWriteTransfer_EtwWriteTransfer@24.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        int a1,
        unsigned __int8 *a2,
        int a3,
        int a4,
        int a5,
        int a6)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [esp+8h] [ebp-44h] BYREF
  int v8; // [esp+28h] [ebp-24h]
  int v9; // [esp+2Ch] [ebp-20h]
  int v10; // [esp+30h] [ebp-1Ch]
  int v11; // [esp+34h] [ebp-18h]
  int v12; // [esp+38h] [ebp-14h]
  int v13; // [esp+3Ch] [ebp-10h]
  int v14; // [esp+40h] [ebp-Ch]
  int v15; // [esp+44h] [ebp-8h]

  v12 = a6;
  v8 = a5;
  v13 = 0;
  v14 = 4;
  v15 = 0;
  v9 = 0;
  v10 = 4;
  v11 = 0;
  return _tlgWriteTransfer_EtwWriteTransfer(a1, a2, 0, 0, 4u, &UserData);
}
