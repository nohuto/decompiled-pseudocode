/*
 * XREFs of ?FailFastWithHR@@YAXJ_K0@Z @ 0x1801489BC
 * Callers:
 *     ?SecurityShim_SharedMessagePortSecurity@SharedMessagePortRefPtr@@SAHPEAPEAX@Z @ 0x180148C18 (-SecurityShim_SharedMessagePortSecurity@SharedMessagePortRefPtr@@SAHPEAPEAX@Z.c)
 *     ?DetectAndProcessHotKey@HotKeyProcessor@@QEAAJI_N_KIIU_GUID@@AEAUHotKeyDetectionResult@@@Z @ 0x18019F6E4 (-DetectAndProcessHotKey@HotKeyProcessor@@QEAAJI_N_KIIU_GUID@@AEAUHotKeyDetectionResult@@@Z.c)
 *     ?FindRegisteredClient@HotKeyProcessor@@AEAAJAEBUMessageObjectID@@PEAPEAVHotkeyClientRegistration@@@Z @ 0x1801A018C (-FindRegisteredClient@HotKeyProcessor@@AEAAJAEBUMessageObjectID@@PEAPEAVHotkeyClientRegistration.c)
 *     ?FindRegisteredClient@HotKeyProcessor@@AEAAJPEAUIMessageProxy@@PEAPEAVHotkeyClientRegistration@@@Z @ 0x1801A0224 (-FindRegisteredClient@HotKeyProcessor@@AEAAJPEAUIMessageProxy@@PEAPEAVHotkeyClientRegistration@@.c)
 *     ?FindRegisteredHotKey@HotKeyProcessor@@AEAAJIIIIU_GUID@@PEAV?$shared_ptr@UHotKeyInfo@@@std@@PEAPEAVHotkeyClientRegistration@@@Z @ 0x1801A031C (-FindRegisteredHotKey@HotKeyProcessor@@AEAAJIIIIU_GUID@@PEAV-$shared_ptr@UHotKeyInfo@@@std@@PEAP.c)
 *     ?OnDisconnected@HotKeyProcessor@@UEAAJPEAUIMessageProxy@@@Z @ 0x1801A09C0 (-OnDisconnected@HotKeyProcessor@@UEAAJPEAUIMessageProxy@@@Z.c)
 *     ?RegisterHotKey@HotKeyProcessor@@UEAAJUMessageObjectID@@III_N@Z @ 0x1801A0B70 (-RegisterHotKey@HotKeyProcessor@@UEAAJUMessageObjectID@@III_N@Z.c)
 *     ?RegisterHotKeyClient@HotKeyProcessor@@UEAAJUtagMsgRoutingInfo@@_NU_GUID@@@Z @ 0x1801A1290 (-RegisterHotKeyClient@HotKeyProcessor@@UEAAJUtagMsgRoutingInfo@@_NU_GUID@@@Z.c)
 *     ?RemoveClientRegistration@HotKeyProcessor@@AEAAJPEAVHotkeyClientRegistration@@@Z @ 0x1801A15D8 (-RemoveClientRegistration@HotKeyProcessor@@AEAAJPEAVHotkeyClientRegistration@@@Z.c)
 *     ?RuntimeClassInitialize@HotKeyProcessor@@QEAAJXZ @ 0x1801A17A8 (-RuntimeClassInitialize@HotKeyProcessor@@QEAAJXZ.c)
 *     ?RuntimeClassInitialize@HotkeyClientRegistration@@QEAAJPEAUIMessageProxy@@_NU_GUID@@@Z @ 0x1801A1928 (-RuntimeClassInitialize@HotkeyClientRegistration@@QEAAJPEAUIMessageProxy@@_NU_GUID@@@Z.c)
 *     ?UnregisterHotKey@HotKeyProcessor@@UEAAJUMessageObjectID@@II@Z @ 0x1801A1A30 (-UnregisterHotKey@HotKeyProcessor@@UEAAJUMessageObjectID@@II@Z.c)
 *     ?UnregisterHotKeyClient@HotKeyProcessor@@UEAAJUMessageObjectID@@@Z @ 0x1801A1D90 (-UnregisterHotKeyClient@HotKeyProcessor@@UEAAJUMessageObjectID@@@Z.c)
 *     ?OnProxyCreated@TextInputStateAdapter@@UEAAJPEAUIMessageProxy@@@Z @ 0x1801A2B90 (-OnProxyCreated@TextInputStateAdapter@@UEAAJPEAUIMessageProxy@@@Z.c)
 *     ?RuntimeClassInitialize@TextInputStateAdapter@@QEAAJPEAUITextInputStateAdapterOwner@@@Z @ 0x1801A39F8 (-RuntimeClassInitialize@TextInputStateAdapter@@QEAAJPEAUITextInputStateAdapterOwner@@@Z.c)
 * Callees:
 *     memset_0 @ 0x18003C540 (memset_0.c)
 *     __security_check_cookie @ 0x18003C560 (__security_check_cookie.c)
 */

void __fastcall FailFastWithHR(int a1, ULONG_PTR a2, ULONG_PTR a3)
{
  ULONG_PTR v4; // rbx
  struct _EXCEPTION_RECORD pExceptionRecord; // [rsp+20h] [rbp-B8h] BYREF
  void *retaddr; // [rsp+D8h] [rbp+0h]

  v4 = a1;
  memset_0(&pExceptionRecord, 0, sizeof(pExceptionRecord));
  pExceptionRecord.ExceptionAddress = retaddr;
  pExceptionRecord.ExceptionCode = 1653;
  pExceptionRecord.ExceptionFlags = 1;
  pExceptionRecord.NumberParameters = 3;
  pExceptionRecord.ExceptionInformation[0] = v4;
  pExceptionRecord.ExceptionInformation[1] = a2;
  pExceptionRecord.ExceptionInformation[2] = a3;
  if ( IsDebuggerPresent() )
    __debugbreak();
  RaiseFailFastException(&pExceptionRecord, 0LL, 0);
}
