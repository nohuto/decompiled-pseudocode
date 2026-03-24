/*
 * XREFs of NVMeControllerFilterResouceRequirements @ 0x1C000C2CC
 * Callers:
 *     NVMeHwAdapterControl @ 0x1C0004A90 (NVMeHwAdapterControl.c)
 * Callees:
 *     NVMeZeroMemory @ 0x1C00044E0 (NVMeZeroMemory.c)
 *     memmove @ 0x1C0005240 (memmove.c)
 *     GetProcessorGroupInformation @ 0x1C000A3B4 (GetProcessorGroupInformation.c)
 *     IsPci3MsiInterrupt @ 0x1C000BBEC (IsPci3MsiInterrupt.c)
 */

/*
 * Hex-Rays decompilation failed for NVMeControllerFilterResouceRequirements @ 0x1C000C2CC
 * Reason: Hex-Rays returned no pseudocode for 0x1C000C2CC
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C000C2CC: mov     [rsp+arg_0], rbx
 * 00000001C000C2D1: mov     [rsp+arg_8], rbp
 * 00000001C000C2D6: mov     [rsp+arg_10], rsi
 * 00000001C000C2DB: push    rdi
 * 00000001C000C2DC: push    r12
 * 00000001C000C2DE: push    r13
 * 00000001C000C2E0: push    r14
 * 00000001C000C2E2: push    r15
 * 00000001C000C2E4: sub     rsp, 40h
 * 00000001C000C2E8: xor     ebx, ebx
 * 00000001C000C2EA: mov     r13, rdx
 * 00000001C000C2ED: mov     ebp, ebx
 * 00000001C000C2EF: mov     r15d, ebx
 * 00000001C000C2F2: mov     rsi, rcx
 * 00000001C000C2F5: call    GetProcessorGroupInformation
 * 00000001C000C2FA: test    al, al
 * 00000001C000C2FC: jnz     short loc_1C000C343
 * 00000001C000C2FE: lea     rax, [rsi+0D0h]
 * 00000001C000C305: mov     dword ptr [rsi+1Ch], 9
 * 00000001C000C30C: mov     [rsp+68h+var_38], rax
 * 00000001C000C311: lea     r9d, [rbx+0Ah]
 * 00000001C000C315: lea     rax, aGetProcessorGr; "Get processor group information failed"
 * 00000001C000C31C: mov     [rsp+68h+var_40], 2
 * 00000001C000C324: xor     r8d, r8d
 * 00000001C000C327: mov     [rsp+68h+var_48], rax
 * 00000001C000C32C: mov     rdx, rsi
 * 00000001C000C32F: lea     ecx, [rbx+62h]
 * 00000001C000C332: call    cs:__imp_StorPortExtendedFunction
 * 00000001C000C339: nop     dword ptr [rax+rax+00h]
 * 00000001C000C33E: jmp     loc_1C000C604
 * 00000001C000C343: mov     rdi, [r13+8]
 * 00000001C000C347: mov     r12d, 1
 * 00000001C000C34D: mov     r14d, [rdi+24h]
 * 00000001C000C351: mov     edx, r14d
 * 00000001C000C354: test    r14d, r14d
 * 00000001C000C357: jz      short loc_1C000C389
 * 00000001C000C359: lea     r8, [rdi+29h]
 * 00000001C000C35D: mov     r9d, r14d
 * 00000001C000C360: lea     rcx, [r8-1]
 * 00000001C000C364: call    IsPci3MsiInterrupt
 * 00000001C000C369: test    al, al
 * 00000001C000C36B: jz      short loc_1C000C372
 * 00000001C000C36D: add     ebp, r12d
 * 00000001C000C370: jmp     short loc_1C000C380
 * 00000001C000C372: cmp     [r8], r12b
 * 00000001C000C375: jnz     short loc_1C000C380
 * 00000001C000C377: test    [r8+3], r12b
 * 00000001C000C37B: jz      short loc_1C000C380
 * 00000001C000C37D: add     r15d, r12d
 * 00000001C000C380: add     r8, 20h ; ' '
 * 00000001C000C384: sub     r9, r12
 * 00000001C000C387: jnz     short loc_1C000C360
 * 00000001C000C389: movzx   ecx, word ptr [rsi+0D2h]
 * 00000001C000C390: lea     eax, [rcx+1]
 * 00000001C000C393: cmp     ebp, eax
 * 00000001C000C395: jbe     loc_1C000C562
 * 00000001C000C39B: mov     rax, [rsi+0E0h]
 * 00000001C000C3A2: sub     ecx, ebp
 * 00000001C000C3A4: inc     r14d
 * 00000001C000C3A7: mov     r10d, ebx
 * 00000001C000C3AA: add     r14d, ecx
 * 00000001C000C3AD: mov     r11d, ebx
 * 00000001C000C3B0: mov     r8d, ebx
 * 00000001C000C3B3: mov     ecx, edx
 * 00000001C000C3B5: mov     r9, [rax+8]
 * 00000001C000C3B9: mov     ebp, 0FFFFFFFEh
 * 00000001C000C3BE: test    edx, edx
 * 00000001C000C3C0: jz      loc_1C000C46D
 * 00000001C000C3C6: mov     edx, r8d
 * 00000001C000C3C9: lea     rcx, [rdi+28h]
 * 00000001C000C3CD: shl     rdx, 5
 * 00000001C000C3D1: add     rcx, rdx
 * 00000001C000C3D4: call    IsPci3MsiInterrupt
 * 00000001C000C3D9: test    al, al
 * 00000001C000C3DB: jz      short loc_1C000C456
 * 00000001C000C3DD: test    r9, r9
 * 00000001C000C3E0: jz      short loc_1C000C3F0
 * 00000001C000C3E2: mov     eax, r10d
 * 00000001C000C3E5: bt      r9, rax
 * 00000001C000C3E9: jb      short loc_1C000C3F0
 * 00000001C000C3EB: add     r10d, r12d
 * 00000001C000C3EE: jmp     short loc_1C000C3E2
 * 00000001C000C3F0: mov     eax, 4
 * 00000001C000C3F5: mov     [rdx+rdi+30h], ebp
 * 00000001C000C3F9: or      [rdx+rdi+2Ch], ax
 * 00000001C000C3FE: mov     ecx, r10d
 * 00000001C000C401: mov     [rdx+rdi+38h], ax
 * 00000001C000C406: mov     rax, r12
 * 00000001C000C409: shl     rax, cl
 * 00000001C000C40C: mov     [rdx+rdi+40h], rax
 * 00000001C000C411: mov     eax, r10d
 * 00000001C000C414: btr     r9, rax
 * 00000001C000C418: mov     [rdx+rdi+34h], ebp
 * 00000001C000C41C: mov     [rdx+rdi+3Ah], r11w
 * 00000001C000C422: mov     dword ptr [rdx+rdi+3Ch], 3
 * 00000001C000C42A: test    r9, r9
 * 00000001C000C42D: jnz     short loc_1C000C456
 * 00000001C000C42F: movzx   eax, word ptr [rsi+0D0h]
 * 00000001C000C436: sub     eax, r12d
 * 00000001C000C439: cmp     r11d, eax
 * 00000001C000C43C: jz      short loc_1C000C467
 * 00000001C000C43E: mov     rax, [rsi+0E0h]
 * 00000001C000C445: add     r11d, r12d
 * 00000001C000C448: mov     ecx, r11d
 * 00000001C000C44B: mov     r10d, ebx
 * 00000001C000C44E: add     rcx, rcx
 * 00000001C000C451: mov     r9, [rax+rcx*8+8]
 * 00000001C000C456: mov     ecx, [rdi+24h]
 * 00000001C000C459: add     r8d, r12d
 * 00000001C000C45C: cmp     r8d, ecx
 * 00000001C000C45F: jb      loc_1C000C3C6
 * 00000001C000C465: jmp     short loc_1C000C46D
 * 00000001C000C467: mov     ecx, [rdi+24h]
 * 00000001C000C46A: add     r8d, r12d
 * 00000001C000C46D: mov     rax, [rsi+0E0h]
 * 00000001C000C474: mov     r9d, ebx
 * 00000001C000C477: mov     edx, ecx
 * 00000001C000C479: mov     r10, [rax+8]
 * 00000001C000C47D: cmp     r8d, ecx
 * 00000001C000C480: jnb     short loc_1C000C4F2
 * 00000001C000C482: mov     eax, r8d
 * 00000001C000C485: lea     rcx, [rdi+28h]
 * 00000001C000C489: shl     rax, 5
 * 00000001C000C48D: add     rcx, rax
 * 00000001C000C490: mov     edx, r8d
 * 00000001C000C493: call    IsPci3MsiInterrupt
 * 00000001C000C498: test    al, al
 * 00000001C000C49A: jnz     short loc_1C000C4A9
 * 00000001C000C49C: mov     edx, [rdi+24h]
 * 00000001C000C49F: add     r8d, r12d
 * 00000001C000C4A2: cmp     r8d, edx
 * 00000001C000C4A5: jb      short loc_1C000C482
 * 00000001C000C4A7: jmp     short loc_1C000C4F2
 * 00000001C000C4A9: test    r10, r10
 * 00000001C000C4AC: jz      short loc_1C000C4BC
 * 00000001C000C4AE: mov     eax, r9d
 * 00000001C000C4B1: bt      r10, rax
 * 00000001C000C4B5: jb      short loc_1C000C4BC
 * 00000001C000C4B7: add     r9d, r12d
 * 00000001C000C4BA: jmp     short loc_1C000C4AE
 * 00000001C000C4BC: shl     rdx, 5
 * 00000001C000C4C0: mov     eax, 4
 * 00000001C000C4C5: mov     ecx, r9d
 * 00000001C000C4C8: or      [rdx+rdi+2Ch], ax
 * 00000001C000C4CD: mov     [rdx+rdi+38h], eax
 * 00000001C000C4D1: mov     rax, r12
 * 00000001C000C4D4: shl     rax, cl
 * 00000001C000C4D7: mov     [rdx+rdi+40h], rax
 * 00000001C000C4DC: add     r8d, r12d
 * 00000001C000C4DF: mov     [rdx+rdi+30h], ebp
 * 00000001C000C4E3: mov     [rdx+rdi+34h], ebp
 * 00000001C000C4E7: mov     dword ptr [rdx+rdi+3Ch], 3
 * 00000001C000C4EF: mov     edx, [rdi+24h]
 * 00000001C000C4F2: mov     r9d, ebx
 * 00000001C000C4F5: jmp     short loc_1C000C514
 * 00000001C000C4F7: mov     eax, r8d
 * 00000001C000C4FA: lea     rcx, [rdi+28h]
 * 00000001C000C4FE: shl     rax, 5
 * 00000001C000C502: add     rcx, rax
 * 00000001C000C505: call    IsPci3MsiInterrupt
 * 00000001C000C50A: test    al, al
 * 00000001C000C50C: jnz     short loc_1C000C51B
 * 00000001C000C50E: mov     edx, [rdi+24h]
 * 00000001C000C511: add     r8d, r12d
 * 00000001C000C514: cmp     r8d, edx
 * 00000001C000C517: jb      short loc_1C000C4F7
 * 00000001C000C519: jmp     short loc_1C000C55D
 * 00000001C000C51B: mov     r9d, r8d
 * 00000001C000C51E: jmp     short loc_1C000C55D
 * 00000001C000C520: mov     eax, r8d
 * 00000001C000C523: lea     rcx, [rdi+28h]
 * 00000001C000C527: shl     rax, 5
 * 00000001C000C52B: add     rcx, rax
 * 00000001C000C52E: call    IsPci3MsiInterrupt
 * 00000001C000C533: test    al, al
 * 00000001C000C535: jnz     short loc_1C000C557
 * 00000001C000C537: cmp     r8d, r9d
 * 00000001C000C53A: jz      short loc_1C000C554
 * 00000001C000C53C: movups  xmm0, xmmword ptr [rcx]
 * 00000001C000C53F: mov     eax, r9d
 * 00000001C000C542: shl     rax, 5
 * 00000001C000C546: movups  xmmword ptr [rax+rdi+28h], xmm0
 * 00000001C000C54B: movups  xmm1, xmmword ptr [rcx+10h]
 * 00000001C000C54F: movups  xmmword ptr [rax+rdi+38h], xmm1
 * 00000001C000C554: add     r9d, r12d
 * 00000001C000C557: mov     edx, [rdi+24h]
 * 00000001C000C55A: add     r8d, r12d
 * 00000001C000C55D: cmp     r8d, edx
 * 00000001C000C560: jb      short loc_1C000C520
 * 00000001C000C562: test    r15d, r15d
 * 00000001C000C565: jz      short loc_1C000C5B1
 * 00000001C000C567: mov     ecx, ebx
 * 00000001C000C569: test    edx, edx
 * 00000001C000C56B: jz      short loc_1C000C5AC
 * 00000001C000C56D: mov     edx, ecx
 * 00000001C000C56F: shl     rdx, 5
 * 00000001C000C573: cmp     [rdx+rdi+29h], r12b
 * 00000001C000C578: jnz     short loc_1C000C581
 * 00000001C000C57A: test    [rdx+rdi+2Ch], r12b
 * 00000001C000C57F: jnz     short loc_1C000C5A2
 * 00000001C000C581: cmp     ecx, ebx
 * 00000001C000C583: jz      short loc_1C000C59F
 * 00000001C000C585: movups  xmm0, xmmword ptr [rdx+rdi+28h]
 * 00000001C000C58A: mov     eax, ebx
 * 00000001C000C58C: shl     rax, 5
 * 00000001C000C590: movups  xmmword ptr [rax+rdi+28h], xmm0
 * 00000001C000C595: movups  xmm1, xmmword ptr [rdx+rdi+38h]
 * 00000001C000C59A: movups  xmmword ptr [rax+rdi+38h], xmm1
 * 00000001C000C59F: add     ebx, r12d
 * 00000001C000C5A2: mov     edx, [rdi+24h]
 * 00000001C000C5A5: add     ecx, r12d
 * 00000001C000C5A8: cmp     ecx, edx
 * 00000001C000C5AA: jb      short loc_1C000C56D
 * 00000001C000C5AC: sub     ebx, ecx
 * 00000001C000C5AE: add     r14d, ebx
 * 00000001C000C5B1: mov     eax, edx
 * 00000001C000C5B3: lea     rcx, [rdi+28h]
 * 00000001C000C5B7: shl     rax, 5
 * 00000001C000C5BB: lea     rdx, [rdi+28h]
 * 00000001C000C5BF: add     rdx, rax; Src
 * 00000001C000C5C2: mov     rax, [r13+8]
 * 00000001C000C5C6: mov     r8d, [rax]
 * 00000001C000C5C9: sub     r8d, edx
 * 00000001C000C5CC: add     r8d, eax; Size
 * 00000001C000C5CF: mov     eax, r14d
 * 00000001C000C5D2: shl     rax, 5
 * 00000001C000C5D6: add     rcx, rax; void *
 * 00000001C000C5D9: call    memmove
 * 00000001C000C5DE: mov     r8d, [rdi+24h]
 * 00000001C000C5E2: mov     rax, [r13+8]
 * 00000001C000C5E6: sub     r8d, r14d
 * 00000001C000C5E9: mov     edx, r8d
 * 00000001C000C5EC: shl     r8, 5
 * 00000001C000C5F0: shl     edx, 5
 * 00000001C000C5F3: mov     ecx, [rax]
 * 00000001C000C5F5: sub     rcx, r8
 * 00000001C000C5F8: add     rcx, rax
 * 00000001C000C5FB: call    NVMeZeroMemory
 * 00000001C000C600: mov     [rdi+24h], r14d
 * 00000001C000C604: lea     r11, [rsp+68h+var_28]
 * 00000001C000C609: mov     rbx, [r11+30h]
 * 00000001C000C60D: mov     rbp, [r11+38h]
 * 00000001C000C611: mov     rsi, [r11+40h]
 * 00000001C000C615: mov     rsp, r11
 * 00000001C000C618: pop     r15
 * 00000001C000C61A: pop     r14
 * 00000001C000C61C: pop     r13
 * 00000001C000C61E: pop     r12
 * 00000001C000C620: pop     rdi
 * 00000001C000C621: retn
 */
