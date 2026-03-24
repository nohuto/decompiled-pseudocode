/*
 * XREFs of NVMeWriteBufferFirmwareDownload @ 0x1C00145EC
 * Callers:
 *     ScsiToNVMe @ 0x1C0003A60 (ScsiToNVMe.c)
 * Callees:
 *     SrbAssignQueueId @ 0x1C0004370 (SrbAssignQueueId.c)
 *     GetSrbExtension @ 0x1C00044B4 (GetSrbExtension.c)
 *     NVMeZeroMemory @ 0x1C00044E0 (NVMeZeroMemory.c)
 *     GetControllerMaxTransferSize @ 0x1C0004750 (GetControllerMaxTransferSize.c)
 *     GetFirmwareGranularity @ 0x1C0004784 (GetFirmwareGranularity.c)
 *     FillClippedSGL @ 0x1C00100A4 (FillClippedSGL.c)
 *     NVMeQueueWorkItem @ 0x1C0013BCC (NVMeQueueWorkItem.c)
 *     NVMeSetSenseData @ 0x1C001AFC8 (NVMeSetSenseData.c)
 */

/*
 * Hex-Rays decompilation failed for NVMeWriteBufferFirmwareDownload @ 0x1C00145EC
 * Reason: Hex-Rays returned no pseudocode for 0x1C00145EC
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00145EC: mov     rax, rsp
 * 00000001C00145EF: mov     [rax+8], rbx
 * 00000001C00145F3: mov     [rax+10h], rbp
 * 00000001C00145F7: mov     [rax+20h], rsi
 * 00000001C00145FB: push    rdi
 * 00000001C00145FC: push    r12
 * 00000001C00145FE: push    r13
 * 00000001C0014600: push    r14
 * 00000001C0014602: push    r15
 * 00000001C0014604: sub     rsp, 30h
 * 00000001C0014608: mov     rdi, rcx
 * 00000001C001460B: xor     ebx, ebx
 * 00000001C001460D: mov     rcx, rdx
 * 00000001C0014610: mov     [rax+18h], rbx
 * 00000001C0014614: mov     r14, rdx
 * 00000001C0014617: call    GetSrbExtension
 * 00000001C001461C: movzx   r15d, byte ptr [r8+3]
 * 00000001C0014621: mov     rbp, rax
 * 00000001C0014624: movzx   eax, byte ptr [r8+4]
 * 00000001C0014629: movzx   esi, byte ptr [r8+6]
 * 00000001C001462E: shl     r15d, 8
 * 00000001C0014632: or      r15d, eax
 * 00000001C0014635: shl     esi, 8
 * 00000001C0014638: movzx   eax, byte ptr [r8+5]
 * 00000001C001463D: shl     r15d, 8
 * 00000001C0014641: or      r15d, eax
 * 00000001C0014644: movzx   eax, byte ptr [r8+7]
 * 00000001C0014649: or      esi, eax
 * 00000001C001464B: movzx   eax, byte ptr [r8+8]
 * 00000001C0014650: shl     esi, 8
 * 00000001C0014653: or      esi, eax
 * 00000001C0014655: mov     eax, esi
 * 00000001C0014657: or      eax, r15d
 * 00000001C001465A: test    al, 3
 * 00000001C001465C: jnz     loc_1C00147CE
 * 00000001C0014662: mov     rcx, rdi
 * 00000001C0014665: call    GetControllerMaxTransferSize
 * 00000001C001466A: cmp     esi, eax
 * 00000001C001466C: jbe     short loc_1C0014675
 * 00000001C001466E: mov     dl, 15h
 * 00000001C0014670: jmp     loc_1C00147D0
 * 00000001C0014675: mov     r12d, 800h
 * 00000001C001467B: test    [rdi+18h], r12d
 * 00000001C001467F: jnz     short loc_1C0014694
 * 00000001C0014681: lea     rdx, NVMeControllerValidateFirmwareActivateCapability
 * 00000001C0014688: mov     rcx, rdi
 * 00000001C001468B: call    NVMeQueueWorkItem
 * 00000001C0014690: or      [rdi+18h], r12d
 * 00000001C0014694: mov     rcx, rdi
 * 00000001C0014697: call    GetFirmwareGranularity
 * 00000001C001469C: mov     r8d, eax
 * 00000001C001469F: test    eax, eax
 * 00000001C00146A1: jz      short loc_1C00146AE
 * 00000001C00146A3: xor     edx, edx
 * 00000001C00146A5: mov     eax, esi
 * 00000001C00146A7: div     r8d
 * 00000001C00146AA: test    edx, edx
 * 00000001C00146AC: jnz     short loc_1C001466E
 * 00000001C00146AE: mov     eax, [rdi+38h]
 * 00000001C00146B1: test    al, 8
 * 00000001C00146B3: jnz     loc_1C0014788
 * 00000001C00146B9: mov     rcx, rdi
 * 00000001C00146BC: call    GetControllerMaxTransferSize
 * 00000001C00146C1: mov     r9d, 656D764Eh
 * 00000001C00146C7: mov     rdx, rdi
 * 00000001C00146CA: xor     ecx, ecx
 * 00000001C00146CC: lea     r12d, [rax-1]
 * 00000001C00146D0: shr     r12d, 0Ch
 * 00000001C00146D4: add     r12d, 2
 * 00000001C00146D8: lea     eax, [r12+r12*2]
 * 00000001C00146DC: lea     r13d, ds:10h[rax*8]
 * 00000001C00146E4: lea     rax, [rsp+58h+arg_10]
 * 00000001C00146E9: mov     r8d, r13d
 * 00000001C00146EC: mov     [rsp+58h+var_38], rax
 * 00000001C00146F1: call    cs:__imp_StorPortExtendedFunction
 * 00000001C00146F8: nop     dword ptr [rax+rax+00h]
 * 00000001C00146FD: mov     rcx, [rsp+58h+arg_10]
 * 00000001C0014702: test    rcx, rcx
 * 00000001C0014705: jnz     short loc_1C0014721
 * 00000001C0014707: xor     r9d, r9d
 * 00000001C001470A: xor     r8d, r8d
 * 00000001C001470D: mov     dl, 26h ; '&'
 * 00000001C001470F: mov     rcx, r14
 * 00000001C0014712: call    NVMeSetSenseData
 * 00000001C0014717: mov     ebx, 0C1000003h
 * 00000001C001471C: jmp     loc_1C00147E3
 * 00000001C0014721: mov     edx, r13d
 * 00000001C0014724: call    NVMeZeroMemory
 * 00000001C0014729: mov     rdx, r14
 * 00000001C001472C: mov     rcx, rdi
 * 00000001C001472F: call    cs:__imp_StorPortGetScatterGatherList
 * 00000001C0014736: nop     dword ptr [rax+rax+00h]
 * 00000001C001473B: mov     rdx, [rsp+58h+arg_10]
 * 00000001C0014740: xor     r9d, r9d
 * 00000001C0014743: mov     rcx, rax
 * 00000001C0014746: mov     r8d, r12d
 * 00000001C0014749: call    FillClippedSGL
 * 00000001C001474E: test    al, al
 * 00000001C0014750: jnz     short loc_1C001477A
 * 00000001C0014752: mov     r8, [rsp+58h+arg_10]
 * 00000001C0014757: test    r8, r8
 * 00000001C001475A: jz      short loc_1C0014775
 * 00000001C001475C: mov     rdx, rdi
 * 00000001C001475F: mov     ecx, 1
 * 00000001C0014764: call    cs:__imp_StorPortExtendedFunction
 * 00000001C001476B: nop     dword ptr [rax+rax+00h]
 * 00000001C0014770: mov     [rsp+58h+arg_10], rbx
 * 00000001C0014775: mov     r9b, 24h ; '$'
 * 00000001C0014778: jmp     short loc_1C001470A
 * 00000001C001477A: mov     rax, [rsp+58h+arg_10]
 * 00000001C001477F: mov     [rbp+1078h], rax
 * 00000001C0014786: jmp     short loc_1C001478F
 * 00000001C0014788: mov     [rbp+1078h], r15d
 * 00000001C001478F: or      byte ptr [rbp+109Dh], 3
 * 00000001C0014796: mov     rdx, r14
 * 00000001C0014799: mov     rcx, rdi
 * 00000001C001479C: call    SrbAssignQueueId
 * 00000001C00147A1: shr     esi, 2
 * 00000001C00147A4: lea     rax, NVMeWriteBufferFirmwareDownloadCompletion
 * 00000001C00147AB: dec     esi
 * 00000001C00147AD: mov     byte ptr [rbp+1000h], 11h
 * 00000001C00147B4: shr     r15d, 2
 * 00000001C00147B8: mov     [rbp+102Ch], r15d
 * 00000001C00147BF: mov     [rbp+1028h], esi
 * 00000001C00147C5: mov     [rbp+1080h], rax
 * 00000001C00147CC: jmp     short loc_1C00147E3
 * 00000001C00147CE: mov     dl, 6
 * 00000001C00147D0: mov     r9b, 24h ; '$'
 * 00000001C00147D3: mov     r8b, 5
 * 00000001C00147D6: mov     rcx, r14
 * 00000001C00147D9: call    NVMeSetSenseData
 * 00000001C00147DE: mov     ebx, 0C1000006h
 * 00000001C00147E3: mov     rbp, [rsp+58h+arg_8]
 * 00000001C00147E8: mov     eax, ebx
 * 00000001C00147EA: mov     rbx, [rsp+58h+arg_0]
 * 00000001C00147EF: mov     rsi, [rsp+58h+arg_18]
 * 00000001C00147F4: add     rsp, 30h
 * 00000001C00147F8: pop     r15
 * 00000001C00147FA: pop     r14
 * 00000001C00147FC: pop     r13
 * 00000001C00147FE: pop     r12
 * 00000001C0014800: pop     rdi
 * 00000001C0014801: retn
 */
