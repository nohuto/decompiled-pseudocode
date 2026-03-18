/*
 * XREFs of ?NotifyInvalid@SendHost@CoreMessagingK@@SAJPEAUIMessageCallSendHost@@PEAUMsgCallState@@@Z @ 0x1C02008D0
 * Callers:
 *     <none>
 * Callees:
 *     ?BugCheck@Runtime@CoreMessagingK@@SAXW4BugCheckCodes@2@_K11@Z @ 0x1C02006B4 (-BugCheck@Runtime@CoreMessagingK@@SAXW4BugCheckCodes@2@_K11@Z.c)
 */

void __fastcall __noreturn CoreMessagingK::SendHost::NotifyInvalid(
        struct IMessageCallSendHost *a1,
        struct MsgCallState *a2)
{
  CoreMessagingK::Runtime::BugCheck(1283, *(int *)a2, *((unsigned int *)a2 + 1));
}
