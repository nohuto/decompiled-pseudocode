/*
 * XREFs of NVMeControllerPowerDown @ 0x1C000CBFC
 * Callers:
 *     NVMeHwStartIo @ 0x1C0002110 (NVMeHwStartIo.c)
 *     NVMeHwAdapterControl @ 0x1C0004A90 (NVMeHwAdapterControl.c)
 * Callees:
 *     IoQueuesDeletion @ 0x1C000AE20 (IoQueuesDeletion.c)
 *     NVMeSetHostMemoryBuffer @ 0x1C001A560 (NVMeSetHostMemoryBuffer.c)
 */

/*
 * Hex-Rays decompilation failed for NVMeControllerPowerDown @ 0x1C000CBFC
 * Reason: Hex-Rays returned no pseudocode for 0x1C000CBFC
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C000CBFC: mov     [rsp+arg_0], rbx
 * 00000001C000CC01: mov     [rsp+arg_8], rsi
 * 00000001C000CC06: push    rdi
 * 00000001C000CC07: sub     rsp, 30h
 * 00000001C000CC0B: mov     rsi, [rcx+648h]
 * 00000001C000CC12: mov     rbx, rcx
 * 00000001C000CC15: mov     rcx, [rcx+0EB8h]
 * 00000001C000CC1C: xor     edi, edi
 * 00000001C000CC1E: test    rcx, rcx
 * 00000001C000CC21: jz      short loc_1C000CC43
 * 00000001C000CC23: mov     eax, [rcx+4]
 * 00000001C000CC26: lea     rdx, [rcx+8]
 * 00000001C000CC2A: mov     r9d, [rcx]
 * 00000001C000CC2D: xor     r8d, r8d
 * 00000001C000CC30: mov     dword ptr [rsp+38h+Size], eax; Size
 * 00000001C000CC34: mov     rcx, rbx; int
 * 00000001C000CC37: mov     [rsp+38h+Src], rdx; Src
 * 00000001C000CC3C: xor     edx, edx
 * 00000001C000CC3E: call    NVMeSetHostMemoryBuffer
 * 00000001C000CC43: mov     cl, [rbx+0EC0h]
 * 00000001C000CC49: mov     al, cl
 * 00000001C000CC4B: and     al, 3
 * 00000001C000CC4D: cmp     al, 3
 * 00000001C000CC4F: jnz     short loc_1C000CC5A
 * 00000001C000CC51: or      cl, 4
 * 00000001C000CC54: mov     [rbx+0EC0h], cl
 * 00000001C000CC5A: mov     eax, [rsi+58h]
 * 00000001C000CC5D: test    eax, eax
 * 00000001C000CC5F: jz      short loc_1C000CC9C
 * 00000001C000CC61: mov     r8d, eax
 * 00000001C000CC64: mov     r9, 346DC5D63886594Bh
 * 00000001C000CC6E: mov     rax, r9
 * 00000001C000CC71: mul     r8
 * 00000001C000CC74: mov     rax, r9
 * 00000001C000CC77: shr     rdx, 0Bh
 * 00000001C000CC7B: imul    rcx, rdx, 2710h
 * 00000001C000CC82: cmp     r8, rcx
 * 00000001C000CC85: lea     rdx, [rcx+2710h]
 * 00000001C000CC8C: cmovz   rdx, r8
 * 00000001C000CC90: mul     rdx
 * 00000001C000CC93: mov     rsi, rdx
 * 00000001C000CC96: shr     rsi, 0Bh
 * 00000001C000CC9A: jmp     short loc_1C000CCA1
 * 00000001C000CC9C: mov     esi, 1F4h
 * 00000001C000CCA1: movzx   r10d, byte ptr [rbx+2Fh]
 * 00000001C000CCA6: test    r10b, r10b
 * 00000001C000CCA9: jz      short loc_1C000CCFC
 * 00000001C000CCAB: mov     r8d, esi
 * 00000001C000CCAE: mov     r11, 47AE147AE147AE15h
 * 00000001C000CCB8: mov     ecx, esi
 * 00000001C000CCBA: mov     rax, r11
 * 00000001C000CCBD: mul     r8
 * 00000001C000CCC0: mov     rax, r11
 * 00000001C000CCC3: sub     rcx, rdx
 * 00000001C000CCC6: shr     rcx, 1
 * 00000001C000CCC9: add     rcx, rdx
 * 00000001C000CCCC: shr     rcx, 6
 * 00000001C000CCD0: imul    rcx, 64h ; 'd'
 * 00000001C000CCD4: cmp     r8, rcx
 * 00000001C000CCD7: lea     r9, [rcx+64h]
 * 00000001C000CCDB: cmovz   r9, r8
 * 00000001C000CCDF: mul     r9
 * 00000001C000CCE2: mov     eax, r10d
 * 00000001C000CCE5: sub     r9, rdx
 * 00000001C000CCE8: shr     r9, 1
 * 00000001C000CCEB: add     r9, rdx
 * 00000001C000CCEE: shr     r9, 6
 * 00000001C000CCF2: cmp     r9d, r10d
 * 00000001C000CCF5: cmova   eax, r9d
 * 00000001C000CCF9: imul    esi, eax, 64h ; 'd'
 * 00000001C000CCFC: mov     r8d, esi
 * 00000001C000CCFF: lea     rdx, aStornvmePowerC_0; "StorNVMe - POWER: Controller D3, waitin"...
 * 00000001C000CD06: mov     ecx, 3
 * 00000001C000CD0B: call    cs:__imp_StorPortDebugPrint
 * 00000001C000CD12: nop     dword ptr [rax+rax+00h]
 * 00000001C000CD17: mov     eax, [rbx+18h]
 * 00000001C000CD1A: mov     rcx, rbx; int
 * 00000001C000CD1D: and     eax, 0FFFFFFFEh
 * 00000001C000CD20: or      eax, 4
 * 00000001C000CD23: mov     [rbx+18h], eax
 * 00000001C000CD26: call    IoQueuesDeletion
 * 00000001C000CD2B: mov     rax, [rbx+98h]
 * 00000001C000CD32: mov     eax, [rax+14h]
 * 00000001C000CD35: mov     rcx, [rbx+98h]
 * 00000001C000CD3C: btr     eax, 0Fh
 * 00000001C000CD40: bts     eax, 0Eh
 * 00000001C000CD44: mov     [rcx+14h], eax
 * 00000001C000CD47: lock or [rsp+38h+var_38], edi
 * 00000001C000CD4B: test    esi, esi
 * 00000001C000CD4D: jz      short loc_1C000CD7F
 * 00000001C000CD4F: mov     rax, [rbx+98h]
 * 00000001C000CD56: mov     eax, [rax+1Ch]
 * 00000001C000CD59: and     al, 0Ch
 * 00000001C000CD5B: cmp     al, 8
 * 00000001C000CD5D: jz      short loc_1C000CD7F
 * 00000001C000CD5F: mov     r8d, 2710h
 * 00000001C000CD65: mov     rdx, rbx
 * 00000001C000CD68: mov     ecx, 51h ; 'Q'
 * 00000001C000CD6D: call    cs:__imp_StorPortExtendedFunction
 * 00000001C000CD74: nop     dword ptr [rax+rax+00h]
 * 00000001C000CD79: inc     edi
 * 00000001C000CD7B: cmp     edi, esi
 * 00000001C000CD7D: jb      short loc_1C000CD4F
 * 00000001C000CD7F: lea     r8d, [rdi+rdi*4]
 * 00000001C000CD83: mov     ecx, 3
 * 00000001C000CD88: add     r8d, r8d
 * 00000001C000CD8B: lea     rdx, aStornvmePowerC; "StorNVMe - POWER: Controller D3, took %"...
 * 00000001C000CD92: call    cs:__imp_StorPortDebugPrint
 * 00000001C000CD99: nop     dword ptr [rax+rax+00h]
 * 00000001C000CD9E: mov     rbx, [rsp+38h+arg_0]
 * 00000001C000CDA3: mov     rsi, [rsp+38h+arg_8]
 * 00000001C000CDA8: add     rsp, 30h
 * 00000001C000CDAC: pop     rdi
 * 00000001C000CDAD: retn
 */
