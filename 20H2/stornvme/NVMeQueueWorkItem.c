/*
 * XREFs of NVMeQueueWorkItem @ 0x1C0013B4C
 * Callers:
 *     NVMeCompletionDpcRoutine @ 0x1C0002270 (NVMeCompletionDpcRoutine.c)
 *     FirmwareDownload @ 0x1C0010318 (FirmwareDownload.c)
 *     NVMeFirmwareActivateCompletion @ 0x1C0012C70 (NVMeFirmwareActivateCompletion.c)
 *     NVMeWriteBufferFirmwareActivateCompletion @ 0x1C0014380 (NVMeWriteBufferFirmwareActivateCompletion.c)
 *     NVMeWriteBufferFirmwareDownload @ 0x1C001456C (NVMeWriteBufferFirmwareDownload.c)
 *     NVMeAsyncEventRequestCompletion @ 0x1C00160A0 (NVMeAsyncEventRequestCompletion.c)
 * Callees:
 *     <none>
 */

/*
 * Hex-Rays decompilation failed for NVMeQueueWorkItem @ 0x1C0013B4C
 * Reason: Hex-Rays returned no pseudocode for 0x1C0013B4C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0013B4C: mov     rax, rsp
 * 00000001C0013B4F: mov     [rax+8], rbx
 * 00000001C0013B53: mov     [rax+18h], r8
 * 00000001C0013B57: push    rdi
 * 00000001C0013B58: sub     rsp, 30h
 * 00000001C0013B5C: and     qword ptr [rax+18h], 0
 * 00000001C0013B61: lea     r8, [rax+18h]
 * 00000001C0013B65: mov     rdi, rdx
 * 00000001C0013B68: mov     rbx, rcx
 * 00000001C0013B6B: mov     rdx, rcx
 * 00000001C0013B6E: mov     ecx, 1Dh
 * 00000001C0013B73: call    cs:__imp_StorPortExtendedFunction
 * 00000001C0013B7A: nop     dword ptr [rax+rax+00h]
 * 00000001C0013B7F: test    eax, eax
 * 00000001C0013B81: jnz     short loc_1C0013BA3
 * 00000001C0013B83: and     [rsp+38h+var_18], 0
 * 00000001C0013B89: lea     ecx, [rax+1Eh]
 * 00000001C0013B8C: mov     r9, [rsp+38h+arg_10]
 * 00000001C0013B91: mov     r8, rdi
 * 00000001C0013B94: mov     rdx, rbx
 * 00000001C0013B97: call    cs:__imp_StorPortExtendedFunction
 * 00000001C0013B9E: nop     dword ptr [rax+rax+00h]
 * 00000001C0013BA3: mov     rbx, [rsp+38h+arg_0]
 * 00000001C0013BA8: add     rsp, 30h
 * 00000001C0013BAC: pop     rdi
 * 00000001C0013BAD: retn
 */
