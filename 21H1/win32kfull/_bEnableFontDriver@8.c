/*
 * XREFs of _bEnableFontDriver@8 @ 0xE6112
 * Callers:
 *     _UmfdSessionInitialize@0 @ 0xE5DB0 (_UmfdSessionInitialize@0.c)
 * Callees:
 *     ?FntCacheHDEV@@YGXPAVPDEV@@K@Z @ 0xE6180 (-FntCacheHDEV@@YGXPAVPDEV@@K@Z.c)
 */

/*
 * Hex-Rays decompilation failed for _bEnableFontDriver@8 @ 0xE6112
 * Reason: Hex-Rays returned no pseudocode for 0xE6112
 * Fallback: raw IDA disassembly follows.
 *
 * 00000000000E6112: mov     edi, edi
 * 00000000000E6114: push    ebp; struct PDEV *
 * 00000000000E6115: mov     ebp, esp
 * 00000000000E6117: push    6
 * 00000000000E6119: push    [ebp+arg_0]
 * 00000000000E611C: call    ds:__imp__ldevLoadInternal@8; ldevLoadInternal(x,x)
 * 00000000000E6122: test    eax, eax
 * 00000000000E6124: jz      short loc_E617C
 * 00000000000E6126: xor     ecx, ecx
 * 00000000000E6128: push    ecx
 * 00000000000E6129: push    ecx
 * 00000000000E612A: push    ecx
 * 00000000000E612B: push    ecx
 * 00000000000E612C: push    ecx
 * 00000000000E612D: push    ecx
 * 00000000000E612E: push    ecx
 * 00000000000E612F: push    ecx
 * 00000000000E6130: push    ecx
 * 00000000000E6131: push    ecx
 * 00000000000E6132: push    ecx
 * 00000000000E6133: push    eax
 * 00000000000E6134: lea     ecx, [ebp+arg_0]
 * 00000000000E6137: call    ds:__imp_??0PDEVOBJ@@QAE@PAU_LDEV@@PAU_devicemodeW@@PAG22PAXPAUtagREMOTETYPEONENODE@@PAU_GDIINFO@@PAUtagDEVINFO@@HKK@Z; PDEVOBJ::PDEVOBJ(_LDEV *,_devicemodeW *,ushort *,ushort *,ushort *,void *,tagREMOTETYPEONENODE *,_GDIINFO *,tagDEVINFO *,int,ulong,ulong)
 * 00000000000E613D: mov     ecx, [ebp+arg_0]
 * 00000000000E6140: test    ecx, ecx
 * 00000000000E6142: jz      short loc_E617C
 * 00000000000E6144: mov     edx, [ebp+arg_4]
 * 00000000000E6147: cmp     edx, 5
 * 00000000000E614A: jnz     short loc_E6166
 * 00000000000E614C: mov     dword_2785B8, ecx
 * 00000000000E6152: mov     _gufiLocalType1Rasterizer, 2
 * 00000000000E615C: mov     dword_269060, 1
 * 00000000000E6166: call    ?FntCacheHDEV@@YGXPAVPDEV@@K@Z; FntCacheHDEV(PDEV *,ulong)
 * 00000000000E616B: mov     ecx, [ebp+arg_0]
 * 00000000000E616E: xor     eax, eax
 * 00000000000E6170: or      dword ptr [ecx+18h], 2000h
 * 00000000000E6177: inc     eax
 * 00000000000E6178: pop     ebp
 * 00000000000E6179: retn    8
 * 00000000000E617C: xor     eax, eax
 * 00000000000E617E: jmp     short loc_E6178
 */
