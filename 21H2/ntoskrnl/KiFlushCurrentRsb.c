/*
 * XREFs of KiFlushCurrentRsb @ 0x140413D80
 * Callers:
 *     KiUpdateSpeculationControl @ 0x14021ED00 (KiUpdateSpeculationControl.c)
 *     KiUpdateStibpPairing @ 0x14021F5B0 (KiUpdateStibpPairing.c)
 *     KiHandleMcheck @ 0x140512720 (KiHandleMcheck.c)
 *     KiProcessNMI @ 0x140512A70 (KiProcessNMI.c)
 *     KeFlushRsb @ 0x14051B218 (KeFlushRsb.c)
 *     KePrepareToDispatchVirtualProcessor @ 0x14051B320 (KePrepareToDispatchVirtualProcessor.c)
 *     KiFlushRsbTarget @ 0x14051B6C0 (KiFlushRsbTarget.c)
 * Callees:
 *     KiFlushCurrentRsb @ 0x140413D80 (KiFlushCurrentRsb.c)
 */

/*
 * Hex-Rays decompilation failed for KiFlushCurrentRsb @ 0x140413D80
 * Reason: Hex-Rays returned no pseudocode for 0x140413D80
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140413D80: sub     rsp, 8
 * 0000000140413D84: pushfq
 * 0000000140413D85: cli
 * 0000000140413D86: call    loc_140413E99
 * 0000000140413D8B: add     rsp, 8
 * 0000000140413D8F: call    loc_140413EA2
 * 0000000140413D94: add     rsp, 8
 * 0000000140413D98: call    loc_140413D8B
 * 0000000140413D9D: add     rsp, 8
 * 0000000140413DA1: call    loc_140413D94
 * 0000000140413DA6: add     rsp, 8
 * 0000000140413DAA: call    loc_140413D9D
 * 0000000140413DAF: add     rsp, 8
 * 0000000140413DB3: call    loc_140413DA6
 * 0000000140413DB8: add     rsp, 8
 * 0000000140413DBC: call    loc_140413DAF
 * 0000000140413DC1: add     rsp, 8
 * 0000000140413DC5: call    loc_140413DB8
 * 0000000140413DCA: add     rsp, 8
 * 0000000140413DCE: call    loc_140413DC1
 * 0000000140413DD3: add     rsp, 8
 * 0000000140413DD7: call    loc_140413DCA
 * 0000000140413DDC: add     rsp, 8
 * 0000000140413DE0: call    loc_140413DD3
 * 0000000140413DE5: add     rsp, 8
 * 0000000140413DE9: call    loc_140413DDC
 * 0000000140413DEE: add     rsp, 8
 * 0000000140413DF2: call    loc_140413DE5
 * 0000000140413DF7: add     rsp, 8
 * 0000000140413DFB: call    loc_140413DEE
 * 0000000140413E00: add     rsp, 8
 * 0000000140413E04: call    loc_140413DF7
 * 0000000140413E09: add     rsp, 8
 * 0000000140413E0D: call    loc_140413E00
 * 0000000140413E12: add     rsp, 8
 * 0000000140413E16: call    loc_140413E09
 * 0000000140413E1B: add     rsp, 8
 * 0000000140413E1F: call    loc_140413E12
 * 0000000140413E24: add     rsp, 8
 * 0000000140413E28: call    loc_140413E1B
 * 0000000140413E2D: add     rsp, 8
 * 0000000140413E31: call    loc_140413E24
 * 0000000140413E36: add     rsp, 8
 * 0000000140413E3A: call    loc_140413E2D
 * 0000000140413E3F: add     rsp, 8
 * 0000000140413E43: call    loc_140413E36
 * 0000000140413E48: add     rsp, 8
 * 0000000140413E4C: call    loc_140413E3F
 * 0000000140413E51: add     rsp, 8
 * 0000000140413E55: call    loc_140413E48
 * 0000000140413E5A: add     rsp, 8
 * 0000000140413E5E: call    loc_140413E51
 * 0000000140413E63: add     rsp, 8
 * 0000000140413E67: call    loc_140413E5A
 * 0000000140413E6C: add     rsp, 8
 * 0000000140413E70: call    loc_140413E63
 * 0000000140413E75: add     rsp, 8
 * 0000000140413E79: call    loc_140413E6C
 * 0000000140413E7E: add     rsp, 8
 * 0000000140413E82: call    loc_140413E75
 * 0000000140413E87: add     rsp, 8
 * 0000000140413E8B: call    loc_140413E7E
 * 0000000140413E90: add     rsp, 8
 * 0000000140413E94: call    loc_140413E87
 * 0000000140413E99: add     rsp, 8
 * 0000000140413E9D: call    loc_140413E90
 * 0000000140413EA2: add     rsp, 8
 * 0000000140413EA6: mov     eax, 0DADAh
 * 0000000140413EAB: lfence
 * 0000000140413EAE: bt      [rsp-0F0h+arg_E8], 9
 * 0000000140413EB4: jnb     short loc_140413EB7
 * 0000000140413EB6: sti
 * 0000000140413EB7: add     rsp, 10h
 * 0000000140413EBB: retn
 */
