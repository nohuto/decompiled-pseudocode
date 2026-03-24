/*
 * XREFs of _NtUserDelegateCapturePointers@12 @ 0x160A8D
 * Callers:
 *     <none>
 * Callees:
 *     ?DelegateCapturePointersMitOn@@YGHIPAI0@Z @ 0x15EEA2 (-DelegateCapturePointersMitOn@@YGHIPAI0@Z.c)
 */

/*
 * Hex-Rays decompilation failed for _NtUserDelegateCapturePointers@12 @ 0x160A8D
 * Reason: Hex-Rays returned no pseudocode for 0x160A8D
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000000160A8D: mov     edi, edi
 * 0000000000160A8F: push    ebp; unsigned int *
 * 0000000000160A90: mov     ebp, esp
 * 0000000000160A92: push    [ebp+arg_8]; volatile void *
 * 0000000000160A95: mov     edx, [ebp+arg_4]
 * 0000000000160A98: mov     ecx, [ebp+arg_0]
 * 0000000000160A9B: call    ?DelegateCapturePointersMitOn@@YGHIPAI0@Z; DelegateCapturePointersMitOn(uint,uint *,uint *)
 * 0000000000160AA0: pop     ebp
 * 0000000000160AA1: retn    0Ch
 */
