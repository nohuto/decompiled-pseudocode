/*
 * XREFs of NVMeControllerPanicResetActionWorkItem @ 0x1C0016C10
 * Callers:
 *     <none>
 * Callees:
 *     NVMeControllerStartFailureEventLog @ 0x1C00091A4 (NVMeControllerStartFailureEventLog.c)
 *     ControllerReset @ 0x1C0009E6C (ControllerReset.c)
 *     NVMeCancelAllCompletionQueueDpc @ 0x1C000BC18 (NVMeCancelAllCompletionQueueDpc.c)
 *     NVMeControllerCompleteAllIORequests @ 0x1C000C1C4 (NVMeControllerCompleteAllIORequests.c)
 *     NVMeControllerInitPart1 @ 0x1C000C62C (NVMeControllerInitPart1.c)
 *     NVMeControllerInitPart2 @ 0x1C000C7F0 (NVMeControllerInitPart2.c)
 *     NVMeControllerInitPart3 @ 0x1C000CA34 (NVMeControllerInitPart3.c)
 *     NVMeQueuesReInit @ 0x1C000F348 (NVMeQueuesReInit.c)
 *     NvmSubsystemReset @ 0x1C000F970 (NvmSubsystemReset.c)
 */

/*
 * Hex-Rays decompilation failed for NVMeControllerPanicResetActionWorkItem @ 0x1C0016C10
 * Reason: Hex-Rays returned no pseudocode for 0x1C0016C10
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0016C10: mov     [rsp+arg_0], rbx
 * 00000001C0016C15: push    rdi
 * 00000001C0016C16: sub     rsp, 40h
 * 00000001C0016C1A: lock bts dword ptr [rcx+0ED4h], 0
 * 00000001C0016C23: mov     rdi, r8
 * 00000001C0016C26: mov     rbx, rcx
 * 00000001C0016C29: jb      loc_1C0016DCB
 * 00000001C0016C2F: mov     edx, 78h ; 'x'
 * 00000001C0016C34: call    cs:__imp_StorPortPause
 * 00000001C0016C3B: nop     dword ptr [rax+rax+00h]
 * 00000001C0016C40: mov     eax, [rbx+18h]
 * 00000001C0016C43: mov     dl, 0Eh
 * 00000001C0016C45: and     eax, 0FFFFFFFEh
 * 00000001C0016C48: mov     rcx, rbx
 * 00000001C0016C4B: or      eax, 10h
 * 00000001C0016C4E: mov     [rbx+18h], eax
 * 00000001C0016C51: call    NVMeControllerCompleteAllIORequests
 * 00000001C0016C56: mov     rcx, rbx
 * 00000001C0016C59: call    NVMeCancelAllCompletionQueueDpc
 * 00000001C0016C5E: mov     rax, [rbx+0F78h]
 * 00000001C0016C65: mov     r8d, 989680h
 * 00000001C0016C6B: mov     rdx, rbx
 * 00000001C0016C6E: movzx   ecx, word ptr [rax]
 * 00000001C0016C71: imul    eax, ecx, 3E8h
 * 00000001C0016C77: mov     ecx, 51h ; 'Q'
 * 00000001C0016C7C: cmp     eax, r8d
 * 00000001C0016C7F: cmovb   r8d, eax
 * 00000001C0016C83: call    cs:__imp_StorPortExtendedFunction
 * 00000001C0016C8A: nop     dword ptr [rax+rax+00h]
 * 00000001C0016C8F: mov     rax, [rbx+0F78h]
 * 00000001C0016C96: mov     r9d, 7
 * 00000001C0016C9C: add     rax, 2
 * 00000001C0016CA0: xor     r8d, r8d
 * 00000001C0016CA3: mov     [rsp+48h+var_18], rax
 * 00000001C0016CA8: mov     rdx, rbx
 * 00000001C0016CAB: lea     rax, aControllerPani_4; "Controller Panic, In panic reset workfl"...
 * 00000001C0016CB2: mov     [rsp+48h+var_20], 1
 * 00000001C0016CBA: lea     ecx, [r9+5Bh]
 * 00000001C0016CBE: mov     [rsp+48h+var_28], rax
 * 00000001C0016CC3: call    cs:__imp_StorPortExtendedFunction
 * 00000001C0016CCA: nop     dword ptr [rax+rax+00h]
 * 00000001C0016CCF: mov     rax, [rbx+0F78h]
 * 00000001C0016CD6: test    byte ptr [rax+2], 1
 * 00000001C0016CDA: jz      short loc_1C0016CE8
 * 00000001C0016CDC: mov     rcx, rbx
 * 00000001C0016CDF: call    ControllerReset
 * 00000001C0016CE4: test    al, al
 * 00000001C0016CE6: jnz     short loc_1C0016D33
 * 00000001C0016CE8: mov     rax, [rbx+0F78h]
 * 00000001C0016CEF: test    byte ptr [rax+2], 2
 * 00000001C0016CF3: jz      short loc_1C0016D01
 * 00000001C0016CF5: mov     rcx, rbx
 * 00000001C0016CF8: call    NvmSubsystemReset
 * 00000001C0016CFD: test    al, al
 * 00000001C0016CFF: jz      short loc_1C0016D2C
 * 00000001C0016D01: mov     rax, [rbx+0F78h]
 * 00000001C0016D08: test    byte ptr [rax+2], 4
 * 00000001C0016D0C: jz      loc_1C0016D96
 * 00000001C0016D12: xor     r8d, r8d
 * 00000001C0016D15: mov     rdx, rbx
 * 00000001C0016D18: lea     ecx, [r8+66h]
 * 00000001C0016D1C: call    cs:__imp_StorPortExtendedFunction
 * 00000001C0016D23: nop     dword ptr [rax+rax+00h]
 * 00000001C0016D28: test    eax, eax
 * 00000001C0016D2A: jnz     short loc_1C0016D96
 * 00000001C0016D2C: or      byte ptr [rbx+0EC0h], 4
 * 00000001C0016D33: and     dword ptr [rbx+18h], 0FFFFFFEFh
 * 00000001C0016D37: mov     rcx, rbx
 * 00000001C0016D3A: call    NVMeQueuesReInit
 * 00000001C0016D3F: xor     edx, edx
 * 00000001C0016D41: mov     rcx, rbx; int
 * 00000001C0016D44: call    NVMeControllerInitPart1
 * 00000001C0016D49: test    al, al
 * 00000001C0016D4B: jz      short loc_1C0016D96
 * 00000001C0016D4D: mov     r8b, 1
 * 00000001C0016D50: xor     edx, edx
 * 00000001C0016D52: mov     rcx, rbx; int
 * 00000001C0016D55: call    NVMeControllerInitPart2
 * 00000001C0016D5A: test    al, al
 * 00000001C0016D5C: jz      short loc_1C0016D96
 * 00000001C0016D5E: mov     dl, 1
 * 00000001C0016D60: mov     rcx, rbx; int
 * 00000001C0016D63: call    NVMeControllerInitPart3
 * 00000001C0016D68: test    al, al
 * 00000001C0016D6A: jz      short loc_1C0016D96
 * 00000001C0016D6C: xor     ecx, ecx
 * 00000001C0016D6E: cmp     [rbx+0C8h], ecx
 * 00000001C0016D74: jle     short loc_1C0016D96
 * 00000001C0016D76: lea     rax, [rbx+6B8h]
 * 00000001C0016D7D: mov     rdx, [rax]
 * 00000001C0016D80: test    rdx, rdx
 * 00000001C0016D83: jz      short loc_1C0016D88
 * 00000001C0016D85: inc     dword ptr [rdx+2Ch]
 * 00000001C0016D88: inc     ecx
 * 00000001C0016D8A: add     rax, 8
 * 00000001C0016D8E: cmp     ecx, [rbx+0C8h]
 * 00000001C0016D94: jl      short loc_1C0016D7D
 * 00000001C0016D96: and     dword ptr [rbx+0ED4h], 0FFFFFFFEh
 * 00000001C0016D9D: mov     rcx, rbx
 * 00000001C0016DA0: call    cs:__imp_StorPortResume
 * 00000001C0016DA7: nop     dword ptr [rax+rax+00h]
 * 00000001C0016DAC: mov     rcx, rbx
 * 00000001C0016DAF: call    NVMeControllerStartFailureEventLog
 * 00000001C0016DB4: mov     r8, rdi
 * 00000001C0016DB7: mov     rdx, rbx
 * 00000001C0016DBA: mov     ecx, 1Fh
 * 00000001C0016DBF: call    cs:__imp_StorPortExtendedFunction
 * 00000001C0016DC6: nop     dword ptr [rax+rax+00h]
 * 00000001C0016DCB: mov     rbx, [rsp+48h+arg_0]
 * 00000001C0016DD0: add     rsp, 40h
 * 00000001C0016DD4: pop     rdi
 * 00000001C0016DD5: retn
 */
