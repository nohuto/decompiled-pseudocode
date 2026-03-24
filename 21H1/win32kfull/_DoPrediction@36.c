/*
 * XREFs of _DoPrediction@36 @ 0x159075
 * Callers:
 *     <none>
 * Callees:
 *     ?InitializeContactPrediction@@YGXPAUtagHID_POINTER_DEVICE_INFO@@UtagPOINT@@1PAUtagHPD_PREDICTION_INFO@@PAU2@3@Z @ 0x15754D (-InitializeContactPrediction@@YGXPAUtagHID_POINTER_DEVICE_INFO@@UtagPOINT@@1PAUtagHPD_PREDICTION.c)
 *     ?UpdateContactPrediction@@YGXPAUtagHID_POINTER_DEVICE_INFO@@UtagPOINT@@1PAUtagHPD_PREDICTION_INFO@@PAU2@3@Z @ 0x157E5A (-UpdateContactPrediction@@YGXPAUtagHID_POINTER_DEVICE_INFO@@UtagPOINT@@1PAUtagHPD_PREDICTION_INF.c)
 */

/*
 * Hex-Rays decompilation failed for _DoPrediction@36 @ 0x159075
 * Reason: Hex-Rays returned no pseudocode for 0x159075
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000000159075: mov     edi, edi
 * 0000000000159077: push    ebp; struct tagPOINT *
 * 0000000000159078: mov     ebp, esp
 * 000000000015907A: and     esp, 0FFFFFFF8h
 * 000000000015907D: cmp     [ebp+arg_14], 0
 * 0000000000159081: push    [ebp+arg_10]; struct tagHPD_PREDICTION_INFO *
 * 0000000000159084: mov     edx, [ebp+arg_18]
 * 0000000000159087: push    [ebp+arg_8.y]
 * 000000000015908A: push    [ebp+arg_8.x]; struct tagPOINT
 * 000000000015908D: push    [ebp+arg_4]
 * 0000000000159090: push    [ebp+arg_20.x]; struct tagPOINT
 * 0000000000159093: push    [ebp+arg_1C]; struct tagHID_POINTER_DEVICE_INFO *
 * 0000000000159096: jz      short loc_15909F
 * 0000000000159098: call    ?InitializeContactPrediction@@YGXPAUtagHID_POINTER_DEVICE_INFO@@UtagPOINT@@1PAUtagHPD_PREDICTION_INFO@@PAU2@3@Z; InitializeContactPrediction(tagHID_POINTER_DEVICE_INFO *,tagPOINT,tagPOINT,tagHPD_PREDICTION_INFO *,tagPOINT *,tagPOINT *)
 * 000000000015909D: jmp     short loc_1590A7
 * 000000000015909F: mov     ecx, [ebp+arg_0]
 * 00000000001590A2: call    ?UpdateContactPrediction@@YGXPAUtagHID_POINTER_DEVICE_INFO@@UtagPOINT@@1PAUtagHPD_PREDICTION_INFO@@PAU2@3@Z; UpdateContactPrediction(tagHID_POINTER_DEVICE_INFO *,tagPOINT,tagPOINT,tagHPD_PREDICTION_INFO *,tagPOINT *,tagPOINT *)
 * 00000000001590A7: mov     esp, ebp
 * 00000000001590A9: pop     ebp
 * 00000000001590AA: retn    24h ; '$'
 */
