/*
 * XREFs of ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapSz@G@@ABU?$_tlgWrapperByVal@$03@@444@Z @ 0x170ABC
 * Callers:
 *     ?TraceWindowResizeTelemetry@@YGXPAUtagWND@@@Z @ 0x172453 (-TraceWindowResizeTelemetry@@YGXPAUtagWND@@@Z.c)
 * Callees:
 *     __tlgWriteTransfer_EtwWriteTransfer@24 @ 0xE8E1E (__tlgWriteTransfer_EtwWriteTransfer@24.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ??$_tlgCreate1Sz@G@@YGXPAU_EVENT_DATA_DESCRIPTOR@@PBG@Z @ 0x142F12 (--$_tlgCreate1Sz@G@@YGXPAU_EVENT_DATA_DESCRIPTOR@@PBG@Z.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        int a1,
        unsigned __int8 *a2,
        int a3,
        int a4,
        char **a5,
        char *a6,
        char *a7,
        char *a8,
        char *a9)
{
  char *v10; // edx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [esp+8h] [ebp-74h] BYREF
  char *v13[20]; // [esp+28h] [ebp-54h] BYREF

  v13[16] = a9;
  v10 = *a5;
  v13[12] = a8;
  v13[18] = (char *)4;
  v13[14] = (char *)4;
  v13[8] = a7;
  v13[10] = (char *)4;
  v13[6] = (char *)4;
  v13[17] = 0;
  v13[19] = 0;
  v13[13] = 0;
  v13[15] = 0;
  v13[9] = 0;
  v13[11] = 0;
  v13[4] = a6;
  v13[5] = 0;
  v13[7] = 0;
  _tlgCreate1Sz<unsigned short>(v13, v10);
  return _tlgWriteTransfer_EtwWriteTransfer((int)&dword_266280, a2, 0, 0, 7u, &UserData);
}
