/*
 * XREFs of FreeMsiInfo @ 0x1C000A030
 * Callers:
 *     GetInterruptMessageInformation @ 0x1C000A164 (GetInterruptMessageInformation.c)
 *     NVMeControllerRemove @ 0x1C000CE54 (NVMeControllerRemove.c)
 *     NVMeControllerStop @ 0x1C000D258 (NVMeControllerStop.c)
 * Callees:
 *     <none>
 */

/*
 * Hex-Rays decompilation failed for FreeMsiInfo @ 0x1C000A030
 * Reason: Hex-Rays returned no pseudocode for 0x1C000A030
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C000A030: mov     [rsp+arg_0], rbx
 * 00000001C000A035: push    rdi
 * 00000001C000A036: sub     rsp, 20h
 * 00000001C000A03A: mov     r8, [rcx+108h]
 * 00000001C000A041: xor     edi, edi
 * 00000001C000A043: mov     rbx, rcx
 * 00000001C000A046: test    r8, r8
 * 00000001C000A049: jz      short loc_1C000A064
 * 00000001C000A04B: mov     rdx, rcx
 * 00000001C000A04E: lea     ecx, [rdi+1]
 * 00000001C000A051: call    cs:__imp_StorPortExtendedFunction
 * 00000001C000A058: nop     dword ptr [rax+rax+00h]
 * 00000001C000A05D: mov     [rbx+108h], rdi
 * 00000001C000A064: mov     r8, [rbx+100h]
 * 00000001C000A06B: test    r8, r8
 * 00000001C000A06E: jz      short loc_1C000A08B
 * 00000001C000A070: mov     rdx, rbx
 * 00000001C000A073: mov     ecx, 1
 * 00000001C000A078: call    cs:__imp_StorPortExtendedFunction
 * 00000001C000A07F: nop     dword ptr [rax+rax+00h]
 * 00000001C000A084: mov     [rbx+100h], rdi
 * 00000001C000A08B: mov     [rbx+0F8h], di
 * 00000001C000A092: mov     rbx, [rsp+28h+arg_0]
 * 00000001C000A097: add     rsp, 20h
 * 00000001C000A09B: pop     rdi
 * 00000001C000A09C: retn
 */
