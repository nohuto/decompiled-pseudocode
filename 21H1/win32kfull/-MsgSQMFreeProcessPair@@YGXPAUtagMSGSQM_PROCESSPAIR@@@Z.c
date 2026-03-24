/*
 * XREFs of ?MsgSQMFreeProcessPair@@YGXPAUtagMSGSQM_PROCESSPAIR@@@Z @ 0x180E1E
 * Callers:
 *     _MSGSQMRemoveProcess@4 @ 0xA5E80 (_MSGSQMRemoveProcess@4.c)
 * Callees:
 *     ?MsgSQMFreeMsgList@@YGXPAUtagPROCESSINFO@@0PAPAUtagMSGSQM_MSGRECORD@@@Z @ 0x180DE8 (-MsgSQMFreeMsgList@@YGXPAUtagPROCESSINFO@@0PAPAUtagMSGSQM_MSGRECORD@@@Z.c)
 */

/*
 * Hex-Rays decompilation failed for ?MsgSQMFreeProcessPair@@YGXPAUtagMSGSQM_PROCESSPAIR@@@Z @ 0x180E1E
 * Reason: Hex-Rays returned no pseudocode for 0x180E1E
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000000180E1E: mov     edi, edi
 * 0000000000180E20: push    esi; struct tagPROCESSINFO *
 * 0000000000180E21: mov     esi, ecx
 * 0000000000180E23: test    esi, esi
 * 0000000000180E25: jz      short loc_180E3E
 * 0000000000180E27: mov     edx, [esi+14h]
 * 0000000000180E2A: lea     eax, [esi+18h]
 * 0000000000180E2D: mov     ecx, [esi+10h]
 * 0000000000180E30: push    eax; struct tagPROCESSINFO *
 * 0000000000180E31: call    ?MsgSQMFreeMsgList@@YGXPAUtagPROCESSINFO@@0PAPAUtagMSGSQM_MSGRECORD@@@Z; MsgSQMFreeMsgList(tagPROCESSINFO *,tagPROCESSINFO *,tagMSGSQM_MSGRECORD * *)
 * 0000000000180E36: mov     ecx, esi
 * 0000000000180E38: pop     esi
 * 0000000000180E39: jmp     ?MsgSQMCleanupProcessPair@@YGXPAUtagMSGSQM_PROCESSPAIR@@@Z; MsgSQMCleanupProcessPair(tagMSGSQM_PROCESSPAIR *)
 * 0000000000180E3E: pop     esi
 * 0000000000180E3F: retn
 */
