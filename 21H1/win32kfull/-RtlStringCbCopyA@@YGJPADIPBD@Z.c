/*
 * XREFs of ?RtlStringCbCopyA@@YGJPADIPBD@Z @ 0x1CFE94
 * Callers:
 *     ?DdcciGetCapabilitiesString@CPhysicalMonitorHandle@@QAEJPADK@Z @ 0x1CF151 (-DdcciGetCapabilitiesString@CPhysicalMonitorHandle@@QAEJPADK@Z.c)
 *     ?DdcciGetCapabilitiesStringFromMonitor@CPhysicalMonitorHandle@@AAEJXZ @ 0x1CF23A (-DdcciGetCapabilitiesStringFromMonitor@CPhysicalMonitorHandle@@AAEJXZ.c)
 * Callees:
 *     RtlStringCopyWorkerA_0 @ 0x1CFEC7 (RtlStringCopyWorkerA_0.c)
 */

/*
 * Hex-Rays decompilation failed for ?RtlStringCbCopyA@@YGJPADIPBD@Z @ 0x1CFE94
 * Reason: Hex-Rays returned no pseudocode for 0x1CFE94
 * Fallback: raw IDA disassembly follows.
 *
 * 00000000001CFE94: mov     edi, edi
 * 00000000001CFE96: push    ebp; pszSrc
 * 00000000001CFE97: mov     ebp, esp
 * 00000000001CFE99: xor     eax, eax
 * 00000000001CFE9B: test    edx, edx
 * 00000000001CFE9D: jz      short loc_1CFEA7
 * 00000000001CFE9F: cmp     edx, 7FFFFFFFh
 * 00000000001CFEA5: jbe     short loc_1CFEAC
 * 00000000001CFEA7: mov     eax, 0C000000Dh
 * 00000000001CFEAC: test    eax, eax
 * 00000000001CFEAE: js      short loc_1CFEBC
 * 00000000001CFEB0: push    ecx; pcchNewDestLength
 * 00000000001CFEB1: push    [ebp+cchDest]; cchDest
 * 00000000001CFEB4: push    ecx; pszDest
 * 00000000001CFEB5: call    RtlStringCopyWorkerA_0
 * 00000000001CFEBA: jmp     short loc_1CFEC3
 * 00000000001CFEBC: test    edx, edx
 * 00000000001CFEBE: jz      short loc_1CFEC3
 * 00000000001CFEC0: mov     byte ptr [ecx], 0
 * 00000000001CFEC3: pop     ebp
 * 00000000001CFEC4: retn    4
 */
