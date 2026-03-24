/*
 * XREFs of FreeProcessorGroupInfo @ 0x1C000A0A4
 * Callers:
 *     GetProcessorGroupInformation @ 0x1C000A3B4 (GetProcessorGroupInformation.c)
 *     NVMeControllerRemove @ 0x1C000CE54 (NVMeControllerRemove.c)
 * Callees:
 *     <none>
 */

/*
 * Hex-Rays decompilation failed for FreeProcessorGroupInfo @ 0x1C000A0A4
 * Reason: Hex-Rays returned no pseudocode for 0x1C000A0A4
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C000A0A4: mov     [rsp+arg_0], rbx
 * 00000001C000A0A9: push    rdi
 * 00000001C000A0AA: sub     rsp, 20h
 * 00000001C000A0AE: mov     r8, [rcx+0E0h]
 * 00000001C000A0B5: xor     edi, edi
 * 00000001C000A0B7: mov     rbx, rcx
 * 00000001C000A0BA: test    r8, r8
 * 00000001C000A0BD: jz      short loc_1C000A0D8
 * 00000001C000A0BF: mov     rdx, rcx
 * 00000001C000A0C2: lea     ecx, [rdi+1]
 * 00000001C000A0C5: call    cs:__imp_StorPortExtendedFunction
 * 00000001C000A0CC: nop     dword ptr [rax+rax+00h]
 * 00000001C000A0D1: mov     [rbx+0E0h], rdi
 * 00000001C000A0D8: mov     [rbx+0D0h], edi
 * 00000001C000A0DE: mov     rbx, [rsp+28h+arg_0]
 * 00000001C000A0E3: add     rsp, 20h
 * 00000001C000A0E7: pop     rdi
 * 00000001C000A0E8: retn
 */
