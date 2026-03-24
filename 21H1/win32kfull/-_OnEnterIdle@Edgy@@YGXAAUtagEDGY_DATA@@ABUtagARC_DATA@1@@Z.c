/*
 * XREFs of ?_OnEnterIdle@Edgy@@YGXAAUtagEDGY_DATA@@ABUtagARC_DATA@1@@Z @ 0x16ECEB
 * Callers:
 *     ?_OnStateTransition@Edgy@@YGQAXAAUtagEDGY_DATA@@W4tagEDGY_STATE@@ABUtagARC_DATA@1@@Z @ 0x16EDE1 (-_OnStateTransition@Edgy@@YGQAXAAUtagEDGY_DATA@@W4tagEDGY_STATE@@ABUtagARC_DATA@1@@Z.c)
 * Callees:
 *     ?_StoreLastUpDataAndPost@Edgy@@YGXAAUtagEDGY_DATA@@QAX@Z @ 0x16EFD9 (-_StoreLastUpDataAndPost@Edgy@@YGXAAUtagEDGY_DATA@@QAX@Z.c)
 */

/*
 * Hex-Rays decompilation failed for ?_OnEnterIdle@Edgy@@YGXAAUtagEDGY_DATA@@ABUtagARC_DATA@1@@Z @ 0x16ECEB
 * Reason: Hex-Rays returned no pseudocode for 0x16ECEB
 * Fallback: raw IDA disassembly follows.
 *
 * 000000000016ECEB: mov     edx, [edx]
 * 000000000016ECED: push    esi; this
 * 000000000016ECEE: mov     esi, ecx
 * 000000000016ECF0: call    ?_StoreLastUpDataAndPost@Edgy@@YGXAAUtagEDGY_DATA@@QAX@Z; Edgy::_StoreLastUpDataAndPost(tagEDGY_DATA &,void * const)
 * 000000000016ECF5: xor     eax, eax
 * 000000000016ECF7: mov     [esi+0ACh], eax
 * 000000000016ECFD: mov     [esi+0B0h], eax
 * 000000000016ED03: mov     [esi+0C0h], eax
 * 000000000016ED09: mov     [esi+0C4h], eax
 * 000000000016ED0F: mov     [esi+0B4h], eax
 * 000000000016ED15: mov     [esi+0B8h], eax
 * 000000000016ED1B: mov     [esi+0BCh], eax
 * 000000000016ED21: mov     [esi+0C8h], eax
 * 000000000016ED27: pop     esi
 * 000000000016ED28: retn
 */
