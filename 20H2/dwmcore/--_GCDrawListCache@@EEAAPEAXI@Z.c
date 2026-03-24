/*
 * XREFs of ??_GCDrawListCache@@EEAAPEAXI@Z @ 0x18009DB00
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z @ 0x180062CE8 (-GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z.c)
 *     ?clear_region@?$vector_facade@PEAVCDrawListEntry@@V?$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@@detail@@IEAAX_K0@Z @ 0x18009DBDC (-clear_region@-$vector_facade@PEAVCDrawListEntry@@V-$pointer_buffer_impl@PEAVCDrawListEntry@@@de.c)
 *     ?ReleaseDrawListEntries@CDrawListCache@@AEAAXXZ @ 0x18009DC58 (-ReleaseDrawListEntries@CDrawListCache@@AEAAXXZ.c)
 *     ?first@?$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@QEBAPEAPEAVCDrawListEntry@@XZ @ 0x18009DD3C (-first@-$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@QEBAPEAPEAVCDrawListEntry@@XZ.c)
 *     ?size@?$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@AEBA_KXZ @ 0x18009DD74 (-size@-$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@AEBA_KXZ.c)
 *     ??3@YAXPEAX@Z @ 0x18009F4CC (--3@YAXPEAX@Z.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800DD940 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18020CF74 (ModuleFailFastForHRESULT.c)
 */

/*
 * Hex-Rays decompilation failed for ??_GCDrawListCache@@EEAAPEAXI@Z @ 0x18009DB00
 * Reason: Hex-Rays returned no pseudocode for 0x18009DB00
 * Fallback: raw IDA disassembly follows.
 *
 * 000000018009DB00: mov     [rsp+arg_8], rbx
 * 000000018009DB05: mov     [rsp+arg_10], rbp
 * 000000018009DB0A: mov     [rsp+arg_18], rsi
 * 000000018009DB0F: push    rdi
 * 000000018009DB10: sub     rsp, 20h
 * 000000018009DB14: lea     rax, ??_7CDrawListCache@@6B@; const CDrawListCache::`vftable'
 * 000000018009DB1B: mov     ebp, edx
 * 000000018009DB1D: mov     [rcx], rax
 * 000000018009DB20: mov     rdi, rcx
 * 000000018009DB23: call    ?ReleaseDrawListEntries@CDrawListCache@@AEAAXXZ; CDrawListCache::ReleaseDrawListEntries(void)
 * 000000018009DB28: lea     rsi, [rdi+20h]
 * 000000018009DB2C: mov     rcx, rsi
 * 000000018009DB2F: call    ?size@?$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@AEBA_KXZ; detail::pointer_buffer_impl<CDrawListEntry *>::size(void)
 * 000000018009DB34: mov     rcx, rsi
 * 000000018009DB37: mov     rbx, rax
 * 000000018009DB3A: call    ?first@?$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@QEBAPEAPEAVCDrawListEntry@@XZ; detail::pointer_buffer_impl<CDrawListEntry *>::first(void)
 * 000000018009DB3F: mov     rcx, rsi
 * 000000018009DB42: lea     rbx, [rax+rbx*8]
 * 000000018009DB46: call    ?first@?$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@QEBAPEAPEAVCDrawListEntry@@XZ; detail::pointer_buffer_impl<CDrawListEntry *>::first(void)
 * 000000018009DB4B: sub     rbx, rax
 * 000000018009DB4E: sar     rbx, 3
 * 000000018009DB52: test    rbx, rbx
 * 000000018009DB55: jnz     loc_18012AE08
 * 000000018009DB5B: mov     al, [rsi]
 * 000000018009DB5D: and     al, 3
 * 000000018009DB5F: cmp     al, 1
 * 000000018009DB61: jz      short loc_18009DBC3
 * 000000018009DB63: test    bpl, 1
 * 000000018009DB67: jz      short loc_18009DBA0
 * 000000018009DB69: test    bpl, 4
 * 000000018009DB6D: jnz     loc_18012AE26
 * 000000018009DB73: lea     rcx, [rsp+28h+arg_0]; struct CThreadContext **
 * 000000018009DB78: call    ?GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z; CThreadContext::GetCurrent(CThreadContext * *)
 * 000000018009DB7D: test    eax, eax
 * 000000018009DB7F: js      loc_18012AE19
 * 000000018009DB85: mov     rcx, [rsp+28h+arg_0]
 * 000000018009DB8A: mov     eax, [rcx+38h]
 * 000000018009DB8D: cmp     [rcx+3Ch], eax
 * 000000018009DB90: jnb     short loc_18009DBB9
 * 000000018009DB92: mov     rax, [rcx+40h]
 * 000000018009DB96: mov     [rdi], rax
 * 000000018009DB99: inc     dword ptr [rcx+3Ch]
 * 000000018009DB9C: mov     [rcx+40h], rdi
 * 000000018009DBA0: mov     rbx, [rsp+28h+arg_8]
 * 000000018009DBA5: mov     rax, rdi
 * 000000018009DBA8: mov     rbp, [rsp+28h+arg_10]
 * 000000018009DBAD: mov     rsi, [rsp+28h+arg_18]
 * 000000018009DBB2: add     rsp, 20h
 * 000000018009DBB6: pop     rdi
 * 000000018009DBB7: retn
 * 000000018009DBB9: mov     rcx, rdi; lpMem
 * 000000018009DBBC: call    ??3@YAXPEAX@Z; operator delete(void *)
 * 000000018009DBC1: jmp     short loc_18009DBA0
 * 000000018009DBC3: mov     rcx, rsi
 * 000000018009DBC6: call    ?first@?$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@QEBAPEAPEAVCDrawListEntry@@XZ; detail::pointer_buffer_impl<CDrawListEntry *>::first(void)
 * 000000018009DBCB: lea     rcx, [rax-10h]; lpMem
 * 000000018009DBCF: call    ??3@YAXPEAX@Z; operator delete(void *)
 * 000000018009DBD4: jmp     short loc_18009DB63
 * 000000018012AE08: mov     r8, rbx
 * 000000018012AE0B: mov     rcx, rsi
 * 000000018012AE0E: call    ?clear_region@?$vector_facade@PEAVCDrawListEntry@@V?$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@@detail@@IEAAX_K0@Z; detail::vector_facade<CDrawListEntry *,detail::pointer_buffer_impl<CDrawListEntry *>>::clear_region(unsigned __int64,unsigned __int64)
 * 000000018012AE13: nop
 * 000000018012AE14: jmp     loc_18009DB5B
 * 000000018012AE19: mov     rdx, [rsp+28h]
 * 000000018012AE1E: mov     ecx, eax
 * 000000018012AE20: call    ModuleFailFastForHRESULT
 * 000000018012AE26: mov     edx, 68h ; 'h'; struct D2D1_BEZIER_SEGMENT *
 * 000000018012AE2B: mov     rcx, rdi; this
 * 000000018012AE2E: call    ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z; CDrawListPolygonBuilder::AddBeziers(D2D1_BEZIER_SEGMENT const *,uint)
 * 000000018012AE33: nop
 * 000000018012AE34: jmp     loc_18009DBA0
 */
