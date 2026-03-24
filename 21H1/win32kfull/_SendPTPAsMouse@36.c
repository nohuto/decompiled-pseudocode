/*
 * XREFs of _SendPTPAsMouse@36 @ 0xF3C36
 * Callers:
 *     <none>
 * Callees:
 *     ?QueuePTPMouseEvent@@YGXPAXUtagPOINT@@K_K2PAU_PTPMouseLatencyTracker@@@Z @ 0xF3B5E (-QueuePTPMouseEvent@@YGXPAXUtagPOINT@@K_K2PAU_PTPMouseLatencyTracker@@@Z.c)
 */

/*
 * Hex-Rays decompilation failed for _SendPTPAsMouse@36 @ 0xF3C36
 * Reason: Hex-Rays returned no pseudocode for 0xF3C36
 * Fallback: raw IDA disassembly follows.
 *
 * 00000000000F3C36: mov     edi, edi
 * 00000000000F3C38: push    ebp
 * 00000000000F3C39: mov     ebp, esp
 * 00000000000F3C3B: and     esp, 0FFFFFFF8h
 * 00000000000F3C3E: push    dword ptr [ebp+arg_8]; unsigned __int64
 * 00000000000F3C41: mov     edx, dword ptr [ebp+arg_8+4]
 * 00000000000F3C44: push    [ebp+arg_4]
 * 00000000000F3C47: mov     ecx, [ebp+arg_0]
 * 00000000000F3C4A: push    dword ptr [ebp+arg_20]; unsigned __int64
 * 00000000000F3C4D: push    [ebp+arg_1C]; unsigned int
 * 00000000000F3C50: push    [ebp+arg_14.y]
 * 00000000000F3C53: push    [ebp+arg_14.x]; struct tagPOINT
 * 00000000000F3C56: push    [ebp+arg_10]; void *
 * 00000000000F3C59: call    ?QueuePTPMouseEvent@@YGXPAXUtagPOINT@@K_K2PAU_PTPMouseLatencyTracker@@@Z; QueuePTPMouseEvent(void *,tagPOINT,ulong,unsigned __int64,unsigned __int64,_PTPMouseLatencyTracker *)
 * 00000000000F3C5E: mov     esp, ebp
 * 00000000000F3C60: pop     ebp
 * 00000000000F3C61: retn    24h ; '$'
 */
