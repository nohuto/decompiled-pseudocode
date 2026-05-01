/*
 * XREFs of _lambda_57bd800a23f6990551f71dd05caf20c5_::operator() @ 0x1800826C0
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_57bd800a23f6990551f71dd05caf20c5___::Run @ 0x1800826B0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_57bd800a23f6990551f71dd05caf20c5___--Run.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0qq_EventWriteTransfer @ 0x18013D8D0 (McTemplateU0qq_EventWriteTransfer.c)
 *     McTemplateU0q_EventWriteTransfer @ 0x18013D9E4 (McTemplateU0q_EventWriteTransfer.c)
 */

/*
 * Hex-Rays decompilation failed for _lambda_57bd800a23f6990551f71dd05caf20c5_::operator() @ 0x1800826C0
 * Reason: Hex-Rays returned no pseudocode for 0x1800826C0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001800826C0: mov     [rsp+arg_10], rbx
 * 00000001800826C5: push    rdi
 * 00000001800826C6: sub     rsp, 30h
 * 00000001800826CA: mov     rax, [rcx]
 * 00000001800826CD: mov     rbx, [rax+8]
 * 00000001800826D1: mov     rcx, [rbx+8]
 * 00000001800826D5: test    rcx, rcx
 * 00000001800826D8: jz      loc_18008279E
 * 00000001800826DE: mov     rax, [rcx]
 * 00000001800826E1: lea     rdx, [rsp+38h+arg_0]
 * 00000001800826E6: mov     rax, [rax+18h]
 * 00000001800826EA: call    cs:__guard_dispatch_icall_fptr
 * 00000001800826F0: test    eax, eax
 * 00000001800826F2: js      loc_18008279E
 * 00000001800826F8: test    byte ptr cs:Microsoft_Windows_Immersive_ShellEnableBits, 8
 * 00000001800826FF: jnz     loc_18010F206
 * 0000000180082705: xor     edi, edi
 * 0000000180082707: cmp     [rsp+38h+arg_0], edi
 * 000000018008270B: jbe     loc_180082791
 * 0000000180082711: and     [rsp+38h+arg_8], 0
 * 0000000180082717: mov     rcx, [rbx+8]
 * 000000018008271B: mov     rax, [rcx]
 * 000000018008271E: lea     r9, [rsp+38h+arg_8]
 * 0000000180082723: lea     r8, _GUID_0c40987c_7026_499e_adad_c164c0ffee84
 * 000000018008272A: mov     edx, edi
 * 000000018008272C: mov     rax, [rax+20h]
 * 0000000180082730: call    cs:__guard_dispatch_icall_fptr
 * 0000000180082736: test    eax, eax
 * 0000000180082738: js      short loc_18008276C
 * 000000018008273A: test    byte ptr cs:Microsoft_Windows_Immersive_ShellEnableBits, 8
 * 0000000180082741: jnz     loc_18010F21F
 * 0000000180082747: mov     rcx, [rsp+38h+arg_8]
 * 000000018008274C: mov     rax, [rcx]
 * 000000018008274F: mov     r8d, [rbx]
 * 0000000180082752: mov     edx, [rbx+4]
 * 0000000180082755: mov     rax, [rax+18h]
 * 0000000180082759: call    cs:__guard_dispatch_icall_fptr
 * 000000018008275F: test    byte ptr cs:Microsoft_Windows_Immersive_ShellEnableBits, 8
 * 0000000180082766: jnz     loc_18010F234
 * 000000018008276C: mov     rcx, [rsp+38h+arg_8]
 * 0000000180082771: test    rcx, rcx
 * 0000000180082774: jz      short loc_180082789
 * 0000000180082776: and     [rsp+38h+arg_8], 0
 * 000000018008277C: mov     rax, [rcx]
 * 000000018008277F: mov     rax, [rax+10h]
 * 0000000180082783: call    cs:__guard_dispatch_icall_fptr
 * 0000000180082789: inc     edi
 * 000000018008278B: cmp     edi, [rsp+38h+arg_0]
 * 000000018008278F: jb      short loc_180082711
 * 0000000180082791: test    byte ptr cs:Microsoft_Windows_Immersive_ShellEnableBits, 8
 * 0000000180082798: jnz     loc_18010F24C
 * 000000018008279E: mov     rbx, [rsp+38h+arg_10]
 * 00000001800827A3: add     rsp, 30h
 * 00000001800827A7: pop     rdi
 * 00000001800827A8: retn
 * 000000018010F206: mov     r9d, [rbx]
 * 000000018010F209: mov     r8d, [rbx+4]
 * 000000018010F20D: lea     rdx, ImmersiveShell_AppManager_ZbandChange_Start; "{"
 * 000000018010F214: call    McTemplateU0qq_EventWriteTransfer
 * 000000018010F219: nop
 * 000000018010F21A: jmp     loc_180082705
 * 000000018010F21F: mov     r8d, edi
 * 000000018010F222: lea     rdx, ImmersiveShell_AppManager_ZbandChanged_Start
 * 000000018010F229: call    McTemplateU0q_EventWriteTransfer
 * 000000018010F22E: nop
 * 000000018010F22F: jmp     loc_180082747
 * 000000018010F234: mov     r9d, eax
 * 000000018010F237: mov     r8d, edi
 * 000000018010F23A: lea     rdx, ImmersiveShell_AppManager_ZbandChanged_Stop
 * 000000018010F241: call    McTemplateU0qq_EventWriteTransfer
 * 000000018010F246: nop
 * 000000018010F247: jmp     loc_18008276C
 * 000000018010F24C: mov     r9d, [rbx]
 * 000000018010F24F: mov     r8d, [rbx+4]
 * 000000018010F253: lea     rdx, ImmersiveShell_AppManager_ZbandChange_Stop
 * 000000018010F25A: call    McTemplateU0qq_EventWriteTransfer
 * 000000018010F25F: nop
 * 000000018010F260: jmp     loc_18008279E
 */
