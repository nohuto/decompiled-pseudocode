/*
 * XREFs of ?xxxDWP_SetRedraw@@YGXPAUtagWND@@H@Z @ 0xC3D5A
 * Callers:
 *     _xxxRealDefWindowProc@16 @ 0x3D3F2 (_xxxRealDefWindowProc@16.c)
 * Callees:
 *     _SetOrClrWF@16 @ 0x1B9C0 (_SetOrClrWF@16.c)
 *     _SetVisible@8 @ 0x1C9DC (_SetVisible@8.c)
 *     _zzzLockDisplayAreaAndInvalidateDCCache@12 @ 0x3536C (_zzzLockDisplayAreaAndInvalidateDCCache@12.c)
 *     ?SetRedrawProp@@YGXPAUtagWND@@H@Z @ 0xC3DF4 (-SetRedrawProp@@YGXPAUtagWND@@H@Z.c)
 *     _SpbCheckPwnd@4 @ 0x17E6EC (_SpbCheckPwnd@4.c)
 */

/*
 * Hex-Rays decompilation failed for ?xxxDWP_SetRedraw@@YGXPAUtagWND@@H@Z @ 0xC3D5A
 * Reason: Hex-Rays returned no pseudocode for 0xC3D5A
 * Fallback: raw IDA disassembly follows.
 *
 * 00000000000C3D5A: mov     edi, edi
 * 00000000000C3D5C: push    esi; struct tagWND *
 * 00000000000C3D5D: mov     esi, ecx
 * 00000000000C3D5F: mov     eax, [esi+14h]
 * 00000000000C3D62: mov     al, [eax+17h]
 * 00000000000C3D65: test    edx, edx
 * 00000000000C3D67: jz      short loc_C3DA8
 * 00000000000C3D69: test    al, 10h
 * 00000000000C3D6B: jnz     short loc_C3DA6
 * 00000000000C3D6D: xor     edx, edx
 * 00000000000C3D6F: call    ?SetRedrawProp@@YGXPAUtagWND@@H@Z; SetRedrawProp(tagWND *,int)
 * 00000000000C3D74: push    1
 * 00000000000C3D76: push    esi
 * 00000000000C3D77: call    _SetVisible@8; SetVisible(x,x)
 * 00000000000C3D7C: mov     eax, ds:__imp__gpDispInfo
 * 00000000000C3D81: mov     eax, [eax]
 * 00000000000C3D83: cmp     dword ptr [eax+10h], 0
 * 00000000000C3D87: jnz     short loc_C3DE4
 * 00000000000C3D89: xor     edx, edx
 * 00000000000C3D8B: mov     ecx, esi
 * 00000000000C3D8D: push    0
 * 00000000000C3D8F: inc     edx
 * 00000000000C3D90: call    _zzzLockDisplayAreaAndInvalidateDCCache@12; zzzLockDisplayAreaAndInvalidateDCCache(x,x,x)
 * 00000000000C3D95: push    1
 * 00000000000C3D97: xor     ecx, ecx
 * 00000000000C3D99: mov     edx, esi
 * 00000000000C3D9B: push    108h
 * 00000000000C3DA0: inc     ecx
 * 00000000000C3DA1: call    _SetOrClrWF@16; SetOrClrWF(x,x,x,x)
 * 00000000000C3DA6: pop     esi
 * 00000000000C3DA7: retn
 * 00000000000C3DA8: test    al, 10h
 * 00000000000C3DAA: jz      short loc_C3DA6
 * 00000000000C3DAC: mov     eax, ds:__imp__gpDispInfo
 * 00000000000C3DB1: mov     eax, [eax]
 * 00000000000C3DB3: cmp     dword ptr [eax+10h], 0
 * 00000000000C3DB7: jnz     short loc_C3DED
 * 00000000000C3DB9: xor     edx, edx
 * 00000000000C3DBB: mov     ecx, esi
 * 00000000000C3DBD: inc     edx
 * 00000000000C3DBE: call    ?SetRedrawProp@@YGXPAUtagWND@@H@Z; SetRedrawProp(tagWND *,int)
 * 00000000000C3DC3: mov     eax, [esi+14h]
 * 00000000000C3DC6: movzx   eax, byte ptr [eax+0Dh]
 * 00000000000C3DCA: and     eax, 1
 * 00000000000C3DCD: add     eax, eax
 * 00000000000C3DCF: push    eax
 * 00000000000C3DD0: push    esi
 * 00000000000C3DD1: call    _SetVisible@8; SetVisible(x,x)
 * 00000000000C3DD6: xor     edx, edx
 * 00000000000C3DD8: mov     ecx, esi
 * 00000000000C3DDA: push    0
 * 00000000000C3DDC: inc     edx
 * 00000000000C3DDD: call    _zzzLockDisplayAreaAndInvalidateDCCache@12; zzzLockDisplayAreaAndInvalidateDCCache(x,x,x)
 * 00000000000C3DE2: pop     esi
 * 00000000000C3DE3: retn
 * 00000000000C3DE4: mov     ecx, esi
 * 00000000000C3DE6: call    _SpbCheckPwnd@4; SpbCheckPwnd(x)
 * 00000000000C3DEB: jmp     short loc_C3D89
 * 00000000000C3DED: call    _SpbCheckPwnd@4; SpbCheckPwnd(x)
 * 00000000000C3DF2: jmp     short loc_C3DB9
 */
