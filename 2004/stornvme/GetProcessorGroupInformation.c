/*
 * XREFs of GetProcessorGroupInformation @ 0x1C000A3B4
 * Callers:
 *     NVMeControllerFilterResouceRequirements @ 0x1C000C2CC (NVMeControllerFilterResouceRequirements.c)
 * Callees:
 *     NVMeZeroMemory @ 0x1C00044E0 (NVMeZeroMemory.c)
 *     FreeProcessorGroupInfo @ 0x1C000A0A4 (FreeProcessorGroupInfo.c)
 */

/*
 * Hex-Rays decompilation failed for GetProcessorGroupInformation @ 0x1C000A3B4
 * Reason: Hex-Rays returned no pseudocode for 0x1C000A3B4
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C000A3B4: mov     [rsp+arg_0], rbx
 * 00000001C000A3B9: mov     [rsp+arg_8], rbp
 * 00000001C000A3BE: mov     [rsp+arg_10], rsi
 * 00000001C000A3C3: push    rdi
 * 00000001C000A3C4: push    r14
 * 00000001C000A3C6: push    r15
 * 00000001C000A3C8: sub     rsp, 30h
 * 00000001C000A3CC: mov     rdi, rcx
 * 00000001C000A3CF: call    FreeProcessorGroupInfo
 * 00000001C000A3D4: lea     rsi, [rdi+0D0h]
 * 00000001C000A3DB: mov     rdx, rdi
 * 00000001C000A3DE: mov     r8, rsi
 * 00000001C000A3E1: mov     ecx, 12h
 * 00000001C000A3E6: call    cs:__imp_StorPortExtendedFunction
 * 00000001C000A3ED: nop     dword ptr [rax+rax+00h]
 * 00000001C000A3F2: movzx   eax, word ptr [rsi]
 * 00000001C000A3F5: xor     ebp, ebp
 * 00000001C000A3F7: test    ax, ax
 * 00000001C000A3FA: jz      loc_1C000A519
 * 00000001C000A400: mov     r8d, eax
 * 00000001C000A403: lea     r14, [rdi+0E0h]
 * 00000001C000A40A: shl     r8d, 4
 * 00000001C000A40E: mov     r9d, 656D764Eh
 * 00000001C000A414: mov     rdx, rdi
 * 00000001C000A417: mov     [rsp+48h+var_28], r14
 * 00000001C000A41C: xor     ecx, ecx
 * 00000001C000A41E: call    cs:__imp_StorPortExtendedFunction
 * 00000001C000A425: nop     dword ptr [rax+rax+00h]
 * 00000001C000A42A: mov     rcx, [r14]
 * 00000001C000A42D: test    rcx, rcx
 * 00000001C000A430: jz      loc_1C000A519
 * 00000001C000A436: movzx   edx, word ptr [rsi]
 * 00000001C000A439: shl     edx, 4
 * 00000001C000A43C: call    NVMeZeroMemory
 * 00000001C000A441: cmp     bp, [rsi]
 * 00000001C000A444: jnb     loc_1C000A515
 * 00000001C000A44A: mov     rax, [r14]
 * 00000001C000A44D: mov     r15d, 33333333h
 * 00000001C000A453: lea     r9, [rax+8]
 * 00000001C000A457: movzx   ebx, bp
 * 00000001C000A45A: shl     rbx, 4
 * 00000001C000A45E: mov     rdx, rdi
 * 00000001C000A461: add     r9, rbx
 * 00000001C000A464: movzx   r8d, bp
 * 00000001C000A468: mov     ecx, 13h
 * 00000001C000A46D: call    cs:__imp_StorPortExtendedFunction
 * 00000001C000A474: nop     dword ptr [rax+rax+00h]
 * 00000001C000A479: mov     rax, [r14]
 * 00000001C000A47C: mov     [rbx+rax], bp
 * 00000001C000A480: inc     bp
 * 00000001C000A483: mov     r8, [r14]
 * 00000001C000A486: mov     edx, [rbx+r8+8]
 * 00000001C000A48B: mov     eax, edx
 * 00000001C000A48D: shr     eax, 1
 * 00000001C000A48F: and     eax, 55555555h
 * 00000001C000A494: sub     edx, eax
 * 00000001C000A496: mov     ecx, edx
 * 00000001C000A498: and     edx, r15d
 * 00000001C000A49B: shr     ecx, 2
 * 00000001C000A49E: and     ecx, r15d
 * 00000001C000A4A1: add     ecx, edx
 * 00000001C000A4A3: mov     eax, ecx
 * 00000001C000A4A5: shr     eax, 4
 * 00000001C000A4A8: add     eax, ecx
 * 00000001C000A4AA: and     eax, 0F0F0F0Fh
 * 00000001C000A4AF: imul    eax, 1010101h
 * 00000001C000A4B5: shr     eax, 18h
 * 00000001C000A4B8: mov     [rbx+r8+2], ax
 * 00000001C000A4BE: mov     rdx, [r14]
 * 00000001C000A4C1: mov     rcx, [rbx+rdx+8]
 * 00000001C000A4C6: shr     rcx, 20h
 * 00000001C000A4CA: mov     eax, ecx
 * 00000001C000A4CC: shr     eax, 1
 * 00000001C000A4CE: and     eax, 55555555h
 * 00000001C000A4D3: sub     ecx, eax
 * 00000001C000A4D5: mov     eax, ecx
 * 00000001C000A4D7: and     ecx, r15d
 * 00000001C000A4DA: shr     eax, 2
 * 00000001C000A4DD: and     eax, r15d
 * 00000001C000A4E0: add     eax, ecx
 * 00000001C000A4E2: mov     ecx, eax
 * 00000001C000A4E4: shr     ecx, 4
 * 00000001C000A4E7: add     ecx, eax
 * 00000001C000A4E9: and     ecx, 0F0F0F0Fh
 * 00000001C000A4EF: imul    ecx, 1010101h
 * 00000001C000A4F5: shr     ecx, 18h
 * 00000001C000A4F8: add     [rbx+rdx+2], cx
 * 00000001C000A4FD: mov     rax, [r14]
 * 00000001C000A500: movzx   ecx, word ptr [rbx+rax+2]
 * 00000001C000A505: add     [rdi+0D2h], cx
 * 00000001C000A50C: cmp     bp, [rsi]
 * 00000001C000A50F: jb      loc_1C000A453
 * 00000001C000A515: mov     al, 1
 * 00000001C000A517: jmp     short loc_1C000A523
 * 00000001C000A519: mov     rcx, rdi
 * 00000001C000A51C: call    FreeProcessorGroupInfo
 * 00000001C000A521: xor     al, al
 * 00000001C000A523: mov     rbx, [rsp+48h+arg_0]
 * 00000001C000A528: mov     rbp, [rsp+48h+arg_8]
 * 00000001C000A52D: mov     rsi, [rsp+48h+arg_10]
 * 00000001C000A532: add     rsp, 30h
 * 00000001C000A536: pop     r15
 * 00000001C000A538: pop     r14
 * 00000001C000A53A: pop     rdi
 * 00000001C000A53B: retn
 */
