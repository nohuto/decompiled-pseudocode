/*
 * XREFs of _PostMessageExtended @ 0x1C004EE90
 * Callers:
 *     _PostMessage @ 0x1C0013FF0 (_PostMessage.c)
 *     ?xxxHandleCoreMessagingQueueCompletion@@YAXPEAUtagTHREADINFO@@QEAU_FILE_IO_COMPLETION_INFORMATION@@W4tagQUEUE_COMPLETION_DRAINER@@@Z @ 0x1C004EC60 (-xxxHandleCoreMessagingQueueCompletion@@YAXPEAUtagTHREADINFO@@QEAU_FILE_IO_COMPLETION_INFORMATIO.c)
 *     xxxTranslateMessage @ 0x1C0108870 (xxxTranslateMessage.c)
 * Callees:
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C004F5A0 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 */

struct tagQMSG *__fastcall PostMessageExtended(
        struct tagWND *a1,
        unsigned int a2,
        unsigned __int64 a3,
        __int64 a4,
        struct tagINPUT_MESSAGE_SOURCE *a5)
{
  return _PostTransformableMessageExtended(a1, a2, a3, a4, a5, 1);
}
