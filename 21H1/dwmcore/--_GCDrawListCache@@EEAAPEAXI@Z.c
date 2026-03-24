/*
 * XREFs of ??_GCDrawListCache@@EEAAPEAXI@Z @ 0x18004D2B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18003AF68 (--3@YAXPEAX@Z.c)
 *     ?GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z @ 0x18004C550 (-GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z.c)
 *     ?ReleaseDrawListEntries@CDrawListCache@@AEAAXXZ @ 0x18004D38C (-ReleaseDrawListEntries@CDrawListCache@@AEAAXXZ.c)
 *     ?first@?$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@QEBAPEAPEAVCDrawListEntry@@XZ @ 0x18004D540 (-first@-$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@QEBAPEAPEAVCDrawListEntry@@XZ.c)
 *     ?size@?$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@AEBA_KXZ @ 0x18004D578 (-size@-$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@AEBA_KXZ.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800DC280 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 *     ?clear_region@?$vector_facade@PEAVCDrawListEntry@@V?$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@@detail@@IEAAX_K0@Z @ 0x1801A2BF8 (-clear_region@-$vector_facade@PEAVCDrawListEntry@@V-$pointer_buffer_impl@PEAVCDrawListEntry@@@de.c)
 *     ModuleFailFastForHRESULT @ 0x180211774 (ModuleFailFastForHRESULT.c)
 */

/*
 * Hex-Rays decompilation failed for ??_GCDrawListCache@@EEAAPEAXI@Z @ 0x18004D2B0
 * Reason: Hex-Rays returned no pseudocode for 0x18004D2B0
 * Fallback: raw IDA disassembly follows.
 *
 * 000000018004D2B0: mov     [rsp+arg_8], rbx
 * 000000018004D2B5: mov     [rsp+arg_10], rbp
 * 000000018004D2BA: mov     [rsp+arg_18], rsi
 * 000000018004D2BF: push    rdi
 * 000000018004D2C0: sub     rsp, 20h
 * 000000018004D2C4: lea     rax, ??_7CDrawListCache@@6B@; const CDrawListCache::`vftable'
 * 000000018004D2CB: mov     ebp, edx
 * 000000018004D2CD: mov     [rcx], rax
 * 000000018004D2D0: mov     rdi, rcx
 * 000000018004D2D3: call    ?ReleaseDrawListEntries@CDrawListCache@@AEAAXXZ; CDrawListCache::ReleaseDrawListEntries(void)
 * 000000018004D2D8: lea     rsi, [rdi+20h]
 * 000000018004D2DC: mov     rcx, rsi
 * 000000018004D2DF: call    ?size@?$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@AEBA_KXZ; detail::pointer_buffer_impl<CDrawListEntry *>::size(void)
 * 000000018004D2E4: mov     rcx, rsi
 * 000000018004D2E7: mov     rbx, rax
 * 000000018004D2EA: call    ?first@?$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@QEBAPEAPEAVCDrawListEntry@@XZ; detail::pointer_buffer_impl<CDrawListEntry *>::first(void)
 * 000000018004D2EF: mov     rcx, rsi
 * 000000018004D2F2: lea     rbx, [rax+rbx*8]
 * 000000018004D2F6: call    ?first@?$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@QEBAPEAPEAVCDrawListEntry@@XZ; detail::pointer_buffer_impl<CDrawListEntry *>::first(void)
 * 000000018004D2FB: sub     rbx, rax
 * 000000018004D2FE: sar     rbx, 3
 * 000000018004D302: test    rbx, rbx
 * 000000018004D305: jnz     loc_180110C0E
 * 000000018004D30B: mov     al, [rsi]
 * 000000018004D30D: and     al, 3
 * 000000018004D30F: cmp     al, 1
 * 000000018004D311: jz      short loc_18004D373
 * 000000018004D313: test    bpl, 1
 * 000000018004D317: jz      short loc_18004D350
 * 000000018004D319: test    bpl, 4
 * 000000018004D31D: jnz     loc_180110C2C
 * 000000018004D323: lea     rcx, [rsp+28h+arg_0]; struct CThreadContext **
 * 000000018004D328: call    ?GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z; CThreadContext::GetCurrent(CThreadContext * *)
 * 000000018004D32D: test    eax, eax
 * 000000018004D32F: js      loc_180110C1F
 * 000000018004D335: mov     rcx, [rsp+28h+arg_0]
 * 000000018004D33A: mov     eax, [rcx+38h]
 * 000000018004D33D: cmp     [rcx+3Ch], eax
 * 000000018004D340: jnb     short loc_18004D369
 * 000000018004D342: mov     rax, [rcx+40h]
 * 000000018004D346: mov     [rdi], rax
 * 000000018004D349: inc     dword ptr [rcx+3Ch]
 * 000000018004D34C: mov     [rcx+40h], rdi
 * 000000018004D350: mov     rbx, [rsp+28h+arg_8]
 * 000000018004D355: mov     rax, rdi
 * 000000018004D358: mov     rbp, [rsp+28h+arg_10]
 * 000000018004D35D: mov     rsi, [rsp+28h+arg_18]
 * 000000018004D362: add     rsp, 20h
 * 000000018004D366: pop     rdi
 * 000000018004D367: retn
 * 000000018004D369: mov     rcx, rdi; lpMem
 * 000000018004D36C: call    ??3@YAXPEAX@Z; operator delete(void *)
 * 000000018004D371: jmp     short loc_18004D350
 * 000000018004D373: mov     rcx, rsi
 * 000000018004D376: call    ?first@?$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@QEBAPEAPEAVCDrawListEntry@@XZ; detail::pointer_buffer_impl<CDrawListEntry *>::first(void)
 * 000000018004D37B: lea     rcx, [rax-10h]; lpMem
 * 000000018004D37F: call    ??3@YAXPEAX@Z; operator delete(void *)
 * 000000018004D384: jmp     short loc_18004D313
 * 0000000180110C0E: mov     r8, rbx
 * 0000000180110C11: mov     rcx, rsi
 * 0000000180110C14: call    ?clear_region@?$vector_facade@PEAVCDrawListEntry@@V?$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@@detail@@IEAAX_K0@Z; detail::vector_facade<CDrawListEntry *,detail::pointer_buffer_impl<CDrawListEntry *>>::clear_region(unsigned __int64,unsigned __int64)
 * 0000000180110C19: nop
 * 0000000180110C1A: jmp     loc_18004D30B
 * 0000000180110C1F: mov     rdx, [rsp+28h]
 * 0000000180110C24: mov     ecx, eax
 * 0000000180110C26: call    ModuleFailFastForHRESULT
 * 0000000180110C2C: mov     edx, 68h ; 'h'; struct D2D1_BEZIER_SEGMENT *
 * 0000000180110C31: mov     rcx, rdi; this
 * 0000000180110C34: call    ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z; CDrawListPolygonBuilder::AddBeziers(D2D1_BEZIER_SEGMENT const *,uint)
 * 0000000180110C39: nop
 * 0000000180110C3A: jmp     loc_18004D350
 */
