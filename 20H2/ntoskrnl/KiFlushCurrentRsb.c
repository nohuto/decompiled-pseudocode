/*
 * XREFs of KiFlushCurrentRsb @ 0x140A1A740
 * Callers:
 *     KiUpdateSpeculationControl @ 0x1402DF350 (KiUpdateSpeculationControl.c)
 *     KiUpdateStibpPairing @ 0x1402DFA00 (KiUpdateStibpPairing.c)
 *     KiHandleMcheck @ 0x140510BF0 (KiHandleMcheck.c)
 *     KiProcessNMI @ 0x140510F30 (KiProcessNMI.c)
 *     KeFlushRsb @ 0x1405196D8 (KeFlushRsb.c)
 *     KePrepareToDispatchVirtualProcessor @ 0x140519930 (KePrepareToDispatchVirtualProcessor.c)
 *     KiFlushRsbTarget @ 0x140519CA0 (KiFlushRsbTarget.c)
 * Callees:
 *     KiFlushCurrentRsb @ 0x140A1A740 (KiFlushCurrentRsb.c)
 */

/*
 * Hex-Rays decompilation failed for KiFlushCurrentRsb @ 0x140A1A740
 * Reason: Hex-Rays returned no pseudocode for 0x140A1A740
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140A1A740: sub     rsp, 8
 * 0000000140A1A744: pushfq
 * 0000000140A1A745: cli
 * 0000000140A1A746: call    loc_140A1A859
 * 0000000140A1A74B: add     rsp, 8
 * 0000000140A1A74F: call    loc_140A1A862
 * 0000000140A1A754: add     rsp, 8
 * 0000000140A1A758: call    loc_140A1A74B
 * 0000000140A1A75D: add     rsp, 8
 * 0000000140A1A761: call    loc_140A1A754
 * 0000000140A1A766: add     rsp, 8
 * 0000000140A1A76A: call    loc_140A1A75D
 * 0000000140A1A76F: add     rsp, 8
 * 0000000140A1A773: call    loc_140A1A766
 * 0000000140A1A778: add     rsp, 8
 * 0000000140A1A77C: call    loc_140A1A76F
 * 0000000140A1A781: add     rsp, 8
 * 0000000140A1A785: call    loc_140A1A778
 * 0000000140A1A78A: add     rsp, 8
 * 0000000140A1A78E: call    loc_140A1A781
 * 0000000140A1A793: add     rsp, 8
 * 0000000140A1A797: call    loc_140A1A78A
 * 0000000140A1A79C: add     rsp, 8
 * 0000000140A1A7A0: call    loc_140A1A793
 * 0000000140A1A7A5: add     rsp, 8
 * 0000000140A1A7A9: call    loc_140A1A79C
 * 0000000140A1A7AE: add     rsp, 8
 * 0000000140A1A7B2: call    loc_140A1A7A5
 * 0000000140A1A7B7: add     rsp, 8
 * 0000000140A1A7BB: call    loc_140A1A7AE
 * 0000000140A1A7C0: add     rsp, 8
 * 0000000140A1A7C4: call    loc_140A1A7B7
 * 0000000140A1A7C9: add     rsp, 8
 * 0000000140A1A7CD: call    loc_140A1A7C0
 * 0000000140A1A7D2: add     rsp, 8
 * 0000000140A1A7D6: call    loc_140A1A7C9
 * 0000000140A1A7DB: add     rsp, 8
 * 0000000140A1A7DF: call    loc_140A1A7D2
 * 0000000140A1A7E4: add     rsp, 8
 * 0000000140A1A7E8: call    loc_140A1A7DB
 * 0000000140A1A7ED: add     rsp, 8
 * 0000000140A1A7F1: call    loc_140A1A7E4
 * 0000000140A1A7F6: add     rsp, 8
 * 0000000140A1A7FA: call    loc_140A1A7ED
 * 0000000140A1A7FF: add     rsp, 8
 * 0000000140A1A803: call    loc_140A1A7F6
 * 0000000140A1A808: add     rsp, 8
 * 0000000140A1A80C: call    loc_140A1A7FF
 * 0000000140A1A811: add     rsp, 8
 * 0000000140A1A815: call    loc_140A1A808
 * 0000000140A1A81A: add     rsp, 8
 * 0000000140A1A81E: call    loc_140A1A811
 * 0000000140A1A823: add     rsp, 8
 * 0000000140A1A827: call    loc_140A1A81A
 * 0000000140A1A82C: add     rsp, 8
 * 0000000140A1A830: call    loc_140A1A823
 * 0000000140A1A835: add     rsp, 8
 * 0000000140A1A839: call    loc_140A1A82C
 * 0000000140A1A83E: add     rsp, 8
 * 0000000140A1A842: call    loc_140A1A835
 * 0000000140A1A847: add     rsp, 8
 * 0000000140A1A84B: call    loc_140A1A83E
 * 0000000140A1A850: add     rsp, 8
 * 0000000140A1A854: call    loc_140A1A847
 * 0000000140A1A859: add     rsp, 8
 * 0000000140A1A85D: call    loc_140A1A850
 * 0000000140A1A862: add     rsp, 8
 * 0000000140A1A866: mov     eax, 0DADAh
 * 0000000140A1A86B: lfence
 * 0000000140A1A86E: bt      [rsp-0F0h+arg_E8], 9
 * 0000000140A1A874: jnb     short loc_140A1A877
 * 0000000140A1A876: sti
 * 0000000140A1A877: add     rsp, 10h
 * 0000000140A1A87B: retn
 */
