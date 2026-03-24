/*
 * XREFs of _EditionRimDeviceReadNotification@16 @ 0x1401E4
 * Callers:
 *     <none>
 * Callees:
 *     ?Instance@InteractiveControlManager@@SGPAV1@XZ @ 0xD64EA (-Instance@InteractiveControlManager@@SGPAV1@XZ.c)
 *     ?InkProcessorOnInkDeviceInputReport@@YGXPAURawInputManagerDeviceObject@@PAX@Z @ 0x183811 (-InkProcessorOnInkDeviceInputReport@@YGXPAURawInputManagerDeviceObject@@PAX@Z.c)
 *     ?OnInputReport@InteractiveControlManager@@QAEJPAURawInputManagerDeviceObject@@PAXK@Z @ 0x1AE50E (-OnInputReport@InteractiveControlManager@@QAEJPAURawInputManagerDeviceObject@@PAXK@Z.c)
 */

/*
 * Hex-Rays decompilation failed for _EditionRimDeviceReadNotification@16 @ 0x1401E4
 * Reason: Hex-Rays returned no pseudocode for 0x1401E4
 * Fallback: raw IDA disassembly follows.
 *
 * 00000000001401E4: mov     edi, edi
 * 00000000001401E6: push    ebp; struct RawInputManagerDeviceObject *
 * 00000000001401E7: mov     ebp, esp
 * 00000000001401E9: mov     ecx, ds:__imp__gpHidInput
 * 00000000001401EF: push    0
 * 00000000001401F1: push    [ebp+arg_C]
 * 00000000001401F4: mov     ecx, [ecx]
 * 00000000001401F6: call    ds:__imp_?FindDeviceInfo@CBaseInput@@QBEPAUDEVICEINFO@@PAXH@Z; CBaseInput::FindDeviceInfo(void *,int)
 * 00000000001401FC: test    eax, eax
 * 00000000001401FE: jnz     short loc_140217
 * 0000000000140200: mov     ecx, ds:__imp__gpHidInput
 * 0000000000140206: push    1
 * 0000000000140208: push    [ebp+arg_C]
 * 000000000014020B: mov     ecx, [ecx]
 * 000000000014020D: call    ds:__imp_?FindDeviceInfo@CBaseInput@@QBEPAUDEVICEINFO@@PAXH@Z; CBaseInput::FindDeviceInfo(void *,int)
 * 0000000000140213: test    eax, eax
 * 0000000000140215: jz      short loc_140247
 * 0000000000140217: mov     ecx, [eax+78h]
 * 000000000014021A: test    ecx, 100h
 * 0000000000140220: jz      short loc_14023A
 * 0000000000140222: push    [ebp+arg_8]; unsigned int
 * 0000000000140225: mov     eax, [eax+10h]
 * 0000000000140228: push    [ebp+arg_0]; void *
 * 000000000014022B: push    eax; struct RawInputManagerDeviceObject *
 * 000000000014022C: call    ?Instance@InteractiveControlManager@@SGPAV1@XZ; InteractiveControlManager::Instance(void)
 * 0000000000140231: mov     ecx, eax; this
 * 0000000000140233: call    ?OnInputReport@InteractiveControlManager@@QAEJPAURawInputManagerDeviceObject@@PAXK@Z; InteractiveControlManager::OnInputReport(RawInputManagerDeviceObject *,void *,ulong)
 * 0000000000140238: jmp     short loc_140247
 * 000000000014023A: test    ecx, 200h
 * 0000000000140240: jz      short loc_140247
 * 0000000000140242: call    ?InkProcessorOnInkDeviceInputReport@@YGXPAURawInputManagerDeviceObject@@PAX@Z; InkProcessorOnInkDeviceInputReport(RawInputManagerDeviceObject *,void *)
 * 0000000000140247: pop     ebp
 * 0000000000140248: retn    10h
 */
