/*
 * XREFs of ?Initialize@CPipeInstance@@QEAAJXZ @ 0x14000B880
 * Callers:
 *     ?Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x140004C90 (-Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K.c)
 *     ?Initialize@CSubmixImpl@@UEAAJPEAUSUBMIX_DESCRIPTOR@@@Z @ 0x140005970 (-Initialize@CSubmixImpl@@UEAAJPEAUSUBMIX_DESCRIPTOR@@@Z.c)
 *     ?CreateStream@CSubmixImpl@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140007AA0 (-CreateStream@CSubmixImpl@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEA.c)
 *     ?CreateBridgeStream@CStreamGroup@@UEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIStreamGroup@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x14004D0C0 (-CreateBridgeStream@CStreamGroup@@UEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIStreamGroup@@PEAUSYSTE.c)
 *     ?Initialize@CFormatConverterPipe@@QEAAJPEAUIDeviceGraphObjectCache@@PEBUtWAVEFORMATEX@@PEBUFORMAT_CONVERTER_PIPE_DESCRIPTOR@@@Z @ 0x14004EE28 (-Initialize@CFormatConverterPipe@@QEAAJPEAUIDeviceGraphObjectCache@@PEBUtWAVEFORMATEX@@PEBUFORMA.c)
 * Callees:
 *     ?ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ @ 0x140006040 (-ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ.c)
 *     ?FixupStreamPipe@CPipeInstance@@AEAAJXZ @ 0x14000B98C (-FixupStreamPipe@CPipeInstance@@AEAAJXZ.c)
 *     ?ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ @ 0x14000BD10 (-ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ.c)
 *     ?RemoveAll@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXXZ @ 0x14000F4A0 (-RemoveAll@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x140029E50 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x14003DEFC (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_D @ 0x14003EAEC (WPP_SF_D.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14004DAEC (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

/*
 * Hex-Rays decompilation failed for ?Initialize@CPipeInstance@@QEAAJXZ @ 0x14000B880
 * Reason: Hex-Rays returned no pseudocode for 0x14000B880
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014000B880: mov     [rsp+arg_0], rbx
 * 000000014000B885: mov     [rsp+arg_8], rsi
 * 000000014000B88A: push    rdi
 * 000000014000B88B: sub     rsp, 20h
 * 000000014000B88F: cmp     qword ptr [rcx], 0
 * 000000014000B893: mov     rsi, rcx
 * 000000014000B896: jnz     short loc_14000B8A2
 * 000000014000B898: cmp     dword ptr [rcx+8], 0
 * 000000014000B89C: jz      loc_14000B967
 * 000000014000B8A2: cmp     dword ptr [rcx+70h], 3
 * 000000014000B8A6: jnz     loc_14000B955
 * 000000014000B8AC: call    ?ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ; CPipeInstance::ResolveFormatConflictsLeftRight(void)
 * 000000014000B8B1: mov     ebx, eax
 * 000000014000B8B3: test    eax, eax
 * 000000014000B8B5: js      loc_140034084
 * 000000014000B8BB: mov     rbx, [rsi+18h]
 * 000000014000B8BF: test    rbx, rbx
 * 000000014000B8C2: jz      short loc_14000B8E7
 * 000000014000B8C4: mov     rcx, rbx
 * 000000014000B8C7: test    rbx, rbx
 * 000000014000B8CA: jz      loc_140034079
 * 000000014000B8D0: mov     rdi, [rbx+10h]
 * 000000014000B8D4: lea     rdx, [rbx+8]
 * 000000014000B8D8: mov     rbx, [rbx+8]
 * 000000014000B8DC: cmp     dword ptr [rdi+28h], 4
 * 000000014000B8E0: jz      short loc_14000B90C
 * 000000014000B8E2: test    rbx, rbx
 * 000000014000B8E5: jnz     short loc_14000B8C4
 * 000000014000B8E7: mov     rcx, rsi; this
 * 000000014000B8EA: call    ?FixupStreamPipe@CPipeInstance@@AEAAJXZ; CPipeInstance::FixupStreamPipe(void)
 * 000000014000B8EF: mov     ebx, eax
 * 000000014000B8F1: test    eax, eax
 * 000000014000B8F3: js      loc_140034084
 * 000000014000B8F9: mov     rsi, [rsp+28h+arg_8]
 * 000000014000B8FE: mov     eax, ebx
 * 000000014000B900: mov     rbx, [rsp+28h+arg_0]
 * 000000014000B905: add     rsp, 20h
 * 000000014000B909: pop     rdi
 * 000000014000B90A: retn
 * 000000014000B90C: mov     rax, [rcx]
 * 000000014000B90F: cmp     rcx, [rsi+10h]
 * 000000014000B913: jnz     short loc_14000B97B
 * 000000014000B915: mov     [rsi+10h], rax
 * 000000014000B919: mov     r9, [rdx]
 * 000000014000B91C: cmp     rcx, [rsi+18h]
 * 000000014000B920: jz      short loc_14000B980
 * 000000014000B922: mov     rax, [rcx]
 * 000000014000B925: mov     [rax+8], r9
 * 000000014000B929: mov     rax, [rsi+30h]
 * 000000014000B92D: mov     [rcx], rax
 * 000000014000B930: sub     qword ptr [rsi+20h], 1
 * 000000014000B935: mov     [rsi+30h], rcx
 * 000000014000B939: jz      loc_14003406A
 * 000000014000B93F: mov     rax, [rdi]
 * 000000014000B942: mov     edx, 1
 * 000000014000B947: mov     rcx, rdi
 * 000000014000B94A: mov     rax, [rax]
 * 000000014000B94D: call    cs:__guard_dispatch_icall_fptr
 * 000000014000B953: jmp     short loc_14000B8E2
 * 000000014000B955: cmp     dword ptr [rcx+84h], 0
 * 000000014000B95C: jnz     loc_14000B8AC
 * 000000014000B962: jmp     loc_140034058
 * 000000014000B967: call    ?ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ; CPipeInstance::ResolveFormatConflictsRightLeft(void)
 * 000000014000B96C: mov     ebx, eax
 * 000000014000B96E: test    eax, eax
 * 000000014000B970: jns     loc_14000B8BB
 * 000000014000B976: jmp     loc_140034084
 * 000000014000B97B: mov     [rbx], rax
 * 000000014000B97E: jmp     short loc_14000B919
 * 000000014000B980: mov     [rsi+18h], r9
 * 000000014000B984: jmp     short loc_14000B929
 * 0000000140034058: test    byte ptr [rcx+88h], 8
 * 000000014003405F: jnz     loc_14000B8AC
 * 0000000140034065: jmp     loc_14000B967
 * 000000014003406A: lea     rcx, [rsi+10h]
 * 000000014003406E: call    ?RemoveAll@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXXZ; ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveAll(void)
 * 0000000140034073: nop
 * 0000000140034074: jmp     loc_14000B93F
 * 0000000140034079: mov     ecx, 80004005h; int
 * 000000014003407E: call    ?AtlThrowImpl@ATL@@YAXJ@Z; ATL::AtlThrowImpl(long)
 * 0000000140034084: mov     rcx, cs:WPP_GLOBAL_Control
 * 000000014003408B: lea     rax, WPP_GLOBAL_Control
 * 0000000140034092: cmp     rcx, rax
 * 0000000140034095: jz      short loc_1400340BE
 * 0000000140034097: test    dword ptr [rcx+1Ch], 20000h
 * 000000014003409E: jz      short loc_1400340BE
 * 00000001400340A0: cmp     byte ptr [rcx+19h], 2
 * 00000001400340A4: jb      short loc_1400340BE
 * 00000001400340A6: mov     rcx, [rcx+10h]
 * 00000001400340AA: lea     r8, WPP_0fecdcbf10bb38a7bbad2ceb2ecd9592_Traceguids
 * 00000001400340B1: mov     edx, 24h ; '$'
 * 00000001400340B6: mov     r9d, ebx
 * 00000001400340B9: call    WPP_SF_D
 * 00000001400340BE: mov     r8d, ebx; int
 * 00000001400340C1: lea     rcx, aCpipeinstanceI_0; "CPipeInstance::Initialize"
 * 00000001400340C8: mov     edx, 9EAh; unsigned int
 * 00000001400340CD: call    ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z; AudDGTraceLoggingErrorHelper(char const *,uint,long)
 * 00000001400340D2: nop
 * 00000001400340D3: jmp     loc_14000B8F9
 */
