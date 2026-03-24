/*
 * XREFs of __guard_retpoline_import_r10 @ 0x140A1A420
 * Callers:
 *     <none>
 * Callees:
 *     __guard_retpoline_import_r10_log_event @ 0x140A1A500 (__guard_retpoline_import_r10_log_event.c)
 *     __guard_retpoline_exit @ 0x140A1A560 (__guard_retpoline_exit.c)
 */

/*
 * Hex-Rays decompilation failed for __guard_retpoline_import_r10 @ 0x140A1A420
 * Reason: Hex-Rays returned no pseudocode for 0x140A1A420
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140A1A420: sub     rsp, 18h
 * 0000000140A1A424: mov     [rsp+18h+var_18], rax
 * 0000000140A1A428: mov     [rsp+18h+var_10], r11
 * 0000000140A1A42D: mov     r11, offset _retpoline_image_bitmap
 * 0000000140A1A437: mov     r11, [r11]
 * 0000000140A1A43A: test    r11, r11
 * 0000000140A1A43D: jz      short loc_140A1A48F
 * 0000000140A1A43F: mov     rax, r10
 * 0000000140A1A442: shr     rax, 10h
 * 0000000140A1A446: bt      [r11], rax
 * 0000000140A1A44A: jnb     short loc_140A1A45B
 * 0000000140A1A44C: mov     rax, [rsp+18h+var_18]
 * 0000000140A1A450: mov     r11, [rsp+18h+var_10]
 * 0000000140A1A455: add     rsp, 18h
 * 0000000140A1A459: jmp     short __guard_retpoline_import_r10_do_retpoline
 * 0000000140A1A45B: or      byte ptr gs:853h, 1
 * 0000000140A1A464: test    byte ptr gs:853h, 2
 * 0000000140A1A46D: jnz     short loc_140A1A48F
 * 0000000140A1A46F: call    __guard_retpoline_exit
 * 0000000140A1A474: mov     r11, (offset xmmword_140CFC490+4)
 * 0000000140A1A47E: mov     r11d, [r11]
 * 0000000140A1A481: test    r11d, 2
 * 0000000140A1A488: jz      short loc_140A1A48F
 * 0000000140A1A48A: call    __guard_retpoline_import_r10_log_event
 * 0000000140A1A48F: lfence
 * 0000000140A1A492: mov     rax, [rsp+18h+var_18]
 * 0000000140A1A496: mov     r11, [rsp+18h+var_10]
 * 0000000140A1A49B: add     rsp, 18h
 * 0000000140A1A49F: jmp     r10
 */
