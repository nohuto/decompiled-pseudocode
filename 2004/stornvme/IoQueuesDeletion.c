/*
 * XREFs of IoQueuesDeletion @ 0x1C000AE20
 * Callers:
 *     NVMeControllerPowerDown @ 0x1C000CBFC (NVMeControllerPowerDown.c)
 *     NVMeControllerStop @ 0x1C000D258 (NVMeControllerStop.c)
 * Callees:
 *     NVMeIoCompletionQueueDelete @ 0x1C0018424 (NVMeIoCompletionQueueDelete.c)
 *     NVMeIoSubmissionQueueDelete @ 0x1C0018AE4 (NVMeIoSubmissionQueueDelete.c)
 */

/*
 * Hex-Rays decompilation failed for IoQueuesDeletion @ 0x1C000AE20
 * Reason: Hex-Rays returned no pseudocode for 0x1C000AE20
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C000AE20: mov     [rsp-28h+arg_10], rbx
 * 00000001C000AE25: push    rbp
 * 00000001C000AE26: push    rsi
 * 00000001C000AE27: push    rdi
 * 00000001C000AE28: push    r12
 * 00000001C000AE2A: push    r14
 * 00000001C000AE2C: mov     rbp, rsp
 * 00000001C000AE2F: sub     rsp, 40h
 * 00000001C000AE33: xor     r14d, r14d
 * 00000001C000AE36: mov     rbx, rcx
 * 00000001C000AE39: cmp     word ptr [rcx+1A0h], 4
 * 00000001C000AE41: mov     sil, 1
 * 00000001C000AE44: mov     [rbp+arg_8], r14w
 * 00000001C000AE49: mov     r12d, 3E8h
 * 00000001C000AE4F: jbe     short loc_1C000AE86
 * 00000001C000AE51: mov     r8d, 2710h
 * 00000001C000AE57: mov     rdx, rbx
 * 00000001C000AE5A: mov     ecx, 51h ; 'Q'
 * 00000001C000AE5F: call    cs:__imp_StorPortExtendedFunction
 * 00000001C000AE66: nop     dword ptr [rax+rax+00h]
 * 00000001C000AE6B: cmp     word ptr [rbx+1A0h], 4
 * 00000001C000AE73: jbe     short loc_1C000AE86
 * 00000001C000AE75: movzx   eax, [rbp+arg_8]
 * 00000001C000AE79: inc     ax
 * 00000001C000AE7C: mov     [rbp+arg_8], ax
 * 00000001C000AE80: cmp     ax, r12w
 * 00000001C000AE84: jb      short loc_1C000AE51
 * 00000001C000AE86: movzx   edx, word ptr [rbx+118h]
 * 00000001C000AE8D: mov     [rbp+arg_8], r14w
 * 00000001C000AE92: cmp     r14w, dx
 * 00000001C000AE96: jnb     short loc_1C000AEF3
 * 00000001C000AE98: movzx   edi, r14w
 * 00000001C000AE9C: mov     r8d, 2710h
 * 00000001C000AEA2: mov     rdx, rbx
 * 00000001C000AEA5: mov     ecx, 51h ; 'Q'
 * 00000001C000AEAA: call    cs:__imp_StorPortExtendedFunction
 * 00000001C000AEB1: nop     dword ptr [rax+rax+00h]
 * 00000001C000AEB6: movzx   r8d, [rbp+arg_8]
 * 00000001C000AEBB: mov     rax, [rbx+300h]
 * 00000001C000AEC2: imul    rcx, r8, 88h
 * 00000001C000AEC9: cmp     [rcx+rax+80h], r14w
 * 00000001C000AED2: jbe     short loc_1C000AEDD
 * 00000001C000AED4: inc     di
 * 00000001C000AED7: cmp     di, r12w
 * 00000001C000AEDB: jb      short loc_1C000AE9C
 * 00000001C000AEDD: movzx   edx, word ptr [rbx+118h]
 * 00000001C000AEE4: inc     r8w
 * 00000001C000AEE8: mov     [rbp+arg_8], r8w
 * 00000001C000AEED: cmp     r8w, dx
 * 00000001C000AEF1: jb      short loc_1C000AE98
 * 00000001C000AEF3: movzx   eax, word ptr [rbx+11Ah]
 * 00000001C000AEFA: movzx   ecx, r14w
 * 00000001C000AEFE: mov     [rbp+arg_8], cx
 * 00000001C000AF02: cmp     r14w, ax
 * 00000001C000AF06: jnb     loc_1C000AFB7
 * 00000001C000AF0C: movzx   edx, r14w
 * 00000001C000AF10: movzx   eax, dx
 * 00000001C000AF13: imul    rdx, rax, 158h
 * 00000001C000AF1A: mov     rax, [rbx+308h]
 * 00000001C000AF21: cmp     [rdx+rax+0C8h], r14b
 * 00000001C000AF29: jz      short loc_1C000AF96
 * 00000001C000AF2B: cmp     [rdx+rax+0D0h], r14
 * 00000001C000AF33: jz      short loc_1C000AF96
 * 00000001C000AF35: movzx   edi, r14w
 * 00000001C000AF39: cmp     r14w, [rbx+0D2h]
 * 00000001C000AF41: jnb     short loc_1C000AF96
 * 00000001C000AF43: movzx   eax, cx
 * 00000001C000AF46: xor     r9d, r9d
 * 00000001C000AF49: imul    rcx, rax, 158h
 * 00000001C000AF50: mov     rax, [rbx+308h]
 * 00000001C000AF57: mov     [rbp+arg_0], r14b
 * 00000001C000AF5B: movzx   edx, di
 * 00000001C000AF5E: mov     r8, [rcx+rax+0D0h]
 * 00000001C000AF66: lea     rax, [rbp+arg_0]
 * 00000001C000AF6A: lea     ecx, [r9+5Ah]
 * 00000001C000AF6E: mov     [rsp+40h+var_20], rax
 * 00000001C000AF73: mov     r8, [r8+rdx*8]
 * 00000001C000AF77: mov     rdx, rbx
 * 00000001C000AF7A: call    cs:__imp_StorPortExtendedFunction
 * 00000001C000AF81: nop     dword ptr [rax+rax+00h]
 * 00000001C000AF86: movzx   ecx, [rbp+arg_8]
 * 00000001C000AF8A: inc     di
 * 00000001C000AF8D: cmp     di, [rbx+0D2h]
 * 00000001C000AF94: jb      short loc_1C000AF43
 * 00000001C000AF96: movzx   eax, word ptr [rbx+11Ah]
 * 00000001C000AF9D: inc     cx
 * 00000001C000AFA0: mov     [rbp+arg_8], cx
 * 00000001C000AFA4: movzx   edx, cx
 * 00000001C000AFA7: cmp     cx, ax
 * 00000001C000AFAA: jb      loc_1C000AF10
 * 00000001C000AFB0: movzx   edx, word ptr [rbx+118h]
 * 00000001C000AFB7: mov     [rbp+arg_8], r14w
 * 00000001C000AFBC: mov     edi, 2
 * 00000001C000AFC1: lea     r12d, [rdi+8]
 * 00000001C000AFC5: cmp     r14w, dx
 * 00000001C000AFC9: jnb     short loc_1C000B035
 * 00000001C000AFCB: movzx   eax, r14w
 * 00000001C000AFCF: lea     edx, [rax+1]
 * 00000001C000AFD2: mov     rcx, rbx; int
 * 00000001C000AFD5: call    NVMeIoSubmissionQueueDelete
 * 00000001C000AFDA: mov     sil, al
 * 00000001C000AFDD: test    al, al
 * 00000001C000AFDF: jnz     short loc_1C000B01A
 * 00000001C000AFE1: xor     r8d, r8d
 * 00000001C000AFE4: mov     dword ptr [rbx+1Ch], 0Fh
 * 00000001C000AFEB: lea     rax, [rbp+arg_8]
 * 00000001C000AFEF: mov     r9d, r12d
 * 00000001C000AFF2: mov     [rsp+40h+var_10], rax
 * 00000001C000AFF7: mov     rdx, rbx
 * 00000001C000AFFA: lea     rax, aIoSubmissionQu; "IO Submission Queue deletion failed"
 * 00000001C000B001: mov     [rsp+40h+var_18], edi
 * 00000001C000B005: lea     ecx, [r8+62h]
 * 00000001C000B009: mov     [rsp+40h+var_20], rax
 * 00000001C000B00E: call    cs:__imp_StorPortExtendedFunction
 * 00000001C000B015: nop     dword ptr [rax+rax+00h]
 * 00000001C000B01A: movzx   eax, [rbp+arg_8]
 * 00000001C000B01E: inc     ax
 * 00000001C000B021: mov     [rbp+arg_8], ax
 * 00000001C000B025: cmp     ax, [rbx+118h]
 * 00000001C000B02C: jb      short loc_1C000AFCF
 * 00000001C000B02E: movzx   eax, word ptr [rbx+11Ah]
 * 00000001C000B035: mov     [rbp+arg_8], r14w
 * 00000001C000B03A: cmp     r14w, ax
 * 00000001C000B03E: jnb     short loc_1C000B0A3
 * 00000001C000B040: movzx   eax, r14w
 * 00000001C000B044: lea     edx, [rax+1]
 * 00000001C000B047: mov     rcx, rbx; int
 * 00000001C000B04A: call    NVMeIoCompletionQueueDelete
 * 00000001C000B04F: mov     sil, al
 * 00000001C000B052: test    al, al
 * 00000001C000B054: jnz     short loc_1C000B08F
 * 00000001C000B056: xor     r8d, r8d
 * 00000001C000B059: mov     dword ptr [rbx+1Ch], 10h
 * 00000001C000B060: lea     rax, [rbp+arg_8]
 * 00000001C000B064: mov     r9d, r12d
 * 00000001C000B067: mov     [rsp+40h+var_10], rax
 * 00000001C000B06C: mov     rdx, rbx
 * 00000001C000B06F: lea     rax, aIoCompletionQu; "IO Completion Queue deletion failed"
 * 00000001C000B076: mov     [rsp+40h+var_18], edi
 * 00000001C000B07A: lea     ecx, [r8+62h]
 * 00000001C000B07E: mov     [rsp+40h+var_20], rax
 * 00000001C000B083: call    cs:__imp_StorPortExtendedFunction
 * 00000001C000B08A: nop     dword ptr [rax+rax+00h]
 * 00000001C000B08F: movzx   eax, [rbp+arg_8]
 * 00000001C000B093: inc     ax
 * 00000001C000B096: mov     [rbp+arg_8], ax
 * 00000001C000B09A: cmp     ax, [rbx+11Ah]
 * 00000001C000B0A1: jb      short loc_1C000B044
 * 00000001C000B0A3: mov     rbx, [rsp+40h+arg_10]
 * 00000001C000B0AB: mov     al, sil
 * 00000001C000B0AE: add     rsp, 40h
 * 00000001C000B0B2: pop     r14
 * 00000001C000B0B4: pop     r12
 * 00000001C000B0B6: pop     rdi
 * 00000001C000B0B7: pop     rsi
 * 00000001C000B0B8: pop     rbp
 * 00000001C000B0B9: retn
 */
