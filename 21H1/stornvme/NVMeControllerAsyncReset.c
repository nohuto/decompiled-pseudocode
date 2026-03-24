/*
 * XREFs of NVMeControllerAsyncReset @ 0x1C000BF80
 * Callers:
 *     NVMeCompletionDpcRoutine @ 0x1C0002270 (NVMeCompletionDpcRoutine.c)
 *     NVMeHwResetBus @ 0x1C00099A0 (NVMeHwResetBus.c)
 *     NVMeFirmwareActivateCompletion @ 0x1C0012CF0 (NVMeFirmwareActivateCompletion.c)
 *     NVMeWriteBufferFirmwareActivateCompletion @ 0x1C0014400 (NVMeWriteBufferFirmwareActivateCompletion.c)
 *     NVMeAsyncEventRequestCompletion @ 0x1C0016120 (NVMeAsyncEventRequestCompletion.c)
 * Callees:
 *     <none>
 */

/*
 * Hex-Rays decompilation failed for NVMeControllerAsyncReset @ 0x1C000BF80
 * Reason: Hex-Rays returned no pseudocode for 0x1C000BF80
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C000BF80: mov     rax, rsp
 * 00000001C000BF83: mov     [rax+8], rbx
 * 00000001C000BF87: mov     [rax+10h], rbp
 * 00000001C000BF8B: mov     [rax+18h], rsi
 * 00000001C000BF8F: push    rdi
 * 00000001C000BF90: sub     rsp, 40h
 * 00000001C000BF94: and     qword ptr [rax-10h], 0
 * 00000001C000BF99: mov     bpl, dl
 * 00000001C000BF9C: and     qword ptr [rax-18h], 0
 * 00000001C000BFA1: mov     rdx, rcx
 * 00000001C000BFA4: mov     rsi, r8
 * 00000001C000BFA7: mov     rbx, rcx
 * 00000001C000BFAA: mov     ecx, 1Dh
 * 00000001C000BFAF: lea     r8, [rax-10h]
 * 00000001C000BFB3: mov     rdi, r9
 * 00000001C000BFB6: call    cs:__imp_StorPortExtendedFunction
 * 00000001C000BFBD: nop     dword ptr [rax+rax+00h]
 * 00000001C000BFC2: test    eax, eax
 * 00000001C000BFC4: jnz     loc_1C000C057
 * 00000001C000BFCA: lea     rax, [rsp+48h+var_18]
 * 00000001C000BFCF: mov     r9d, 656D764Eh
 * 00000001C000BFD5: mov     r8d, 18h
 * 00000001C000BFDB: mov     [rsp+48h+var_28], rax
 * 00000001C000BFE0: mov     rdx, rbx
 * 00000001C000BFE3: xor     ecx, ecx
 * 00000001C000BFE5: call    cs:__imp_StorPortExtendedFunction
 * 00000001C000BFEC: nop     dword ptr [rax+rax+00h]
 * 00000001C000BFF1: test    eax, eax
 * 00000001C000BFF3: jnz     short loc_1C000C057
 * 00000001C000BFF5: mov     rax, [rsp+48h+var_18]
 * 00000001C000BFFA: lea     r8, NVMeControllerAsyncResetWorker
 * 00000001C000C001: mov     rdx, rbx
 * 00000001C000C004: mov     ecx, 1Eh
 * 00000001C000C009: mov     [rax], bpl
 * 00000001C000C00C: mov     rax, [rsp+48h+var_18]
 * 00000001C000C011: mov     [rax+8], rsi
 * 00000001C000C015: mov     rax, [rsp+48h+var_18]
 * 00000001C000C01A: mov     [rax+10h], rdi
 * 00000001C000C01E: mov     rax, [rsp+48h+var_18]
 * 00000001C000C023: mov     r9, [rsp+48h+var_10]
 * 00000001C000C028: mov     [rsp+48h+var_28], rax
 * 00000001C000C02D: call    cs:__imp_StorPortExtendedFunction
 * 00000001C000C034: nop     dword ptr [rax+rax+00h]
 * 00000001C000C039: test    eax, eax
 * 00000001C000C03B: jnz     short loc_1C000C057
 * 00000001C000C03D: lea     rdx, aStornvmeAsyncC_0; "StorNVMe - Async Controller Reset QUEUE"...
 * 00000001C000C044: lea     ecx, [rax+3]
 * 00000001C000C047: call    cs:__imp_StorPortDebugPrint
 * 00000001C000C04E: nop     dword ptr [rax+rax+00h]
 * 00000001C000C053: mov     al, 1
 * 00000001C000C055: jmp     short loc_1C000C0AD
 * 00000001C000C057: lea     rdx, aStornvmeAsyncC; "StorNVMe - Async Controller Reset FAILE"...
 * 00000001C000C05E: mov     ecx, 3
 * 00000001C000C063: call    cs:__imp_StorPortDebugPrint
 * 00000001C000C06A: nop     dword ptr [rax+rax+00h]
 * 00000001C000C06F: mov     r8, [rsp+48h+var_18]
 * 00000001C000C074: test    r8, r8
 * 00000001C000C077: jz      short loc_1C000C08D
 * 00000001C000C079: mov     rdx, rbx
 * 00000001C000C07C: mov     ecx, 1
 * 00000001C000C081: call    cs:__imp_StorPortExtendedFunction
 * 00000001C000C088: nop     dword ptr [rax+rax+00h]
 * 00000001C000C08D: mov     r8, [rsp+48h+var_10]
 * 00000001C000C092: test    r8, r8
 * 00000001C000C095: jz      short loc_1C000C0AB
 * 00000001C000C097: mov     rdx, rbx
 * 00000001C000C09A: mov     ecx, 1Fh
 * 00000001C000C09F: call    cs:__imp_StorPortExtendedFunction
 * 00000001C000C0A6: nop     dword ptr [rax+rax+00h]
 * 00000001C000C0AB: xor     al, al
 * 00000001C000C0AD: mov     rbx, [rsp+48h+arg_0]
 * 00000001C000C0B2: mov     rbp, [rsp+48h+arg_8]
 * 00000001C000C0B7: mov     rsi, [rsp+48h+arg_10]
 * 00000001C000C0BC: add     rsp, 40h
 * 00000001C000C0C0: pop     rdi
 * 00000001C000C0C1: retn
 */
