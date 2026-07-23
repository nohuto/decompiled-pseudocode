/*
 * XREFs of _RtlpGetTagName@8 @ 0x4B35809A
 * Callers:
 *     _RtlDebugAllocateHeap@12 @ 0x4B35EF05 (_RtlDebugAllocateHeap@12.c)
 *     _RtlDebugFreeHeap@12 @ 0x4B35F758 (_RtlDebugFreeHeap@12.c)
 *     _RtlDebugReAllocateHeap@16 @ 0x4B35FC56 (_RtlDebugReAllocateHeap@16.c)
 * Callees:
 *     _RtlStringCbPrintfW @ 0x4B33765B (_RtlStringCbPrintfW.c)
 */

/*
 * Hex-Rays decompilation failed for _RtlpGetTagName@8 @ 0x4B35809A
 * Reason: Hex-Rays returned no pseudocode for 0x4B35809A
 * Fallback: raw IDA disassembly follows.
 *
 * 000000004B35809A: mov     eax, _RtlpGlobalTagHeap
 * 000000004B35809F: test    eax, eax
 * 000000004B3580A1: jz      loc_4B358162
 * 000000004B3580A7: test    dx, dx
 * 000000004B3580AA: jz      loc_4B358162
 * 000000004B3580B0: jns     short loc_4B358124
 * 000000004B3580B2: and     edx, 7FFFh
 * 000000004B3580B8: mov     eax, 81h
 * 000000004B3580BD: cmp     dx, ax
 * 000000004B3580C0: jnb     loc_4B358162
 * 000000004B3580C6: cmp     dword ptr [ecx+0BCh], 0
 * 000000004B3580CD: jz      loc_4B358162
 * 000000004B3580D3: test    dx, dx
 * 000000004B3580D6: jnz     short loc_4B3580E4
 * 000000004B3580D8: push    400h
 * 000000004B3580DD: push    offset aObjects4u_0; "Objects>%4u"
 * 000000004B3580E2: jmp     short loc_4B3580F9
 * 000000004B3580E4: mov     eax, 80h
 * 000000004B3580E9: cmp     dx, ax
 * 000000004B3580EC: jnb     short loc_4B35810A
 * 000000004B3580EE: mov     eax, edx
 * 000000004B3580F0: shl     eax, 3
 * 000000004B3580F3: push    eax; Format
 * 000000004B3580F4: push    offset aObjects4u; "Objects=%4u"
 * 000000004B3580F9: push    30h ; '0'; int
 * 000000004B3580FB: push    offset Buffer; Buffer
 * 000000004B358100: call    _RtlStringCbPrintfW
 * 000000004B358105: add     esp, 10h
 * 000000004B358108: jmp     short loc_4B35811E
 * 000000004B35810A: push    offset aVirtualalloc; "VirtualAlloc"
 * 000000004B35810F: push    30h ; '0'; int
 * 000000004B358111: push    offset Buffer; Buffer
 * 000000004B358116: call    _RtlStringCbPrintfW
 * 000000004B35811B: add     esp, 0Ch
 * 000000004B35811E: mov     eax, offset Buffer
 * 000000004B358123: retn
 * 000000004B358124: test    edx, 800h
 * 000000004B35812A: jz      short loc_4B358151
 * 000000004B35812C: and     edx, 0F7FFh
 * 000000004B358132: cmp     dx, [eax+84h]
 * 000000004B358139: jnb     short loc_4B358162
 * 000000004B35813B: mov     ecx, [eax+88h]
 * 000000004B358141: test    ecx, ecx
 * 000000004B358143: jz      short loc_4B358162
 * 000000004B358145: movzx   eax, dx
 * 000000004B358148: shl     eax, 6
 * 000000004B35814B: add     eax, 10h
 * 000000004B35814E: add     eax, ecx
 * 000000004B358150: retn
 * 000000004B358151: cmp     dx, [ecx+84h]
 * 000000004B358158: jnb     short loc_4B358162
 * 000000004B35815A: mov     ecx, [ecx+88h]
 * 000000004B358160: jmp     short loc_4B358141
 * 000000004B358162: xor     eax, eax
 * 000000004B358164: retn
 */
