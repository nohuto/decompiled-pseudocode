/*
 * XREFs of ?MsgSQMGetMsgCache@@YGPAUtagMSGSQM_CACHE@@PAUtagPROCESSINFO@@H@Z @ 0x180E40
 * Callers:
 *     ?MsgSQMAddTargetNode@@YGHPAUtagPROCESSINFO@@PAUtagMSGSQM_PROCESSPAIR@@@Z @ 0x180BB2 (-MsgSQMAddTargetNode@@YGHPAUtagPROCESSINFO@@PAUtagMSGSQM_PROCESSPAIR@@@Z.c)
 *     ?MsgSQMGetSourceListProcessPair@@YGPAUtagMSGSQM_PROCESSPAIR@@PAUtagPROCESSINFO@@0H@Z @ 0x180F65 (-MsgSQMGetSourceListProcessPair@@YGPAUtagMSGSQM_PROCESSPAIR@@PAUtagPROCESSINFO@@0H@Z.c)
 * Callees:
 *     ?MsgSQMPopulateProcessSQMInfo@@YGXPAUtagPROCESSINFO@@PAUtagMSGSQM_PROCESSSQMINFO@@@Z @ 0x181012 (-MsgSQMPopulateProcessSQMInfo@@YGXPAUtagPROCESSINFO@@PAUtagMSGSQM_PROCESSSQMINFO@@@Z.c)
 */

/*
 * Hex-Rays decompilation failed for ?MsgSQMGetMsgCache@@YGPAUtagMSGSQM_CACHE@@PAUtagPROCESSINFO@@H@Z @ 0x180E40
 * Reason: Hex-Rays returned no pseudocode for 0x180E40
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000000180E40: mov     edi, edi
 * 0000000000180E42: push    esi; struct tagPROCESSINFO *
 * 0000000000180E43: mov     esi, ecx
 * 0000000000180E45: test    edx, edx
 * 0000000000180E47: jz      short loc_180E8E
 * 0000000000180E49: cmp     dword ptr [esi+1E8h], 0
 * 0000000000180E50: jnz     short loc_180E8E
 * 0000000000180E52: push    73757355h
 * 0000000000180E57: push    3Ch ; '<'
 * 0000000000180E59: call    ds:__imp__Win32AllocPoolZInit@8; Win32AllocPoolZInit(x,x)
 * 0000000000180E5F: mov     [esi+1E8h], eax
 * 0000000000180E65: test    eax, eax
 * 0000000000180E67: jz      short loc_180E8E
 * 0000000000180E69: mov     edx, eax
 * 0000000000180E6B: mov     ecx, esi
 * 0000000000180E6D: call    ?MsgSQMPopulateProcessSQMInfo@@YGXPAUtagPROCESSINFO@@PAUtagMSGSQM_PROCESSSQMINFO@@@Z; MsgSQMPopulateProcessSQMInfo(tagPROCESSINFO *,tagMSGSQM_PROCESSSQMINFO *)
 * 0000000000180E72: mov     eax, [esi+1E8h]
 * 0000000000180E78: add     eax, 2Ch ; ','
 * 0000000000180E7B: mov     [eax+4], eax
 * 0000000000180E7E: mov     [eax], eax
 * 0000000000180E80: mov     eax, [esi+1E8h]
 * 0000000000180E86: add     eax, 34h ; '4'
 * 0000000000180E89: mov     [eax+4], eax
 * 0000000000180E8C: mov     [eax], eax
 * 0000000000180E8E: mov     eax, [esi+1E8h]
 * 0000000000180E94: pop     esi
 * 0000000000180E95: retn
 */
