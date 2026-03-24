/*
 * XREFs of FreeProcessorInfo @ 0x1C000A0F0
 * Callers:
 *     GetProcessorInformation @ 0x1C000A544 (GetProcessorInformation.c)
 *     NVMeControllerRemove @ 0x1C000CE54 (NVMeControllerRemove.c)
 *     NVMeControllerStop @ 0x1C000D258 (NVMeControllerStop.c)
 * Callees:
 *     <none>
 */

/*
 * Hex-Rays decompilation failed for FreeProcessorInfo @ 0x1C000A0F0
 * Reason: Hex-Rays returned no pseudocode for 0x1C000A0F0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C000A0F0: push    rbx
 * 00000001C000A0F2: sub     rsp, 20h
 * 00000001C000A0F6: mov     r8, [rcx+0E8h]
 * 00000001C000A0FD: mov     rbx, rcx
 * 00000001C000A100: test    r8, r8
 * 00000001C000A103: jz      short loc_1C000A121
 * 00000001C000A105: mov     rdx, rcx
 * 00000001C000A108: mov     ecx, 1
 * 00000001C000A10D: call    cs:__imp_StorPortExtendedFunction
 * 00000001C000A114: nop     dword ptr [rax+rax+00h]
 * 00000001C000A119: and     qword ptr [rbx+0E8h], 0
 * 00000001C000A121: mov     r8, [rbx+0F0h]
 * 00000001C000A128: test    r8, r8
 * 00000001C000A12B: jz      short loc_1C000A149
 * 00000001C000A12D: mov     rdx, rbx
 * 00000001C000A130: mov     ecx, 1
 * 00000001C000A135: call    cs:__imp_StorPortExtendedFunction
 * 00000001C000A13C: nop     dword ptr [rax+rax+00h]
 * 00000001C000A141: and     qword ptr [rbx+0F0h], 0
 * 00000001C000A149: and     dword ptr [rbx+0D4h], 0
 * 00000001C000A150: and     dword ptr [rbx+0D8h], 0
 * 00000001C000A157: add     rsp, 20h
 * 00000001C000A15B: pop     rbx
 * 00000001C000A15C: retn
 */
