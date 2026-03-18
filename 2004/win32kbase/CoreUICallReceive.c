/*
 * XREFs of CoreUICallReceive @ 0x1C0054118
 * Callers:
 *     ?SubmitBuffer@SendHost@CoreMessagingK@@SAJPEAUIMessageCallSendHost@@PEA_KIPEAXI@Z @ 0x1C004D910 (-SubmitBuffer@SendHost@CoreMessagingK@@SAJPEAUIMessageCallSendHost@@PEA_KIPEAXI@Z.c)
 * Callees:
 *     ?UnmarshalReceive@ReceiveProcessor@Calling@CoreMessaging@@QEAAJPEAUIMessageCallReceiveHost@@PEBUMsgCallTypeDefinition@@PEBEIIPEBXI@Z @ 0x1C00541E0 (-UnmarshalReceive@ReceiveProcessor@Calling@CoreMessaging@@QEAAJPEAUIMessageCallReceiveHost@@PEBU.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CoreUICallReceive(
        struct IMessageCallReceiveHost *a1,
        __int64 a2,
        const struct MsgCallTypeDefinition *a3,
        const unsigned __int8 *a4,
        __int64 a5,
        void *a6,
        unsigned int a7)
{
  __int64 result; // rax
  bool v8; // [rsp+20h] [rbp-1E8h]
  unsigned int v9; // [rsp+28h] [rbp-1E0h]
  _BYTE v10[80]; // [rsp+40h] [rbp-1C8h] BYREF
  int v11; // [rsp+90h] [rbp-178h]
  int v12; // [rsp+C0h] [rbp-148h]
  int v13; // [rsp+C4h] [rbp-144h]
  __int64 (__fastcall **v14)(__int64, unsigned __int64); // [rsp+D8h] [rbp-130h]
  char v15; // [rsp+E0h] [rbp-128h] BYREF

  v12 = 26;
  v13 = 2;
  result = CoreMessaging::Calling::ReceiveProcessor::UnmarshalReceive(
             (CoreMessaging::Calling::ReceiveProcessor *)v10,
             a1,
             a3,
             a4,
             v8,
             v9,
             a6,
             a7);
  if ( (int)result >= 0 )
  {
    result = (*v14)(a5, (unsigned __int64)&v15 & -(__int64)(v11 != 0));
    if ( (int)result >= 0 )
      result = 0LL;
    if ( (int)result >= 0 )
      return 0LL;
  }
  return result;
}
