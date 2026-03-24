/*
 * XREFs of ?bScanFamily@@YGHPAVFHOBJ@@K0K0KPAVEFSOBJ@@KPAU_EFFILTER_INFO@@PBG@Z @ 0x89A4A
 * Callers:
 *     ?EnumEngineOnly@@YG_NPBGKKPAU_EFFILTER_INFO@@AAVPUBLIC_PFTOBJ@@2PAVDCOBJ@@PAKPAX@Z @ 0x88A46 (-EnumEngineOnly@@YG_NPBGKKPAU_EFFILTER_INFO@@AAVPUBLIC_PFTOBJ@@2PAVDCOBJ@@PAKPAX@Z.c)
 *     ?bScanFamilyAndFace@@YGHPAVFHOBJ@@000PAVEFSOBJ@@KPAU_EFFILTER_INFO@@PBG@Z @ 0x899EA (-bScanFamilyAndFace@@YGHPAVFHOBJ@@000PAVEFSOBJ@@KPAU_EFFILTER_INFO@@PBG@Z.c)
 *     ?EnumDeviceAndEngine@@YG_NPBGKKPAU_EFFILTER_INFO@@AAVPUBLIC_PFTOBJ@@2AAVPFFOBJ@@AAVPDEVOBJ@@PAVDCOBJ@@PAKPAX@Z @ 0x21F000 (-EnumDeviceAndEngine@@YG_NPBGKKPAU_EFFILTER_INFO@@AAVPUBLIC_PFTOBJ@@2AAVPFFOBJ@@AAVPDEVOBJ@@PAVD.c)
 * Callees:
 *     ?bScanTheList@@YGHPAVFHOBJ@@KPAVEFSOBJ@@KPAU_EFFILTER_INFO@@PBG@Z @ 0x89A9E (-bScanTheList@@YGHPAVFHOBJ@@KPAVEFSOBJ@@KPAU_EFFILTER_INFO@@PBG@Z.c)
 */

/*
 * Hex-Rays decompilation failed for ?bScanFamily@@YGHPAVFHOBJ@@K0K0KPAVEFSOBJ@@KPAU_EFFILTER_INFO@@PBG@Z @ 0x89A4A
 * Reason: Hex-Rays returned no pseudocode for 0x89A4A
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000000089A4A: mov     edi, edi
 * 0000000000089A4C: push    ebp; struct _EFFILTER_INFO *
 * 0000000000089A4D: mov     ebp, esp
 * 0000000000089A4F: test    ecx, ecx
 * 0000000000089A51: jnz     short loc_89A84
 * 0000000000089A53: mov     ecx, [ebp+arg_0]
 * 0000000000089A56: test    ecx, ecx
 * 0000000000089A58: jz      short loc_89A72
 * 0000000000089A5A: push    [ebp+arg_1C]; unsigned __int16 *
 * 0000000000089A5D: mov     edx, [ebp+arg_4]
 * 0000000000089A60: push    [ebp+arg_18]; struct EFSOBJ *
 * 0000000000089A63: push    [ebp+arg_14]; unsigned int
 * 0000000000089A66: push    [ebp+arg_10]; struct FHOBJ *
 * 0000000000089A69: call    ?bScanTheList@@YGHPAVFHOBJ@@KPAVEFSOBJ@@KPAU_EFFILTER_INFO@@PBG@Z; bScanTheList(FHOBJ *,ulong,EFSOBJ *,ulong,_EFFILTER_INFO *,ushort const *)
 * 0000000000089A6E: test    eax, eax
 * 0000000000089A70: jz      short loc_89A99
 * 0000000000089A72: mov     ecx, [ebp+arg_8]
 * 0000000000089A75: test    ecx, ecx
 * 0000000000089A77: jnz     loc_11D139
 * 0000000000089A7D: xor     eax, eax
 * 0000000000089A7F: inc     eax
 * 0000000000089A80: pop     ebp
 * 0000000000089A81: retn    20h ; ' '
 * 0000000000089A84: push    [ebp+arg_1C]; unsigned __int16 *
 * 0000000000089A87: push    [ebp+arg_18]; struct EFSOBJ *
 * 0000000000089A8A: push    [ebp+arg_14]; unsigned int
 * 0000000000089A8D: push    [ebp+arg_10]; struct FHOBJ *
 * 0000000000089A90: call    ?bScanTheList@@YGHPAVFHOBJ@@KPAVEFSOBJ@@KPAU_EFFILTER_INFO@@PBG@Z; bScanTheList(FHOBJ *,ulong,EFSOBJ *,ulong,_EFFILTER_INFO *,ushort const *)
 * 0000000000089A95: test    eax, eax
 * 0000000000089A97: jnz     short loc_89A53
 * 0000000000089A99: xor     eax, eax
 * 0000000000089A9B: jmp     short loc_89A80
 * 000000000011D139: push    [ebp+arg_1C]; unsigned __int16 *
 * 000000000011D13C: mov     edx, [ebp+arg_C]
 * 000000000011D13F: push    [ebp+arg_18]; struct EFSOBJ *
 * 000000000011D142: push    [ebp+arg_14]; unsigned int
 * 000000000011D145: push    [ebp+arg_10]; struct FHOBJ *
 * 000000000011D148: call    ?bScanTheList@@YGHPAVFHOBJ@@KPAVEFSOBJ@@KPAU_EFFILTER_INFO@@PBG@Z; bScanTheList(FHOBJ *,ulong,EFSOBJ *,ulong,_EFFILTER_INFO *,ushort const *)
 * 000000000011D14D: test    eax, eax
 * 000000000011D14F: jnz     loc_89A7D
 * 000000000011D155: jmp     loc_89A99
 */
