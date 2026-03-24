/*
 * XREFs of IoQueuesDeletion @ 0x1C000ADD0
 * Callers:
 *     NVMeControllerPowerDown @ 0x1C000CC1C (NVMeControllerPowerDown.c)
 *     NVMeControllerStop @ 0x1C000D270 (NVMeControllerStop.c)
 * Callees:
 *     NVMeIoCompletionQueueDelete @ 0x1C0018394 (NVMeIoCompletionQueueDelete.c)
 *     NVMeIoSubmissionQueueDelete @ 0x1C0018A44 (NVMeIoSubmissionQueueDelete.c)
 */

/*
 * Hex-Rays decompilation failed for IoQueuesDeletion @ 0x1C000ADD0
 * Reason: Hex-Rays returned no pseudocode for 0x1C000ADD0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C000ADD0: mov     [rsp-28h+arg_10], rbx
 * 00000001C000ADD5: push    rbp
 * 00000001C000ADD6: push    rsi
 * 00000001C000ADD7: push    rdi
 * 00000001C000ADD8: push    r12
 * 00000001C000ADDA: push    r14
 * 00000001C000ADDC: mov     rbp, rsp
 * 00000001C000ADDF: sub     rsp, 40h
 * 00000001C000ADE3: xor     r14d, r14d
 * 00000001C000ADE6: mov     rbx, rcx
 * 00000001C000ADE9: cmp     word ptr [rcx+1A0h], 4
 * 00000001C000ADF1: mov     sil, 1
 * 00000001C000ADF4: mov     [rbp+arg_8], r14w
 * 00000001C000ADF9: mov     r12d, 3E8h
 * 00000001C000ADFF: jbe     short loc_1C000AE36
 * 00000001C000AE01: mov     r8d, 2710h
 * 00000001C000AE07: mov     rdx, rbx
 * 00000001C000AE0A: mov     ecx, 51h ; 'Q'
 * 00000001C000AE0F: call    cs:__imp_StorPortExtendedFunction
 * 00000001C000AE16: nop     dword ptr [rax+rax+00h]
 * 00000001C000AE1B: cmp     word ptr [rbx+1A0h], 4
 * 00000001C000AE23: jbe     short loc_1C000AE36
 * 00000001C000AE25: movzx   eax, [rbp+arg_8]
 * 00000001C000AE29: inc     ax
 * 00000001C000AE2C: mov     [rbp+arg_8], ax
 * 00000001C000AE30: cmp     ax, r12w
 * 00000001C000AE34: jb      short loc_1C000AE01
 * 00000001C000AE36: movzx   edx, word ptr [rbx+118h]
 * 00000001C000AE3D: mov     [rbp+arg_8], r14w
 * 00000001C000AE42: cmp     r14w, dx
 * 00000001C000AE46: jnb     short loc_1C000AEA3
 * 00000001C000AE48: movzx   edi, r14w
 * 00000001C000AE4C: mov     r8d, 2710h
 * 00000001C000AE52: mov     rdx, rbx
 * 00000001C000AE55: mov     ecx, 51h ; 'Q'
 * 00000001C000AE5A: call    cs:__imp_StorPortExtendedFunction
 * 00000001C000AE61: nop     dword ptr [rax+rax+00h]
 * 00000001C000AE66: movzx   r8d, [rbp+arg_8]
 * 00000001C000AE6B: mov     rax, [rbx+300h]
 * 00000001C000AE72: imul    rcx, r8, 88h
 * 00000001C000AE79: cmp     [rcx+rax+80h], r14w
 * 00000001C000AE82: jbe     short loc_1C000AE8D
 * 00000001C000AE84: inc     di
 * 00000001C000AE87: cmp     di, r12w
 * 00000001C000AE8B: jb      short loc_1C000AE4C
 * 00000001C000AE8D: movzx   edx, word ptr [rbx+118h]
 * 00000001C000AE94: inc     r8w
 * 00000001C000AE98: mov     [rbp+arg_8], r8w
 * 00000001C000AE9D: cmp     r8w, dx
 * 00000001C000AEA1: jb      short loc_1C000AE48
 * 00000001C000AEA3: movzx   eax, word ptr [rbx+11Ah]
 * 00000001C000AEAA: movzx   ecx, r14w
 * 00000001C000AEAE: mov     [rbp+arg_8], cx
 * 00000001C000AEB2: cmp     r14w, ax
 * 00000001C000AEB6: jnb     loc_1C000AF67
 * 00000001C000AEBC: movzx   edx, r14w
 * 00000001C000AEC0: movzx   eax, dx
 * 00000001C000AEC3: imul    rdx, rax, 158h
 * 00000001C000AECA: mov     rax, [rbx+308h]
 * 00000001C000AED1: cmp     [rdx+rax+0C8h], r14b
 * 00000001C000AED9: jz      short loc_1C000AF46
 * 00000001C000AEDB: cmp     [rdx+rax+0D0h], r14
 * 00000001C000AEE3: jz      short loc_1C000AF46
 * 00000001C000AEE5: movzx   edi, r14w
 * 00000001C000AEE9: cmp     r14w, [rbx+0D2h]
 * 00000001C000AEF1: jnb     short loc_1C000AF46
 * 00000001C000AEF3: movzx   eax, cx
 * 00000001C000AEF6: xor     r9d, r9d
 * 00000001C000AEF9: imul    rcx, rax, 158h
 * 00000001C000AF00: mov     rax, [rbx+308h]
 * 00000001C000AF07: mov     [rbp+arg_0], r14b
 * 00000001C000AF0B: movzx   edx, di
 * 00000001C000AF0E: mov     r8, [rcx+rax+0D0h]
 * 00000001C000AF16: lea     rax, [rbp+arg_0]
 * 00000001C000AF1A: lea     ecx, [r9+5Ah]
 * 00000001C000AF1E: mov     [rsp+40h+var_20], rax
 * 00000001C000AF23: mov     r8, [r8+rdx*8]
 * 00000001C000AF27: mov     rdx, rbx
 * 00000001C000AF2A: call    cs:__imp_StorPortExtendedFunction
 * 00000001C000AF31: nop     dword ptr [rax+rax+00h]
 * 00000001C000AF36: movzx   ecx, [rbp+arg_8]
 * 00000001C000AF3A: inc     di
 * 00000001C000AF3D: cmp     di, [rbx+0D2h]
 * 00000001C000AF44: jb      short loc_1C000AEF3
 * 00000001C000AF46: movzx   eax, word ptr [rbx+11Ah]
 * 00000001C000AF4D: inc     cx
 * 00000001C000AF50: mov     [rbp+arg_8], cx
 * 00000001C000AF54: movzx   edx, cx
 * 00000001C000AF57: cmp     cx, ax
 * 00000001C000AF5A: jb      loc_1C000AEC0
 * 00000001C000AF60: movzx   edx, word ptr [rbx+118h]
 * 00000001C000AF67: mov     [rbp+arg_8], r14w
 * 00000001C000AF6C: mov     edi, 2
 * 00000001C000AF71: lea     r12d, [rdi+8]
 * 00000001C000AF75: cmp     r14w, dx
 * 00000001C000AF79: jnb     short loc_1C000AFE5
 * 00000001C000AF7B: movzx   eax, r14w
 * 00000001C000AF7F: lea     edx, [rax+1]
 * 00000001C000AF82: mov     rcx, rbx; int
 * 00000001C000AF85: call    NVMeIoSubmissionQueueDelete
 * 00000001C000AF8A: mov     sil, al
 * 00000001C000AF8D: test    al, al
 * 00000001C000AF8F: jnz     short loc_1C000AFCA
 * 00000001C000AF91: xor     r8d, r8d
 * 00000001C000AF94: mov     dword ptr [rbx+1Ch], 0Fh
 * 00000001C000AF9B: lea     rax, [rbp+arg_8]
 * 00000001C000AF9F: mov     r9d, r12d
 * 00000001C000AFA2: mov     [rsp+40h+var_10], rax
 * 00000001C000AFA7: mov     rdx, rbx
 * 00000001C000AFAA: lea     rax, aIoSubmissionQu; "IO Submission Queue deletion failed"
 * 00000001C000AFB1: mov     [rsp+40h+var_18], edi
 * 00000001C000AFB5: lea     ecx, [r8+62h]
 * 00000001C000AFB9: mov     [rsp+40h+var_20], rax
 * 00000001C000AFBE: call    cs:__imp_StorPortExtendedFunction
 * 00000001C000AFC5: nop     dword ptr [rax+rax+00h]
 * 00000001C000AFCA: movzx   eax, [rbp+arg_8]
 * 00000001C000AFCE: inc     ax
 * 00000001C000AFD1: mov     [rbp+arg_8], ax
 * 00000001C000AFD5: cmp     ax, [rbx+118h]
 * 00000001C000AFDC: jb      short loc_1C000AF7F
 * 00000001C000AFDE: movzx   eax, word ptr [rbx+11Ah]
 * 00000001C000AFE5: mov     [rbp+arg_8], r14w
 * 00000001C000AFEA: cmp     r14w, ax
 * 00000001C000AFEE: jnb     short loc_1C000B053
 * 00000001C000AFF0: movzx   eax, r14w
 * 00000001C000AFF4: lea     edx, [rax+1]
 * 00000001C000AFF7: mov     rcx, rbx; int
 * 00000001C000AFFA: call    NVMeIoCompletionQueueDelete
 * 00000001C000AFFF: mov     sil, al
 * 00000001C000B002: test    al, al
 * 00000001C000B004: jnz     short loc_1C000B03F
 * 00000001C000B006: xor     r8d, r8d
 * 00000001C000B009: mov     dword ptr [rbx+1Ch], 10h
 * 00000001C000B010: lea     rax, [rbp+arg_8]
 * 00000001C000B014: mov     r9d, r12d
 * 00000001C000B017: mov     [rsp+40h+var_10], rax
 * 00000001C000B01C: mov     rdx, rbx
 * 00000001C000B01F: lea     rax, aIoCompletionQu; "IO Completion Queue deletion failed"
 * 00000001C000B026: mov     [rsp+40h+var_18], edi
 * 00000001C000B02A: lea     ecx, [r8+62h]
 * 00000001C000B02E: mov     [rsp+40h+var_20], rax
 * 00000001C000B033: call    cs:__imp_StorPortExtendedFunction
 * 00000001C000B03A: nop     dword ptr [rax+rax+00h]
 * 00000001C000B03F: movzx   eax, [rbp+arg_8]
 * 00000001C000B043: inc     ax
 * 00000001C000B046: mov     [rbp+arg_8], ax
 * 00000001C000B04A: cmp     ax, [rbx+11Ah]
 * 00000001C000B051: jb      short loc_1C000AFF4
 * 00000001C000B053: mov     rbx, [rsp+40h+arg_10]
 * 00000001C000B05B: mov     al, sil
 * 00000001C000B05E: add     rsp, 40h
 * 00000001C000B062: pop     r14
 * 00000001C000B064: pop     r12
 * 00000001C000B066: pop     rdi
 * 00000001C000B067: pop     rsi
 * 00000001C000B068: pop     rbp
 * 00000001C000B069: retn
 */
