/*
 * XREFs of _NtGdiSTROBJ_bEnum@12 @ 0x21AC8C
 * Callers:
 *     <none>
 * Callees:
 *     ?NtGdiSTROBJ_bEnumInternal@@YGHPAU_STROBJ@@PAKPAPAU_GLYPHPOS@@H@Z @ 0x21643D (-NtGdiSTROBJ_bEnumInternal@@YGHPAU_STROBJ@@PAKPAPAU_GLYPHPOS@@H@Z.c)
 */

/*
 * Hex-Rays decompilation failed for _NtGdiSTROBJ_bEnum@12 @ 0x21AC8C
 * Reason: Hex-Rays returned no pseudocode for 0x21AC8C
 * Fallback: raw IDA disassembly follows.
 *
 * 000000000021AC8C: mov     edi, edi
 * 000000000021AC8E: push    ebp; struct _GLYPHPOS **
 * 000000000021AC8F: mov     ebp, esp
 * 000000000021AC91: mov     edx, [ebp+arg_4]
 * 000000000021AC94: mov     ecx, [ebp+arg_0]
 * 000000000021AC97: push    0; unsigned int *
 * 000000000021AC99: push    [ebp+arg_8]; struct _STROBJ *
 * 000000000021AC9C: call    ?NtGdiSTROBJ_bEnumInternal@@YGHPAU_STROBJ@@PAKPAPAU_GLYPHPOS@@H@Z; NtGdiSTROBJ_bEnumInternal(_STROBJ *,ulong *,_GLYPHPOS * *,int)
 * 000000000021ACA1: pop     ebp
 * 000000000021ACA2: retn    0Ch
 */
