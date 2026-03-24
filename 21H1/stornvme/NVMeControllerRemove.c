/*
 * XREFs of NVMeControllerRemove @ 0x1C000CE54
 * Callers:
 *     NVMeHwAdapterControl @ 0x1C0004A90 (NVMeHwAdapterControl.c)
 * Callees:
 *     NVMeFreeDmaBuffer @ 0x1C000451C (NVMeFreeDmaBuffer.c)
 *     memset @ 0x1C0005500 (memset.c)
 *     AdminQueuesFreeResources @ 0x1C0009CD8 (AdminQueuesFreeResources.c)
 *     FreeMsiInfo @ 0x1C000A030 (FreeMsiInfo.c)
 *     FreeProcessorGroupInfo @ 0x1C000A0A4 (FreeProcessorGroupInfo.c)
 *     FreeProcessorInfo @ 0x1C000A0F0 (FreeProcessorInfo.c)
 *     IoQueuesFreeResources @ 0x1C000B0C4 (IoQueuesFreeResources.c)
 *     NVMeDisableThrottling @ 0x1C000D32C (NVMeDisableThrottling.c)
 *     NVMeFreeHostMemoryBuffer @ 0x1C000D424 (NVMeFreeHostMemoryBuffer.c)
 *     NVMePowerCleanUp @ 0x1C000E80C (NVMePowerCleanUp.c)
 */

/*
 * Hex-Rays decompilation failed for NVMeControllerRemove @ 0x1C000CE54
 * Reason: Hex-Rays returned no pseudocode for 0x1C000CE54
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C000CE54: mov     [rsp+arg_0], rbx
 * 00000001C000CE59: mov     [rsp+arg_8], rbp
 * 00000001C000CE5E: mov     [rsp+arg_10], rsi
 * 00000001C000CE63: push    rdi
 * 00000001C000CE64: sub     rsp, 20h
 * 00000001C000CE68: mov     rsi, [rcx+648h]
 * 00000001C000CE6F: mov     rbx, rcx
 * 00000001C000CE72: and     dword ptr [rcx+18h], 0FFFFFFFEh
 * 00000001C000CE76: call    NVMePowerCleanUp
 * 00000001C000CE7B: xor     edi, edi
 * 00000001C000CE7D: cmp     [rbx+0EB8h], rdi
 * 00000001C000CE84: jz      short loc_1C000CE8E
 * 00000001C000CE86: mov     rcx, rbx; int
 * 00000001C000CE89: call    NVMeFreeHostMemoryBuffer
 * 00000001C000CE8E: mov     eax, [rsi+58h]
 * 00000001C000CE91: test    eax, eax
 * 00000001C000CE93: jz      short loc_1C000CED0
 * 00000001C000CE95: mov     r8d, eax
 * 00000001C000CE98: mov     r9, 346DC5D63886594Bh
 * 00000001C000CEA2: mov     rax, r9
 * 00000001C000CEA5: mul     r8
 * 00000001C000CEA8: mov     rax, r9
 * 00000001C000CEAB: shr     rdx, 0Bh
 * 00000001C000CEAF: imul    rcx, rdx, 2710h
 * 00000001C000CEB6: cmp     r8, rcx
 * 00000001C000CEB9: lea     rdx, [rcx+2710h]
 * 00000001C000CEC0: cmovz   rdx, r8
 * 00000001C000CEC4: mul     rdx
 * 00000001C000CEC7: mov     rbp, rdx
 * 00000001C000CECA: shr     rbp, 0Bh
 * 00000001C000CECE: jmp     short loc_1C000CED5
 * 00000001C000CED0: mov     ebp, 1F4h
 * 00000001C000CED5: movzx   r10d, byte ptr [rbx+2Fh]
 * 00000001C000CEDA: test    r10b, r10b
 * 00000001C000CEDD: jz      short loc_1C000CF30
 * 00000001C000CEDF: mov     r8d, ebp
 * 00000001C000CEE2: mov     r11, 47AE147AE147AE15h
 * 00000001C000CEEC: mov     ecx, ebp
 * 00000001C000CEEE: mov     rax, r11
 * 00000001C000CEF1: mul     r8
 * 00000001C000CEF4: mov     rax, r11
 * 00000001C000CEF7: sub     rcx, rdx
 * 00000001C000CEFA: shr     rcx, 1
 * 00000001C000CEFD: add     rcx, rdx
 * 00000001C000CF00: shr     rcx, 6
 * 00000001C000CF04: imul    rcx, 64h ; 'd'
 * 00000001C000CF08: cmp     r8, rcx
 * 00000001C000CF0B: lea     r9, [rcx+64h]
 * 00000001C000CF0F: cmovz   r9, r8
 * 00000001C000CF13: mul     r9
 * 00000001C000CF16: mov     eax, r10d
 * 00000001C000CF19: sub     r9, rdx
 * 00000001C000CF1C: shr     r9, 1
 * 00000001C000CF1F: add     r9, rdx
 * 00000001C000CF22: shr     r9, 6
 * 00000001C000CF26: cmp     r9d, r10d
 * 00000001C000CF29: cmova   eax, r9d
 * 00000001C000CF2D: imul    ebp, eax, 64h ; 'd'
 * 00000001C000CF30: mov     rcx, rbx
 * 00000001C000CF33: call    IoQueuesFreeResources
 * 00000001C000CF38: mov     rcx, rbx
 * 00000001C000CF3B: call    AdminQueuesFreeResources
 * 00000001C000CF40: mov     r9, [rbx+0F80h]
 * 00000001C000CF47: lea     r8, [rbx+0EB0h]
 * 00000001C000CF4E: mov     edx, 1000h
 * 00000001C000CF53: mov     rcx, rbx
 * 00000001C000CF56: call    NVMeFreeDmaBuffer
 * 00000001C000CF5B: mov     r9, [rbx+0F88h]
 * 00000001C000CF62: lea     r8, [rbx+0F78h]
 * 00000001C000CF69: mov     edx, 200h
 * 00000001C000CF6E: mov     rcx, rbx
 * 00000001C000CF71: call    NVMeFreeDmaBuffer
 * 00000001C000CF76: mov     rcx, rbx
 * 00000001C000CF79: call    FreeProcessorInfo
 * 00000001C000CF7E: mov     rcx, rbx
 * 00000001C000CF81: call    FreeProcessorGroupInfo
 * 00000001C000CF86: mov     rcx, rbx
 * 00000001C000CF89: call    FreeMsiInfo
 * 00000001C000CF8E: mov     rcx, rbx
 * 00000001C000CF91: call    NVMeDisableThrottling
 * 00000001C000CF96: cmp     [rbx+10h], dil
 * 00000001C000CF9A: jnz     short loc_1C000CFD3
 * 00000001C000CF9C: mov     esi, edi
 * 00000001C000CF9E: cmp     [rbx+0C8h], edi
 * 00000001C000CFA4: jbe     short loc_1C000CFD3
 * 00000001C000CFA6: mov     eax, esi
 * 00000001C000CFA8: mov     r8, [rbx+rax*8+6B8h]
 * 00000001C000CFB0: test    r8, r8
 * 00000001C000CFB3: jz      short loc_1C000CFC9
 * 00000001C000CFB5: mov     rdx, rbx
 * 00000001C000CFB8: mov     ecx, 1
 * 00000001C000CFBD: call    cs:__imp_StorPortExtendedFunction
 * 00000001C000CFC4: nop     dword ptr [rax+rax+00h]
 * 00000001C000CFC9: inc     esi
 * 00000001C000CFCB: cmp     esi, [rbx+0C8h]
 * 00000001C000CFD1: jb      short loc_1C000CFA6
 * 00000001C000CFD3: lea     rcx, [rbx+6B8h]; void *
 * 00000001C000CFDA: xor     edx, edx; Val
 * 00000001C000CFDC: mov     r8d, 7F8h; Size
 * 00000001C000CFE2: call    memset
 * 00000001C000CFE7: mov     r8, [rbx+0F10h]
 * 00000001C000CFEE: mov     [rbx+0BCh], edi
 * 00000001C000CFF4: test    r8, r8
 * 00000001C000CFF7: jz      short loc_1C000D014
 * 00000001C000CFF9: mov     rdx, rbx
 * 00000001C000CFFC: mov     ecx, 1
 * 00000001C000D001: call    cs:__imp_StorPortExtendedFunction
 * 00000001C000D008: nop     dword ptr [rax+rax+00h]
 * 00000001C000D00D: mov     [rbx+0F10h], rdi
 * 00000001C000D014: mov     rax, [rbx+98h]
 * 00000001C000D01B: mov     eax, [rax+14h]
 * 00000001C000D01E: mov     rcx, [rbx+98h]
 * 00000001C000D025: btr     eax, 0Fh
 * 00000001C000D029: bts     eax, 0Eh
 * 00000001C000D02D: mov     [rcx+14h], eax
 * 00000001C000D030: lock or [rsp+28h+var_28], edi
 * 00000001C000D034: test    ebp, ebp
 * 00000001C000D036: jz      short loc_1C000D06A
 * 00000001C000D038: mov     rax, [rbx+98h]
 * 00000001C000D03F: mov     ecx, [rax+1Ch]
 * 00000001C000D042: and     cl, 0Ch
 * 00000001C000D045: cmp     cl, 8
 * 00000001C000D048: jz      short loc_1C000D06A
 * 00000001C000D04A: mov     r8d, 2710h
 * 00000001C000D050: mov     rdx, rbx
 * 00000001C000D053: mov     ecx, 51h ; 'Q'
 * 00000001C000D058: call    cs:__imp_StorPortExtendedFunction
 * 00000001C000D05F: nop     dword ptr [rax+rax+00h]
 * 00000001C000D064: inc     edi
 * 00000001C000D066: cmp     edi, ebp
 * 00000001C000D068: jb      short loc_1C000D038
 * 00000001C000D06A: mov     rbx, [rsp+28h+arg_0]
 * 00000001C000D06F: mov     al, 1
 * 00000001C000D071: mov     rbp, [rsp+28h+arg_8]
 * 00000001C000D076: mov     rsi, [rsp+28h+arg_10]
 * 00000001C000D07B: add     rsp, 20h
 * 00000001C000D07F: pop     rdi
 * 00000001C000D080: retn
 */
