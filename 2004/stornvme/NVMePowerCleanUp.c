/*
 * XREFs of NVMePowerCleanUp @ 0x1C000E80C
 * Callers:
 *     NVMeControllerRemove @ 0x1C000CE54 (NVMeControllerRemove.c)
 *     NVMeControllerStop @ 0x1C000D258 (NVMeControllerStop.c)
 * Callees:
 *     <none>
 */

/*
 * Hex-Rays decompilation failed for NVMePowerCleanUp @ 0x1C000E80C
 * Reason: Hex-Rays returned no pseudocode for 0x1C000E80C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C000E80C: push    rbx
 * 00000001C000E80E: sub     rsp, 20h
 * 00000001C000E812: and     dword ptr [rcx+670h], 0FFFFFFFAh
 * 00000001C000E819: mov     rbx, rcx
 * 00000001C000E81C: mov     r8, [rcx+698h]
 * 00000001C000E823: mov     rdx, rcx
 * 00000001C000E826: mov     ecx, 22h ; '"'
 * 00000001C000E82B: call    cs:__imp_StorPortExtendedFunction
 * 00000001C000E832: nop     dword ptr [rax+rax+00h]
 * 00000001C000E837: mov     r8, [rbx+660h]
 * 00000001C000E83E: test    r8, r8
 * 00000001C000E841: jz      short loc_1C000E85F
 * 00000001C000E843: mov     rdx, rbx
 * 00000001C000E846: mov     ecx, 1
 * 00000001C000E84B: call    cs:__imp_StorPortExtendedFunction
 * 00000001C000E852: nop     dword ptr [rax+rax+00h]
 * 00000001C000E857: and     qword ptr [rbx+660h], 0
 * 00000001C000E85F: add     rsp, 20h
 * 00000001C000E863: pop     rbx
 * 00000001C000E864: retn
 */
