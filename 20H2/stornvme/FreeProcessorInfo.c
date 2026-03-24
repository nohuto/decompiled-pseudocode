/*
 * XREFs of FreeProcessorInfo @ 0x1C000A0A0
 * Callers:
 *     GetProcessorInformation @ 0x1C000A4F4 (GetProcessorInformation.c)
 *     NVMeControllerRemove @ 0x1C000CE6C (NVMeControllerRemove.c)
 *     NVMeControllerStop @ 0x1C000D270 (NVMeControllerStop.c)
 * Callees:
 *     <none>
 */

/*
 * Hex-Rays decompilation failed for FreeProcessorInfo @ 0x1C000A0A0
 * Reason: Hex-Rays returned no pseudocode for 0x1C000A0A0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C000A0A0: push    rbx
 * 00000001C000A0A2: sub     rsp, 20h
 * 00000001C000A0A6: mov     r8, [rcx+0E8h]
 * 00000001C000A0AD: mov     rbx, rcx
 * 00000001C000A0B0: test    r8, r8
 * 00000001C000A0B3: jz      short loc_1C000A0D1
 * 00000001C000A0B5: mov     rdx, rcx
 * 00000001C000A0B8: mov     ecx, 1
 * 00000001C000A0BD: call    cs:__imp_StorPortExtendedFunction
 * 00000001C000A0C4: nop     dword ptr [rax+rax+00h]
 * 00000001C000A0C9: and     qword ptr [rbx+0E8h], 0
 * 00000001C000A0D1: mov     r8, [rbx+0F0h]
 * 00000001C000A0D8: test    r8, r8
 * 00000001C000A0DB: jz      short loc_1C000A0F9
 * 00000001C000A0DD: mov     rdx, rbx
 * 00000001C000A0E0: mov     ecx, 1
 * 00000001C000A0E5: call    cs:__imp_StorPortExtendedFunction
 * 00000001C000A0EC: nop     dword ptr [rax+rax+00h]
 * 00000001C000A0F1: and     qword ptr [rbx+0F0h], 0
 * 00000001C000A0F9: and     dword ptr [rbx+0D4h], 0
 * 00000001C000A100: and     dword ptr [rbx+0D8h], 0
 * 00000001C000A107: add     rsp, 20h
 * 00000001C000A10B: pop     rbx
 * 00000001C000A10C: retn
 */
