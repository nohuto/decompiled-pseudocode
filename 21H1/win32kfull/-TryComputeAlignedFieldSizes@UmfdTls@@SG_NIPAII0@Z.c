/*
 * XREFs of ?TryComputeAlignedFieldSizes@UmfdTls@@SG_NIPAII0@Z @ 0x8C424
 * Callers:
 *     ?CreateUsermodeParameters@QueryGlyphMetricsPlusBitsRequest@@UAEJPAVUmfdTls@@PAPAX@Z @ 0xF8A50 (-CreateUsermodeParameters@QueryGlyphMetricsPlusBitsRequest@@UAEJPAVUmfdTls@@PAPAX@Z.c)
 * Callees:
 *     ?TryGetAlignedFieldSize@UmfdTls@@CG_NIPAI@Z @ 0x8C526 (-TryGetAlignedFieldSize@UmfdTls@@CG_NIPAI@Z.c)
 */

/*
 * Hex-Rays decompilation failed for ?TryComputeAlignedFieldSizes@UmfdTls@@SG_NIPAII0@Z @ 0x8C424
 * Reason: Hex-Rays returned no pseudocode for 0x8C424
 * Fallback: raw IDA disassembly follows.
 *
 * 000000000008C424: mov     edi, edi
 * 000000000008C426: push    ebp; unsigned int
 * 000000000008C427: mov     ebp, esp
 * 000000000008C429: call    ?TryGetAlignedFieldSize@UmfdTls@@CG_NIPAI@Z; UmfdTls::TryGetAlignedFieldSize(uint,uint *)
 * 000000000008C42E: test    al, al
 * 000000000008C430: jz      short loc_8C441
 * 000000000008C432: mov     edx, [ebp+arg_4]
 * 000000000008C435: mov     ecx, [ebp+arg_0]
 * 000000000008C438: call    ?TryGetAlignedFieldSize@UmfdTls@@CG_NIPAI@Z; UmfdTls::TryGetAlignedFieldSize(uint,uint *)
 * 000000000008C43D: pop     ebp
 * 000000000008C43E: retn    8
 * 000000000008C441: xor     al, al
 * 000000000008C443: jmp     short loc_8C43D
 */
