/*
 * XREFs of __math_exit @ 0x4B2FB00B
 * Callers:
 *     sub_4B2F5ADF @ 0x4B2F5ADF (sub_4B2F5ADF.c)
 *     sub_4B2F5B9F @ 0x4B2F5B9F (sub_4B2F5B9F.c)
 *     sub_4B2F5EBF @ 0x4B2F5EBF (sub_4B2F5EBF.c)
 *     sub_4B2F5F8D @ 0x4B2F5F8D (sub_4B2F5F8D.c)
 *     sub_4B2F80AF @ 0x4B2F80AF (sub_4B2F80AF.c)
 *     sub_4B2FA48F @ 0x4B2FA48F (sub_4B2FA48F.c)
 * Callees:
 *     __startOneArgErrorHandling @ 0x4B2FB107 (__startOneArgErrorHandling.c)
 */

/*
 * Hex-Rays decompilation failed for __math_exit @ 0x4B2FB00B
 * Reason: Hex-Rays returned no pseudocode for 0x4B2FB00B
 * Fallback: raw IDA disassembly follows.
 *
 * 000000004B2FB00B: mov     ax, [esp+0]
 * 000000004B2FB00F: cmp     ax, 27Fh
 * 000000004B2FB013: jz      short loc_4B2FB033
 * 000000004B2FB015: and     ax, 20h
 * 000000004B2FB019: jz      short loc_4B2FB030
 * 000000004B2FB01B: fstsw   ax
 * 000000004B2FB01E: and     ax, 20h
 * 000000004B2FB022: jz      short loc_4B2FB030
 * 000000004B2FB024: mov     eax, 8
 * 000000004B2FB029: call    __startOneArgErrorHandling
 * 000000004B2FB02E: pop     edx
 * 000000004B2FB02F: retn
 * 000000004B2FB030: fldcw   word ptr [esp+0]
 * 000000004B2FB033: pop     edx
 * 000000004B2FB034: retn
 */
