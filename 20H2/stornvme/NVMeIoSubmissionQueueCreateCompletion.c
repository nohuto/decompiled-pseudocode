/*
 * XREFs of NVMeIoSubmissionQueueCreateCompletion @ 0x1C00189D0
 * Callers:
 *     <none>
 * Callees:
 *     GetSrbExtension @ 0x1C00044B4 (GetSrbExtension.c)
 */

/*
 * Hex-Rays decompilation failed for NVMeIoSubmissionQueueCreateCompletion @ 0x1C00189D0
 * Reason: Hex-Rays returned no pseudocode for 0x1C00189D0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00189D0: push    rbx
 * 00000001C00189D2: sub     rsp, 20h
 * 00000001C00189D6: mov     r9, rcx
 * 00000001C00189D9: mov     rcx, rdx
 * 00000001C00189DC: call    GetSrbExtension
 * 00000001C00189E1: cmp     byte ptr [rdx+3], 1
 * 00000001C00189E5: mov     rbx, rax
 * 00000001C00189E8: jnz     short loc_1C0018A0B
 * 00000001C00189EA: mov     r8d, 1
 * 00000001C00189F0: lock xadd [r9+330h], r8d
 * 00000001C00189F9: movzx   edx, word ptr [r9+118h]
 * 00000001C0018A01: inc     r8d
 * 00000001C0018A04: cmp     r8d, edx
 * 00000001C0018A07: jnz     short loc_1C0018A2E
 * 00000001C0018A09: jmp     short loc_1C0018A13
 * 00000001C0018A0B: mov     dword ptr [r9+1Ch], 16h
 * 00000001C0018A13: lea     r8, [r9+0F60h]
 * 00000001C0018A1A: mov     rdx, r9
 * 00000001C0018A1D: mov     ecx, 65h ; 'e'
 * 00000001C0018A22: call    cs:__imp_StorPortExtendedFunction
 * 00000001C0018A29: nop     dword ptr [rax+rax+00h]
 * 00000001C0018A2E: or      byte ptr [rbx+109Dh], 8
 * 00000001C0018A35: add     rsp, 20h
 * 00000001C0018A39: pop     rbx
 * 00000001C0018A3A: retn
 */
