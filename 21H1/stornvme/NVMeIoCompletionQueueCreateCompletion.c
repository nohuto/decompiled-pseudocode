/*
 * XREFs of NVMeIoCompletionQueueCreateCompletion @ 0x1C00183B0
 * Callers:
 *     <none>
 * Callees:
 *     GetSrbExtension @ 0x1C00044B4 (GetSrbExtension.c)
 */

/*
 * Hex-Rays decompilation failed for NVMeIoCompletionQueueCreateCompletion @ 0x1C00183B0
 * Reason: Hex-Rays returned no pseudocode for 0x1C00183B0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00183B0: push    rbx
 * 00000001C00183B2: sub     rsp, 20h
 * 00000001C00183B6: mov     r9, rcx
 * 00000001C00183B9: mov     rcx, rdx
 * 00000001C00183BC: call    GetSrbExtension
 * 00000001C00183C1: cmp     byte ptr [rdx+3], 1
 * 00000001C00183C5: mov     rbx, rax
 * 00000001C00183C8: jnz     short loc_1C00183EB
 * 00000001C00183CA: mov     r8d, 1
 * 00000001C00183D0: lock xadd [r9+334h], r8d
 * 00000001C00183D9: movzx   edx, word ptr [r9+11Ah]
 * 00000001C00183E1: inc     r8d
 * 00000001C00183E4: cmp     r8d, edx
 * 00000001C00183E7: jnz     short loc_1C001840E
 * 00000001C00183E9: jmp     short loc_1C00183F3
 * 00000001C00183EB: mov     dword ptr [r9+1Ch], 17h
 * 00000001C00183F3: lea     r8, [r9+0F48h]
 * 00000001C00183FA: mov     rdx, r9
 * 00000001C00183FD: mov     ecx, 65h ; 'e'
 * 00000001C0018402: call    cs:__imp_StorPortExtendedFunction
 * 00000001C0018409: nop     dword ptr [rax+rax+00h]
 * 00000001C001840E: or      byte ptr [rbx+109Dh], 8
 * 00000001C0018415: add     rsp, 20h
 * 00000001C0018419: pop     rbx
 * 00000001C001841A: retn
 */
