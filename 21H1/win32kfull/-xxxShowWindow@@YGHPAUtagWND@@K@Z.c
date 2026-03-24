/*
 * XREFs of ?xxxShowWindow@@YGHPAUtagWND@@K@Z @ 0xF5104
 * Callers:
 *     _xxxCreateWindowEx@68 @ 0x2D67C (_xxxCreateWindowEx@68.c)
 *     _xxxRealDefWindowProc@16 @ 0x3D3F2 (_xxxRealDefWindowProc@16.c)
 *     _xxxDestroyWindow@4 @ 0x7239A (_xxxDestroyWindow@4.c)
 *     _NtUserShowWindow@8 @ 0xA1D56 (_NtUserShowWindow@8.c)
 *     _xxxSysCommand@12 @ 0xADD46 (_xxxSysCommand@12.c)
 *     _xxxSetWindowPlacement@8 @ 0xB2DF4 (_xxxSetWindowPlacement@8.c)
 *     _xxxShowScrollBar@12 @ 0xC3116 (_xxxShowScrollBar@12.c)
 *     ?xxxSetParentWorker@@YGPAUtagWND@@PAU1@00H@Z @ 0xC70E0 (-xxxSetParentWorker@@YGPAUtagWND@@PAU1@00H@Z.c)
 *     _xxxSetInternalWindowPos@16 @ 0x16F556 (_xxxSetInternalWindowPos@16.c)
 *     ?xxxHideGhostWindow@@YGXPAUtagWND@@0@Z @ 0x16FE15 (-xxxHideGhostWindow@@YGXPAUtagWND@@0@Z.c)
 *     _xxxbFullscreenSwitch@8 @ 0x181710 (_xxxbFullscreenSwitch@8.c)
 *     _xxxMenuWindowProc@16 @ 0x19AC2A (_xxxMenuWindowProc@16.c)
 * Callees:
 *     ?xxxShowWindowEx@@YGHPAUtagWND@@EK@Z @ 0xF511E (-xxxShowWindowEx@@YGHPAUtagWND@@EK@Z.c)
 */

/*
 * Hex-Rays decompilation failed for ?xxxShowWindow@@YGHPAUtagWND@@K@Z @ 0xF5104
 * Reason: Hex-Rays returned no pseudocode for 0xF5104
 * Fallback: raw IDA disassembly follows.
 *
 * 00000000000F5104: mov     edi, edi
 * 00000000000F5106: push    ebp; unsigned __int8
 * 00000000000F5107: mov     ebp, esp
 * 00000000000F5109: and     esp, 0FFFFFFF8h
 * 00000000000F510C: mov     eax, edx
 * 00000000000F510E: and     eax, 10000h
 * 00000000000F5113: push    eax; struct tagWND *
 * 00000000000F5114: call    ?xxxShowWindowEx@@YGHPAUtagWND@@EK@Z; xxxShowWindowEx(tagWND *,uchar,ulong)
 * 00000000000F5119: mov     esp, ebp
 * 00000000000F511B: pop     ebp
 * 00000000000F511C: retn
 */
