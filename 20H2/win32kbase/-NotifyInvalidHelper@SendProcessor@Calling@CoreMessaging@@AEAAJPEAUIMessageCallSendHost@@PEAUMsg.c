/*
 * XREFs of ?NotifyInvalidHelper@SendProcessor@Calling@CoreMessaging@@AEAAJPEAUIMessageCallSendHost@@PEAUMsgCallState@@@Z @ 0x1C01FAE20
 * Callers:
 *     ?PrepareMessage@SendProcessor@Calling@CoreMessaging@@QEAAJPEAUIMessageCallSendHost@@IGGPEBEPEADPEAI@Z @ 0x1C00A3D7C (-PrepareMessage@SendProcessor@Calling@CoreMessaging@@QEAAJPEAUIMessageCallSendHost@@IGGPEBEPEADP.c)
 *     ?PrepareMessageWorker@SendProcessor@Calling@CoreMessaging@@AEAAJPEAUIMessageCallSendHost@@GGPEBEPEADHIII@Z @ 0x1C00A3EFC (-PrepareMessageWorker@SendProcessor@Calling@CoreMessaging@@AEAAJPEAUIMessageCallSendHost@@GGPEBE.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CoreMessaging::Calling::SendProcessor::NotifyInvalidHelper(
        CoreMessaging::Calling::SendProcessor *this,
        struct IMessageCallSendHost *a2,
        struct MsgCallState *a3)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(struct IMessageCallSendHost *, struct MsgCallState *))(*(_QWORD *)a2 + 48LL))(
             a2,
             a3);
  if ( (int)result >= 0 )
    return 2147942487LL;
  return result;
}
