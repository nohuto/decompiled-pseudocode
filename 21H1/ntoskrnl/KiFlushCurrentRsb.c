/*
 * XREFs of KiFlushCurrentRsb @ 0x140A14600
 * Callers:
 *     KiHandleMcheck @ 0x14050CC70 (KiHandleMcheck.c)
 *     KiProcessNMI @ 0x14050CFB0 (KiProcessNMI.c)
 *     KeFlushRsb @ 0x140515758 (KeFlushRsb.c)
 *     KiFlushRsbTarget @ 0x140515CD0 (KiFlushRsbTarget.c)
 * Callees:
 *     KiFlushCurrentRsb @ 0x140A14600 (KiFlushCurrentRsb.c)
 */

/*
 * Hex-Rays decompilation failed for KiFlushCurrentRsb @ 0x140A14600
 * Reason: Hex-Rays returned no pseudocode for 0x140A14600
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140A14600: sub     rsp, 8
 * 0000000140A14604: pushfq
 * 0000000140A14605: cli
 * 0000000140A14606: call    loc_140A14719
 * 0000000140A1460B: add     rsp, 8
 * 0000000140A1460F: call    loc_140A14722
 * 0000000140A14614: add     rsp, 8
 * 0000000140A14618: call    loc_140A1460B
 * 0000000140A1461D: add     rsp, 8
 * 0000000140A14621: call    loc_140A14614
 * 0000000140A14626: add     rsp, 8
 * 0000000140A1462A: call    loc_140A1461D
 * 0000000140A1462F: add     rsp, 8
 * 0000000140A14633: call    loc_140A14626
 * 0000000140A14638: add     rsp, 8
 * 0000000140A1463C: call    loc_140A1462F
 * 0000000140A14641: add     rsp, 8
 * 0000000140A14645: call    loc_140A14638
 * 0000000140A1464A: add     rsp, 8
 * 0000000140A1464E: call    loc_140A14641
 * 0000000140A14653: add     rsp, 8
 * 0000000140A14657: call    loc_140A1464A
 * 0000000140A1465C: add     rsp, 8
 * 0000000140A14660: call    loc_140A14653
 * 0000000140A14665: add     rsp, 8
 * 0000000140A14669: call    loc_140A1465C
 * 0000000140A1466E: add     rsp, 8
 * 0000000140A14672: call    loc_140A14665
 * 0000000140A14677: add     rsp, 8
 * 0000000140A1467B: call    loc_140A1466E
 * 0000000140A14680: add     rsp, 8
 * 0000000140A14684: call    loc_140A14677
 * 0000000140A14689: add     rsp, 8
 * 0000000140A1468D: call    loc_140A14680
 * 0000000140A14692: add     rsp, 8
 * 0000000140A14696: call    loc_140A14689
 * 0000000140A1469B: add     rsp, 8
 * 0000000140A1469F: call    loc_140A14692
 * 0000000140A146A4: add     rsp, 8
 * 0000000140A146A8: call    loc_140A1469B
 * 0000000140A146AD: add     rsp, 8
 * 0000000140A146B1: call    loc_140A146A4
 * 0000000140A146B6: add     rsp, 8
 * 0000000140A146BA: call    loc_140A146AD
 * 0000000140A146BF: add     rsp, 8
 * 0000000140A146C3: call    loc_140A146B6
 * 0000000140A146C8: add     rsp, 8
 * 0000000140A146CC: call    loc_140A146BF
 * 0000000140A146D1: add     rsp, 8
 * 0000000140A146D5: call    loc_140A146C8
 * 0000000140A146DA: add     rsp, 8
 * 0000000140A146DE: call    loc_140A146D1
 * 0000000140A146E3: add     rsp, 8
 * 0000000140A146E7: call    loc_140A146DA
 * 0000000140A146EC: add     rsp, 8
 * 0000000140A146F0: call    loc_140A146E3
 * 0000000140A146F5: add     rsp, 8
 * 0000000140A146F9: call    loc_140A146EC
 * 0000000140A146FE: add     rsp, 8
 * 0000000140A14702: call    loc_140A146F5
 * 0000000140A14707: add     rsp, 8
 * 0000000140A1470B: call    loc_140A146FE
 * 0000000140A14710: add     rsp, 8
 * 0000000140A14714: call    loc_140A14707
 * 0000000140A14719: add     rsp, 8
 * 0000000140A1471D: call    loc_140A14710
 * 0000000140A14722: add     rsp, 8
 * 0000000140A14726: lfence
 * 0000000140A14729: bt      [rsp-0F0h+arg_E8], 9
 * 0000000140A1472F: jnb     short loc_140A14732
 * 0000000140A14731: sti
 * 0000000140A14732: add     rsp, 10h
 * 0000000140A14736: retn
 */
