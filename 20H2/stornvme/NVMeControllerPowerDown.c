/*
 * XREFs of NVMeControllerPowerDown @ 0x1C000CC1C
 * Callers:
 *     NVMeHwStartIo @ 0x1C0002110 (NVMeHwStartIo.c)
 *     NVMeHwAdapterControl @ 0x1C0004A90 (NVMeHwAdapterControl.c)
 * Callees:
 *     IoQueuesDeletion @ 0x1C000ADD0 (IoQueuesDeletion.c)
 *     NVMeSetHostMemoryBuffer @ 0x1C001A4C0 (NVMeSetHostMemoryBuffer.c)
 */

/*
 * Hex-Rays decompilation failed for NVMeControllerPowerDown @ 0x1C000CC1C
 * Reason: Hex-Rays returned no pseudocode for 0x1C000CC1C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C000CC1C: mov     [rsp+arg_0], rbx
 * 00000001C000CC21: mov     [rsp+arg_8], rsi
 * 00000001C000CC26: push    rdi
 * 00000001C000CC27: sub     rsp, 30h
 * 00000001C000CC2B: mov     rsi, [rcx+648h]
 * 00000001C000CC32: mov     rbx, rcx
 * 00000001C000CC35: mov     rcx, [rcx+0EB8h]
 * 00000001C000CC3C: xor     edi, edi
 * 00000001C000CC3E: test    rcx, rcx
 * 00000001C000CC41: jz      short loc_1C000CC63
 * 00000001C000CC43: mov     eax, [rcx+4]
 * 00000001C000CC46: lea     rdx, [rcx+8]
 * 00000001C000CC4A: mov     r9d, [rcx]
 * 00000001C000CC4D: xor     r8d, r8d
 * 00000001C000CC50: mov     dword ptr [rsp+38h+Size], eax; Size
 * 00000001C000CC54: mov     rcx, rbx; int
 * 00000001C000CC57: mov     [rsp+38h+Src], rdx; Src
 * 00000001C000CC5C: xor     edx, edx
 * 00000001C000CC5E: call    NVMeSetHostMemoryBuffer
 * 00000001C000CC63: mov     cl, [rbx+0EC0h]
 * 00000001C000CC69: mov     al, cl
 * 00000001C000CC6B: and     al, 3
 * 00000001C000CC6D: cmp     al, 3
 * 00000001C000CC6F: jnz     short loc_1C000CC7A
 * 00000001C000CC71: or      cl, 4
 * 00000001C000CC74: mov     [rbx+0EC0h], cl
 * 00000001C000CC7A: mov     eax, [rsi+58h]
 * 00000001C000CC7D: test    eax, eax
 * 00000001C000CC7F: jz      short loc_1C000CCBC
 * 00000001C000CC81: mov     r8d, eax
 * 00000001C000CC84: mov     r9, 346DC5D63886594Bh
 * 00000001C000CC8E: mov     rax, r9
 * 00000001C000CC91: mul     r8
 * 00000001C000CC94: mov     rax, r9
 * 00000001C000CC97: shr     rdx, 0Bh
 * 00000001C000CC9B: imul    rcx, rdx, 2710h
 * 00000001C000CCA2: cmp     r8, rcx
 * 00000001C000CCA5: lea     rdx, [rcx+2710h]
 * 00000001C000CCAC: cmovz   rdx, r8
 * 00000001C000CCB0: mul     rdx
 * 00000001C000CCB3: mov     rsi, rdx
 * 00000001C000CCB6: shr     rsi, 0Bh
 * 00000001C000CCBA: jmp     short loc_1C000CCC1
 * 00000001C000CCBC: mov     esi, 1F4h
 * 00000001C000CCC1: movzx   r10d, byte ptr [rbx+2Fh]
 * 00000001C000CCC6: test    r10b, r10b
 * 00000001C000CCC9: jz      short loc_1C000CD1C
 * 00000001C000CCCB: mov     r8d, esi
 * 00000001C000CCCE: mov     r11, 47AE147AE147AE15h
 * 00000001C000CCD8: mov     ecx, esi
 * 00000001C000CCDA: mov     rax, r11
 * 00000001C000CCDD: mul     r8
 * 00000001C000CCE0: mov     rax, r11
 * 00000001C000CCE3: sub     rcx, rdx
 * 00000001C000CCE6: shr     rcx, 1
 * 00000001C000CCE9: add     rcx, rdx
 * 00000001C000CCEC: shr     rcx, 6
 * 00000001C000CCF0: imul    rcx, 64h ; 'd'
 * 00000001C000CCF4: cmp     r8, rcx
 * 00000001C000CCF7: lea     r9, [rcx+64h]
 * 00000001C000CCFB: cmovz   r9, r8
 * 00000001C000CCFF: mul     r9
 * 00000001C000CD02: mov     eax, r10d
 * 00000001C000CD05: sub     r9, rdx
 * 00000001C000CD08: shr     r9, 1
 * 00000001C000CD0B: add     r9, rdx
 * 00000001C000CD0E: shr     r9, 6
 * 00000001C000CD12: cmp     r9d, r10d
 * 00000001C000CD15: cmova   eax, r9d
 * 00000001C000CD19: imul    esi, eax, 64h ; 'd'
 * 00000001C000CD1C: mov     r8d, esi
 * 00000001C000CD1F: lea     rdx, aStornvmePowerC_0; "StorNVMe - POWER: Controller D3, waitin"...
 * 00000001C000CD26: mov     ecx, 3
 * 00000001C000CD2B: call    cs:__imp_StorPortDebugPrint
 * 00000001C000CD32: nop     dword ptr [rax+rax+00h]
 * 00000001C000CD37: mov     eax, [rbx+18h]
 * 00000001C000CD3A: mov     rcx, rbx; int
 * 00000001C000CD3D: and     eax, 0FFFFFFFEh
 * 00000001C000CD40: or      eax, 4
 * 00000001C000CD43: mov     [rbx+18h], eax
 * 00000001C000CD46: call    IoQueuesDeletion
 * 00000001C000CD4B: mov     rax, [rbx+98h]
 * 00000001C000CD52: mov     eax, [rax+14h]
 * 00000001C000CD55: mov     rcx, [rbx+98h]
 * 00000001C000CD5C: btr     eax, 0Fh
 * 00000001C000CD60: bts     eax, 0Eh
 * 00000001C000CD64: mov     [rcx+14h], eax
 * 00000001C000CD67: lock or [rsp+38h+var_38], edi
 * 00000001C000CD6B: test    esi, esi
 * 00000001C000CD6D: jz      short loc_1C000CD9F
 * 00000001C000CD6F: mov     rax, [rbx+98h]
 * 00000001C000CD76: mov     eax, [rax+1Ch]
 * 00000001C000CD79: and     al, 0Ch
 * 00000001C000CD7B: cmp     al, 8
 * 00000001C000CD7D: jz      short loc_1C000CD9F
 * 00000001C000CD7F: mov     r8d, 2710h
 * 00000001C000CD85: mov     rdx, rbx
 * 00000001C000CD88: mov     ecx, 51h ; 'Q'
 * 00000001C000CD8D: call    cs:__imp_StorPortExtendedFunction
 * 00000001C000CD94: nop     dword ptr [rax+rax+00h]
 * 00000001C000CD99: inc     edi
 * 00000001C000CD9B: cmp     edi, esi
 * 00000001C000CD9D: jb      short loc_1C000CD6F
 * 00000001C000CD9F: lea     r8d, [rdi+rdi*4]
 * 00000001C000CDA3: mov     ecx, 3
 * 00000001C000CDA8: add     r8d, r8d
 * 00000001C000CDAB: lea     rdx, aStornvmePowerC; "StorNVMe - POWER: Controller D3, took %"...
 * 00000001C000CDB2: call    cs:__imp_StorPortDebugPrint
 * 00000001C000CDB9: nop     dword ptr [rax+rax+00h]
 * 00000001C000CDBE: mov     rbx, [rsp+38h+arg_0]
 * 00000001C000CDC3: mov     rsi, [rsp+38h+arg_8]
 * 00000001C000CDC8: add     rsp, 30h
 * 00000001C000CDCC: pop     rdi
 * 00000001C000CDCD: retn
 */
