/*
 * XREFs of NVMeControllerStop @ 0x1C000D258
 * Callers:
 *     NVMeHwAdapterControl @ 0x1C0004A90 (NVMeHwAdapterControl.c)
 * Callees:
 *     memset @ 0x1C0005500 (memset.c)
 *     AdminQueuesFreeResources @ 0x1C0009CD8 (AdminQueuesFreeResources.c)
 *     FreeMsiInfo @ 0x1C000A030 (FreeMsiInfo.c)
 *     FreeProcessorInfo @ 0x1C000A0F0 (FreeProcessorInfo.c)
 *     IoQueuesDeletion @ 0x1C000AE20 (IoQueuesDeletion.c)
 *     IoQueuesFreeResources @ 0x1C000B0C4 (IoQueuesFreeResources.c)
 *     NVMeDisableThrottling @ 0x1C000D32C (NVMeDisableThrottling.c)
 *     NVMeFreeHostMemoryBuffer @ 0x1C000D424 (NVMeFreeHostMemoryBuffer.c)
 *     NVMePowerCleanUp @ 0x1C000E80C (NVMePowerCleanUp.c)
 */

/*
 * Hex-Rays decompilation failed for NVMeControllerStop @ 0x1C000D258
 * Reason: Hex-Rays returned no pseudocode for 0x1C000D258
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C000D258: mov     [rsp+arg_0], rbx
 * 00000001C000D25D: mov     [rsp+arg_8], rsi
 * 00000001C000D262: push    rdi
 * 00000001C000D263: sub     rsp, 20h
 * 00000001C000D267: mov     rbx, rcx
 * 00000001C000D26A: call    IoQueuesDeletion
 * 00000001C000D26F: mov     rcx, rbx
 * 00000001C000D272: mov     sil, al
 * 00000001C000D275: call    NVMePowerCleanUp
 * 00000001C000D27A: cmp     qword ptr [rbx+0EB8h], 0
 * 00000001C000D282: jz      short loc_1C000D28C
 * 00000001C000D284: mov     rcx, rbx; int
 * 00000001C000D287: call    NVMeFreeHostMemoryBuffer
 * 00000001C000D28C: mov     rcx, rbx
 * 00000001C000D28F: call    IoQueuesFreeResources
 * 00000001C000D294: mov     rcx, rbx
 * 00000001C000D297: call    AdminQueuesFreeResources
 * 00000001C000D29C: mov     rcx, rbx
 * 00000001C000D29F: call    FreeProcessorInfo
 * 00000001C000D2A4: mov     rcx, rbx
 * 00000001C000D2A7: call    FreeMsiInfo
 * 00000001C000D2AC: cmp     byte ptr [rbx+10h], 0
 * 00000001C000D2B0: jnz     short loc_1C000D2E7
 * 00000001C000D2B2: xor     edi, edi
 * 00000001C000D2B4: cmp     [rbx+0C8h], edi
 * 00000001C000D2BA: jbe     short loc_1C000D2E7
 * 00000001C000D2BC: mov     r8, [rbx+rdi*8+6B8h]
 * 00000001C000D2C4: test    r8, r8
 * 00000001C000D2C7: jz      short loc_1C000D2DD
 * 00000001C000D2C9: mov     rdx, rbx
 * 00000001C000D2CC: mov     ecx, 1
 * 00000001C000D2D1: call    cs:__imp_StorPortExtendedFunction
 * 00000001C000D2D8: nop     dword ptr [rax+rax+00h]
 * 00000001C000D2DD: inc     edi
 * 00000001C000D2DF: cmp     edi, [rbx+0C8h]
 * 00000001C000D2E5: jb      short loc_1C000D2BC
 * 00000001C000D2E7: lea     rcx, [rbx+6B8h]; void *
 * 00000001C000D2EE: xor     edx, edx; Val
 * 00000001C000D2F0: mov     r8d, 7F8h; Size
 * 00000001C000D2F6: call    memset
 * 00000001C000D2FB: and     dword ptr [rbx+0BCh], 0
 * 00000001C000D302: mov     rcx, rbx
 * 00000001C000D305: and     dword ptr [rbx+0C8h], 0
 * 00000001C000D30C: call    NVMeDisableThrottling
 * 00000001C000D311: mov     rbx, [rsp+28h+arg_0]
 * 00000001C000D316: mov     al, sil
 * 00000001C000D319: mov     rsi, [rsp+28h+arg_8]
 * 00000001C000D31E: add     rsp, 20h
 * 00000001C000D322: pop     rdi
 * 00000001C000D323: retn
 */
