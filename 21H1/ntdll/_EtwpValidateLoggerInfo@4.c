/*
 * XREFs of _EtwpValidateLoggerInfo@4 @ 0x4B2F0042
 * Callers:
 *     _EtwProcessPrivateLoggerRequest@4 @ 0x4B2EFF20 (_EtwProcessPrivateLoggerRequest@4.c)
 * Callees:
 *     _memcmp @ 0x4B2F8860 (_memcmp.c)
 */

/*
 * Hex-Rays decompilation failed for _EtwpValidateLoggerInfo@4 @ 0x4B2F0042
 * Reason: Hex-Rays returned no pseudocode for 0x4B2F0042
 * Fallback: raw IDA disassembly follows.
 *
 * 000000004B2F0042: test    ecx, ecx
 * 000000004B2F0044: jz      short loc_4B2F0071
 * 000000004B2F0046: cmp     dword ptr [ecx], 0B0h
 * 000000004B2F004C: jb      short loc_4B2F0071
 * 000000004B2F004E: test    dword ptr [ecx+2Ch], 20000h
 * 000000004B2F0055: jz      short loc_4B2F0071
 * 000000004B2F0057: push    10h; Size
 * 000000004B2F0059: lea     eax, [ecx+18h]
 * 000000004B2F005C: push    offset _SystemTraceControlGuid; Buf2
 * 000000004B2F0061: push    eax; Buf1
 * 000000004B2F0062: call    _memcmp
 * 000000004B2F0067: add     esp, 0Ch
 * 000000004B2F006A: test    eax, eax
 * 000000004B2F006C: jz      short loc_4B2F0071
 * 000000004B2F006E: xor     eax, eax
 * 000000004B2F0070: retn
 * 000000004B2F0071: push    0Dh
 * 000000004B2F0073: pop     eax
 * 000000004B2F0074: retn
 */
