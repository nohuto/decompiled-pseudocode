/*
 * XREFs of NVMeControllerFilterResouceRequirements @ 0x1C000C27C
 * Callers:
 *     NVMeHwAdapterControl @ 0x1C0004A90 (NVMeHwAdapterControl.c)
 * Callees:
 *     NVMeZeroMemory @ 0x1C00044E0 (NVMeZeroMemory.c)
 *     memmove @ 0x1C0005200 (memmove.c)
 *     GetProcessorGroupInformation @ 0x1C000A364 (GetProcessorGroupInformation.c)
 *     IsPci3MsiInterrupt @ 0x1C000BB9C (IsPci3MsiInterrupt.c)
 */

/*
 * Hex-Rays decompilation failed for NVMeControllerFilterResouceRequirements @ 0x1C000C27C
 * Reason: Hex-Rays returned no pseudocode for 0x1C000C27C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C000C27C: mov     [rsp+arg_0], rbx
 * 00000001C000C281: mov     [rsp+arg_8], rbp
 * 00000001C000C286: mov     [rsp+arg_10], rsi
 * 00000001C000C28B: push    rdi
 * 00000001C000C28C: push    r12
 * 00000001C000C28E: push    r13
 * 00000001C000C290: push    r14
 * 00000001C000C292: push    r15
 * 00000001C000C294: sub     rsp, 40h
 * 00000001C000C298: xor     ebx, ebx
 * 00000001C000C29A: mov     r13, rdx
 * 00000001C000C29D: mov     ebp, ebx
 * 00000001C000C29F: mov     r15d, ebx
 * 00000001C000C2A2: mov     rsi, rcx
 * 00000001C000C2A5: call    GetProcessorGroupInformation
 * 00000001C000C2AA: test    al, al
 * 00000001C000C2AC: jnz     short loc_1C000C2F3
 * 00000001C000C2AE: lea     rax, [rsi+0D0h]
 * 00000001C000C2B5: mov     dword ptr [rsi+1Ch], 9
 * 00000001C000C2BC: mov     [rsp+68h+var_38], rax
 * 00000001C000C2C1: lea     r9d, [rbx+0Ah]
 * 00000001C000C2C5: lea     rax, aGetProcessorGr; "Get processor group information failed"
 * 00000001C000C2CC: mov     [rsp+68h+var_40], 2
 * 00000001C000C2D4: xor     r8d, r8d
 * 00000001C000C2D7: mov     [rsp+68h+var_48], rax
 * 00000001C000C2DC: mov     rdx, rsi
 * 00000001C000C2DF: lea     ecx, [rbx+62h]
 * 00000001C000C2E2: call    cs:__imp_StorPortExtendedFunction
 * 00000001C000C2E9: nop     dword ptr [rax+rax+00h]
 * 00000001C000C2EE: jmp     loc_1C000C5B4
 * 00000001C000C2F3: mov     rdi, [r13+8]
 * 00000001C000C2F7: mov     r12d, 1
 * 00000001C000C2FD: mov     r14d, [rdi+24h]
 * 00000001C000C301: mov     edx, r14d
 * 00000001C000C304: test    r14d, r14d
 * 00000001C000C307: jz      short loc_1C000C339
 * 00000001C000C309: lea     r8, [rdi+29h]
 * 00000001C000C30D: mov     r9d, r14d
 * 00000001C000C310: lea     rcx, [r8-1]
 * 00000001C000C314: call    IsPci3MsiInterrupt
 * 00000001C000C319: test    al, al
 * 00000001C000C31B: jz      short loc_1C000C322
 * 00000001C000C31D: add     ebp, r12d
 * 00000001C000C320: jmp     short loc_1C000C330
 * 00000001C000C322: cmp     [r8], r12b
 * 00000001C000C325: jnz     short loc_1C000C330
 * 00000001C000C327: test    [r8+3], r12b
 * 00000001C000C32B: jz      short loc_1C000C330
 * 00000001C000C32D: add     r15d, r12d
 * 00000001C000C330: add     r8, 20h ; ' '
 * 00000001C000C334: sub     r9, r12
 * 00000001C000C337: jnz     short loc_1C000C310
 * 00000001C000C339: movzx   ecx, word ptr [rsi+0D2h]
 * 00000001C000C340: lea     eax, [rcx+1]
 * 00000001C000C343: cmp     ebp, eax
 * 00000001C000C345: jbe     loc_1C000C512
 * 00000001C000C34B: mov     rax, [rsi+0E0h]
 * 00000001C000C352: sub     ecx, ebp
 * 00000001C000C354: inc     r14d
 * 00000001C000C357: mov     r10d, ebx
 * 00000001C000C35A: add     r14d, ecx
 * 00000001C000C35D: mov     r11d, ebx
 * 00000001C000C360: mov     r8d, ebx
 * 00000001C000C363: mov     ecx, edx
 * 00000001C000C365: mov     r9, [rax+8]
 * 00000001C000C369: mov     ebp, 0FFFFFFFEh
 * 00000001C000C36E: test    edx, edx
 * 00000001C000C370: jz      loc_1C000C41D
 * 00000001C000C376: mov     edx, r8d
 * 00000001C000C379: lea     rcx, [rdi+28h]
 * 00000001C000C37D: shl     rdx, 5
 * 00000001C000C381: add     rcx, rdx
 * 00000001C000C384: call    IsPci3MsiInterrupt
 * 00000001C000C389: test    al, al
 * 00000001C000C38B: jz      short loc_1C000C406
 * 00000001C000C38D: test    r9, r9
 * 00000001C000C390: jz      short loc_1C000C3A0
 * 00000001C000C392: mov     eax, r10d
 * 00000001C000C395: bt      r9, rax
 * 00000001C000C399: jb      short loc_1C000C3A0
 * 00000001C000C39B: add     r10d, r12d
 * 00000001C000C39E: jmp     short loc_1C000C392
 * 00000001C000C3A0: mov     eax, 4
 * 00000001C000C3A5: mov     [rdx+rdi+30h], ebp
 * 00000001C000C3A9: or      [rdx+rdi+2Ch], ax
 * 00000001C000C3AE: mov     ecx, r10d
 * 00000001C000C3B1: mov     [rdx+rdi+38h], ax
 * 00000001C000C3B6: mov     rax, r12
 * 00000001C000C3B9: shl     rax, cl
 * 00000001C000C3BC: mov     [rdx+rdi+40h], rax
 * 00000001C000C3C1: mov     eax, r10d
 * 00000001C000C3C4: btr     r9, rax
 * 00000001C000C3C8: mov     [rdx+rdi+34h], ebp
 * 00000001C000C3CC: mov     [rdx+rdi+3Ah], r11w
 * 00000001C000C3D2: mov     dword ptr [rdx+rdi+3Ch], 3
 * 00000001C000C3DA: test    r9, r9
 * 00000001C000C3DD: jnz     short loc_1C000C406
 * 00000001C000C3DF: movzx   eax, word ptr [rsi+0D0h]
 * 00000001C000C3E6: sub     eax, r12d
 * 00000001C000C3E9: cmp     r11d, eax
 * 00000001C000C3EC: jz      short loc_1C000C417
 * 00000001C000C3EE: mov     rax, [rsi+0E0h]
 * 00000001C000C3F5: add     r11d, r12d
 * 00000001C000C3F8: mov     ecx, r11d
 * 00000001C000C3FB: mov     r10d, ebx
 * 00000001C000C3FE: add     rcx, rcx
 * 00000001C000C401: mov     r9, [rax+rcx*8+8]
 * 00000001C000C406: mov     ecx, [rdi+24h]
 * 00000001C000C409: add     r8d, r12d
 * 00000001C000C40C: cmp     r8d, ecx
 * 00000001C000C40F: jb      loc_1C000C376
 * 00000001C000C415: jmp     short loc_1C000C41D
 * 00000001C000C417: mov     ecx, [rdi+24h]
 * 00000001C000C41A: add     r8d, r12d
 * 00000001C000C41D: mov     rax, [rsi+0E0h]
 * 00000001C000C424: mov     r9d, ebx
 * 00000001C000C427: mov     edx, ecx
 * 00000001C000C429: mov     r10, [rax+8]
 * 00000001C000C42D: cmp     r8d, ecx
 * 00000001C000C430: jnb     short loc_1C000C4A2
 * 00000001C000C432: mov     eax, r8d
 * 00000001C000C435: lea     rcx, [rdi+28h]
 * 00000001C000C439: shl     rax, 5
 * 00000001C000C43D: add     rcx, rax
 * 00000001C000C440: mov     edx, r8d
 * 00000001C000C443: call    IsPci3MsiInterrupt
 * 00000001C000C448: test    al, al
 * 00000001C000C44A: jnz     short loc_1C000C459
 * 00000001C000C44C: mov     edx, [rdi+24h]
 * 00000001C000C44F: add     r8d, r12d
 * 00000001C000C452: cmp     r8d, edx
 * 00000001C000C455: jb      short loc_1C000C432
 * 00000001C000C457: jmp     short loc_1C000C4A2
 * 00000001C000C459: test    r10, r10
 * 00000001C000C45C: jz      short loc_1C000C46C
 * 00000001C000C45E: mov     eax, r9d
 * 00000001C000C461: bt      r10, rax
 * 00000001C000C465: jb      short loc_1C000C46C
 * 00000001C000C467: add     r9d, r12d
 * 00000001C000C46A: jmp     short loc_1C000C45E
 * 00000001C000C46C: shl     rdx, 5
 * 00000001C000C470: mov     eax, 4
 * 00000001C000C475: mov     ecx, r9d
 * 00000001C000C478: or      [rdx+rdi+2Ch], ax
 * 00000001C000C47D: mov     [rdx+rdi+38h], eax
 * 00000001C000C481: mov     rax, r12
 * 00000001C000C484: shl     rax, cl
 * 00000001C000C487: mov     [rdx+rdi+40h], rax
 * 00000001C000C48C: add     r8d, r12d
 * 00000001C000C48F: mov     [rdx+rdi+30h], ebp
 * 00000001C000C493: mov     [rdx+rdi+34h], ebp
 * 00000001C000C497: mov     dword ptr [rdx+rdi+3Ch], 3
 * 00000001C000C49F: mov     edx, [rdi+24h]
 * 00000001C000C4A2: mov     r9d, ebx
 * 00000001C000C4A5: jmp     short loc_1C000C4C4
 * 00000001C000C4A7: mov     eax, r8d
 * 00000001C000C4AA: lea     rcx, [rdi+28h]
 * 00000001C000C4AE: shl     rax, 5
 * 00000001C000C4B2: add     rcx, rax
 * 00000001C000C4B5: call    IsPci3MsiInterrupt
 * 00000001C000C4BA: test    al, al
 * 00000001C000C4BC: jnz     short loc_1C000C4CB
 * 00000001C000C4BE: mov     edx, [rdi+24h]
 * 00000001C000C4C1: add     r8d, r12d
 * 00000001C000C4C4: cmp     r8d, edx
 * 00000001C000C4C7: jb      short loc_1C000C4A7
 * 00000001C000C4C9: jmp     short loc_1C000C50D
 * 00000001C000C4CB: mov     r9d, r8d
 * 00000001C000C4CE: jmp     short loc_1C000C50D
 * 00000001C000C4D0: mov     eax, r8d
 * 00000001C000C4D3: lea     rcx, [rdi+28h]
 * 00000001C000C4D7: shl     rax, 5
 * 00000001C000C4DB: add     rcx, rax
 * 00000001C000C4DE: call    IsPci3MsiInterrupt
 * 00000001C000C4E3: test    al, al
 * 00000001C000C4E5: jnz     short loc_1C000C507
 * 00000001C000C4E7: cmp     r8d, r9d
 * 00000001C000C4EA: jz      short loc_1C000C504
 * 00000001C000C4EC: movups  xmm0, xmmword ptr [rcx]
 * 00000001C000C4EF: mov     eax, r9d
 * 00000001C000C4F2: shl     rax, 5
 * 00000001C000C4F6: movups  xmmword ptr [rax+rdi+28h], xmm0
 * 00000001C000C4FB: movups  xmm1, xmmword ptr [rcx+10h]
 * 00000001C000C4FF: movups  xmmword ptr [rax+rdi+38h], xmm1
 * 00000001C000C504: add     r9d, r12d
 * 00000001C000C507: mov     edx, [rdi+24h]
 * 00000001C000C50A: add     r8d, r12d
 * 00000001C000C50D: cmp     r8d, edx
 * 00000001C000C510: jb      short loc_1C000C4D0
 * 00000001C000C512: test    r15d, r15d
 * 00000001C000C515: jz      short loc_1C000C561
 * 00000001C000C517: mov     ecx, ebx
 * 00000001C000C519: test    edx, edx
 * 00000001C000C51B: jz      short loc_1C000C55C
 * 00000001C000C51D: mov     edx, ecx
 * 00000001C000C51F: shl     rdx, 5
 * 00000001C000C523: cmp     [rdx+rdi+29h], r12b
 * 00000001C000C528: jnz     short loc_1C000C531
 * 00000001C000C52A: test    [rdx+rdi+2Ch], r12b
 * 00000001C000C52F: jnz     short loc_1C000C552
 * 00000001C000C531: cmp     ecx, ebx
 * 00000001C000C533: jz      short loc_1C000C54F
 * 00000001C000C535: movups  xmm0, xmmword ptr [rdx+rdi+28h]
 * 00000001C000C53A: mov     eax, ebx
 * 00000001C000C53C: shl     rax, 5
 * 00000001C000C540: movups  xmmword ptr [rax+rdi+28h], xmm0
 * 00000001C000C545: movups  xmm1, xmmword ptr [rdx+rdi+38h]
 * 00000001C000C54A: movups  xmmword ptr [rax+rdi+38h], xmm1
 * 00000001C000C54F: add     ebx, r12d
 * 00000001C000C552: mov     edx, [rdi+24h]
 * 00000001C000C555: add     ecx, r12d
 * 00000001C000C558: cmp     ecx, edx
 * 00000001C000C55A: jb      short loc_1C000C51D
 * 00000001C000C55C: sub     ebx, ecx
 * 00000001C000C55E: add     r14d, ebx
 * 00000001C000C561: mov     eax, edx
 * 00000001C000C563: lea     rcx, [rdi+28h]
 * 00000001C000C567: shl     rax, 5
 * 00000001C000C56B: lea     rdx, [rdi+28h]
 * 00000001C000C56F: add     rdx, rax; Src
 * 00000001C000C572: mov     rax, [r13+8]
 * 00000001C000C576: mov     r8d, [rax]
 * 00000001C000C579: sub     r8d, edx
 * 00000001C000C57C: add     r8d, eax; Size
 * 00000001C000C57F: mov     eax, r14d
 * 00000001C000C582: shl     rax, 5
 * 00000001C000C586: add     rcx, rax; void *
 * 00000001C000C589: call    memmove
 * 00000001C000C58E: mov     r8d, [rdi+24h]
 * 00000001C000C592: mov     rax, [r13+8]
 * 00000001C000C596: sub     r8d, r14d
 * 00000001C000C599: mov     edx, r8d
 * 00000001C000C59C: shl     r8, 5
 * 00000001C000C5A0: shl     edx, 5
 * 00000001C000C5A3: mov     ecx, [rax]
 * 00000001C000C5A5: sub     rcx, r8
 * 00000001C000C5A8: add     rcx, rax
 * 00000001C000C5AB: call    NVMeZeroMemory
 * 00000001C000C5B0: mov     [rdi+24h], r14d
 * 00000001C000C5B4: lea     r11, [rsp+68h+var_28]
 * 00000001C000C5B9: mov     rbx, [r11+30h]
 * 00000001C000C5BD: mov     rbp, [r11+38h]
 * 00000001C000C5C1: mov     rsi, [r11+40h]
 * 00000001C000C5C5: mov     rsp, r11
 * 00000001C000C5C8: pop     r15
 * 00000001C000C5CA: pop     r14
 * 00000001C000C5CC: pop     r13
 * 00000001C000C5CE: pop     r12
 * 00000001C000C5D0: pop     rdi
 * 00000001C000C5D1: retn
 */
