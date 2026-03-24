/*
 * XREFs of NVMeControllerPanicResetActionWorkItem @ 0x1C0016B90
 * Callers:
 *     <none>
 * Callees:
 *     NVMeControllerStartFailureEventLog @ 0x1C0009154 (NVMeControllerStartFailureEventLog.c)
 *     ControllerReset @ 0x1C0009E1C (ControllerReset.c)
 *     NVMeCancelAllCompletionQueueDpc @ 0x1C000BBC8 (NVMeCancelAllCompletionQueueDpc.c)
 *     NVMeControllerCompleteAllIORequests @ 0x1C000C174 (NVMeControllerCompleteAllIORequests.c)
 *     NVMeControllerInitPart1 @ 0x1C000C5DC (NVMeControllerInitPart1.c)
 *     NVMeControllerInitPart2 @ 0x1C000C7A0 (NVMeControllerInitPart2.c)
 *     NVMeControllerInitPart3 @ 0x1C000C9E4 (NVMeControllerInitPart3.c)
 *     NVMeQueuesReInit @ 0x1C000F2D0 (NVMeQueuesReInit.c)
 *     NvmSubsystemReset @ 0x1C000F8F8 (NvmSubsystemReset.c)
 */

/*
 * Hex-Rays decompilation failed for NVMeControllerPanicResetActionWorkItem @ 0x1C0016B90
 * Reason: Hex-Rays returned no pseudocode for 0x1C0016B90
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0016B90: mov     [rsp+arg_0], rbx
 * 00000001C0016B95: push    rdi
 * 00000001C0016B96: sub     rsp, 40h
 * 00000001C0016B9A: lock bts dword ptr [rcx+0ED4h], 0
 * 00000001C0016BA3: mov     rdi, r8
 * 00000001C0016BA6: mov     rbx, rcx
 * 00000001C0016BA9: jb      loc_1C0016D4B
 * 00000001C0016BAF: mov     edx, 78h ; 'x'
 * 00000001C0016BB4: call    cs:__imp_StorPortPause
 * 00000001C0016BBB: nop     dword ptr [rax+rax+00h]
 * 00000001C0016BC0: mov     eax, [rbx+18h]
 * 00000001C0016BC3: mov     dl, 0Eh
 * 00000001C0016BC5: and     eax, 0FFFFFFFEh
 * 00000001C0016BC8: mov     rcx, rbx
 * 00000001C0016BCB: or      eax, 10h
 * 00000001C0016BCE: mov     [rbx+18h], eax
 * 00000001C0016BD1: call    NVMeControllerCompleteAllIORequests
 * 00000001C0016BD6: mov     rcx, rbx
 * 00000001C0016BD9: call    NVMeCancelAllCompletionQueueDpc
 * 00000001C0016BDE: mov     rax, [rbx+0F78h]
 * 00000001C0016BE5: mov     r8d, 989680h
 * 00000001C0016BEB: mov     rdx, rbx
 * 00000001C0016BEE: movzx   ecx, word ptr [rax]
 * 00000001C0016BF1: imul    eax, ecx, 3E8h
 * 00000001C0016BF7: mov     ecx, 51h ; 'Q'
 * 00000001C0016BFC: cmp     eax, r8d
 * 00000001C0016BFF: cmovb   r8d, eax
 * 00000001C0016C03: call    cs:__imp_StorPortExtendedFunction
 * 00000001C0016C0A: nop     dword ptr [rax+rax+00h]
 * 00000001C0016C0F: mov     rax, [rbx+0F78h]
 * 00000001C0016C16: mov     r9d, 7
 * 00000001C0016C1C: add     rax, 2
 * 00000001C0016C20: xor     r8d, r8d
 * 00000001C0016C23: mov     [rsp+48h+var_18], rax
 * 00000001C0016C28: mov     rdx, rbx
 * 00000001C0016C2B: lea     rax, aControllerPani_4; "Controller Panic, In panic reset workfl"...
 * 00000001C0016C32: mov     [rsp+48h+var_20], 1
 * 00000001C0016C3A: lea     ecx, [r9+5Bh]
 * 00000001C0016C3E: mov     [rsp+48h+var_28], rax
 * 00000001C0016C43: call    cs:__imp_StorPortExtendedFunction
 * 00000001C0016C4A: nop     dword ptr [rax+rax+00h]
 * 00000001C0016C4F: mov     rax, [rbx+0F78h]
 * 00000001C0016C56: test    byte ptr [rax+2], 1
 * 00000001C0016C5A: jz      short loc_1C0016C68
 * 00000001C0016C5C: mov     rcx, rbx
 * 00000001C0016C5F: call    ControllerReset
 * 00000001C0016C64: test    al, al
 * 00000001C0016C66: jnz     short loc_1C0016CB3
 * 00000001C0016C68: mov     rax, [rbx+0F78h]
 * 00000001C0016C6F: test    byte ptr [rax+2], 2
 * 00000001C0016C73: jz      short loc_1C0016C81
 * 00000001C0016C75: mov     rcx, rbx
 * 00000001C0016C78: call    NvmSubsystemReset
 * 00000001C0016C7D: test    al, al
 * 00000001C0016C7F: jz      short loc_1C0016CAC
 * 00000001C0016C81: mov     rax, [rbx+0F78h]
 * 00000001C0016C88: test    byte ptr [rax+2], 4
 * 00000001C0016C8C: jz      loc_1C0016D16
 * 00000001C0016C92: xor     r8d, r8d
 * 00000001C0016C95: mov     rdx, rbx
 * 00000001C0016C98: lea     ecx, [r8+66h]
 * 00000001C0016C9C: call    cs:__imp_StorPortExtendedFunction
 * 00000001C0016CA3: nop     dword ptr [rax+rax+00h]
 * 00000001C0016CA8: test    eax, eax
 * 00000001C0016CAA: jnz     short loc_1C0016D16
 * 00000001C0016CAC: or      byte ptr [rbx+0EC0h], 4
 * 00000001C0016CB3: and     dword ptr [rbx+18h], 0FFFFFFEFh
 * 00000001C0016CB7: mov     rcx, rbx
 * 00000001C0016CBA: call    NVMeQueuesReInit
 * 00000001C0016CBF: xor     edx, edx
 * 00000001C0016CC1: mov     rcx, rbx; int
 * 00000001C0016CC4: call    NVMeControllerInitPart1
 * 00000001C0016CC9: test    al, al
 * 00000001C0016CCB: jz      short loc_1C0016D16
 * 00000001C0016CCD: mov     r8b, 1
 * 00000001C0016CD0: xor     edx, edx
 * 00000001C0016CD2: mov     rcx, rbx; int
 * 00000001C0016CD5: call    NVMeControllerInitPart2
 * 00000001C0016CDA: test    al, al
 * 00000001C0016CDC: jz      short loc_1C0016D16
 * 00000001C0016CDE: mov     dl, 1
 * 00000001C0016CE0: mov     rcx, rbx; int
 * 00000001C0016CE3: call    NVMeControllerInitPart3
 * 00000001C0016CE8: test    al, al
 * 00000001C0016CEA: jz      short loc_1C0016D16
 * 00000001C0016CEC: xor     ecx, ecx
 * 00000001C0016CEE: cmp     [rbx+0C8h], ecx
 * 00000001C0016CF4: jle     short loc_1C0016D16
 * 00000001C0016CF6: lea     rax, [rbx+6B8h]
 * 00000001C0016CFD: mov     rdx, [rax]
 * 00000001C0016D00: test    rdx, rdx
 * 00000001C0016D03: jz      short loc_1C0016D08
 * 00000001C0016D05: inc     dword ptr [rdx+2Ch]
 * 00000001C0016D08: inc     ecx
 * 00000001C0016D0A: add     rax, 8
 * 00000001C0016D0E: cmp     ecx, [rbx+0C8h]
 * 00000001C0016D14: jl      short loc_1C0016CFD
 * 00000001C0016D16: and     dword ptr [rbx+0ED4h], 0FFFFFFFEh
 * 00000001C0016D1D: mov     rcx, rbx
 * 00000001C0016D20: call    cs:__imp_StorPortResume
 * 00000001C0016D27: nop     dword ptr [rax+rax+00h]
 * 00000001C0016D2C: mov     rcx, rbx
 * 00000001C0016D2F: call    NVMeControllerStartFailureEventLog
 * 00000001C0016D34: mov     r8, rdi
 * 00000001C0016D37: mov     rdx, rbx
 * 00000001C0016D3A: mov     ecx, 1Fh
 * 00000001C0016D3F: call    cs:__imp_StorPortExtendedFunction
 * 00000001C0016D46: nop     dword ptr [rax+rax+00h]
 * 00000001C0016D4B: mov     rbx, [rsp+48h+arg_0]
 * 00000001C0016D50: add     rsp, 40h
 * 00000001C0016D54: pop     rdi
 * 00000001C0016D55: retn
 */
