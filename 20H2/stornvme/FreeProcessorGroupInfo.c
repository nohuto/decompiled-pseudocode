/*
 * XREFs of FreeProcessorGroupInfo @ 0x1C000A054
 * Callers:
 *     GetProcessorGroupInformation @ 0x1C000A364 (GetProcessorGroupInformation.c)
 *     NVMeControllerRemove @ 0x1C000CE6C (NVMeControllerRemove.c)
 * Callees:
 *     <none>
 */

/*
 * Hex-Rays decompilation failed for FreeProcessorGroupInfo @ 0x1C000A054
 * Reason: Hex-Rays returned no pseudocode for 0x1C000A054
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C000A054: mov     [rsp+arg_0], rbx
 * 00000001C000A059: push    rdi
 * 00000001C000A05A: sub     rsp, 20h
 * 00000001C000A05E: mov     r8, [rcx+0E0h]
 * 00000001C000A065: xor     edi, edi
 * 00000001C000A067: mov     rbx, rcx
 * 00000001C000A06A: test    r8, r8
 * 00000001C000A06D: jz      short loc_1C000A088
 * 00000001C000A06F: mov     rdx, rcx
 * 00000001C000A072: lea     ecx, [rdi+1]
 * 00000001C000A075: call    cs:__imp_StorPortExtendedFunction
 * 00000001C000A07C: nop     dword ptr [rax+rax+00h]
 * 00000001C000A081: mov     [rbx+0E0h], rdi
 * 00000001C000A088: mov     [rbx+0D0h], edi
 * 00000001C000A08E: mov     rbx, [rsp+28h+arg_0]
 * 00000001C000A093: add     rsp, 20h
 * 00000001C000A097: pop     rdi
 * 00000001C000A098: retn
 */
