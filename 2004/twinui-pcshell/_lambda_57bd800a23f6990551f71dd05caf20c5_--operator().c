/*
 * XREFs of _lambda_57bd800a23f6990551f71dd05caf20c5_::operator() @ 0x180082E60
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_57bd800a23f6990551f71dd05caf20c5___::Run @ 0x180082E50 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_57bd800a23f6990551f71dd05caf20c5___--Run.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0qq_EventWriteTransfer @ 0x180161E80 (McTemplateU0qq_EventWriteTransfer.c)
 *     McTemplateU0q_EventWriteTransfer @ 0x180161F94 (McTemplateU0q_EventWriteTransfer.c)
 */

/*
 * Hex-Rays decompilation failed for _lambda_57bd800a23f6990551f71dd05caf20c5_::operator() @ 0x180082E60
 * Reason: Hex-Rays returned no pseudocode for 0x180082E60
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000180082E60: mov     [rsp+arg_10], rbx
 * 0000000180082E65: push    rdi
 * 0000000180082E66: sub     rsp, 30h
 * 0000000180082E6A: mov     rax, [rcx]
 * 0000000180082E6D: mov     rbx, [rax+8]
 * 0000000180082E71: mov     rcx, [rbx+8]
 * 0000000180082E75: test    rcx, rcx
 * 0000000180082E78: jz      loc_180082F3E
 * 0000000180082E7E: mov     rax, [rcx]
 * 0000000180082E81: lea     rdx, [rsp+38h+arg_0]
 * 0000000180082E86: mov     rax, [rax+18h]
 * 0000000180082E8A: call    cs:__guard_dispatch_icall_fptr
 * 0000000180082E90: test    eax, eax
 * 0000000180082E92: js      loc_180082F3E
 * 0000000180082E98: test    byte ptr cs:Microsoft_Windows_Immersive_ShellEnableBits, 8
 * 0000000180082E9F: jnz     loc_180133AB6
 * 0000000180082EA5: xor     edi, edi
 * 0000000180082EA7: cmp     [rsp+38h+arg_0], edi
 * 0000000180082EAB: jbe     loc_180082F31
 * 0000000180082EB1: and     [rsp+38h+arg_8], 0
 * 0000000180082EB7: mov     rcx, [rbx+8]
 * 0000000180082EBB: mov     rax, [rcx]
 * 0000000180082EBE: lea     r9, [rsp+38h+arg_8]
 * 0000000180082EC3: lea     r8, _GUID_0c40987c_7026_499e_adad_c164c0ffee84
 * 0000000180082ECA: mov     edx, edi
 * 0000000180082ECC: mov     rax, [rax+20h]
 * 0000000180082ED0: call    cs:__guard_dispatch_icall_fptr
 * 0000000180082ED6: test    eax, eax
 * 0000000180082ED8: js      short loc_180082F0C
 * 0000000180082EDA: test    byte ptr cs:Microsoft_Windows_Immersive_ShellEnableBits, 8
 * 0000000180082EE1: jnz     loc_180133ACF
 * 0000000180082EE7: mov     rcx, [rsp+38h+arg_8]
 * 0000000180082EEC: mov     rax, [rcx]
 * 0000000180082EEF: mov     r8d, [rbx]
 * 0000000180082EF2: mov     edx, [rbx+4]
 * 0000000180082EF5: mov     rax, [rax+18h]
 * 0000000180082EF9: call    cs:__guard_dispatch_icall_fptr
 * 0000000180082EFF: test    byte ptr cs:Microsoft_Windows_Immersive_ShellEnableBits, 8
 * 0000000180082F06: jnz     loc_180133AE4
 * 0000000180082F0C: mov     rcx, [rsp+38h+arg_8]
 * 0000000180082F11: test    rcx, rcx
 * 0000000180082F14: jz      short loc_180082F29
 * 0000000180082F16: and     [rsp+38h+arg_8], 0
 * 0000000180082F1C: mov     rax, [rcx]
 * 0000000180082F1F: mov     rax, [rax+10h]
 * 0000000180082F23: call    cs:__guard_dispatch_icall_fptr
 * 0000000180082F29: inc     edi
 * 0000000180082F2B: cmp     edi, [rsp+38h+arg_0]
 * 0000000180082F2F: jb      short loc_180082EB1
 * 0000000180082F31: test    byte ptr cs:Microsoft_Windows_Immersive_ShellEnableBits, 8
 * 0000000180082F38: jnz     loc_180133AFC
 * 0000000180082F3E: mov     rbx, [rsp+38h+arg_10]
 * 0000000180082F43: add     rsp, 30h
 * 0000000180082F47: pop     rdi
 * 0000000180082F48: retn
 * 0000000180133AB6: mov     r9d, [rbx]
 * 0000000180133AB9: mov     r8d, [rbx+4]
 * 0000000180133ABD: lea     rdx, ImmersiveShell_AppManager_ZbandChange_Start; "{"
 * 0000000180133AC4: call    McTemplateU0qq_EventWriteTransfer
 * 0000000180133AC9: nop
 * 0000000180133ACA: jmp     loc_180082EA5
 * 0000000180133ACF: mov     r8d, edi
 * 0000000180133AD2: lea     rdx, ImmersiveShell_AppManager_ZbandChanged_Start
 * 0000000180133AD9: call    McTemplateU0q_EventWriteTransfer
 * 0000000180133ADE: nop
 * 0000000180133ADF: jmp     loc_180082EE7
 * 0000000180133AE4: mov     r9d, eax
 * 0000000180133AE7: mov     r8d, edi
 * 0000000180133AEA: lea     rdx, ImmersiveShell_AppManager_ZbandChanged_Stop
 * 0000000180133AF1: call    McTemplateU0qq_EventWriteTransfer
 * 0000000180133AF6: nop
 * 0000000180133AF7: jmp     loc_180082F0C
 * 0000000180133AFC: mov     r9d, [rbx]
 * 0000000180133AFF: mov     r8d, [rbx+4]
 * 0000000180133B03: lea     rdx, ImmersiveShell_AppManager_ZbandChange_Stop
 * 0000000180133B0A: call    McTemplateU0qq_EventWriteTransfer
 * 0000000180133B0F: nop
 * 0000000180133B10: jmp     loc_180082F3E
 */
