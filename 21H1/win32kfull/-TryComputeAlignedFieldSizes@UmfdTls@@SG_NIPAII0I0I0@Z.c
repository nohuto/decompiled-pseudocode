/*
 * XREFs of ?TryComputeAlignedFieldSizes@UmfdTls@@SG_NIPAII0I0I0@Z @ 0x8B4F2
 * Callers:
 *     ?CreateUsermodeParameters@QueryFontDataRequest@@UAEJPAVUmfdTls@@PAPAX@Z @ 0x8C20A (-CreateUsermodeParameters@QueryFontDataRequest@@UAEJPAVUmfdTls@@PAPAX@Z.c)
 * Callees:
 *     ?TryGetAlignedFieldSize@UmfdTls@@CG_NIPAI@Z @ 0x8C526 (-TryGetAlignedFieldSize@UmfdTls@@CG_NIPAI@Z.c)
 */

/*
 * Hex-Rays decompilation failed for ?TryComputeAlignedFieldSizes@UmfdTls@@SG_NIPAII0I0I0@Z @ 0x8B4F2
 * Reason: Hex-Rays returned no pseudocode for 0x8B4F2
 * Fallback: raw IDA disassembly follows.
 *
 * 000000000008B4F2: mov     edi, edi
 * 000000000008B4F4: push    ebp; unsigned int
 * 000000000008B4F5: mov     ebp, esp
 * 000000000008B4F7: call    ?TryGetAlignedFieldSize@UmfdTls@@CG_NIPAI@Z; UmfdTls::TryGetAlignedFieldSize(uint,uint *)
 * 000000000008B4FC: test    al, al
 * 000000000008B4FE: jnz     loc_11D87B
 * 000000000008B504: xor     al, al
 * 000000000008B506: jmp     loc_11D8AC
 * 000000000011D87B: mov     edx, [ebp+arg_4]
 * 000000000011D87E: mov     ecx, [ebp+arg_0]
 * 000000000011D881: call    ?TryGetAlignedFieldSize@UmfdTls@@CG_NIPAI@Z; UmfdTls::TryGetAlignedFieldSize(uint,uint *)
 * 000000000011D886: test    al, al
 * 000000000011D888: jz      loc_8B504
 * 000000000011D88E: mov     edx, [ebp+arg_C]
 * 000000000011D891: mov     ecx, [ebp+arg_8]
 * 000000000011D894: call    ?TryGetAlignedFieldSize@UmfdTls@@CG_NIPAI@Z; UmfdTls::TryGetAlignedFieldSize(uint,uint *)
 * 000000000011D899: test    al, al
 * 000000000011D89B: jz      loc_8B504
 * 000000000011D8A1: mov     edx, [ebp+arg_14]
 * 000000000011D8A4: mov     ecx, [ebp+arg_10]
 * 000000000011D8A7: call    ?TryGetAlignedFieldSize@UmfdTls@@CG_NIPAI@Z; UmfdTls::TryGetAlignedFieldSize(uint,uint *)
 * 000000000011D8AC: pop     ebp
 * 000000000011D8AD: retn    18h
 */
