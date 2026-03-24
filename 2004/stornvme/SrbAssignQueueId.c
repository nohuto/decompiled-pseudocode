/*
 * XREFs of SrbAssignQueueId @ 0x1C0004370
 * Callers:
 *     QueryProtocolInfoLogPageData @ 0x1C000143C (QueryProtocolInfoLogPageData.c)
 *     FirmwareGetInfo @ 0x1C00017FC (FirmwareGetInfo.c)
 *     ScsiUnmapRequest @ 0x1C0001C54 (ScsiUnmapRequest.c)
 *     ScsiModeSenseRequest @ 0x1C0001E0C (ScsiModeSenseRequest.c)
 *     NVMeModeSenseGetLogPageHealthInfoCompletion @ 0x1C00036A0 (NVMeModeSenseGetLogPageHealthInfoCompletion.c)
 *     ScsiSyncCacheRequest @ 0x1C00042B8 (ScsiSyncCacheRequest.c)
 *     FirmwareActivate @ 0x1C0010184 (FirmwareActivate.c)
 *     FirmwareDownload @ 0x1C0010398 (FirmwareDownload.c)
 *     IoctlQueryEnduranceInformation @ 0x1C0011A58 (IoctlQueryEnduranceInformation.c)
 *     IoctlQueryTemperatureInfoProcess @ 0x1C0011E40 (IoctlQueryTemperatureInfoProcess.c)
 *     IoctlSetTemperatureThresholdProcess @ 0x1C001202C (IoctlSetTemperatureThresholdProcess.c)
 *     LogSenseInformationalExceptions @ 0x1C0012818 (LogSenseInformationalExceptions.c)
 *     LogSenseTemperature @ 0x1C0012A00 (LogSenseTemperature.c)
 *     NVMeGetDeviceTelemetryData @ 0x1C001310C (NVMeGetDeviceTelemetryData.c)
 *     NVMeGetDeviceTelemetryHeader @ 0x1C00132FC (NVMeGetDeviceTelemetryHeader.c)
 *     NVMeSetFeaturesCachePhase1Completion @ 0x1C0013D00 (NVMeSetFeaturesCachePhase1Completion.c)
 *     NVMeWriteBufferFirmwareActivate @ 0x1C0014304 (NVMeWriteBufferFirmwareActivate.c)
 *     NVMeWriteBufferFirmwareDownload @ 0x1C00145EC (NVMeWriteBufferFirmwareDownload.c)
 *     ProtocolCommandToNVMe @ 0x1C0014A24 (ProtocolCommandToNVMe.c)
 *     QueryProtocolInfoFeatureData @ 0x1C0014DB4 (QueryProtocolInfoFeatureData.c)
 *     QueryProtocolInfoIdentifyData @ 0x1C001501C (QueryProtocolInfoIdentifyData.c)
 *     QueryTemperatureInfoHealthLogCompletion @ 0x1C0015180 (QueryTemperatureInfoHealthLogCompletion.c)
 *     QueryTemperatureThresholdCompletion @ 0x1C0015340 (QueryTemperatureThresholdCompletion.c)
 *     ScsiModeSelectRequest @ 0x1C0015548 (ScsiModeSelectRequest.c)
 *     ScsiSanitizeRequest @ 0x1C00157F4 (ScsiSanitizeRequest.c)
 *     ScsiSecurityProtocolInRequest @ 0x1C001598C (ScsiSecurityProtocolInRequest.c)
 *     ScsiSecurityProtocolOutRequest @ 0x1C0015A94 (ScsiSecurityProtocolOutRequest.c)
 *     ScsiStartStopUnitRequest @ 0x1C0015B9C (ScsiStartStopUnitRequest.c)
 *     SetProtocolInfoFeatureData @ 0x1C0015DEC (SetProtocolInfoFeatureData.c)
 *     NVMeDirectiveIdentifyEnableDirective @ 0x1C0016FAC (NVMeDirectiveIdentifyEnableDirective.c)
 *     NVMeDirectiveIdentifyReturnParameters @ 0x1C0017094 (NVMeDirectiveIdentifyReturnParameters.c)
 *     NVMeDirectiveStreamsAllocateResources @ 0x1C0017224 (NVMeDirectiveStreamsAllocateResources.c)
 *     NVMeDirectiveStreamsGetStatus @ 0x1C0017318 (NVMeDirectiveStreamsGetStatus.c)
 *     NVMeDirectiveStreamsReleaseId @ 0x1C00174F4 (NVMeDirectiveStreamsReleaseId.c)
 *     NVMeDirectiveStreamsReturnParameters @ 0x1C00175E8 (NVMeDirectiveStreamsReturnParameters.c)
 *     NVMeSetHostMemoryBuffer @ 0x1C001A560 (NVMeSetHostMemoryBuffer.c)
 *     NVMeSyncHostTime @ 0x1C001B0A8 (NVMeSyncHostTime.c)
 * Callees:
 *     GetSrbScsiData @ 0x1C00034C8 (GetSrbScsiData.c)
 *     GetSrbExtension @ 0x1C00044B4 (GetSrbExtension.c)
 *     __security_check_cookie @ 0x1C00050E0 (__security_check_cookie.c)
 */

/*
 * Hex-Rays decompilation failed for SrbAssignQueueId @ 0x1C0004370
 * Reason: Hex-Rays returned no pseudocode for 0x1C0004370
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0004370: mov     [rsp-28h+arg_10], rbx
 * 00000001C0004375: push    rbp
 * 00000001C0004376: push    rsi
 * 00000001C0004377: push    rdi
 * 00000001C0004378: push    r13
 * 00000001C000437A: push    r14
 * 00000001C000437C: mov     rbp, rsp
 * 00000001C000437F: sub     rsp, 60h
 * 00000001C0004383: mov     rax, cs:__security_cookie
 * 00000001C000438A: xor     rax, rsp
 * 00000001C000438D: mov     [rbp+var_10], rax
 * 00000001C0004391: mov     rbx, rcx
 * 00000001C0004394: mov     rdi, rdx
 * 00000001C0004397: mov     rcx, rdx
 * 00000001C000439A: call    GetSrbExtension
 * 00000001C000439F: mov     r13d, 1
 * 00000001C00043A5: mov     rsi, rax
 * 00000001C00043A8: test    [rax+109Dh], r13b
 * 00000001C00043AF: jnz     loc_1C00044A4
 * 00000001C00043B5: cmp     byte ptr [rbx+10h], 0
 * 00000001C00043B9: jnz     loc_1C000882E
 * 00000001C00043BF: and     [rbp+var_30], 0
 * 00000001C00043C3: lea     r9, [rbp+var_28]
 * 00000001C00043C7: and     [rbp+var_20], 0
 * 00000001C00043CC: lea     ecx, [r13+0Eh]
 * 00000001C00043D0: and     [rbp+var_18], 0
 * 00000001C00043D4: mov     r8, rdx
 * 00000001C00043D7: mov     rdx, rbx
 * 00000001C00043DA: mov     [rbp+var_24], 14h
 * 00000001C00043E1: mov     [rbp+var_28], 2
 * 00000001C00043E8: call    cs:__imp_StorPortExtendedFunction
 * 00000001C00043EF: nop     dword ptr [rax+rax+00h]
 * 00000001C00043F4: movzx   r14d, word ptr [rbp+var_20]
 * 00000001C00043F9: mov     eax, 0FFFFh
 * 00000001C00043FE: cmp     word ptr [rbp+var_18], ax
 * 00000001C0004402: jz      loc_1C000883E
 * 00000001C0004408: lea     r9, [rbp+var_30]
 * 00000001C000440C: mov     rdx, rbx
 * 00000001C000440F: lea     r8, [rbp+var_18]
 * 00000001C0004413: mov     ecx, 38h ; '8'
 * 00000001C0004418: call    cs:__imp_StorPortExtendedFunction
 * 00000001C000441F: nop     dword ptr [rax+rax+00h]
 * 00000001C0004424: movzx   ecx, word ptr [rbx+0D2h]
 * 00000001C000442B: mov     r9d, [rbp+var_30]
 * 00000001C000442F: cmp     r9d, ecx
 * 00000001C0004432: jnb     loc_1C0008866
 * 00000001C0004438: mov     eax, r9d
 * 00000001C000443B: lea     rcx, [rax+rax*2]
 * 00000001C000443F: mov     rax, [rbx+0F0h]
 * 00000001C0004446: add     rcx, rcx
 * 00000001C0004449: cmp     qword ptr [rax+rcx*8+28h], 0
 * 00000001C000444F: jz      loc_1C0008878
 * 00000001C0004455: cmp     byte ptr [rbx+0ED8h], 0
 * 00000001C000445C: jnz     loc_1C00088D1
 * 00000001C0004462: mov     eax, r9d
 * 00000001C0004465: lea     rcx, [rax+rax*2]
 * 00000001C0004469: mov     rax, [rbx+0F0h]
 * 00000001C0004470: add     rcx, rcx
 * 00000001C0004473: mov     rcx, [rax+rcx*8+28h]
 * 00000001C0004478: movzx   ecx, word ptr [rcx+28h]
 * 00000001C000447C: mov     [rsi+1094h], cx
 * 00000001C0004483: mov     rcx, [rbp+var_10]
 * 00000001C0004487: xor     rcx, rsp; StackCookie
 * 00000001C000448A: call    __security_check_cookie
 * 00000001C000448F: mov     rbx, [rsp+60h+arg_10]
 * 00000001C0004497: add     rsp, 60h
 * 00000001C000449B: pop     r14
 * 00000001C000449D: pop     r13
 * 00000001C000449F: pop     rdi
 * 00000001C00044A0: pop     rsi
 * 00000001C00044A1: pop     rbp
 * 00000001C00044A2: retn
 * 00000001C00044A4: movzx   ecx, word ptr [rbx+148h]
 * 00000001C00044AB: jmp     short loc_1C000447C
 * 00000001C000882E: mov     rax, [rbx+300h]
 * 00000001C0008835: movzx   ecx, word ptr [rax+28h]
 * 00000001C0008839: jmp     loc_1C000447C
 * 00000001C000883E: cmp     byte ptr [rbp+var_18+2], 0FFh
 * 00000001C0008842: jnz     loc_1C0004408
 * 00000001C0008848: lea     r8, [rbp+var_18]
 * 00000001C000884C: mov     rdx, rbx
 * 00000001C000884F: mov     ecx, 11h
 * 00000001C0008854: call    cs:__imp_StorPortExtendedFunction
 * 00000001C000885B: nop     dword ptr [rax+rax+00h]
 * 00000001C0008860: nop
 * 00000001C0008861: jmp     loc_1C0004408
 * 00000001C0008866: mov     eax, r9d
 * 00000001C0008869: xor     edx, edx
 * 00000001C000886B: div     ecx
 * 00000001C000886D: mov     r9d, edx
 * 00000001C0008870: mov     [rbp+var_30], edx
 * 00000001C0008873: jmp     loc_1C0004438
 * 00000001C0008878: mov     rax, [rbx+100h]
 * 00000001C000887F: lea     rcx, [r14+r14*2]
 * 00000001C0008883: mov     r8, [rax+rcx*8+10h]
 * 00000001C0008888: mov     eax, r13d
 * 00000001C000888B: lock xadd [r8+0B8h], eax
 * 00000001C0008894: dec     eax
 * 00000001C0008896: xor     edx, edx
 * 00000001C0008898: add     eax, r13d
 * 00000001C000889B: div     dword ptr [r8+0B4h]
 * 00000001C00088A2: mov     rax, [r8+0C0h]
 * 00000001C00088A9: mov     rdx, [rax+rdx*8]
 * 00000001C00088AD: mov     eax, r9d
 * 00000001C00088B0: lea     rcx, [rax+rax*2]
 * 00000001C00088B4: mov     rax, [rbx+0F0h]
 * 00000001C00088BB: add     rcx, rcx
 * 00000001C00088BE: mov     [rax+rcx*8+28h], rdx
 * 00000001C00088C3: add     [rdx+34h], r13w
 * 00000001C00088C8: mov     r9d, [rbp+var_30]
 * 00000001C00088CC: jmp     loc_1C0004455
 * 00000001C00088D1: and     [rsp+60h+var_40], 0
 * 00000001C00088D7: lea     rdx, [rbp+var_2C]
 * 00000001C00088DB: xor     r9d, r9d
 * 00000001C00088DE: xor     r8d, r8d
 * 00000001C00088E1: mov     rcx, rdi
 * 00000001C00088E4: call    GetSrbScsiData
 * 00000001C00088E9: movzx   ecx, byte ptr [rax]
 * 00000001C00088EC: sub     ecx, 28h ; '('
 * 00000001C00088EF: jz      short loc_1C0008908
 * 00000001C00088F1: sub     ecx, 2
 * 00000001C00088F4: jz      short loc_1C0008908
 * 00000001C00088F6: sub     ecx, 5Eh ; '^'
 * 00000001C00088F9: jz      short loc_1C0008908
 * 00000001C00088FB: cmp     ecx, 2
 * 00000001C00088FE: jz      short loc_1C0008908
 * 00000001C0008900: mov     eax, [rbp+var_30]
 * 00000001C0008903: jmp     loc_1C0004465
 * 00000001C0008908: mov     r8b, [rdi+2]
 * 00000001C000890C: mov     r10d, 80h
 * 00000001C0008912: cmp     r8b, 28h ; '('
 * 00000001C0008916: jnz     short loc_1C0008947
 * 00000001C0008918: mov     r9d, [rdi+38h]
 * 00000001C000891C: test    r9d, r9d
 * 00000001C000891F: jz      short loc_1C0008947
 * 00000001C0008921: xor     dl, dl
 * 00000001C0008923: movzx   eax, dl
 * 00000001C0008926: mov     ecx, [rdi+rax*4+78h]
 * 00000001C000892A: cmp     ecx, r10d
 * 00000001C000892D: jb      short loc_1C000893C
 * 00000001C000892F: cmp     ecx, [rdi+10h]
 * 00000001C0008932: jnb     short loc_1C000893C
 * 00000001C0008934: add     rcx, rdi
 * 00000001C0008937: cmp     [rcx], r10d
 * 00000001C000893A: jz      short loc_1C0008954
 * 00000001C000893C: add     dl, r13b
 * 00000001C000893F: movzx   eax, dl
 * 00000001C0008942: cmp     eax, r9d
 * 00000001C0008945: jb      short loc_1C0008923
 * 00000001C0008947: xor     ecx, ecx
 * 00000001C0008949: cmp     r8b, 28h ; '('
 * 00000001C000894D: jz      short loc_1C0008954
 * 00000001C000894F: lea     edx, [rcx+10h]
 * 00000001C0008952: jmp     short loc_1C0008959
 * 00000001C0008954: mov     edx, 3Ch ; '<'
 * 00000001C0008959: mov     r8d, [rbx+0EE4h]
 * 00000001C0008960: test    r10b, r8b
 * 00000001C0008963: jnz     short loc_1C000899F
 * 00000001C0008965: mov     eax, [rbx+0EE0h]
 * 00000001C000896B: cmp     [rdi+rdx], eax
 * 00000001C000896E: ja      short loc_1C000897C
 * 00000001C0008970: test    rcx, rcx
 * 00000001C0008973: jz      short loc_1C000897C
 * 00000001C0008975: mov     eax, [rcx+8]
 * 00000001C0008978: test    al, 2
 * 00000001C000897A: jz      short loc_1C000899F
 * 00000001C000897C: movzx   r8d, word ptr [rbx+11Ch]
 * 00000001C0008984: xor     edx, edx
 * 00000001C0008986: movzx   eax, word ptr [rbx+11Ah]
 * 00000001C000898D: sub     ax, r8w
 * 00000001C0008991: movzx   ecx, ax
 * 00000001C0008994: mov     eax, [rbp+var_30]
 * 00000001C0008997: div     ecx
 * 00000001C0008999: add     dx, r8w
 * 00000001C000899D: jmp     short loc_1C00089BC
 * 00000001C000899F: mov     eax, [rbp+var_30]
 * 00000001C00089A2: xor     edx, edx
 * 00000001C00089A4: test    r8b, 40h
 * 00000001C00089A8: jz      short loc_1C00089B3
 * 00000001C00089AA: movzx   ecx, word ptr [rbx+11Ah]
 * 00000001C00089B1: jmp     short loc_1C00089BA
 * 00000001C00089B3: movzx   ecx, word ptr [rbx+11Ch]
 * 00000001C00089BA: div     ecx
 * 00000001C00089BC: movzx   eax, dx
 * 00000001C00089BF: imul    rcx, rax, 88h
 * 00000001C00089C6: mov     rax, [rbx+300h]
 * 00000001C00089CD: movzx   ecx, word ptr [rcx+rax+28h]
 * 00000001C00089D2: jmp     loc_1C000447C
 */
