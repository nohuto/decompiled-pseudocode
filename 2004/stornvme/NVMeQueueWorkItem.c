/*
 * XREFs of NVMeQueueWorkItem @ 0x1C0013BCC
 * Callers:
 *     NVMeCompletionDpcRoutine @ 0x1C0002270 (NVMeCompletionDpcRoutine.c)
 *     FirmwareDownload @ 0x1C0010398 (FirmwareDownload.c)
 *     NVMeFirmwareActivateCompletion @ 0x1C0012CF0 (NVMeFirmwareActivateCompletion.c)
 *     NVMeWriteBufferFirmwareActivateCompletion @ 0x1C0014400 (NVMeWriteBufferFirmwareActivateCompletion.c)
 *     NVMeWriteBufferFirmwareDownload @ 0x1C00145EC (NVMeWriteBufferFirmwareDownload.c)
 *     NVMeAsyncEventRequestCompletion @ 0x1C0016120 (NVMeAsyncEventRequestCompletion.c)
 * Callees:
 *     <none>
 */

/*
 * Hex-Rays decompilation failed for NVMeQueueWorkItem @ 0x1C0013BCC
 * Reason: Hex-Rays returned no pseudocode for 0x1C0013BCC
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0013BCC: mov     rax, rsp
 * 00000001C0013BCF: mov     [rax+8], rbx
 * 00000001C0013BD3: mov     [rax+18h], r8
 * 00000001C0013BD7: push    rdi
 * 00000001C0013BD8: sub     rsp, 30h
 * 00000001C0013BDC: and     qword ptr [rax+18h], 0
 * 00000001C0013BE1: lea     r8, [rax+18h]
 * 00000001C0013BE5: mov     rdi, rdx
 * 00000001C0013BE8: mov     rbx, rcx
 * 00000001C0013BEB: mov     rdx, rcx
 * 00000001C0013BEE: mov     ecx, 1Dh
 * 00000001C0013BF3: call    cs:__imp_StorPortExtendedFunction
 * 00000001C0013BFA: nop     dword ptr [rax+rax+00h]
 * 00000001C0013BFF: test    eax, eax
 * 00000001C0013C01: jnz     short loc_1C0013C23
 * 00000001C0013C03: and     [rsp+38h+var_18], 0
 * 00000001C0013C09: lea     ecx, [rax+1Eh]
 * 00000001C0013C0C: mov     r9, [rsp+38h+arg_10]
 * 00000001C0013C11: mov     r8, rdi
 * 00000001C0013C14: mov     rdx, rbx
 * 00000001C0013C17: call    cs:__imp_StorPortExtendedFunction
 * 00000001C0013C1E: nop     dword ptr [rax+rax+00h]
 * 00000001C0013C23: mov     rbx, [rsp+38h+arg_0]
 * 00000001C0013C28: add     rsp, 30h
 * 00000001C0013C2C: pop     rdi
 * 00000001C0013C2D: retn
 */
