/*
 * XREFs of ??$Write@$$V@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2@Z @ 0x180B47
 * Callers:
 *     ?EnsureUmfdHost@UmfdHostLifeTimeManager@@SG_NXZ @ 0xDE13E (-EnsureUmfdHost@UmfdHostLifeTimeManager@@SG_NXZ.c)
 *     ?HandleLowLevelHook@Mouse@InputTraceLogging@@SGXXZ @ 0x180B78 (-HandleLowLevelHook@Mouse@InputTraceLogging@@SGXXZ.c)
 *     ?ValidatePointer@InkDevice@@ABEJI@Z @ 0x1B1401 (-ValidatePointer@InkDevice@@ABEJI@Z.c)
 * Callees:
 *     __tlgWriteTransfer_EtwWriteTransfer@24 @ 0xE8E1E (__tlgWriteTransfer_EtwWriteTransfer@24.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
        int a1,
        unsigned __int8 *a2,
        int a3,
        int a4)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [esp+0h] [ebp-24h] BYREF

  return _tlgWriteTransfer_EtwWriteTransfer(a1, a2, 0, 0, 2u, &UserData);
}
