/*
 * XREFs of NVMePowerCleanUp @ 0x1C000E78C
 * Callers:
 *     NVMeControllerRemove @ 0x1C000CE6C (NVMeControllerRemove.c)
 *     NVMeControllerStop @ 0x1C000D270 (NVMeControllerStop.c)
 * Callees:
 *     <none>
 */

/*
 * Hex-Rays decompilation failed for NVMePowerCleanUp @ 0x1C000E78C
 * Reason: Hex-Rays returned no pseudocode for 0x1C000E78C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C000E78C: push    rbx
 * 00000001C000E78E: sub     rsp, 20h
 * 00000001C000E792: and     dword ptr [rcx+670h], 0FFFFFFFAh
 * 00000001C000E799: mov     rbx, rcx
 * 00000001C000E79C: mov     r8, [rcx+698h]
 * 00000001C000E7A3: mov     rdx, rcx
 * 00000001C000E7A6: mov     ecx, 22h ; '"'
 * 00000001C000E7AB: call    cs:__imp_StorPortExtendedFunction
 * 00000001C000E7B2: nop     dword ptr [rax+rax+00h]
 * 00000001C000E7B7: mov     r8, [rbx+660h]
 * 00000001C000E7BE: test    r8, r8
 * 00000001C000E7C1: jz      short loc_1C000E7DF
 * 00000001C000E7C3: mov     rdx, rbx
 * 00000001C000E7C6: mov     ecx, 1
 * 00000001C000E7CB: call    cs:__imp_StorPortExtendedFunction
 * 00000001C000E7D2: nop     dword ptr [rax+rax+00h]
 * 00000001C000E7D7: and     qword ptr [rbx+660h], 0
 * 00000001C000E7DF: add     rsp, 20h
 * 00000001C000E7E3: pop     rbx
 * 00000001C000E7E4: retn
 */
