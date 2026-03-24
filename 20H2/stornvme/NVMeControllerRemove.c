/*
 * XREFs of NVMeControllerRemove @ 0x1C000CE6C
 * Callers:
 *     NVMeHwAdapterControl @ 0x1C0004A90 (NVMeHwAdapterControl.c)
 * Callees:
 *     NVMeFreeDmaBuffer @ 0x1C000451C (NVMeFreeDmaBuffer.c)
 *     memset @ 0x1C00054C0 (memset.c)
 *     AdminQueuesFreeResources @ 0x1C0009C88 (AdminQueuesFreeResources.c)
 *     FreeMsiInfo @ 0x1C0009FE0 (FreeMsiInfo.c)
 *     FreeProcessorGroupInfo @ 0x1C000A054 (FreeProcessorGroupInfo.c)
 *     FreeProcessorInfo @ 0x1C000A0A0 (FreeProcessorInfo.c)
 *     IoQueuesFreeResources @ 0x1C000B074 (IoQueuesFreeResources.c)
 *     NVMeDisableThrottling @ 0x1C000D344 (NVMeDisableThrottling.c)
 *     NVMeFreeHostMemoryBuffer @ 0x1C000D3A4 (NVMeFreeHostMemoryBuffer.c)
 *     NVMePowerCleanUp @ 0x1C000E78C (NVMePowerCleanUp.c)
 */

/*
 * Hex-Rays decompilation failed for NVMeControllerRemove @ 0x1C000CE6C
 * Reason: Hex-Rays returned no pseudocode for 0x1C000CE6C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C000CE6C: mov     [rsp+arg_0], rbx
 * 00000001C000CE71: mov     [rsp+arg_8], rbp
 * 00000001C000CE76: mov     [rsp+arg_10], rsi
 * 00000001C000CE7B: push    rdi
 * 00000001C000CE7C: sub     rsp, 20h
 * 00000001C000CE80: mov     rsi, [rcx+648h]
 * 00000001C000CE87: mov     rbx, rcx
 * 00000001C000CE8A: and     dword ptr [rcx+18h], 0FFFFFFFEh
 * 00000001C000CE8E: call    NVMePowerCleanUp
 * 00000001C000CE93: xor     edi, edi
 * 00000001C000CE95: cmp     [rbx+0EB8h], rdi
 * 00000001C000CE9C: jz      short loc_1C000CEA6
 * 00000001C000CE9E: mov     rcx, rbx; int
 * 00000001C000CEA1: call    NVMeFreeHostMemoryBuffer
 * 00000001C000CEA6: mov     eax, [rsi+58h]
 * 00000001C000CEA9: test    eax, eax
 * 00000001C000CEAB: jz      short loc_1C000CEE8
 * 00000001C000CEAD: mov     r8d, eax
 * 00000001C000CEB0: mov     r9, 346DC5D63886594Bh
 * 00000001C000CEBA: mov     rax, r9
 * 00000001C000CEBD: mul     r8
 * 00000001C000CEC0: mov     rax, r9
 * 00000001C000CEC3: shr     rdx, 0Bh
 * 00000001C000CEC7: imul    rcx, rdx, 2710h
 * 00000001C000CECE: cmp     r8, rcx
 * 00000001C000CED1: lea     rdx, [rcx+2710h]
 * 00000001C000CED8: cmovz   rdx, r8
 * 00000001C000CEDC: mul     rdx
 * 00000001C000CEDF: mov     rbp, rdx
 * 00000001C000CEE2: shr     rbp, 0Bh
 * 00000001C000CEE6: jmp     short loc_1C000CEED
 * 00000001C000CEE8: mov     ebp, 1F4h
 * 00000001C000CEED: movzx   r10d, byte ptr [rbx+2Fh]
 * 00000001C000CEF2: test    r10b, r10b
 * 00000001C000CEF5: jz      short loc_1C000CF48
 * 00000001C000CEF7: mov     r8d, ebp
 * 00000001C000CEFA: mov     r11, 47AE147AE147AE15h
 * 00000001C000CF04: mov     ecx, ebp
 * 00000001C000CF06: mov     rax, r11
 * 00000001C000CF09: mul     r8
 * 00000001C000CF0C: mov     rax, r11
 * 00000001C000CF0F: sub     rcx, rdx
 * 00000001C000CF12: shr     rcx, 1
 * 00000001C000CF15: add     rcx, rdx
 * 00000001C000CF18: shr     rcx, 6
 * 00000001C000CF1C: imul    rcx, 64h ; 'd'
 * 00000001C000CF20: cmp     r8, rcx
 * 00000001C000CF23: lea     r9, [rcx+64h]
 * 00000001C000CF27: cmovz   r9, r8
 * 00000001C000CF2B: mul     r9
 * 00000001C000CF2E: mov     eax, r10d
 * 00000001C000CF31: sub     r9, rdx
 * 00000001C000CF34: shr     r9, 1
 * 00000001C000CF37: add     r9, rdx
 * 00000001C000CF3A: shr     r9, 6
 * 00000001C000CF3E: cmp     r9d, r10d
 * 00000001C000CF41: cmova   eax, r9d
 * 00000001C000CF45: imul    ebp, eax, 64h ; 'd'
 * 00000001C000CF48: mov     rcx, rbx
 * 00000001C000CF4B: call    IoQueuesFreeResources
 * 00000001C000CF50: mov     rcx, rbx
 * 00000001C000CF53: call    AdminQueuesFreeResources
 * 00000001C000CF58: mov     r9, [rbx+0F80h]
 * 00000001C000CF5F: lea     r8, [rbx+0EB0h]
 * 00000001C000CF66: mov     edx, 1000h
 * 00000001C000CF6B: mov     rcx, rbx
 * 00000001C000CF6E: call    NVMeFreeDmaBuffer
 * 00000001C000CF73: mov     r9, [rbx+0F88h]
 * 00000001C000CF7A: lea     r8, [rbx+0F78h]
 * 00000001C000CF81: mov     edx, 200h
 * 00000001C000CF86: mov     rcx, rbx
 * 00000001C000CF89: call    NVMeFreeDmaBuffer
 * 00000001C000CF8E: mov     rcx, rbx
 * 00000001C000CF91: call    FreeProcessorInfo
 * 00000001C000CF96: mov     rcx, rbx
 * 00000001C000CF99: call    FreeProcessorGroupInfo
 * 00000001C000CF9E: mov     rcx, rbx
 * 00000001C000CFA1: call    FreeMsiInfo
 * 00000001C000CFA6: mov     rcx, rbx
 * 00000001C000CFA9: call    NVMeDisableThrottling
 * 00000001C000CFAE: cmp     [rbx+10h], dil
 * 00000001C000CFB2: jnz     short loc_1C000CFEB
 * 00000001C000CFB4: mov     esi, edi
 * 00000001C000CFB6: cmp     [rbx+0C8h], edi
 * 00000001C000CFBC: jbe     short loc_1C000CFEB
 * 00000001C000CFBE: mov     eax, esi
 * 00000001C000CFC0: mov     r8, [rbx+rax*8+6B8h]
 * 00000001C000CFC8: test    r8, r8
 * 00000001C000CFCB: jz      short loc_1C000CFE1
 * 00000001C000CFCD: mov     rdx, rbx
 * 00000001C000CFD0: mov     ecx, 1
 * 00000001C000CFD5: call    cs:__imp_StorPortExtendedFunction
 * 00000001C000CFDC: nop     dword ptr [rax+rax+00h]
 * 00000001C000CFE1: inc     esi
 * 00000001C000CFE3: cmp     esi, [rbx+0C8h]
 * 00000001C000CFE9: jb      short loc_1C000CFBE
 * 00000001C000CFEB: lea     rcx, [rbx+6B8h]; void *
 * 00000001C000CFF2: xor     edx, edx; Val
 * 00000001C000CFF4: mov     r8d, 7F8h; Size
 * 00000001C000CFFA: call    memset
 * 00000001C000CFFF: mov     r8, [rbx+0F10h]
 * 00000001C000D006: mov     [rbx+0BCh], edi
 * 00000001C000D00C: test    r8, r8
 * 00000001C000D00F: jz      short loc_1C000D02C
 * 00000001C000D011: mov     rdx, rbx
 * 00000001C000D014: mov     ecx, 1
 * 00000001C000D019: call    cs:__imp_StorPortExtendedFunction
 * 00000001C000D020: nop     dword ptr [rax+rax+00h]
 * 00000001C000D025: mov     [rbx+0F10h], rdi
 * 00000001C000D02C: mov     rax, [rbx+98h]
 * 00000001C000D033: mov     eax, [rax+14h]
 * 00000001C000D036: mov     rcx, [rbx+98h]
 * 00000001C000D03D: btr     eax, 0Fh
 * 00000001C000D041: bts     eax, 0Eh
 * 00000001C000D045: mov     [rcx+14h], eax
 * 00000001C000D048: lock or [rsp+28h+var_28], edi
 * 00000001C000D04C: test    ebp, ebp
 * 00000001C000D04E: jz      short loc_1C000D082
 * 00000001C000D050: mov     rax, [rbx+98h]
 * 00000001C000D057: mov     ecx, [rax+1Ch]
 * 00000001C000D05A: and     cl, 0Ch
 * 00000001C000D05D: cmp     cl, 8
 * 00000001C000D060: jz      short loc_1C000D082
 * 00000001C000D062: mov     r8d, 2710h
 * 00000001C000D068: mov     rdx, rbx
 * 00000001C000D06B: mov     ecx, 51h ; 'Q'
 * 00000001C000D070: call    cs:__imp_StorPortExtendedFunction
 * 00000001C000D077: nop     dword ptr [rax+rax+00h]
 * 00000001C000D07C: inc     edi
 * 00000001C000D07E: cmp     edi, ebp
 * 00000001C000D080: jb      short loc_1C000D050
 * 00000001C000D082: mov     rbx, [rsp+28h+arg_0]
 * 00000001C000D087: mov     al, 1
 * 00000001C000D089: mov     rbp, [rsp+28h+arg_8]
 * 00000001C000D08E: mov     rsi, [rsp+28h+arg_10]
 * 00000001C000D093: add     rsp, 20h
 * 00000001C000D097: pop     rdi
 * 00000001C000D098: retn
 */
