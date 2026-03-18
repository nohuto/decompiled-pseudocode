/*
 * XREFs of ?BugCheck@Runtime@CoreMessagingK@@SAXW4BugCheckCodes@2@_K11@Z @ 0x1C01FACA4
 * Callers:
 *     CoreMsgInitialize @ 0x1C0047E8C (CoreMsgInitialize.c)
 *     ?InitializeMessageAttributes@RegistrarClient@CoreMessagingK@@CAXPEAU_ALPC_MESSAGE_ATTRIBUTES@@_K@Z @ 0x1C0048110 (-InitializeMessageAttributes@RegistrarClient@CoreMessagingK@@CAXPEAU_ALPC_MESSAGE_ATTRIBUTES@@_K.c)
 *     ?RegisterPort@RegistrarClient@CoreMessagingK@@SAJPEBU_GUID@@PEBU_UNICODE_STRING@@@Z @ 0x1C0048238 (-RegisterPort@RegistrarClient@CoreMessagingK@@SAJPEBU_GUID@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?UnregisterPort@RegistrarClient@CoreMessagingK@@SAJPEBU_GUID@@@Z @ 0x1C00484B8 (-UnregisterPort@RegistrarClient@CoreMessagingK@@SAJPEBU_GUID@@@Z.c)
 *     ?Initialize@RegistrarClient@CoreMessagingK@@SAXXZ @ 0x1C0048588 (-Initialize@RegistrarClient@CoreMessagingK@@SAXXZ.c)
 *     ?OpenConnection@ServerPorts@CoreMessagingK@@SAJDPEBUtagMsgRoutingInfo@@PEAPEAX@Z @ 0x1C004884C (-OpenConnection@ServerPorts@CoreMessagingK@@SAJDPEBUtagMsgRoutingInfo@@PEAPEAX@Z.c)
 *     ?DrainPort@ServerPorts@CoreMessagingK@@CAXPEAUServerPortInfo@2@@Z @ 0x1C0048AB0 (-DrainPort@ServerPorts@CoreMessagingK@@CAXPEAUServerPortInfo@2@@Z.c)
 *     ?Release@ClientPortInfo@CoreMessagingK@@QEAAXXZ @ 0x1C0048DB4 (-Release@ClientPortInfo@CoreMessagingK@@QEAAXXZ.c)
 *     ?ValidateReceiveBuffer@SendHost@CoreMessagingK@@CAXPEAUAlpcBufferK@@_K@Z @ 0x1C004D884 (-ValidateReceiveBuffer@SendHost@CoreMessagingK@@CAXPEAUAlpcBufferK@@_K@Z.c)
 *     ?SubmitBuffer@SendHost@CoreMessagingK@@SAJPEAUIMessageCallSendHost@@PEA_KIPEAXI@Z @ 0x1C004D910 (-SubmitBuffer@SendHost@CoreMessagingK@@SAJPEAUIMessageCallSendHost@@PEA_KIPEAXI@Z.c)
 *     ?AllocateBuffer@SendHost@CoreMessagingK@@SAJPEAUIMessageCallSendHost@@PEA_KIIPEAPEAX@Z @ 0x1C004DA60 (-AllocateBuffer@SendHost@CoreMessagingK@@SAJPEAUIMessageCallSendHost@@PEA_KIIPEAPEAX@Z.c)
 *     ?Acquire@EntryLock@CoreMessagingK@@QEAAXW4BugCheckCodes@2@@Z @ 0x1C006AD84 (-Acquire@EntryLock@CoreMessagingK@@QEAAXW4BugCheckCodes@2@@Z.c)
 *     ?NotifyInvalid@SendHost@CoreMessagingK@@SAJPEAUIMessageCallSendHost@@PEAUMsgCallState@@@Z @ 0x1C01FAEC0 (-NotifyInvalid@SendHost@CoreMessagingK@@SAJPEAUIMessageCallSendHost@@PEAUMsgCallState@@@Z.c)
 *     ?Thunk_OnProtocolExceptionWithDiagnostics_3@?$IRegistrarClient_Receive@URegistrarClientThunk@CoreMessagingK@@@Registrar@CoreUI@Microsoft@@SAJPEAXPEAPEAX@Z @ 0x1C01FAEE0 (-Thunk_OnProtocolExceptionWithDiagnostics_3@-$IRegistrarClient_Receive@URegistrarClientThunk@Cor.c)
 *     ?Thunk_OnProtocolException_0@?$IRegistrarClient_Receive@URegistrarClientThunk@CoreMessagingK@@@Registrar@CoreUI@Microsoft@@SAJPEAXPEAPEAX@Z @ 0x1C01FAF00 (-Thunk_OnProtocolException_0@-$IRegistrarClient_Receive@URegistrarClientThunk@CoreMessagingK@@@R.c)
 *     ?NotifyInvalid@ReceiveHost@CoreMessagingK@@SAJPEAUIMessageCallReceiveHost@@PEAUMsgCallState@@@Z @ 0x1C01FB050 (-NotifyInvalid@ReceiveHost@CoreMessagingK@@SAJPEAUIMessageCallReceiveHost@@PEAUMsgCallState@@@Z.c)
 *     ?NotifyProtocolViolation@ReceiveHost@CoreMessagingK@@SAJPEAUIMessageCallReceiveHost@@PEAUMsgCallState@@@Z @ 0x1C01FB070 (-NotifyProtocolViolation@ReceiveHost@CoreMessagingK@@SAJPEAUIMessageCallReceiveHost@@PEAUMsgCall.c)
 * Callees:
 *     <none>
 */

void __fastcall __noreturn CoreMessagingK::Runtime::BugCheck(int a1, ULONG_PTR a2, ULONG_PTR a3)
{
  KeBugCheckEx(0x174u, a1, a2, a3, 0LL);
}
