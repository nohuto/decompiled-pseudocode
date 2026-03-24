/*
 * XREFs of ?vDestructorNULL@DEVLOCKOBJ@@QAEXXZ @ 0x1D87A2
 * Callers:
 *     _GreDrawStream@12 @ 0x5C150 (_GreDrawStream@12.c)
 *     ??1DEVLOCKOBJ_WNDOBJ@@QAE@XZ @ 0xF6AB4 (--1DEVLOCKOBJ_WNDOBJ@@QAE@XZ.c)
 *     _NtGdiSwapBuffers@4 @ 0x222B79 (_NtGdiSwapBuffers@4.c)
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     ?bDisposeTrgDcoWorker@DEVLOCKOBJ@@QAEHXZ @ 0x5A8D8 (-bDisposeTrgDcoWorker@DEVLOCKOBJ@@QAEHXZ.c)
 *     ?UntrapAppContainerRenderingWorker@@YGXAAPAUHDC__@@AAPAUHSURF__@@1PBK@Z @ 0x5DF78 (-UntrapAppContainerRenderingWorker@@YGXAAPAUHDC__@@AAPAUHSURF__@@1PBK@Z.c)
 */

/*
 * Hex-Rays decompilation failed for ?vDestructorNULL@DEVLOCKOBJ@@QAEXXZ @ 0x1D87A2
 * Reason: Hex-Rays returned no pseudocode for 0x1D87A2
 * Fallback: raw IDA disassembly follows.
 *
 * 00000000001D87A2: mov     edi, edi
 * 00000000001D87A4: push    esi; HSURF *
 * 00000000001D87A5: mov     esi, ecx
 * 00000000001D87A7: call    ?bDisposeTrgDcoWorker@DEVLOCKOBJ@@QAEHXZ; DEVLOCKOBJ::bDisposeTrgDcoWorker(void)
 * 00000000001D87AC: mov     eax, [esi+0Ch]
 * 00000000001D87AF: test    eax, 1000h
 * 00000000001D87B4: jz      short loc_1D87E4
 * 00000000001D87B6: call    ds:__imp_@GreDecLockCount@0; GreDecLockCount()
 * 00000000001D87BC: and     dword ptr [esi+0Ch], 0FFFFEFFFh
 * 00000000001D87C3: call    ds:__imp__KeGetCurrentThread@0; KeGetCurrentThread()
 * 00000000001D87C9: mov     ecx, eax
 * 00000000001D87CB: call    _W32GetThreadWin32Thread@4; W32GetThreadWin32Thread(x)
 * 00000000001D87D0: test    eax, eax
 * 00000000001D87D2: jz      short loc_1D87F8
 * 00000000001D87D4: and     dword ptr [eax+0B0h], 0
 * 00000000001D87DB: and     dword ptr [eax+0ACh], 0
 * 00000000001D87E2: jmp     short loc_1D87F8
 * 00000000001D87E4: test    eax, 800000h
 * 00000000001D87E9: jz      short loc_1D87F8
 * 00000000001D87EB: call    ds:__imp_@GreDecLockCount@0; GreDecLockCount()
 * 00000000001D87F1: and     dword ptr [esi+0Ch], 0FF7FFFFFh
 * 00000000001D87F8: mov     eax, [esi]
 * 00000000001D87FA: test    eax, eax
 * 00000000001D87FC: jz      short loc_1D8819
 * 00000000001D87FE: push    eax
 * 00000000001D87FF: push    offset aHsemtrg; "hsemTrg"
 * 00000000001D8804: call    ds:__imp__EtwTraceGreLockReleaseSemaphore@8; EtwTraceGreLockReleaseSemaphore(x,x)
 * 00000000001D880A: mov     ecx, [esi]
 * 00000000001D880C: call    ds:__imp_@GreReleaseSemaphoreInternal@4; GreReleaseSemaphoreInternal(x)
 * 00000000001D8812: and     dword ptr [esi], 0
 * 00000000001D8815: and     dword ptr [esi+8], 0
 * 00000000001D8819: mov     eax, [esi+0Ch]
 * 00000000001D881C: test    al, 8
 * 00000000001D881E: jz      short loc_1D8826
 * 00000000001D8820: and     eax, 0FFFFFFF7h
 * 00000000001D8823: mov     [esi+0Ch], eax
 * 00000000001D8826: mov     eax, [esi+4]
 * 00000000001D8829: test    eax, eax
 * 00000000001D882B: jz      short loc_1D8846
 * 00000000001D882D: push    eax
 * 00000000001D882E: push    offset aHsemdmc; "hsemDMC"
 * 00000000001D8833: call    ds:__imp__EtwTraceGreLockReleaseSemaphore@8; EtwTraceGreLockReleaseSemaphore(x,x)
 * 00000000001D8839: mov     ecx, [esi+4]
 * 00000000001D883C: call    ds:__imp_@GreReleaseSemaphoreInternal@4; GreReleaseSemaphoreInternal(x)
 * 00000000001D8842: and     dword ptr [esi+4], 0
 * 00000000001D8846: lea     eax, [esi+10h]
 * 00000000001D8849: push    eax; HSURF *
 * 00000000001D884A: lea     eax, [esi+24h]
 * 00000000001D884D: push    eax; HDC *
 * 00000000001D884E: lea     edx, [esi+28h]
 * 00000000001D8851: lea     ecx, [esi+2Ch]
 * 00000000001D8854: call    ?UntrapAppContainerRenderingWorker@@YGXAAPAUHDC__@@AAPAUHSURF__@@1PBK@Z; UntrapAppContainerRenderingWorker(HDC__ * &,HSURF__ * &,HSURF__ * &,ulong const *)
 * 00000000001D8859: pop     esi
 * 00000000001D885A: retn
 */
