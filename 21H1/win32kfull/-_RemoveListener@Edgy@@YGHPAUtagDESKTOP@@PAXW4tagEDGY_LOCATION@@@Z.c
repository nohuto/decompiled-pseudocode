/*
 * XREFs of ?_RemoveListener@Edgy@@YGHPAUtagDESKTOP@@PAXW4tagEDGY_LOCATION@@@Z @ 0x16EE85
 * Callers:
 *     _NtUserRegisterEdgy@12 @ 0x167F38 (_NtUserRegisterEdgy@12.c)
 * Callees:
 *     ?_FindListener@Edgy@@YGPAUtagEDGY_LISTENER@@AAUtagEDGY_DATA@@PAXW4tagEDGY_LOCATION@@@Z @ 0x16E31F (-_FindListener@Edgy@@YGPAUtagEDGY_LISTENER@@AAUtagEDGY_DATA@@PAXW4tagEDGY_LOCATION@@@Z.c)
 *     ?_RemoveListenerCore@Edgy@@YGXAAUtagEDGY_DATA@@PAUtagEDGY_LISTENER@@@Z @ 0x16EEB8 (-_RemoveListenerCore@Edgy@@YGXAAUtagEDGY_DATA@@PAUtagEDGY_LISTENER@@@Z.c)
 */

/*
 * Hex-Rays decompilation failed for ?_RemoveListener@Edgy@@YGHPAUtagDESKTOP@@PAXW4tagEDGY_LOCATION@@@Z @ 0x16EE85
 * Reason: Hex-Rays returned no pseudocode for 0x16EE85
 * Fallback: raw IDA disassembly follows.
 *
 * 000000000016EE85: mov     edi, edi
 * 000000000016EE87: push    ebp; struct tagEDGY_DATA *
 * 000000000016EE88: mov     ebp, esp
 * 000000000016EE8A: push    esi; this
 * 000000000016EE8B: mov     esi, [ecx+8Ch]
 * 000000000016EE91: test    esi, esi
 * 000000000016EE93: jz      short loc_16EEB1
 * 000000000016EE95: push    [ebp+arg_0]
 * 000000000016EE98: mov     ecx, esi
 * 000000000016EE9A: call    ?_FindListener@Edgy@@YGPAUtagEDGY_LISTENER@@AAUtagEDGY_DATA@@PAXW4tagEDGY_LOCATION@@@Z; Edgy::_FindListener(tagEDGY_DATA &,void *,tagEDGY_LOCATION)
 * 000000000016EE9F: test    eax, eax
 * 000000000016EEA1: jz      short loc_16EEB1
 * 000000000016EEA3: mov     edx, eax
 * 000000000016EEA5: mov     ecx, esi
 * 000000000016EEA7: call    ?_RemoveListenerCore@Edgy@@YGXAAUtagEDGY_DATA@@PAUtagEDGY_LISTENER@@@Z; Edgy::_RemoveListenerCore(tagEDGY_DATA &,tagEDGY_LISTENER *)
 * 000000000016EEAC: xor     eax, eax
 * 000000000016EEAE: inc     eax
 * 000000000016EEAF: jmp     short loc_16EEB3
 * 000000000016EEB1: xor     eax, eax
 * 000000000016EEB3: pop     esi
 * 000000000016EEB4: pop     ebp
 * 000000000016EEB5: retn    4
 */
