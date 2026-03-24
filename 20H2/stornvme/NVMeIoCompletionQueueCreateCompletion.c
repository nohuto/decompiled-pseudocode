/*
 * XREFs of NVMeIoCompletionQueueCreateCompletion @ 0x1C0018320
 * Callers:
 *     <none>
 * Callees:
 *     GetSrbExtension @ 0x1C00044B4 (GetSrbExtension.c)
 */

/*
 * Hex-Rays decompilation failed for NVMeIoCompletionQueueCreateCompletion @ 0x1C0018320
 * Reason: Hex-Rays returned no pseudocode for 0x1C0018320
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0018320: push    rbx
 * 00000001C0018322: sub     rsp, 20h
 * 00000001C0018326: mov     r9, rcx
 * 00000001C0018329: mov     rcx, rdx
 * 00000001C001832C: call    GetSrbExtension
 * 00000001C0018331: cmp     byte ptr [rdx+3], 1
 * 00000001C0018335: mov     rbx, rax
 * 00000001C0018338: jnz     short loc_1C001835B
 * 00000001C001833A: mov     r8d, 1
 * 00000001C0018340: lock xadd [r9+334h], r8d
 * 00000001C0018349: movzx   edx, word ptr [r9+11Ah]
 * 00000001C0018351: inc     r8d
 * 00000001C0018354: cmp     r8d, edx
 * 00000001C0018357: jnz     short loc_1C001837E
 * 00000001C0018359: jmp     short loc_1C0018363
 * 00000001C001835B: mov     dword ptr [r9+1Ch], 17h
 * 00000001C0018363: lea     r8, [r9+0F48h]
 * 00000001C001836A: mov     rdx, r9
 * 00000001C001836D: mov     ecx, 65h ; 'e'
 * 00000001C0018372: call    cs:__imp_StorPortExtendedFunction
 * 00000001C0018379: nop     dword ptr [rax+rax+00h]
 * 00000001C001837E: or      byte ptr [rbx+109Dh], 8
 * 00000001C0018385: add     rsp, 20h
 * 00000001C0018389: pop     rbx
 * 00000001C001838A: retn
 */
