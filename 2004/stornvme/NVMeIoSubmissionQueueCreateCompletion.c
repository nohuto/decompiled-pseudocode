/*
 * XREFs of NVMeIoSubmissionQueueCreateCompletion @ 0x1C0018A70
 * Callers:
 *     <none>
 * Callees:
 *     GetSrbExtension @ 0x1C00044B4 (GetSrbExtension.c)
 */

/*
 * Hex-Rays decompilation failed for NVMeIoSubmissionQueueCreateCompletion @ 0x1C0018A70
 * Reason: Hex-Rays returned no pseudocode for 0x1C0018A70
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0018A70: push    rbx
 * 00000001C0018A72: sub     rsp, 20h
 * 00000001C0018A76: mov     r9, rcx
 * 00000001C0018A79: mov     rcx, rdx
 * 00000001C0018A7C: call    GetSrbExtension
 * 00000001C0018A81: cmp     byte ptr [rdx+3], 1
 * 00000001C0018A85: mov     rbx, rax
 * 00000001C0018A88: jnz     short loc_1C0018AAB
 * 00000001C0018A8A: mov     r8d, 1
 * 00000001C0018A90: lock xadd [r9+330h], r8d
 * 00000001C0018A99: movzx   edx, word ptr [r9+118h]
 * 00000001C0018AA1: inc     r8d
 * 00000001C0018AA4: cmp     r8d, edx
 * 00000001C0018AA7: jnz     short loc_1C0018ACE
 * 00000001C0018AA9: jmp     short loc_1C0018AB3
 * 00000001C0018AAB: mov     dword ptr [r9+1Ch], 16h
 * 00000001C0018AB3: lea     r8, [r9+0F60h]
 * 00000001C0018ABA: mov     rdx, r9
 * 00000001C0018ABD: mov     ecx, 65h ; 'e'
 * 00000001C0018AC2: call    cs:__imp_StorPortExtendedFunction
 * 00000001C0018AC9: nop     dword ptr [rax+rax+00h]
 * 00000001C0018ACE: or      byte ptr [rbx+109Dh], 8
 * 00000001C0018AD5: add     rsp, 20h
 * 00000001C0018AD9: pop     rbx
 * 00000001C0018ADA: retn
 */
