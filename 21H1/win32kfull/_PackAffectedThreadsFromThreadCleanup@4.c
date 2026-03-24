/*
 * XREFs of _PackAffectedThreadsFromThreadCleanup@4 @ 0xA250C
 * Callers:
 *     <none>
 * Callees:
 *     ?InAffectedThreadList@@YGPAUPTI_LIST@@PBUtagTHREADINFO@@@Z @ 0xA2540 (-InAffectedThreadList@@YGPAUPTI_LIST@@PBUtagTHREADINFO@@@Z.c)
 *     ?PackAffectedThreadList@@YGXPBUtagTHREADINFO@@0@Z @ 0xC8478 (-PackAffectedThreadList@@YGXPBUtagTHREADINFO@@0@Z.c)
 */

/*
 * Hex-Rays decompilation failed for _PackAffectedThreadsFromThreadCleanup@4 @ 0xA250C
 * Reason: Hex-Rays returned no pseudocode for 0xA250C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000000000A250C: mov     edi, edi
 * 00000000000A250E: push    ebp; struct tagTHREADINFO *
 * 00000000000A250F: mov     ebp, esp
 * 00000000000A2511: mov     ecx, [ebp+arg_0]
 * 00000000000A2514: call    ?InAffectedThreadList@@YGPAUPTI_LIST@@PBUtagTHREADINFO@@@Z; InAffectedThreadList(tagTHREADINFO const *)
 * 00000000000A2519: test    eax, eax
 * 00000000000A251B: jnz     short loc_A2530
 * 00000000000A251D: mov     eax, [ecx+0ECh]
 * 00000000000A2523: cmp     dword ptr [eax+120h], 1
 * 00000000000A252A: ja      short loc_A2536
 * 00000000000A252C: pop     ebp
 * 00000000000A252D: retn    4
 * 00000000000A2530: and     dword ptr [eax+8], 0
 * 00000000000A2534: jmp     short loc_A251D
 * 00000000000A2536: xor     edx, edx
 * 00000000000A2538: call    ?PackAffectedThreadList@@YGXPBUtagTHREADINFO@@0@Z; PackAffectedThreadList(tagTHREADINFO const *,tagTHREADINFO const *)
 * 00000000000A253D: jmp     short loc_A252C
 */
