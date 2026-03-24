/*
 * XREFs of _PointerPromotionOnPointerInputRetrieval@20 @ 0x17DEF0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnPointerInputRetrieval@PointerPromotion@@YGXGKUtagPOINT@@H@Z @ 0x17D0DD (-OnPointerInputRetrieval@PointerPromotion@@YGXGKUtagPOINT@@H@Z.c)
 */

/*
 * Hex-Rays decompilation failed for _PointerPromotionOnPointerInputRetrieval@20 @ 0x17DEF0
 * Reason: Hex-Rays returned no pseudocode for 0x17DEF0
 * Fallback: raw IDA disassembly follows.
 *
 * 000000000017DEF0: mov     edi, edi
 * 000000000017DEF2: push    ebp; struct tagPOINT
 * 000000000017DEF3: mov     ebp, esp
 * 000000000017DEF5: push    [ebp+arg_C]; unsigned int
 * 000000000017DEF8: mov     edx, [ebp+arg_4]
 * 000000000017DEFB: push    dword ptr [ebp+arg_8]; unsigned __int16
 * 000000000017DEFE: mov     ecx, [ebp+arg_0]
 * 000000000017DF01: push    [ebp+arg_10]; this
 * 000000000017DF04: call    ?OnPointerInputRetrieval@PointerPromotion@@YGXGKUtagPOINT@@H@Z; PointerPromotion::OnPointerInputRetrieval(ushort,ulong,tagPOINT,int)
 * 000000000017DF09: pop     ebp
 * 000000000017DF0A: retn    14h
 */
