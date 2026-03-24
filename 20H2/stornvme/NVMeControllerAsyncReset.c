/*
 * XREFs of NVMeControllerAsyncReset @ 0x1C000BF30
 * Callers:
 *     NVMeCompletionDpcRoutine @ 0x1C0002270 (NVMeCompletionDpcRoutine.c)
 *     NVMeHwResetBus @ 0x1C0009950 (NVMeHwResetBus.c)
 *     NVMeFirmwareActivateCompletion @ 0x1C0012C70 (NVMeFirmwareActivateCompletion.c)
 *     NVMeWriteBufferFirmwareActivateCompletion @ 0x1C0014380 (NVMeWriteBufferFirmwareActivateCompletion.c)
 *     NVMeAsyncEventRequestCompletion @ 0x1C00160A0 (NVMeAsyncEventRequestCompletion.c)
 * Callees:
 *     <none>
 */

/*
 * Hex-Rays decompilation failed for NVMeControllerAsyncReset @ 0x1C000BF30
 * Reason: Hex-Rays returned no pseudocode for 0x1C000BF30
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C000BF30: mov     rax, rsp
 * 00000001C000BF33: mov     [rax+8], rbx
 * 00000001C000BF37: mov     [rax+10h], rbp
 * 00000001C000BF3B: mov     [rax+18h], rsi
 * 00000001C000BF3F: push    rdi
 * 00000001C000BF40: sub     rsp, 40h
 * 00000001C000BF44: and     qword ptr [rax-10h], 0
 * 00000001C000BF49: mov     bpl, dl
 * 00000001C000BF4C: and     qword ptr [rax-18h], 0
 * 00000001C000BF51: mov     rdx, rcx
 * 00000001C000BF54: mov     rsi, r8
 * 00000001C000BF57: mov     rbx, rcx
 * 00000001C000BF5A: mov     ecx, 1Dh
 * 00000001C000BF5F: lea     r8, [rax-10h]
 * 00000001C000BF63: mov     rdi, r9
 * 00000001C000BF66: call    cs:__imp_StorPortExtendedFunction
 * 00000001C000BF6D: nop     dword ptr [rax+rax+00h]
 * 00000001C000BF72: test    eax, eax
 * 00000001C000BF74: jnz     loc_1C000C007
 * 00000001C000BF7A: lea     rax, [rsp+48h+var_18]
 * 00000001C000BF7F: mov     r9d, 656D764Eh
 * 00000001C000BF85: mov     r8d, 18h
 * 00000001C000BF8B: mov     [rsp+48h+var_28], rax
 * 00000001C000BF90: mov     rdx, rbx
 * 00000001C000BF93: xor     ecx, ecx
 * 00000001C000BF95: call    cs:__imp_StorPortExtendedFunction
 * 00000001C000BF9C: nop     dword ptr [rax+rax+00h]
 * 00000001C000BFA1: test    eax, eax
 * 00000001C000BFA3: jnz     short loc_1C000C007
 * 00000001C000BFA5: mov     rax, [rsp+48h+var_18]
 * 00000001C000BFAA: lea     r8, NVMeControllerAsyncResetWorker
 * 00000001C000BFB1: mov     rdx, rbx
 * 00000001C000BFB4: mov     ecx, 1Eh
 * 00000001C000BFB9: mov     [rax], bpl
 * 00000001C000BFBC: mov     rax, [rsp+48h+var_18]
 * 00000001C000BFC1: mov     [rax+8], rsi
 * 00000001C000BFC5: mov     rax, [rsp+48h+var_18]
 * 00000001C000BFCA: mov     [rax+10h], rdi
 * 00000001C000BFCE: mov     rax, [rsp+48h+var_18]
 * 00000001C000BFD3: mov     r9, [rsp+48h+var_10]
 * 00000001C000BFD8: mov     [rsp+48h+var_28], rax
 * 00000001C000BFDD: call    cs:__imp_StorPortExtendedFunction
 * 00000001C000BFE4: nop     dword ptr [rax+rax+00h]
 * 00000001C000BFE9: test    eax, eax
 * 00000001C000BFEB: jnz     short loc_1C000C007
 * 00000001C000BFED: lea     rdx, aStornvmeAsyncC_0; "StorNVMe - Async Controller Reset QUEUE"...
 * 00000001C000BFF4: lea     ecx, [rax+3]
 * 00000001C000BFF7: call    cs:__imp_StorPortDebugPrint
 * 00000001C000BFFE: nop     dword ptr [rax+rax+00h]
 * 00000001C000C003: mov     al, 1
 * 00000001C000C005: jmp     short loc_1C000C05D
 * 00000001C000C007: lea     rdx, aStornvmeAsyncC; "StorNVMe - Async Controller Reset FAILE"...
 * 00000001C000C00E: mov     ecx, 3
 * 00000001C000C013: call    cs:__imp_StorPortDebugPrint
 * 00000001C000C01A: nop     dword ptr [rax+rax+00h]
 * 00000001C000C01F: mov     r8, [rsp+48h+var_18]
 * 00000001C000C024: test    r8, r8
 * 00000001C000C027: jz      short loc_1C000C03D
 * 00000001C000C029: mov     rdx, rbx
 * 00000001C000C02C: mov     ecx, 1
 * 00000001C000C031: call    cs:__imp_StorPortExtendedFunction
 * 00000001C000C038: nop     dword ptr [rax+rax+00h]
 * 00000001C000C03D: mov     r8, [rsp+48h+var_10]
 * 00000001C000C042: test    r8, r8
 * 00000001C000C045: jz      short loc_1C000C05B
 * 00000001C000C047: mov     rdx, rbx
 * 00000001C000C04A: mov     ecx, 1Fh
 * 00000001C000C04F: call    cs:__imp_StorPortExtendedFunction
 * 00000001C000C056: nop     dword ptr [rax+rax+00h]
 * 00000001C000C05B: xor     al, al
 * 00000001C000C05D: mov     rbx, [rsp+48h+arg_0]
 * 00000001C000C062: mov     rbp, [rsp+48h+arg_8]
 * 00000001C000C067: mov     rsi, [rsp+48h+arg_10]
 * 00000001C000C06C: add     rsp, 40h
 * 00000001C000C070: pop     rdi
 * 00000001C000C071: retn
 */
