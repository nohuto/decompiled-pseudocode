/*
 * XREFs of KiFlushCurrentRsb @ 0x140413E80
 * Callers:
 *     KiUpdateSpeculationControl @ 0x1402C3600 (KiUpdateSpeculationControl.c)
 *     KiUpdateStibpPairing @ 0x1402C3EB0 (KiUpdateStibpPairing.c)
 *     KiHandleMcheck @ 0x140512960 (KiHandleMcheck.c)
 *     KiProcessNMI @ 0x140512CB0 (KiProcessNMI.c)
 *     KeFlushRsb @ 0x14051B458 (KeFlushRsb.c)
 *     KePrepareToDispatchVirtualProcessor @ 0x14051B560 (KePrepareToDispatchVirtualProcessor.c)
 *     KiFlushRsbTarget @ 0x14051B900 (KiFlushRsbTarget.c)
 * Callees:
 *     KiFlushCurrentRsb @ 0x140413E80 (KiFlushCurrentRsb.c)
 */

/*
 * Hex-Rays decompilation failed for KiFlushCurrentRsb @ 0x140413E80
 * Reason: Hex-Rays returned no pseudocode for 0x140413E80
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140413E80: sub     rsp, 8
 * 0000000140413E84: pushfq
 * 0000000140413E85: cli
 * 0000000140413E86: call    loc_140413F99
 * 0000000140413E8B: add     rsp, 8
 * 0000000140413E8F: call    loc_140413FA2
 * 0000000140413E94: add     rsp, 8
 * 0000000140413E98: call    loc_140413E8B
 * 0000000140413E9D: add     rsp, 8
 * 0000000140413EA1: call    loc_140413E94
 * 0000000140413EA6: add     rsp, 8
 * 0000000140413EAA: call    loc_140413E9D
 * 0000000140413EAF: add     rsp, 8
 * 0000000140413EB3: call    loc_140413EA6
 * 0000000140413EB8: add     rsp, 8
 * 0000000140413EBC: call    loc_140413EAF
 * 0000000140413EC1: add     rsp, 8
 * 0000000140413EC5: call    loc_140413EB8
 * 0000000140413ECA: add     rsp, 8
 * 0000000140413ECE: call    loc_140413EC1
 * 0000000140413ED3: add     rsp, 8
 * 0000000140413ED7: call    loc_140413ECA
 * 0000000140413EDC: add     rsp, 8
 * 0000000140413EE0: call    loc_140413ED3
 * 0000000140413EE5: add     rsp, 8
 * 0000000140413EE9: call    loc_140413EDC
 * 0000000140413EEE: add     rsp, 8
 * 0000000140413EF2: call    loc_140413EE5
 * 0000000140413EF7: add     rsp, 8
 * 0000000140413EFB: call    loc_140413EEE
 * 0000000140413F00: add     rsp, 8
 * 0000000140413F04: call    loc_140413EF7
 * 0000000140413F09: add     rsp, 8
 * 0000000140413F0D: call    loc_140413F00
 * 0000000140413F12: add     rsp, 8
 * 0000000140413F16: call    loc_140413F09
 * 0000000140413F1B: add     rsp, 8
 * 0000000140413F1F: call    loc_140413F12
 * 0000000140413F24: add     rsp, 8
 * 0000000140413F28: call    loc_140413F1B
 * 0000000140413F2D: add     rsp, 8
 * 0000000140413F31: call    loc_140413F24
 * 0000000140413F36: add     rsp, 8
 * 0000000140413F3A: call    loc_140413F2D
 * 0000000140413F3F: add     rsp, 8
 * 0000000140413F43: call    loc_140413F36
 * 0000000140413F48: add     rsp, 8
 * 0000000140413F4C: call    loc_140413F3F
 * 0000000140413F51: add     rsp, 8
 * 0000000140413F55: call    loc_140413F48
 * 0000000140413F5A: add     rsp, 8
 * 0000000140413F5E: call    loc_140413F51
 * 0000000140413F63: add     rsp, 8
 * 0000000140413F67: call    loc_140413F5A
 * 0000000140413F6C: add     rsp, 8
 * 0000000140413F70: call    loc_140413F63
 * 0000000140413F75: add     rsp, 8
 * 0000000140413F79: call    loc_140413F6C
 * 0000000140413F7E: add     rsp, 8
 * 0000000140413F82: call    loc_140413F75
 * 0000000140413F87: add     rsp, 8
 * 0000000140413F8B: call    loc_140413F7E
 * 0000000140413F90: add     rsp, 8
 * 0000000140413F94: call    loc_140413F87
 * 0000000140413F99: add     rsp, 8
 * 0000000140413F9D: call    loc_140413F90
 * 0000000140413FA2: add     rsp, 8
 * 0000000140413FA6: mov     eax, 0DADAh
 * 0000000140413FAB: lfence
 * 0000000140413FAE: bt      [rsp-0F0h+arg_E8], 9
 * 0000000140413FB4: jnb     short loc_140413FB7
 * 0000000140413FB6: sti
 * 0000000140413FB7: add     rsp, 10h
 * 0000000140413FBB: retn
 */
