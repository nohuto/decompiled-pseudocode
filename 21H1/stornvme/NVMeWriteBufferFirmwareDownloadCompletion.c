/*
 * XREFs of NVMeWriteBufferFirmwareDownloadCompletion @ 0x1C0014810
 * Callers:
 *     <none>
 * Callees:
 *     GetSrbExtension @ 0x1C00044B4 (GetSrbExtension.c)
 */

/*
 * Hex-Rays decompilation failed for NVMeWriteBufferFirmwareDownloadCompletion @ 0x1C0014810
 * Reason: Hex-Rays returned no pseudocode for 0x1C0014810
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0014810: push    rbx
 * 00000001C0014812: sub     rsp, 20h
 * 00000001C0014816: mov     r9, rcx
 * 00000001C0014819: mov     rcx, rdx
 * 00000001C001481C: call    GetSrbExtension
 * 00000001C0014821: mov     edx, [r9+38h]
 * 00000001C0014825: mov     rbx, rax
 * 00000001C0014828: test    dl, 8
 * 00000001C001482B: jnz     short loc_1C0014857
 * 00000001C001482D: mov     r8, [rax+1078h]
 * 00000001C0014834: test    r8, r8
 * 00000001C0014837: jz      short loc_1C0014857
 * 00000001C0014839: mov     rdx, r9
 * 00000001C001483C: mov     ecx, 1
 * 00000001C0014841: call    cs:__imp_StorPortExtendedFunction
 * 00000001C0014848: nop     dword ptr [rax+rax+00h]
 * 00000001C001484D: and     qword ptr [rbx+1078h], 0
 * 00000001C0014855: jmp     short loc_1C001485E
 * 00000001C0014857: and     dword ptr [rax+1078h], 0
 * 00000001C001485E: or      byte ptr [rbx+109Dh], 8
 * 00000001C0014865: add     rsp, 20h
 * 00000001C0014869: pop     rbx
 * 00000001C001486A: retn
 */
