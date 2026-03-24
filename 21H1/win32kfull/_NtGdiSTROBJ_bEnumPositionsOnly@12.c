/*
 * XREFs of _NtGdiSTROBJ_bEnumPositionsOnly@12 @ 0x21ACAA
 * Callers:
 *     <none>
 * Callees:
 *     ?NtGdiSTROBJ_bEnumInternal@@YGHPAU_STROBJ@@PAKPAPAU_GLYPHPOS@@H@Z @ 0x21643D (-NtGdiSTROBJ_bEnumInternal@@YGHPAU_STROBJ@@PAKPAPAU_GLYPHPOS@@H@Z.c)
 */

/*
 * Hex-Rays decompilation failed for _NtGdiSTROBJ_bEnumPositionsOnly@12 @ 0x21ACAA
 * Reason: Hex-Rays returned no pseudocode for 0x21ACAA
 * Fallback: raw IDA disassembly follows.
 *
 * 000000000021ACAA: mov     edi, edi
 * 000000000021ACAC: push    ebp; struct _GLYPHPOS **
 * 000000000021ACAD: mov     ebp, esp
 * 000000000021ACAF: mov     edx, [ebp+arg_4]
 * 000000000021ACB2: mov     ecx, [ebp+arg_0]
 * 000000000021ACB5: push    1; unsigned int *
 * 000000000021ACB7: push    [ebp+arg_8]; struct _STROBJ *
 * 000000000021ACBA: call    ?NtGdiSTROBJ_bEnumInternal@@YGHPAU_STROBJ@@PAKPAPAU_GLYPHPOS@@H@Z; NtGdiSTROBJ_bEnumInternal(_STROBJ *,ulong *,_GLYPHPOS * *,int)
 * 000000000021ACBF: pop     ebp
 * 000000000021ACC0: retn    0Ch
 */
