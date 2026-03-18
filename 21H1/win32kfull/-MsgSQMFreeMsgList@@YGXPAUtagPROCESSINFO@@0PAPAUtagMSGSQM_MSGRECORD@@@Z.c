/*
 * XREFs of ?MsgSQMFreeMsgList@@YGXPAUtagPROCESSINFO@@0PAPAUtagMSGSQM_MSGRECORD@@@Z @ 0x180DE8
 * Callers:
 *     ?MsgSQMFreeProcessPair@@YGXPAUtagMSGSQM_PROCESSPAIR@@@Z @ 0x180E1E (-MsgSQMFreeProcessPair@@YGXPAUtagMSGSQM_PROCESSPAIR@@@Z.c)
 * Callees:
 *     ?MsgSQMFlushMsgRecord@@YGXPAUtagPROCESSINFO@@0PAUtagMSGSQM_MSGRECORD@@@Z @ 0x180C8E (-MsgSQMFlushMsgRecord@@YGXPAUtagPROCESSINFO@@0PAUtagMSGSQM_MSGRECORD@@@Z.c)
 */

void __userpurge MsgSQMFreeMsgList(
        unsigned int a1@<edx>,
        int a2@<ecx>,
        struct tagPROCESSINFO **a3,
        struct tagPROCESSINFO *a4,
        struct tagMSGSQM_MSGRECORD **a5)
{
  struct tagPROCESSINFO *v6; // esi
  struct tagPROCESSINFO *v7; // [esp-4h] [ebp-14h]
  struct tagPROCESSINFO *v8; // [esp+0h] [ebp-10h]
  struct tagMSGSQM_MSGRECORD *v9; // [esp+4h] [ebp-Ch]
  int i; // [esp+Ch] [ebp-4h]

  for ( i = a2; ; a2 = i )
  {
    v6 = *a3;
    if ( !*a3 )
      break;
    v7 = *a3;
    *a3 = *(struct tagPROCESSINFO **)v6;
    MsgSQMFlushMsgRecord(a1, a2, a1, v7, v8, v9);
    Win32FreePool(v6);
  }
}
