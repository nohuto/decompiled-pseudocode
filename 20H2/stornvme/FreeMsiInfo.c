/*
 * XREFs of FreeMsiInfo @ 0x1C0009FE0
 * Callers:
 *     GetInterruptMessageInformation @ 0x1C000A114 (GetInterruptMessageInformation.c)
 *     NVMeControllerRemove @ 0x1C000CE6C (NVMeControllerRemove.c)
 *     NVMeControllerStop @ 0x1C000D270 (NVMeControllerStop.c)
 * Callees:
 *     <none>
 */

/*
 * Hex-Rays decompilation failed for FreeMsiInfo @ 0x1C0009FE0
 * Reason: Hex-Rays returned no pseudocode for 0x1C0009FE0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0009FE0: mov     [rsp+arg_0], rbx
 * 00000001C0009FE5: push    rdi
 * 00000001C0009FE6: sub     rsp, 20h
 * 00000001C0009FEA: mov     r8, [rcx+108h]
 * 00000001C0009FF1: xor     edi, edi
 * 00000001C0009FF3: mov     rbx, rcx
 * 00000001C0009FF6: test    r8, r8
 * 00000001C0009FF9: jz      short loc_1C000A014
 * 00000001C0009FFB: mov     rdx, rcx
 * 00000001C0009FFE: lea     ecx, [rdi+1]
 * 00000001C000A001: call    cs:__imp_StorPortExtendedFunction
 * 00000001C000A008: nop     dword ptr [rax+rax+00h]
 * 00000001C000A00D: mov     [rbx+108h], rdi
 * 00000001C000A014: mov     r8, [rbx+100h]
 * 00000001C000A01B: test    r8, r8
 * 00000001C000A01E: jz      short loc_1C000A03B
 * 00000001C000A020: mov     rdx, rbx
 * 00000001C000A023: mov     ecx, 1
 * 00000001C000A028: call    cs:__imp_StorPortExtendedFunction
 * 00000001C000A02F: nop     dword ptr [rax+rax+00h]
 * 00000001C000A034: mov     [rbx+100h], rdi
 * 00000001C000A03B: mov     [rbx+0F8h], di
 * 00000001C000A042: mov     rbx, [rsp+28h+arg_0]
 * 00000001C000A047: add     rsp, 20h
 * 00000001C000A04B: pop     rdi
 * 00000001C000A04C: retn
 */
