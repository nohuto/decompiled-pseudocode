/*
 * XREFs of NVMeControllerStop @ 0x1C000D270
 * Callers:
 *     NVMeHwAdapterControl @ 0x1C0004A90 (NVMeHwAdapterControl.c)
 * Callees:
 *     memset @ 0x1C00054C0 (memset.c)
 *     AdminQueuesFreeResources @ 0x1C0009C88 (AdminQueuesFreeResources.c)
 *     FreeMsiInfo @ 0x1C0009FE0 (FreeMsiInfo.c)
 *     FreeProcessorInfo @ 0x1C000A0A0 (FreeProcessorInfo.c)
 *     IoQueuesDeletion @ 0x1C000ADD0 (IoQueuesDeletion.c)
 *     IoQueuesFreeResources @ 0x1C000B074 (IoQueuesFreeResources.c)
 *     NVMeDisableThrottling @ 0x1C000D344 (NVMeDisableThrottling.c)
 *     NVMeFreeHostMemoryBuffer @ 0x1C000D3A4 (NVMeFreeHostMemoryBuffer.c)
 *     NVMePowerCleanUp @ 0x1C000E78C (NVMePowerCleanUp.c)
 */

/*
 * Hex-Rays decompilation failed for NVMeControllerStop @ 0x1C000D270
 * Reason: Hex-Rays returned no pseudocode for 0x1C000D270
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C000D270: mov     [rsp+arg_0], rbx
 * 00000001C000D275: mov     [rsp+arg_8], rsi
 * 00000001C000D27A: push    rdi
 * 00000001C000D27B: sub     rsp, 20h
 * 00000001C000D27F: mov     rbx, rcx
 * 00000001C000D282: call    IoQueuesDeletion
 * 00000001C000D287: mov     rcx, rbx
 * 00000001C000D28A: mov     sil, al
 * 00000001C000D28D: call    NVMePowerCleanUp
 * 00000001C000D292: cmp     qword ptr [rbx+0EB8h], 0
 * 00000001C000D29A: jz      short loc_1C000D2A4
 * 00000001C000D29C: mov     rcx, rbx; int
 * 00000001C000D29F: call    NVMeFreeHostMemoryBuffer
 * 00000001C000D2A4: mov     rcx, rbx
 * 00000001C000D2A7: call    IoQueuesFreeResources
 * 00000001C000D2AC: mov     rcx, rbx
 * 00000001C000D2AF: call    AdminQueuesFreeResources
 * 00000001C000D2B4: mov     rcx, rbx
 * 00000001C000D2B7: call    FreeProcessorInfo
 * 00000001C000D2BC: mov     rcx, rbx
 * 00000001C000D2BF: call    FreeMsiInfo
 * 00000001C000D2C4: cmp     byte ptr [rbx+10h], 0
 * 00000001C000D2C8: jnz     short loc_1C000D2FF
 * 00000001C000D2CA: xor     edi, edi
 * 00000001C000D2CC: cmp     [rbx+0C8h], edi
 * 00000001C000D2D2: jbe     short loc_1C000D2FF
 * 00000001C000D2D4: mov     r8, [rbx+rdi*8+6B8h]
 * 00000001C000D2DC: test    r8, r8
 * 00000001C000D2DF: jz      short loc_1C000D2F5
 * 00000001C000D2E1: mov     rdx, rbx
 * 00000001C000D2E4: mov     ecx, 1
 * 00000001C000D2E9: call    cs:__imp_StorPortExtendedFunction
 * 00000001C000D2F0: nop     dword ptr [rax+rax+00h]
 * 00000001C000D2F5: inc     edi
 * 00000001C000D2F7: cmp     edi, [rbx+0C8h]
 * 00000001C000D2FD: jb      short loc_1C000D2D4
 * 00000001C000D2FF: lea     rcx, [rbx+6B8h]; void *
 * 00000001C000D306: xor     edx, edx; Val
 * 00000001C000D308: mov     r8d, 7F8h; Size
 * 00000001C000D30E: call    memset
 * 00000001C000D313: and     dword ptr [rbx+0BCh], 0
 * 00000001C000D31A: mov     rcx, rbx
 * 00000001C000D31D: and     dword ptr [rbx+0C8h], 0
 * 00000001C000D324: call    NVMeDisableThrottling
 * 00000001C000D329: mov     rbx, [rsp+28h+arg_0]
 * 00000001C000D32E: mov     al, sil
 * 00000001C000D331: mov     rsi, [rsp+28h+arg_8]
 * 00000001C000D336: add     rsp, 20h
 * 00000001C000D33A: pop     rdi
 * 00000001C000D33B: retn
 */
