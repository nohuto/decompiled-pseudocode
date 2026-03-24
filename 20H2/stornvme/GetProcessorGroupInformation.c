/*
 * XREFs of GetProcessorGroupInformation @ 0x1C000A364
 * Callers:
 *     NVMeControllerFilterResouceRequirements @ 0x1C000C27C (NVMeControllerFilterResouceRequirements.c)
 * Callees:
 *     NVMeZeroMemory @ 0x1C00044E0 (NVMeZeroMemory.c)
 *     FreeProcessorGroupInfo @ 0x1C000A054 (FreeProcessorGroupInfo.c)
 */

/*
 * Hex-Rays decompilation failed for GetProcessorGroupInformation @ 0x1C000A364
 * Reason: Hex-Rays returned no pseudocode for 0x1C000A364
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C000A364: mov     [rsp+arg_0], rbx
 * 00000001C000A369: mov     [rsp+arg_8], rbp
 * 00000001C000A36E: mov     [rsp+arg_10], rsi
 * 00000001C000A373: push    rdi
 * 00000001C000A374: push    r14
 * 00000001C000A376: push    r15
 * 00000001C000A378: sub     rsp, 30h
 * 00000001C000A37C: mov     rdi, rcx
 * 00000001C000A37F: call    FreeProcessorGroupInfo
 * 00000001C000A384: lea     rsi, [rdi+0D0h]
 * 00000001C000A38B: mov     rdx, rdi
 * 00000001C000A38E: mov     r8, rsi
 * 00000001C000A391: mov     ecx, 12h
 * 00000001C000A396: call    cs:__imp_StorPortExtendedFunction
 * 00000001C000A39D: nop     dword ptr [rax+rax+00h]
 * 00000001C000A3A2: movzx   eax, word ptr [rsi]
 * 00000001C000A3A5: xor     ebp, ebp
 * 00000001C000A3A7: test    ax, ax
 * 00000001C000A3AA: jz      loc_1C000A4C9
 * 00000001C000A3B0: mov     r8d, eax
 * 00000001C000A3B3: lea     r14, [rdi+0E0h]
 * 00000001C000A3BA: shl     r8d, 4
 * 00000001C000A3BE: mov     r9d, 656D764Eh
 * 00000001C000A3C4: mov     rdx, rdi
 * 00000001C000A3C7: mov     [rsp+48h+var_28], r14
 * 00000001C000A3CC: xor     ecx, ecx
 * 00000001C000A3CE: call    cs:__imp_StorPortExtendedFunction
 * 00000001C000A3D5: nop     dword ptr [rax+rax+00h]
 * 00000001C000A3DA: mov     rcx, [r14]
 * 00000001C000A3DD: test    rcx, rcx
 * 00000001C000A3E0: jz      loc_1C000A4C9
 * 00000001C000A3E6: movzx   edx, word ptr [rsi]
 * 00000001C000A3E9: shl     edx, 4
 * 00000001C000A3EC: call    NVMeZeroMemory
 * 00000001C000A3F1: cmp     bp, [rsi]
 * 00000001C000A3F4: jnb     loc_1C000A4C5
 * 00000001C000A3FA: mov     rax, [r14]
 * 00000001C000A3FD: mov     r15d, 33333333h
 * 00000001C000A403: lea     r9, [rax+8]
 * 00000001C000A407: movzx   ebx, bp
 * 00000001C000A40A: shl     rbx, 4
 * 00000001C000A40E: mov     rdx, rdi
 * 00000001C000A411: add     r9, rbx
 * 00000001C000A414: movzx   r8d, bp
 * 00000001C000A418: mov     ecx, 13h
 * 00000001C000A41D: call    cs:__imp_StorPortExtendedFunction
 * 00000001C000A424: nop     dword ptr [rax+rax+00h]
 * 00000001C000A429: mov     rax, [r14]
 * 00000001C000A42C: mov     [rbx+rax], bp
 * 00000001C000A430: inc     bp
 * 00000001C000A433: mov     r8, [r14]
 * 00000001C000A436: mov     edx, [rbx+r8+8]
 * 00000001C000A43B: mov     eax, edx
 * 00000001C000A43D: shr     eax, 1
 * 00000001C000A43F: and     eax, 55555555h
 * 00000001C000A444: sub     edx, eax
 * 00000001C000A446: mov     ecx, edx
 * 00000001C000A448: and     edx, r15d
 * 00000001C000A44B: shr     ecx, 2
 * 00000001C000A44E: and     ecx, r15d
 * 00000001C000A451: add     ecx, edx
 * 00000001C000A453: mov     eax, ecx
 * 00000001C000A455: shr     eax, 4
 * 00000001C000A458: add     eax, ecx
 * 00000001C000A45A: and     eax, 0F0F0F0Fh
 * 00000001C000A45F: imul    eax, 1010101h
 * 00000001C000A465: shr     eax, 18h
 * 00000001C000A468: mov     [rbx+r8+2], ax
 * 00000001C000A46E: mov     rdx, [r14]
 * 00000001C000A471: mov     rcx, [rbx+rdx+8]
 * 00000001C000A476: shr     rcx, 20h
 * 00000001C000A47A: mov     eax, ecx
 * 00000001C000A47C: shr     eax, 1
 * 00000001C000A47E: and     eax, 55555555h
 * 00000001C000A483: sub     ecx, eax
 * 00000001C000A485: mov     eax, ecx
 * 00000001C000A487: and     ecx, r15d
 * 00000001C000A48A: shr     eax, 2
 * 00000001C000A48D: and     eax, r15d
 * 00000001C000A490: add     eax, ecx
 * 00000001C000A492: mov     ecx, eax
 * 00000001C000A494: shr     ecx, 4
 * 00000001C000A497: add     ecx, eax
 * 00000001C000A499: and     ecx, 0F0F0F0Fh
 * 00000001C000A49F: imul    ecx, 1010101h
 * 00000001C000A4A5: shr     ecx, 18h
 * 00000001C000A4A8: add     [rbx+rdx+2], cx
 * 00000001C000A4AD: mov     rax, [r14]
 * 00000001C000A4B0: movzx   ecx, word ptr [rbx+rax+2]
 * 00000001C000A4B5: add     [rdi+0D2h], cx
 * 00000001C000A4BC: cmp     bp, [rsi]
 * 00000001C000A4BF: jb      loc_1C000A403
 * 00000001C000A4C5: mov     al, 1
 * 00000001C000A4C7: jmp     short loc_1C000A4D3
 * 00000001C000A4C9: mov     rcx, rdi
 * 00000001C000A4CC: call    FreeProcessorGroupInfo
 * 00000001C000A4D1: xor     al, al
 * 00000001C000A4D3: mov     rbx, [rsp+48h+arg_0]
 * 00000001C000A4D8: mov     rbp, [rsp+48h+arg_8]
 * 00000001C000A4DD: mov     rsi, [rsp+48h+arg_10]
 * 00000001C000A4E2: add     rsp, 30h
 * 00000001C000A4E6: pop     r15
 * 00000001C000A4E8: pop     r14
 * 00000001C000A4EA: pop     rdi
 * 00000001C000A4EB: retn
 */
