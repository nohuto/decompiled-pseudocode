/*
 * XREFs of SrbAssignQueueId @ 0x1C0004370
 * Callers:
 *     QueryProtocolInfoLogPageData @ 0x1C000143C (QueryProtocolInfoLogPageData.c)
 *     FirmwareGetInfo @ 0x1C00017FC (FirmwareGetInfo.c)
 *     ScsiUnmapRequest @ 0x1C0001C54 (ScsiUnmapRequest.c)
 *     ScsiModeSenseRequest @ 0x1C0001E0C (ScsiModeSenseRequest.c)
 *     NVMeModeSenseGetLogPageHealthInfoCompletion @ 0x1C00036A0 (NVMeModeSenseGetLogPageHealthInfoCompletion.c)
 *     ScsiSyncCacheRequest @ 0x1C00042B8 (ScsiSyncCacheRequest.c)
 *     FirmwareActivate @ 0x1C0010104 (FirmwareActivate.c)
 *     FirmwareDownload @ 0x1C0010318 (FirmwareDownload.c)
 *     IoctlQueryEnduranceInformation @ 0x1C00119D8 (IoctlQueryEnduranceInformation.c)
 *     IoctlQueryTemperatureInfoProcess @ 0x1C0011DC0 (IoctlQueryTemperatureInfoProcess.c)
 *     IoctlSetTemperatureThresholdProcess @ 0x1C0011FAC (IoctlSetTemperatureThresholdProcess.c)
 *     LogSenseInformationalExceptions @ 0x1C0012798 (LogSenseInformationalExceptions.c)
 *     LogSenseTemperature @ 0x1C0012980 (LogSenseTemperature.c)
 *     NVMeGetDeviceTelemetryData @ 0x1C001308C (NVMeGetDeviceTelemetryData.c)
 *     NVMeGetDeviceTelemetryHeader @ 0x1C001327C (NVMeGetDeviceTelemetryHeader.c)
 *     NVMeSetFeaturesCachePhase1Completion @ 0x1C0013C80 (NVMeSetFeaturesCachePhase1Completion.c)
 *     NVMeWriteBufferFirmwareActivate @ 0x1C0014280 (NVMeWriteBufferFirmwareActivate.c)
 *     NVMeWriteBufferFirmwareDownload @ 0x1C001456C (NVMeWriteBufferFirmwareDownload.c)
 *     ProtocolCommandToNVMe @ 0x1C00149A4 (ProtocolCommandToNVMe.c)
 *     QueryProtocolInfoFeatureData @ 0x1C0014D34 (QueryProtocolInfoFeatureData.c)
 *     QueryProtocolInfoIdentifyData @ 0x1C0014F9C (QueryProtocolInfoIdentifyData.c)
 *     QueryTemperatureInfoHealthLogCompletion @ 0x1C0015100 (QueryTemperatureInfoHealthLogCompletion.c)
 *     QueryTemperatureThresholdCompletion @ 0x1C00152C0 (QueryTemperatureThresholdCompletion.c)
 *     ScsiModeSelectRequest @ 0x1C00154C8 (ScsiModeSelectRequest.c)
 *     ScsiSanitizeRequest @ 0x1C0015774 (ScsiSanitizeRequest.c)
 *     ScsiSecurityProtocolInRequest @ 0x1C001590C (ScsiSecurityProtocolInRequest.c)
 *     ScsiSecurityProtocolOutRequest @ 0x1C0015A14 (ScsiSecurityProtocolOutRequest.c)
 *     ScsiStartStopUnitRequest @ 0x1C0015B1C (ScsiStartStopUnitRequest.c)
 *     SetProtocolInfoFeatureData @ 0x1C0015D6C (SetProtocolInfoFeatureData.c)
 *     NVMeDirectiveIdentifyEnableDirective @ 0x1C0016F2C (NVMeDirectiveIdentifyEnableDirective.c)
 *     NVMeDirectiveIdentifyReturnParameters @ 0x1C0017014 (NVMeDirectiveIdentifyReturnParameters.c)
 *     NVMeDirectiveStreamsAllocateResources @ 0x1C00171A4 (NVMeDirectiveStreamsAllocateResources.c)
 *     NVMeDirectiveStreamsGetStatus @ 0x1C0017298 (NVMeDirectiveStreamsGetStatus.c)
 *     NVMeDirectiveStreamsReleaseId @ 0x1C0017474 (NVMeDirectiveStreamsReleaseId.c)
 *     NVMeDirectiveStreamsReturnParameters @ 0x1C0017568 (NVMeDirectiveStreamsReturnParameters.c)
 *     NVMeSetHostMemoryBuffer @ 0x1C001A4C0 (NVMeSetHostMemoryBuffer.c)
 *     NVMeSyncHostTime @ 0x1C001AFD8 (NVMeSyncHostTime.c)
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
 * 00000001C00043B9: jnz     loc_1C00087EE
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
 * 00000001C0004402: jz      loc_1C00087FE
 * 00000001C0004408: lea     r9, [rbp+var_30]
 * 00000001C000440C: mov     rdx, rbx
 * 00000001C000440F: lea     r8, [rbp+var_18]
 * 00000001C0004413: mov     ecx, 38h ; '8'
 * 00000001C0004418: call    cs:__imp_StorPortExtendedFunction
 * 00000001C000441F: nop     dword ptr [rax+rax+00h]
 * 00000001C0004424: movzx   ecx, word ptr [rbx+0D2h]
 * 00000001C000442B: mov     r9d, [rbp+var_30]
 * 00000001C000442F: cmp     r9d, ecx
 * 00000001C0004432: jnb     loc_1C0008826
 * 00000001C0004438: mov     eax, r9d
 * 00000001C000443B: lea     rcx, [rax+rax*2]
 * 00000001C000443F: mov     rax, [rbx+0F0h]
 * 00000001C0004446: add     rcx, rcx
 * 00000001C0004449: cmp     qword ptr [rax+rcx*8+28h], 0
 * 00000001C000444F: jz      loc_1C0008838
 * 00000001C0004455: cmp     byte ptr [rbx+0ED8h], 0
 * 00000001C000445C: jnz     loc_1C0008891
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
 * 00000001C00087EE: mov     rax, [rbx+300h]
 * 00000001C00087F5: movzx   ecx, word ptr [rax+28h]
 * 00000001C00087F9: jmp     loc_1C000447C
 * 00000001C00087FE: cmp     byte ptr [rbp+var_18+2], 0FFh
 * 00000001C0008802: jnz     loc_1C0004408
 * 00000001C0008808: lea     r8, [rbp+var_18]
 * 00000001C000880C: mov     rdx, rbx
 * 00000001C000880F: mov     ecx, 11h
 * 00000001C0008814: call    cs:__imp_StorPortExtendedFunction
 * 00000001C000881B: nop     dword ptr [rax+rax+00h]
 * 00000001C0008820: nop
 * 00000001C0008821: jmp     loc_1C0004408
 * 00000001C0008826: mov     eax, r9d
 * 00000001C0008829: xor     edx, edx
 * 00000001C000882B: div     ecx
 * 00000001C000882D: mov     r9d, edx
 * 00000001C0008830: mov     [rbp+var_30], edx
 * 00000001C0008833: jmp     loc_1C0004438
 * 00000001C0008838: mov     rax, [rbx+100h]
 * 00000001C000883F: lea     rcx, [r14+r14*2]
 * 00000001C0008843: mov     r8, [rax+rcx*8+10h]
 * 00000001C0008848: mov     eax, r13d
 * 00000001C000884B: lock xadd [r8+0B8h], eax
 * 00000001C0008854: dec     eax
 * 00000001C0008856: xor     edx, edx
 * 00000001C0008858: add     eax, r13d
 * 00000001C000885B: div     dword ptr [r8+0B4h]
 * 00000001C0008862: mov     rax, [r8+0C0h]
 * 00000001C0008869: mov     rdx, [rax+rdx*8]
 * 00000001C000886D: mov     eax, r9d
 * 00000001C0008870: lea     rcx, [rax+rax*2]
 * 00000001C0008874: mov     rax, [rbx+0F0h]
 * 00000001C000887B: add     rcx, rcx
 * 00000001C000887E: mov     [rax+rcx*8+28h], rdx
 * 00000001C0008883: add     [rdx+34h], r13w
 * 00000001C0008888: mov     r9d, [rbp+var_30]
 * 00000001C000888C: jmp     loc_1C0004455
 * 00000001C0008891: and     [rsp+60h+var_40], 0
 * 00000001C0008897: lea     rdx, [rbp+var_2C]
 * 00000001C000889B: xor     r9d, r9d
 * 00000001C000889E: xor     r8d, r8d
 * 00000001C00088A1: mov     rcx, rdi
 * 00000001C00088A4: call    GetSrbScsiData
 * 00000001C00088A9: movzx   ecx, byte ptr [rax]
 * 00000001C00088AC: sub     ecx, 28h ; '('
 * 00000001C00088AF: jz      short loc_1C00088C8
 * 00000001C00088B1: sub     ecx, 2
 * 00000001C00088B4: jz      short loc_1C00088C8
 * 00000001C00088B6: sub     ecx, 5Eh ; '^'
 * 00000001C00088B9: jz      short loc_1C00088C8
 * 00000001C00088BB: cmp     ecx, 2
 * 00000001C00088BE: jz      short loc_1C00088C8
 * 00000001C00088C0: mov     eax, [rbp+var_30]
 * 00000001C00088C3: jmp     loc_1C0004465
 * 00000001C00088C8: mov     r8b, [rdi+2]
 * 00000001C00088CC: mov     r10d, 80h
 * 00000001C00088D2: cmp     r8b, 28h ; '('
 * 00000001C00088D6: jnz     short loc_1C0008907
 * 00000001C00088D8: mov     r9d, [rdi+38h]
 * 00000001C00088DC: test    r9d, r9d
 * 00000001C00088DF: jz      short loc_1C0008907
 * 00000001C00088E1: xor     dl, dl
 * 00000001C00088E3: movzx   eax, dl
 * 00000001C00088E6: mov     ecx, [rdi+rax*4+78h]
 * 00000001C00088EA: cmp     ecx, r10d
 * 00000001C00088ED: jb      short loc_1C00088FC
 * 00000001C00088EF: cmp     ecx, [rdi+10h]
 * 00000001C00088F2: jnb     short loc_1C00088FC
 * 00000001C00088F4: add     rcx, rdi
 * 00000001C00088F7: cmp     [rcx], r10d
 * 00000001C00088FA: jz      short loc_1C0008914
 * 00000001C00088FC: add     dl, r13b
 * 00000001C00088FF: movzx   eax, dl
 * 00000001C0008902: cmp     eax, r9d
 * 00000001C0008905: jb      short loc_1C00088E3
 * 00000001C0008907: xor     ecx, ecx
 * 00000001C0008909: cmp     r8b, 28h ; '('
 * 00000001C000890D: jz      short loc_1C0008914
 * 00000001C000890F: lea     edx, [rcx+10h]
 * 00000001C0008912: jmp     short loc_1C0008919
 * 00000001C0008914: mov     edx, 3Ch ; '<'
 * 00000001C0008919: mov     r8d, [rbx+0EE4h]
 * 00000001C0008920: test    r10b, r8b
 * 00000001C0008923: jnz     short loc_1C000895F
 * 00000001C0008925: mov     eax, [rbx+0EE0h]
 * 00000001C000892B: cmp     [rdi+rdx], eax
 * 00000001C000892E: ja      short loc_1C000893C
 * 00000001C0008930: test    rcx, rcx
 * 00000001C0008933: jz      short loc_1C000893C
 * 00000001C0008935: mov     eax, [rcx+8]
 * 00000001C0008938: test    al, 2
 * 00000001C000893A: jz      short loc_1C000895F
 * 00000001C000893C: movzx   r8d, word ptr [rbx+11Ch]
 * 00000001C0008944: xor     edx, edx
 * 00000001C0008946: movzx   eax, word ptr [rbx+11Ah]
 * 00000001C000894D: sub     ax, r8w
 * 00000001C0008951: movzx   ecx, ax
 * 00000001C0008954: mov     eax, [rbp+var_30]
 * 00000001C0008957: div     ecx
 * 00000001C0008959: add     dx, r8w
 * 00000001C000895D: jmp     short loc_1C000897C
 * 00000001C000895F: mov     eax, [rbp+var_30]
 * 00000001C0008962: xor     edx, edx
 * 00000001C0008964: test    r8b, 40h
 * 00000001C0008968: jz      short loc_1C0008973
 * 00000001C000896A: movzx   ecx, word ptr [rbx+11Ah]
 * 00000001C0008971: jmp     short loc_1C000897A
 * 00000001C0008973: movzx   ecx, word ptr [rbx+11Ch]
 * 00000001C000897A: div     ecx
 * 00000001C000897C: movzx   eax, dx
 * 00000001C000897F: imul    rcx, rax, 88h
 * 00000001C0008986: mov     rax, [rbx+300h]
 * 00000001C000898D: movzx   ecx, word ptr [rcx+rax+28h]
 * 00000001C0008992: jmp     loc_1C000447C
 */
