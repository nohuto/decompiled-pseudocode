/*
 * XREFs of ?RtlStringCchCopyNW@@YGJPAGIPBGI@Z @ 0xAC102
 * Callers:
 *     ?vCheckMMInstance@@YGXPAGPAUtagDESIGNVECTOR@@@Z @ 0xD7352 (-vCheckMMInstance@@YGXPAGPAUtagDESIGNVECTOR@@@Z.c)
 *     __SetWatermarkStrings@4 @ 0xEB0F6 (__SetWatermarkStrings@4.c)
 *     _EditionCreateWindowStationEntryPoint@32 @ 0xF228C (_EditionCreateWindowStationEntryPoint@32.c)
 *     ?GetTiltKeyName@@YGJU_UNICODE_STRING@@PAPAGH@Z @ 0x13E265 (-GetTiltKeyName@@YGJU_UNICODE_STRING@@PAPAGH@Z.c)
 *     ?ReadLinearityData@@YGHPAUtagHID_POINTER_DEVICE_INFO@@U_UNICODE_STRING@@PAX@Z @ 0x13E409 (-ReadLinearityData@@YGHPAUtagHID_POINTER_DEVICE_INFO@@U_UNICODE_STRING@@PAX@Z.c)
 *     ?FindMirrorDriver@@YGJPBGPAU_DISPLAY_DEVICEW@@@Z @ 0x187789 (-FindMirrorDriver@@YGJPBGPAU_DISPLAY_DEVICEW@@@Z.c)
 * Callees:
 *     RtlStringCopyWorkerW @ 0xAC140 (RtlStringCopyWorkerW.c)
 */

/*
 * Hex-Rays decompilation failed for ?RtlStringCchCopyNW@@YGJPAGIPBGI@Z @ 0xAC102
 * Reason: Hex-Rays returned no pseudocode for 0xAC102
 * Fallback: raw IDA disassembly follows.
 *
 * 00000000000AC102: mov     edi, edi
 * 00000000000AC104: push    ebp; pszSrc
 * 00000000000AC105: mov     ebp, esp
 * 00000000000AC107: xor     eax, eax
 * 00000000000AC109: test    edx, edx
 * 00000000000AC10B: jnz     loc_127375
 * 00000000000AC111: mov     eax, 0C000000Dh
 * 00000000000AC116: test    eax, eax
 * 00000000000AC118: js      short loc_AC137
 * 00000000000AC11A: cmp     [ebp+pcchNewDestLength], 7FFFFFFEh
 * 00000000000AC121: ja      loc_127386
 * 00000000000AC127: push    [ebp+pcchNewDestLength]; pcchNewDestLength
 * 00000000000AC12A: push    [ebp+cchDest]; cchDest
 * 00000000000AC12D: push    ecx; pszDest
 * 00000000000AC12E: call    RtlStringCopyWorkerW
 * 00000000000AC133: pop     ebp
 * 00000000000AC134: retn    8
 * 00000000000AC137: test    edx, edx
 * 00000000000AC139: jz      short loc_AC133
 * 00000000000AC13B: jmp     loc_12738B
 * 0000000000127375: cmp     edx, 7FFFFFFFh
 * 000000000012737B: jbe     loc_AC116
 * 0000000000127381: jmp     loc_AC111
 * 0000000000127386: mov     eax, 0C000000Dh
 * 000000000012738B: xor     edx, edx
 * 000000000012738D: mov     [ecx], dx
 * 0000000000127390: jmp     loc_AC133
 */
