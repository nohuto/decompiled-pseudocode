/*
 * XREFs of NVMeWriteBufferFirmwareDownload @ 0x1C001456C
 * Callers:
 *     ScsiToNVMe @ 0x1C0003A60 (ScsiToNVMe.c)
 * Callees:
 *     SrbAssignQueueId @ 0x1C0004370 (SrbAssignQueueId.c)
 *     GetSrbExtension @ 0x1C00044B4 (GetSrbExtension.c)
 *     NVMeZeroMemory @ 0x1C00044E0 (NVMeZeroMemory.c)
 *     GetControllerMaxTransferSize @ 0x1C000474C (GetControllerMaxTransferSize.c)
 *     GetFirmwareGranularity @ 0x1C0004780 (GetFirmwareGranularity.c)
 *     FillClippedSGL @ 0x1C0010024 (FillClippedSGL.c)
 *     NVMeQueueWorkItem @ 0x1C0013B4C (NVMeQueueWorkItem.c)
 *     NVMeSetSenseData @ 0x1C001AEF8 (NVMeSetSenseData.c)
 */

/*
 * Hex-Rays decompilation failed for NVMeWriteBufferFirmwareDownload @ 0x1C001456C
 * Reason: Hex-Rays returned no pseudocode for 0x1C001456C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C001456C: mov     rax, rsp
 * 00000001C001456F: mov     [rax+8], rbx
 * 00000001C0014573: mov     [rax+10h], rbp
 * 00000001C0014577: mov     [rax+20h], rsi
 * 00000001C001457B: push    rdi
 * 00000001C001457C: push    r12
 * 00000001C001457E: push    r13
 * 00000001C0014580: push    r14
 * 00000001C0014582: push    r15
 * 00000001C0014584: sub     rsp, 30h
 * 00000001C0014588: mov     rdi, rcx
 * 00000001C001458B: xor     ebx, ebx
 * 00000001C001458D: mov     rcx, rdx
 * 00000001C0014590: mov     [rax+18h], rbx
 * 00000001C0014594: mov     r14, rdx
 * 00000001C0014597: call    GetSrbExtension
 * 00000001C001459C: movzx   r15d, byte ptr [r8+3]
 * 00000001C00145A1: mov     rbp, rax
 * 00000001C00145A4: movzx   eax, byte ptr [r8+4]
 * 00000001C00145A9: movzx   esi, byte ptr [r8+6]
 * 00000001C00145AE: shl     r15d, 8
 * 00000001C00145B2: or      r15d, eax
 * 00000001C00145B5: shl     esi, 8
 * 00000001C00145B8: movzx   eax, byte ptr [r8+5]
 * 00000001C00145BD: shl     r15d, 8
 * 00000001C00145C1: or      r15d, eax
 * 00000001C00145C4: movzx   eax, byte ptr [r8+7]
 * 00000001C00145C9: or      esi, eax
 * 00000001C00145CB: movzx   eax, byte ptr [r8+8]
 * 00000001C00145D0: shl     esi, 8
 * 00000001C00145D3: or      esi, eax
 * 00000001C00145D5: mov     eax, esi
 * 00000001C00145D7: or      eax, r15d
 * 00000001C00145DA: test    al, 3
 * 00000001C00145DC: jnz     loc_1C001474E
 * 00000001C00145E2: mov     rcx, rdi
 * 00000001C00145E5: call    GetControllerMaxTransferSize
 * 00000001C00145EA: cmp     esi, eax
 * 00000001C00145EC: jbe     short loc_1C00145F5
 * 00000001C00145EE: mov     dl, 15h
 * 00000001C00145F0: jmp     loc_1C0014750
 * 00000001C00145F5: mov     r12d, 800h
 * 00000001C00145FB: test    [rdi+18h], r12d
 * 00000001C00145FF: jnz     short loc_1C0014614
 * 00000001C0014601: lea     rdx, NVMeControllerValidateFirmwareActivateCapability
 * 00000001C0014608: mov     rcx, rdi
 * 00000001C001460B: call    NVMeQueueWorkItem
 * 00000001C0014610: or      [rdi+18h], r12d
 * 00000001C0014614: mov     rcx, rdi
 * 00000001C0014617: call    GetFirmwareGranularity
 * 00000001C001461C: mov     r8d, eax
 * 00000001C001461F: test    eax, eax
 * 00000001C0014621: jz      short loc_1C001462E
 * 00000001C0014623: xor     edx, edx
 * 00000001C0014625: mov     eax, esi
 * 00000001C0014627: div     r8d
 * 00000001C001462A: test    edx, edx
 * 00000001C001462C: jnz     short loc_1C00145EE
 * 00000001C001462E: mov     eax, [rdi+38h]
 * 00000001C0014631: test    al, 8
 * 00000001C0014633: jnz     loc_1C0014708
 * 00000001C0014639: mov     rcx, rdi
 * 00000001C001463C: call    GetControllerMaxTransferSize
 * 00000001C0014641: mov     r9d, 656D764Eh
 * 00000001C0014647: mov     rdx, rdi
 * 00000001C001464A: xor     ecx, ecx
 * 00000001C001464C: lea     r12d, [rax-1]
 * 00000001C0014650: shr     r12d, 0Ch
 * 00000001C0014654: add     r12d, 2
 * 00000001C0014658: lea     eax, [r12+r12*2]
 * 00000001C001465C: lea     r13d, ds:10h[rax*8]
 * 00000001C0014664: lea     rax, [rsp+58h+arg_10]
 * 00000001C0014669: mov     r8d, r13d
 * 00000001C001466C: mov     [rsp+58h+var_38], rax
 * 00000001C0014671: call    cs:__imp_StorPortExtendedFunction
 * 00000001C0014678: nop     dword ptr [rax+rax+00h]
 * 00000001C001467D: mov     rcx, [rsp+58h+arg_10]
 * 00000001C0014682: test    rcx, rcx
 * 00000001C0014685: jnz     short loc_1C00146A1
 * 00000001C0014687: xor     r9d, r9d
 * 00000001C001468A: xor     r8d, r8d
 * 00000001C001468D: mov     dl, 26h ; '&'
 * 00000001C001468F: mov     rcx, r14
 * 00000001C0014692: call    NVMeSetSenseData
 * 00000001C0014697: mov     ebx, 0C1000003h
 * 00000001C001469C: jmp     loc_1C0014763
 * 00000001C00146A1: mov     edx, r13d
 * 00000001C00146A4: call    NVMeZeroMemory
 * 00000001C00146A9: mov     rdx, r14
 * 00000001C00146AC: mov     rcx, rdi
 * 00000001C00146AF: call    cs:__imp_StorPortGetScatterGatherList
 * 00000001C00146B6: nop     dword ptr [rax+rax+00h]
 * 00000001C00146BB: mov     rdx, [rsp+58h+arg_10]
 * 00000001C00146C0: xor     r9d, r9d
 * 00000001C00146C3: mov     rcx, rax
 * 00000001C00146C6: mov     r8d, r12d
 * 00000001C00146C9: call    FillClippedSGL
 * 00000001C00146CE: test    al, al
 * 00000001C00146D0: jnz     short loc_1C00146FA
 * 00000001C00146D2: mov     r8, [rsp+58h+arg_10]
 * 00000001C00146D7: test    r8, r8
 * 00000001C00146DA: jz      short loc_1C00146F5
 * 00000001C00146DC: mov     rdx, rdi
 * 00000001C00146DF: mov     ecx, 1
 * 00000001C00146E4: call    cs:__imp_StorPortExtendedFunction
 * 00000001C00146EB: nop     dword ptr [rax+rax+00h]
 * 00000001C00146F0: mov     [rsp+58h+arg_10], rbx
 * 00000001C00146F5: mov     r9b, 24h ; '$'
 * 00000001C00146F8: jmp     short loc_1C001468A
 * 00000001C00146FA: mov     rax, [rsp+58h+arg_10]
 * 00000001C00146FF: mov     [rbp+1078h], rax
 * 00000001C0014706: jmp     short loc_1C001470F
 * 00000001C0014708: mov     [rbp+1078h], r15d
 * 00000001C001470F: or      byte ptr [rbp+109Dh], 3
 * 00000001C0014716: mov     rdx, r14
 * 00000001C0014719: mov     rcx, rdi
 * 00000001C001471C: call    SrbAssignQueueId
 * 00000001C0014721: shr     esi, 2
 * 00000001C0014724: lea     rax, NVMeWriteBufferFirmwareDownloadCompletion
 * 00000001C001472B: dec     esi
 * 00000001C001472D: mov     byte ptr [rbp+1000h], 11h
 * 00000001C0014734: shr     r15d, 2
 * 00000001C0014738: mov     [rbp+102Ch], r15d
 * 00000001C001473F: mov     [rbp+1028h], esi
 * 00000001C0014745: mov     [rbp+1080h], rax
 * 00000001C001474C: jmp     short loc_1C0014763
 * 00000001C001474E: mov     dl, 6
 * 00000001C0014750: mov     r9b, 24h ; '$'
 * 00000001C0014753: mov     r8b, 5
 * 00000001C0014756: mov     rcx, r14
 * 00000001C0014759: call    NVMeSetSenseData
 * 00000001C001475E: mov     ebx, 0C1000006h
 * 00000001C0014763: mov     rbp, [rsp+58h+arg_8]
 * 00000001C0014768: mov     eax, ebx
 * 00000001C001476A: mov     rbx, [rsp+58h+arg_0]
 * 00000001C001476F: mov     rsi, [rsp+58h+arg_18]
 * 00000001C0014774: add     rsp, 30h
 * 00000001C0014778: pop     r15
 * 00000001C001477A: pop     r14
 * 00000001C001477C: pop     r13
 * 00000001C001477E: pop     r12
 * 00000001C0014780: pop     rdi
 * 00000001C0014781: retn
 */
