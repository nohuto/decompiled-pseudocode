/*
 * XREFs of StorpTelemetrySendUnitPerfData @ 0x1C000BF70
 * Callers:
 *     StorpLogPerUnitStatistics @ 0x1C000CA80 (StorpLogPerUnitStatistics.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C000BD70 (RaidAllocatePool.c)
 *     McTemplateK0quuujjqzqssszstxuxxqqxxxxxxxqqqzxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx_EtwWriteTransfer @ 0x1C000D424 (McTemplateK0quuujjqzqssszstxuxxqqxxxxxxxqqqzxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx_EtwWriteTran.c)
 *     StorpTelemetryLogUnitPerfDataMeasures @ 0x1C000DC7C (StorpTelemetryLogUnitPerfDataMeasures.c)
 *     __security_check_cookie @ 0x1C001CB10 (__security_check_cookie.c)
 *     memmove @ 0x1C001F600 (memmove.c)
 *     memset @ 0x1C001F8C0 (memset.c)
 *     StorpTelemetryLogUnitPerfDataCriticalData @ 0x1C00547E4 (StorpTelemetryLogUnitPerfDataCriticalData.c)
 */

/*
 * Hex-Rays decompilation failed for StorpTelemetrySendUnitPerfData @ 0x1C000BF70
 * Reason: Hex-Rays returned no pseudocode for 0x1C000BF70
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C000BF70: mov     rax, rsp
 * 00000001C000BF73: mov     [rax+10h], rbx
 * 00000001C000BF77: mov     [rax+18h], rsi
 * 00000001C000BF7B: mov     [rax+20h], rdi
 * 00000001C000BF7F: push    rbp
 * 00000001C000BF80: push    r12
 * 00000001C000BF82: push    r13
 * 00000001C000BF84: push    r14
 * 00000001C000BF86: push    r15
 * 00000001C000BF88: lea     rbp, [rax-168h]
 * 00000001C000BF8F: sub     rsp, 410h
 * 00000001C000BF96: mov     rax, cs:__security_cookie
 * 00000001C000BF9D: xor     rax, rsp
 * 00000001C000BFA0: mov     [rbp+160h+var_30], rax
 * 00000001C000BFA7: mov     r14, rcx
 * 00000001C000BFAA: xor     eax, eax
 * 00000001C000BFAC: lea     rcx, [rbp+160h+var_188]; void *
 * 00000001C000BFB0: mov     qword ptr [rbp+160h+PerformanceFrequency], rax
 * 00000001C000BFB4: xor     edx, edx; Val
 * 00000001C000BFB6: mov     r8d, 158h; Size
 * 00000001C000BFBC: call    memset
 * 00000001C000BFC1: mov     ebx, dword ptr cs:qword_1C0069440
 * 00000001C000BFC7: xor     r11d, r11d
 * 00000001C000BFCA: mov     r15d, r11d
 * 00000001C000BFCD: mov     [rbp+160h+var_1D0], r11
 * 00000001C000BFD1: mov     r13d, r11d
 * 00000001C000BFD4: mov     edi, r11d
 * 00000001C000BFD7: mov     esi, r11d
 * 00000001C000BFDA: mov     [rbp+160h+var_1C8], r11
 * 00000001C000BFDE: mov     r12d, r11d
 * 00000001C000BFE1: mov     [rbp+160h+var_1C0], r11
 * 00000001C000BFE5: mov     [rbp+160h+var_1B8], r11
 * 00000001C000BFE9: cmp     [r14+8C8h], r11
 * 00000001C000BFF0: jz      loc_1C0023D3A
 * 00000001C000BFF6: mov     edx, cs:Size
 * 00000001C000BFFC: mov     ecx, 200h
 * 00000001C000C001: mov     r9, [r14+8]
 * 00000001C000C005: mov     r8d, 65546152h
 * 00000001C000C00B: call    RaidAllocatePool
 * 00000001C000C010: xor     r11d, r11d
 * 00000001C000C013: mov     r15, rax
 * 00000001C000C016: test    rax, rax
 * 00000001C000C019: jz      loc_1C0023D44
 * 00000001C000C01F: mov     r9, [r14+8]
 * 00000001C000C023: lea     eax, [rbx+rbx*2]
 * 00000001C000C026: shl     eax, 3
 * 00000001C000C029: mov     r8d, 65546152h
 * 00000001C000C02F: mov     edx, eax
 * 00000001C000C031: mov     [rbp+160h+Size], rax
 * 00000001C000C035: mov     ecx, 200h
 * 00000001C000C03A: call    RaidAllocatePool
 * 00000001C000C03F: xor     r11d, r11d
 * 00000001C000C042: mov     r13, rax
 * 00000001C000C045: test    rax, rax
 * 00000001C000C048: jz      loc_1C0023D44
 * 00000001C000C04E: cmp     cs:UseQPCTime, r11b
 * 00000001C000C055: jz      loc_1C0023D4E
 * 00000001C000C05B: lea     rcx, [rbp+160h+PerformanceFrequency]; PerformanceFrequency
 * 00000001C000C05F: call    cs:__imp_KeQueryPerformanceCounter
 * 00000001C000C066: nop     dword ptr [rax+rax+00h]
 * 00000001C000C06B: xor     r9d, r9d
 * 00000001C000C06E: mov     rcx, rax
 * 00000001C000C071: mov     r8d, 1
 * 00000001C000C077: test    rax, rax
 * 00000001C000C07A: jle     short loc_1C000C08C
 * 00000001C000C07C: mov     rdx, [r14+8D0h]
 * 00000001C000C083: cmp     rax, rdx
 * 00000001C000C086: jl      loc_1C0023D60
 * 00000001C000C08C: mov     rax, rcx
 * 00000001C000C08F: sub     rax, [r14+8D0h]
 * 00000001C000C096: cmp     cs:UseQPCTime, r9b
 * 00000001C000C09D: jz      loc_1C0023D6E
 * 00000001C000C0A3: mov     r8, qword ptr [rbp+160h+PerformanceFrequency]
 * 00000001C000C0A7: mov     r10, r9
 * 00000001C000C0AA: test    r8, r8
 * 00000001C000C0AD: jz      short loc_1C000C0EB
 * 00000001C000C0AF: test    rax, rax
 * 00000001C000C0B2: jz      short loc_1C000C0EB
 * 00000001C000C0B4: xor     edx, edx
 * 00000001C000C0B6: div     r8
 * 00000001C000C0B9: mov     r10, rax
 * 00000001C000C0BC: imul    rax, rdx, 3E8h
 * 00000001C000C0C3: xor     edx, edx
 * 00000001C000C0C5: div     r8
 * 00000001C000C0C8: mov     r9, rdx
 * 00000001C000C0CB: imul    rdx, r10, 3E8h
 * 00000001C000C0D2: add     rdx, rax
 * 00000001C000C0D5: imul    r10, rdx, 2710h
 * 00000001C000C0DC: imul    rax, r9, 2710h
 * 00000001C000C0E3: xor     edx, edx
 * 00000001C000C0E5: div     r8
 * 00000001C000C0E8: add     r10, rax
 * 00000001C000C0EB: mov     cs:qword_1C0069450, rcx
 * 00000001C000C0F2: mov     rdx, [r14+8C8h]; Src
 * 00000001C000C0F9: mov     [r14+8D0h], rcx
 * 00000001C000C100: mov     rcx, r15; void *
 * 00000001C000C103: mov     r8d, cs:Size; Size
 * 00000001C000C10A: mov     [rbp+160h+var_190], r10
 * 00000001C000C10E: call    memmove
 * 00000001C000C113: mov     r11d, 1
 * 00000001C000C119: cmp     cs:g_RaidNumberProcessors, r11d
 * 00000001C000C120: mov     r9d, r11d
 * 00000001C000C123: jbe     short loc_1C000C16E
 * 00000001C000C125: mov     edx, dword ptr cs:qword_1C0069440+4
 * 00000001C000C12B: imul    edx, r9d
 * 00000001C000C12F: add     rdx, r15
 * 00000001C000C132: test    ebx, ebx
 * 00000001C000C134: jz      short loc_1C000C162
 * 00000001C000C136: lea     rcx, [r15+8]
 * 00000001C000C13A: sub     rdx, r15
 * 00000001C000C13D: mov     r10, rbx
 * 00000001C000C140: mov     rax, [rdx+rcx-8]
 * 00000001C000C145: add     [rcx-8], rax
 * 00000001C000C149: mov     rax, [rdx+rcx]
 * 00000001C000C14D: add     [rcx], rax
 * 00000001C000C150: mov     rax, [rdx+rcx+8]
 * 00000001C000C155: add     [rcx+8], rax
 * 00000001C000C159: lea     rcx, [rcx+18h]
 * 00000001C000C15D: sub     r10, r11
 * 00000001C000C160: jnz     short loc_1C000C140
 * 00000001C000C162: add     r9d, r11d
 * 00000001C000C165: cmp     r9d, cs:g_RaidNumberProcessors
 * 00000001C000C16C: jb      short loc_1C000C125
 * 00000001C000C16E: mov     r8, [rbp+160h+Size]; Size
 * 00000001C000C172: xor     edx, edx; Val
 * 00000001C000C174: mov     rcx, r13; void *
 * 00000001C000C177: call    memset
 * 00000001C000C17C: mov     rcx, [r14+8D8h]
 * 00000001C000C183: xor     eax, eax
 * 00000001C000C185: mov     [rbp+160h+Size], rax
 * 00000001C000C189: test    ebx, ebx
 * 00000001C000C18B: jz      short loc_1C000C1F4
 * 00000001C000C18D: mov     r10, r15
 * 00000001C000C190: lea     r9, [rcx+8]
 * 00000001C000C194: sub     r10, rcx
 * 00000001C000C197: lea     edi, [rax+1]
 * 00000001C000C19A: mov     r11, r13
 * 00000001C000C19D: mov     rsi, rbx
 * 00000001C000C1A0: sub     r11, rcx
 * 00000001C000C1A3: mov     r12d, eax
 * 00000001C000C1A6: mov     r8, [r10+r9-8]
 * 00000001C000C1AB: sub     r8, [r9-8]
 * 00000001C000C1AF: mov     [r11+r9-8], r8
 * 00000001C000C1B4: mov     rdx, [r10+r9]
 * 00000001C000C1B8: sub     rdx, [r9]
 * 00000001C000C1BB: mov     [r11+r9], rdx
 * 00000001C000C1BF: mov     rcx, [r10+r9+8]
 * 00000001C000C1C4: sub     rcx, [r9+8]
 * 00000001C000C1C8: mov     [r11+r9+8], rcx
 * 00000001C000C1CD: lea     r9, [r9+18h]
 * 00000001C000C1D1: lea     rax, [rdx+r8]
 * 00000001C000C1D5: add     r12, rax
 * 00000001C000C1D8: sub     rsi, rdi
 * 00000001C000C1DB: jnz     short loc_1C000C1A6
 * 00000001C000C1DD: mov     rcx, [r14+8D8h]; void *
 * 00000001C000C1E4: mov     rdi, [rbp+160h+var_1C8]
 * 00000001C000C1E8: mov     rsi, [rbp+160h+var_1C0]
 * 00000001C000C1EC: mov     [rbp+160h+Size], r12
 * 00000001C000C1F0: mov     r12, [rbp+160h+var_1B8]
 * 00000001C000C1F4: mov     r8d, dword ptr cs:qword_1C0069440+4; Size
 * 00000001C000C1FB: mov     rdx, r15; Src
 * 00000001C000C1FE: call    memmove
 * 00000001C000C203: xor     r11d, r11d
 * 00000001C000C206: cmp     [rbp+160h+Size], r11
 * 00000001C000C20A: jbe     loc_1C000C7D2
 * 00000001C000C210: cmp     word ptr cs:TelemetryPerfContext, r11w
 * 00000001C000C218: lea     r9d, [r11+0Bh]
 * 00000001C000C21C: mov     [rbp+160h+var_58], r11
 * 00000001C000C223: jz      loc_1C0023D76
 * 00000001C000C229: cmp     word ptr cs:TelemetryPerfContext+2, r11w
 * 00000001C000C231: jz      loc_1C0023D76
 * 00000001C000C237: lea     r8d, [r11+1]
 * 00000001C000C23B: mov     r9d, r11d
 * 00000001C000C23E: test    ebx, ebx
 * 00000001C000C240: jz      short loc_1C000C2AF
 * 00000001C000C242: lea     r10, [r13+10h]
 * 00000001C000C246: lea     r11d, [r8+0Ah]
 * 00000001C000C24A: cmp     r9d, dword ptr cs:xmmword_1C0069430+0Ch
 * 00000001C000C251: jnb     short loc_1C000C2A0
 * 00000001C000C253: cmp     r9d, cs:dword_1C006940C
 * 00000001C000C25A: jb      short loc_1C000C2A0
 * 00000001C000C25C: movzx   ecx, word ptr cs:TelemetryPerfContext
 * 00000001C000C263: xor     edx, edx
 * 00000001C000C265: mov     eax, r9d
 * 00000001C000C268: div     ecx
 * 00000001C000C26A: mov     rdx, [r10-10h]
 * 00000001C000C26E: mov     rcx, [r10-8]
 * 00000001C000C272: cmp     eax, 0Ch
 * 00000001C000C275: cmovnb  eax, r11d
 * 00000001C000C279: lea     r8, [rax+rax*2]
 * 00000001C000C27D: mov     rax, [r10]
 * 00000001C000C280: add     [rbp+r8*8+160h+var_168], rax
 * 00000001C000C285: lea     rax, [rcx+rdx]
 * 00000001C000C289: add     [rbp+r8*8+160h+var_178], rdx
 * 00000001C000C28E: add     [rbp+r8*8+160h+var_170], rcx
 * 00000001C000C293: mov     r8d, 1
 * 00000001C000C299: add     [rbp+160h+var_58], rax
 * 00000001C000C2A0: add     r9d, r8d
 * 00000001C000C2A3: add     r10, 18h
 * 00000001C000C2A7: cmp     r9d, ebx
 * 00000001C000C2AA: jb      short loc_1C000C24A
 * 00000001C000C2AC: xor     r11d, r11d
 * 00000001C000C2AF: mov     r9d, 0Bh
 * 00000001C000C2B5: cmp     [r14+8E0h], r11
 * 00000001C000C2BC: jz      loc_1C000C342
 * 00000001C000C2C2: movzx   edx, r11w
 * 00000001C000C2C6: movzx   ecx, dx
 * 00000001C000C2C9: imul    ecx, cs:dword_1C0069458
 * 00000001C000C2D0: add     rcx, [r14+8E0h]
 * 00000001C000C2D7: mov     rax, [rcx]
 * 00000001C000C2DA: cmp     rax, rdi
 * 00000001C000C2DD: mov     [rcx], r11
 * 00000001C000C2E0: cmova   rdi, rax
 * 00000001C000C2E4: add     rsi, [rcx+8]
 * 00000001C000C2E8: add     r12, [rcx+10h]
 * 00000001C000C2EC: add     dx, r8w
 * 00000001C000C2F0: cmp     dx, cs:g_RaidNumaHighestNodeNumber
 * 00000001C000C2F7: jbe     short loc_1C000C2C6
 * 00000001C000C2F9: mov     qword ptr [rbp+160h+var_1B0+8], rsi
 * 00000001C000C2FD: sub     rsi, [r14+8F0h]
 * 00000001C000C304: mov     [rbp+160h+var_1A0], r12
 * 00000001C000C308: sub     r12, [r14+8F8h]
 * 00000001C000C30F: movsd   xmm1, [rbp+160h+var_1A0]
 * 00000001C000C314: mov     qword ptr [rbp+160h+var_1B0], rdi
 * 00000001C000C318: movups  xmm0, [rbp+160h+var_1B0]
 * 00000001C000C31C: mov     [rbp+160h+var_48], rdi
 * 00000001C000C323: mov     [rbp+160h+var_40], rsi
 * 00000001C000C32A: movups  xmmword ptr [r14+8E8h], xmm0
 * 00000001C000C332: mov     [rbp+160h+var_38], r12
 * 00000001C000C339: movsd   qword ptr [r14+8F8h], xmm1
 * 00000001C000C342: mov     rax, [r14+98h]
 * 00000001C000C349: test    rax, rax
 * 00000001C000C34C: jnz     short loc_1C000C364
 * 00000001C000C34E: mov     rdx, [r14+90h]
 * 00000001C000C355: test    rdx, rdx
 * 00000001C000C358: jnz     loc_1C000C88F
 * 00000001C000C35E: mov     rbx, [rbp+160h+var_1D0]
 * 00000001C000C362: jmp     short loc_1C000C368
 * 00000001C000C364: lea     rbx, [rax+5Ah]
 * 00000001C000C368: cmp     cs:g_StorpTraceLoggingPerformanceHighResolutionTimer, r11d
 * 00000001C000C36F: lea     rax, a256us1ms4ms16m; "256us, 1ms, 4ms, 16ms, 64ms, 128ms, 256"...
 * 00000001C000C376: mov     [rbp+160h+var_180], rax
 * 00000001C000C37A: mov     [rbp+160h+var_50], r13
 * 00000001C000C381: mov     [rbp+160h+var_188], r9b
 * 00000001C000C385: jz      loc_1C0023D81
 * 00000001C000C38B: cmp     cs:g_StorpTraceLoggingCriticalEventEnabledSetByRegistry, r8b
 * 00000001C000C392: jz      loc_1C0023D8A
 * 00000001C000C398: mov     eax, cs:g_StorpTraceLoggingCriticalEventMaximum
 * 00000001C000C39E: cmp     cs:g_StorpTraceLoggingCriticalEventsLogged, eax
 * 00000001C000C3A4: jnb     short loc_1C000C3E0
 * 00000001C000C3A6: mov     eax, [r14+7C8h]
 * 00000001C000C3AD: or      ecx, 0FFFFFFFFh
 * 00000001C000C3B0: test    al, 20h
 * 00000001C000C3B2: jnz     loc_1C0023D9C
 * 00000001C000C3B8: cmp     [r14+7CCh], r11b
 * 00000001C000C3BF: jnz     loc_1C0023DA7
 * 00000001C000C3C5: test    byte ptr [r14+1C2h], 2
 * 00000001C000C3CD: jnz     loc_1C0023DB2
 * 00000001C000C3D3: cmp     cs:g_StorpTraceLoggingCriticalEventEnabled, r11d
 * 00000001C000C3DA: jnz     loc_1C0023DBD
 * 00000001C000C3E0: lea     rdx, [rbp+160h+var_190]
 * 00000001C000C3E4: mov     rcx, r14
 * 00000001C000C3E7: call    StorpTelemetryLogUnitPerfDataMeasures
 * 00000001C000C3EC: test    cs:byte_1C0069844, 2
 * 00000001C000C3F3: jz      loc_1C000C7CF
 * 00000001C000C3F9: mov     rsi, [r14+18h]
 * 00000001C000C3FD: lea     rdi, unk_1C005B660
 * 00000001C000C404: movzx   ecx, byte ptr [r14+1C2h]
 * 00000001C000C40C: lea     rdx, [r14+0BAh]
 * 00000001C000C413: test    rbx, rbx
 * 00000001C000C416: lea     r8, [r14+0A9h]
 * 00000001C000C41D: lea     r9, [r14+0A0h]
 * 00000001C000C424: mov     rax, [rsi+1458h]
 * 00000001C000C42B: lea     r10, [rsi+1448h]
 * 00000001C000C432: cmovnz  rdi, rbx
 * 00000001C000C436: lea     r11, [r14+7B8h]
 * 00000001C000C43D: test    rax, rax
 * 00000001C000C440: lea     rbx, unk_1C005B620
 * 00000001C000C447: cmovnz  rbx, rax
 * 00000001C000C44B: mov     eax, [r14+8C0h]
 * 00000001C000C452: mov     [rsp+430h+var_1E8], rax
 * 00000001C000C45A: and     ecx, 1
 * 00000001C000C45D: mov     rax, [rbp+160h+var_38]
 * 00000001C000C464: mov     [rsp+430h+var_1F0], rax
 * 00000001C000C46C: mov     rax, [rbp+160h+var_40]
 * 00000001C000C473: mov     [rsp+430h+var_1F8], rax
 * 00000001C000C47B: mov     rax, [rbp+160h+var_60]
 * 00000001C000C482: mov     [rsp+430h+var_200], rax
 * 00000001C000C48A: mov     rax, [rbp+160h+var_78]
 * 00000001C000C491: mov     [rsp+430h+var_208], rax
 * 00000001C000C499: mov     rax, [rbp+160h+var_90]
 * 00000001C000C4A0: mov     [rsp+430h+var_210], rax
 * 00000001C000C4A8: mov     rax, [rbp+160h+var_A8]
 * 00000001C000C4AF: mov     [rsp+430h+var_218], rax
 * 00000001C000C4B7: mov     rax, [rbp+160h+var_C0]
 * 00000001C000C4BE: mov     [rsp+430h+var_220], rax
 * 00000001C000C4C6: mov     rax, [rbp+160h+var_D8]
 * 00000001C000C4CD: mov     [rsp+430h+var_228], rax
 * 00000001C000C4D5: mov     rax, [rbp+160h+var_F0]
 * 00000001C000C4D9: mov     [rsp+430h+var_230], rax
 * 00000001C000C4E1: mov     rax, [rbp+160h+var_108]
 * 00000001C000C4E5: mov     [rsp+430h+var_238], rax
 * 00000001C000C4ED: mov     rax, [rbp+160h+var_120]
 * 00000001C000C4F1: mov     [rsp+430h+var_240], rax
 * 00000001C000C4F9: mov     rax, [rbp+160h+var_138]
 * 00000001C000C4FD: mov     [rsp+430h+var_248], rax
 * 00000001C000C505: mov     rax, [rbp+160h+var_150]
 * 00000001C000C509: mov     [rsp+430h+var_250], rax
 * 00000001C000C511: mov     rax, [rbp+160h+var_168]
 * 00000001C000C515: mov     [rsp+430h+var_258], rax
 * 00000001C000C51D: mov     rax, [rbp+160h+var_68]
 * 00000001C000C524: mov     [rsp+430h+var_260], rax
 * 00000001C000C52C: mov     rax, [rbp+160h+var_80]
 * 00000001C000C533: mov     [rsp+430h+var_268], rax
 * 00000001C000C53B: mov     rax, [rbp+160h+var_98]
 * 00000001C000C542: mov     [rsp+430h+var_270], rax
 * 00000001C000C54A: mov     rax, [rbp+160h+var_B0]
 * 00000001C000C551: mov     [rsp+430h+var_278], rax
 * 00000001C000C559: mov     rax, [rbp+160h+var_C8]
 * 00000001C000C560: mov     [rsp+430h+var_280], rax
 * 00000001C000C568: mov     rax, [rbp+160h+var_E0]
 * 00000001C000C56F: mov     [rsp+430h+var_288], rax
 * 00000001C000C577: mov     rax, [rbp+160h+var_F8]
 * 00000001C000C57B: mov     [rsp+430h+var_290], rax
 * 00000001C000C583: mov     rax, [rbp+160h+var_110]
 * 00000001C000C587: mov     [rsp+430h+var_298], rax
 * 00000001C000C58F: mov     rax, [rbp+160h+var_128]
 * 00000001C000C593: mov     [rsp+430h+var_2A0], rax
 * 00000001C000C59B: mov     rax, [rbp+160h+var_140]
 * 00000001C000C59F: mov     [rsp+430h+var_2A8], rax
 * 00000001C000C5A7: mov     rax, [rbp+160h+var_158]
 * 00000001C000C5AB: mov     [rsp+430h+var_2B0], rax
 * 00000001C000C5B3: mov     rax, [rbp+160h+var_170]
 * 00000001C000C5B7: mov     [rsp+430h+var_2B8], rax
 * 00000001C000C5BF: mov     rax, [rbp+160h+var_70]
 * 00000001C000C5C6: mov     [rsp+430h+var_2C0], rax
 * 00000001C000C5CE: mov     rax, [rbp+160h+var_88]
 * 00000001C000C5D5: mov     [rsp+430h+var_2C8], rax
 * 00000001C000C5DD: mov     rax, [rbp+160h+var_A0]
 * 00000001C000C5E4: mov     [rsp+430h+var_2D0], rax
 * 00000001C000C5EC: mov     rax, [rbp+160h+var_B8]
 * 00000001C000C5F3: mov     [rsp+430h+var_2D8], rax
 * 00000001C000C5FB: mov     rax, [rbp+160h+var_D0]
 * 00000001C000C602: mov     [rsp+430h+var_2E0], rax
 * 00000001C000C60A: mov     rax, [rbp+160h+var_E8]
 * 00000001C000C60E: mov     [rsp+430h+var_2E8], rax
 * 00000001C000C616: mov     rax, [rbp+160h+var_100]
 * 00000001C000C61A: mov     [rsp+430h+var_2F0], rax
 * 00000001C000C622: mov     rax, [rbp+160h+var_118]
 * 00000001C000C626: mov     [rsp+430h+var_2F8], rax
 * 00000001C000C62E: mov     rax, [rbp+160h+var_130]
 * 00000001C000C632: mov     [rsp+430h+var_300], rax
 * 00000001C000C63A: mov     rax, [rbp+160h+var_148]
 * 00000001C000C63E: mov     [rsp+430h+var_308], rax
 * 00000001C000C646: mov     rax, [rbp+160h+var_160]
 * 00000001C000C64A: mov     [rsp+430h+var_310], rax
 * 00000001C000C652: mov     rax, [rbp+160h+var_178]
 * 00000001C000C656: mov     [rsp+430h+var_318], rax
 * 00000001C000C65E: mov     rax, [rbp+160h+var_180]
 * 00000001C000C662: mov     [rsp+430h+var_320], rax
 * 00000001C000C66A: mov     eax, [r14+908h]
 * 00000001C000C671: mov     dword ptr [rsp+430h+var_328], eax
 * 00000001C000C678: mov     eax, [r14+900h]
 * 00000001C000C67F: mov     [rsp+430h+var_330], eax
 * 00000001C000C686: mov     eax, dword ptr [rbp+160h+var_48]
 * 00000001C000C68C: mov     [rsp+430h+var_338], eax
 * 00000001C000C693: mov     rax, [r14+8B0h]
 * 00000001C000C69A: mov     qword ptr [rsp+430h+var_340], rax
 * 00000001C000C6A2: mov     rax, [r14+8A8h]
 * 00000001C000C6A9: mov     [rsp+430h+var_348], rax
 * 00000001C000C6B1: mov     rax, [r14+8A0h]
 * 00000001C000C6B8: mov     [rsp+430h+var_350], rax
 * 00000001C000C6C0: mov     rax, [r14+898h]
 * 00000001C000C6C7: mov     [rsp+430h+var_358], rax
 * 00000001C000C6CF: mov     rax, [r14+890h]
 * 00000001C000C6D6: mov     [rsp+430h+var_360], rax
 * 00000001C000C6DE: mov     rax, [r14+888h]
 * 00000001C000C6E5: mov     [rsp+430h+var_368], rax
 * 00000001C000C6ED: mov     rax, [r14+880h]
 * 00000001C000C6F4: mov     [rsp+430h+var_370], rax
 * 00000001C000C6FC: mov     eax, [r14+318h]
 * 00000001C000C703: mov     dword ptr [rsp+430h+var_378], eax
 * 00000001C000C70A: mov     eax, [r14+314h]
 * 00000001C000C711: mov     [rsp+430h+var_380], eax
 * 00000001C000C718: mov     rax, [r14+878h]
 * 00000001C000C71F: mov     qword ptr [rsp+430h+var_388], rax
 * 00000001C000C727: mov     rax, [rbp+160h+var_58]
 * 00000001C000C72E: mov     [rsp+430h+var_390], rax
 * 00000001C000C736: mov     al, [rbp+160h+var_188]
 * 00000001C000C739: mov     byte ptr [rsp+430h+var_398], al
 * 00000001C000C740: mov     rax, cs:g_SystemUptime_s
 * 00000001C000C747: mov     qword ptr [rsp+430h+var_3A0], rax
 * 00000001C000C74F: mov     eax, [rsi+10ACh]
 * 00000001C000C755: mov     dword ptr [rsp+430h+var_3A8], ecx
 * 00000001C000C75C: lea     rcx, StorPortEventProvider_Context
 * 00000001C000C763: mov     qword ptr [rsp+430h+var_3B0], rdi
 * 00000001C000C76B: mov     [rsp+430h+var_3B8], rbx
 * 00000001C000C770: mov     [rsp+430h+var_3C0], rdx
 * 00000001C000C775: lea     rdx, EventUnitPerformance
 * 00000001C000C77C: mov     [rsp+430h+var_3C8], r8
 * 00000001C000C781: xor     r8d, r8d
 * 00000001C000C784: mov     [rsp+430h+var_3D0], r9
 * 00000001C000C789: mov     r9d, [rsi+38h]
 * 00000001C000C78D: mov     dword ptr [rsp+430h+var_3D8], eax
 * 00000001C000C791: mov     rax, [rsi+1300h]
 * 00000001C000C798: mov     qword ptr [rsp+430h+var_3E0], rax
 * 00000001C000C79D: mov     eax, [r14+0CD0h]
 * 00000001C000C7A4: mov     dword ptr [rsp+430h+var_3E8], eax
 * 00000001C000C7A8: mov     al, [r14+62h]
 * 00000001C000C7AC: mov     qword ptr [rsp+430h+var_3F0], r10
 * 00000001C000C7B1: mov     [rsp+430h+var_3F8], r11
 * 00000001C000C7B6: mov     byte ptr [rsp+430h+var_400], al
 * 00000001C000C7BA: mov     al, [r14+61h]
 * 00000001C000C7BE: mov     [rsp+430h+var_408], al
 * 00000001C000C7C2: mov     al, [r14+60h]
 * 00000001C000C7C6: mov     [rsp+430h+var_410], al
 * 00000001C000C7CA: call    McTemplateK0quuujjqzqssszstxuxxqqxxxxxxxqqqzxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx_EtwWriteTransfer
 * 00000001C000C7CF: xor     r11d, r11d
 * 00000001C000C7D2: mov     ebx, r11d
 * 00000001C000C7D5: and     qword ptr [r14+314h], 0
 * 00000001C000C7DD: mov     [r14+900h], r11
 * 00000001C000C7E4: mov     [r14+908h], r11
 * 00000001C000C7EB: mov     [r14+878h], r11
 * 00000001C000C7F2: mov     [r14+880h], r11
 * 00000001C000C7F9: mov     [r14+888h], r11
 * 00000001C000C800: mov     [r14+890h], r11
 * 00000001C000C807: mov     [r14+898h], r11
 * 00000001C000C80E: mov     [r14+8A0h], r11
 * 00000001C000C815: mov     [r14+8A8h], r11
 * 00000001C000C81C: mov     [r14+8B0h], r11
 * 00000001C000C823: mov     [r14+8C0h], r11d
 * 00000001C000C82A: test    r15, r15
 * 00000001C000C82D: jz      short loc_1C000C843
 * 00000001C000C82F: mov     edx, 65546152h; Tag
 * 00000001C000C834: mov     rcx, r15; P
 * 00000001C000C837: call    cs:__imp_ExFreePoolWithTag
 * 00000001C000C83E: nop     dword ptr [rax+rax+00h]
 * 00000001C000C843: test    r13, r13
 * 00000001C000C846: jz      short loc_1C000C85C
 * 00000001C000C848: mov     edx, 65546152h; Tag
 * 00000001C000C84D: mov     rcx, r13; P
 * 00000001C000C850: call    cs:__imp_ExFreePoolWithTag
 * 00000001C000C857: nop     dword ptr [rax+rax+00h]
 * 00000001C000C85C: mov     eax, ebx
 * 00000001C000C85E: mov     rcx, [rbp+160h+var_30]
 * 00000001C000C865: xor     rcx, rsp; StackCookie
 * 00000001C000C868: call    __security_check_cookie
 * 00000001C000C86D: lea     r11, [rsp+430h+var_20]
 * 00000001C000C875: mov     rbx, [r11+38h]
 * 00000001C000C879: mov     rsi, [r11+40h]
 * 00000001C000C87D: mov     rdi, [r11+48h]
 * 00000001C000C881: mov     rsp, r11
 * 00000001C000C884: pop     r15
 * 00000001C000C886: pop     r14
 * 00000001C000C888: pop     r13
 * 00000001C000C88A: pop     r12
 * 00000001C000C88C: pop     rbp
 * 00000001C000C88D: retn
 * 00000001C000C88F: mov     rax, [r14+18h]
 * 00000001C000C893: lea     rbx, [rdx+29h]
 * 00000001C000C897: mov     rcx, [rax+228h]
 * 00000001C000C89E: mov     eax, [rcx+0B8h]
 * 00000001C000C8A4: test    al, 40h
 * 00000001C000C8A6: jnz     loc_1C000C368
 * 00000001C000C8AC: jmp     loc_1C000C35E
 * 00000001C0023D3A: mov     ebx, 0C0000001h
 * 00000001C0023D3F: jmp     loc_1C000C7D5
 * 00000001C0023D44: mov     ebx, 0C0000017h
 * 00000001C0023D49: jmp     loc_1C000C7D5
 * 00000001C0023D4E: call    cs:__imp_KeQueryUnbiasedInterruptTime
 * 00000001C0023D55: nop     dword ptr [rax+rax+00h]
 * 00000001C0023D5A: nop
 * 00000001C0023D5B: jmp     loc_1C000C06B
 * 00000001C0023D60: mov     rax, rcx
 * 00000001C0023D63: sub     rax, rdx
 * 00000001C0023D66: sub     rax, r8
 * 00000001C0023D69: jmp     loc_1C000C096
 * 00000001C0023D6E: mov     r10, rax
 * 00000001C0023D71: jmp     loc_1C000C0EB
 * 00000001C0023D76: mov     r8d, 1
 * 00000001C0023D7C: jmp     loc_1C000C2B5
 * 00000001C0023D81: mov     [rbp+160h+var_188], 0Ah
 * 00000001C0023D85: jmp     loc_1C000C38B
 * 00000001C0023D8A: cmp     cs:g_StorpTraceLoggingCriticalEventEnabled, r11d
 * 00000001C0023D91: jz      loc_1C000C3E0
 * 00000001C0023D97: jmp     loc_1C000C398
 * 00000001C0023D9C: mov     cs:g_StorpTraceLoggingCriticalEventEnabled, ecx
 * 00000001C0023DA2: jmp     loc_1C000C3B8
 * 00000001C0023DA7: mov     cs:g_StorpTraceLoggingCriticalEventEnabled, ecx
 * 00000001C0023DAD: jmp     loc_1C000C3C5
 * 00000001C0023DB2: mov     cs:g_StorpTraceLoggingCriticalEventEnabled, ecx
 * 00000001C0023DB8: jmp     loc_1C000C3D3
 * 00000001C0023DBD: lea     rdx, [rbp+160h+var_190]
 * 00000001C0023DC1: mov     rcx, r14
 * 00000001C0023DC4: call    StorpTelemetryLogUnitPerfDataCriticalData
 * 00000001C0023DC9: nop
 * 00000001C0023DCA: jmp     loc_1C000C3EC
 */
