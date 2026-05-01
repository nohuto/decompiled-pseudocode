/*
 * XREFs of _lambda_57bd800a23f6990551f71dd05caf20c5_::operator() @ 0x180080E00
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_57bd800a23f6990551f71dd05caf20c5___::Run @ 0x180080DF0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_57bd800a23f6990551f71dd05caf20c5___--Run.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0qq_EventWriteTransfer @ 0x180161CB0 (McTemplateU0qq_EventWriteTransfer.c)
 *     McTemplateU0q_EventWriteTransfer @ 0x180161DC4 (McTemplateU0q_EventWriteTransfer.c)
 */

/*
 * Hex-Rays decompilation failed for _lambda_57bd800a23f6990551f71dd05caf20c5_::operator() @ 0x180080E00
 * Reason: Hex-Rays returned no pseudocode for 0x180080E00
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000180080E00: mov     [rsp+arg_10], rbx
 * 0000000180080E05: push    rdi
 * 0000000180080E06: sub     rsp, 30h
 * 0000000180080E0A: mov     rax, [rcx]
 * 0000000180080E0D: mov     rbx, [rax+8]
 * 0000000180080E11: mov     rcx, [rbx+8]
 * 0000000180080E15: test    rcx, rcx
 * 0000000180080E18: jz      loc_180080EDE
 * 0000000180080E1E: mov     rax, [rcx]
 * 0000000180080E21: lea     rdx, [rsp+38h+arg_0]
 * 0000000180080E26: mov     rax, [rax+18h]
 * 0000000180080E2A: call    cs:__guard_dispatch_icall_fptr
 * 0000000180080E30: test    eax, eax
 * 0000000180080E32: js      loc_180080EDE
 * 0000000180080E38: test    byte ptr cs:Microsoft_Windows_Immersive_ShellEnableBits, 8
 * 0000000180080E3F: jnz     loc_180131140
 * 0000000180080E45: xor     edi, edi
 * 0000000180080E47: cmp     [rsp+38h+arg_0], edi
 * 0000000180080E4B: jbe     loc_180080ED1
 * 0000000180080E51: and     [rsp+38h+arg_8], 0
 * 0000000180080E57: mov     rcx, [rbx+8]
 * 0000000180080E5B: mov     rax, [rcx]
 * 0000000180080E5E: lea     r9, [rsp+38h+arg_8]
 * 0000000180080E63: lea     r8, _GUID_0c40987c_7026_499e_adad_c164c0ffee84
 * 0000000180080E6A: mov     edx, edi
 * 0000000180080E6C: mov     rax, [rax+20h]
 * 0000000180080E70: call    cs:__guard_dispatch_icall_fptr
 * 0000000180080E76: test    eax, eax
 * 0000000180080E78: js      short loc_180080EAC
 * 0000000180080E7A: test    byte ptr cs:Microsoft_Windows_Immersive_ShellEnableBits, 8
 * 0000000180080E81: jnz     loc_180131159
 * 0000000180080E87: mov     rcx, [rsp+38h+arg_8]
 * 0000000180080E8C: mov     rax, [rcx]
 * 0000000180080E8F: mov     r8d, [rbx]
 * 0000000180080E92: mov     edx, [rbx+4]
 * 0000000180080E95: mov     rax, [rax+18h]
 * 0000000180080E99: call    cs:__guard_dispatch_icall_fptr
 * 0000000180080E9F: test    byte ptr cs:Microsoft_Windows_Immersive_ShellEnableBits, 8
 * 0000000180080EA6: jnz     loc_18013116E
 * 0000000180080EAC: mov     rcx, [rsp+38h+arg_8]
 * 0000000180080EB1: test    rcx, rcx
 * 0000000180080EB4: jz      short loc_180080EC9
 * 0000000180080EB6: and     [rsp+38h+arg_8], 0
 * 0000000180080EBC: mov     rax, [rcx]
 * 0000000180080EBF: mov     rax, [rax+10h]
 * 0000000180080EC3: call    cs:__guard_dispatch_icall_fptr
 * 0000000180080EC9: inc     edi
 * 0000000180080ECB: cmp     edi, [rsp+38h+arg_0]
 * 0000000180080ECF: jb      short loc_180080E51
 * 0000000180080ED1: test    byte ptr cs:Microsoft_Windows_Immersive_ShellEnableBits, 8
 * 0000000180080ED8: jnz     loc_180131186
 * 0000000180080EDE: mov     rbx, [rsp+38h+arg_10]
 * 0000000180080EE3: add     rsp, 30h
 * 0000000180080EE7: pop     rdi
 * 0000000180080EE8: retn
 * 0000000180131140: mov     r9d, [rbx]
 * 0000000180131143: mov     r8d, [rbx+4]
 * 0000000180131147: lea     rdx, ImmersiveShell_AppManager_ZbandChange_Start; "{"
 * 000000018013114E: call    McTemplateU0qq_EventWriteTransfer
 * 0000000180131153: nop
 * 0000000180131154: jmp     loc_180080E45
 * 0000000180131159: mov     r8d, edi
 * 000000018013115C: lea     rdx, ImmersiveShell_AppManager_ZbandChanged_Start
 * 0000000180131163: call    McTemplateU0q_EventWriteTransfer
 * 0000000180131168: nop
 * 0000000180131169: jmp     loc_180080E87
 * 000000018013116E: mov     r9d, eax
 * 0000000180131171: mov     r8d, edi
 * 0000000180131174: lea     rdx, ImmersiveShell_AppManager_ZbandChanged_Stop
 * 000000018013117B: call    McTemplateU0qq_EventWriteTransfer
 * 0000000180131180: nop
 * 0000000180131181: jmp     loc_180080EAC
 * 0000000180131186: mov     r9d, [rbx]
 * 0000000180131189: mov     r8d, [rbx+4]
 * 000000018013118D: lea     rdx, ImmersiveShell_AppManager_ZbandChange_Stop
 * 0000000180131194: call    McTemplateU0qq_EventWriteTransfer
 * 0000000180131199: nop
 * 000000018013119A: jmp     loc_180080EDE
 */
