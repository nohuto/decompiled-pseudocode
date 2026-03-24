/*
 * XREFs of _SfnINCBOXSTRING@32 @ 0x1A0007
 * Callers:
 *     _xxxDefWindowProc@16 @ 0x16650 (_xxxDefWindowProc@16.c)
 *     _xxxReceiveMessage@4 @ 0x415B8 (_xxxReceiveMessage@4.c)
 *     _xxxDispatchMessage@4 @ 0x45B62 (_xxxDispatchMessage@4.c)
 *     _xxxHkCallHook@16 @ 0x6B2E0 (_xxxHkCallHook@16.c)
 *     ?xxxWrapCallWindowProc@@YGJPAUtagWND@@IIJK@Z @ 0xC449A (-xxxWrapCallWindowProc@@YGJPAUtagWND@@IIJK@Z.c)
 * Callees:
 *     ?_SfnINBOXSTRING@@YGJJPAUtagWND@@IIJKP6GHXZKPAUtagSMS@@@Z @ 0x19FF69 (-_SfnINBOXSTRING@@YGJJPAUtagWND@@IIJKP6GHXZKPAUtagSMS@@@Z.c)
 */

/*
 * Hex-Rays decompilation failed for _SfnINCBOXSTRING@32 @ 0x1A0007
 * Reason: Hex-Rays returned no pseudocode for 0x1A0007
 * Fallback: raw IDA disassembly follows.
 *
 * 00000000001A0007: mov     edi, edi
 * 00000000001A0009: push    ebp; unsigned int
 * 00000000001A000A: mov     ebp, esp
 * 00000000001A000C: push    [ebp+arg_1C]; int (__stdcall *)()
 * 00000000001A000F: mov     edx, [ebp+arg_0]
 * 00000000001A0012: mov     ecx, 2A2h
 * 00000000001A0017: push    [ebp+arg_18]; unsigned int
 * 00000000001A001A: push    [ebp+arg_14]; int
 * 00000000001A001D: push    [ebp+arg_10]; unsigned int
 * 00000000001A0020: push    [ebp+arg_C]; unsigned int
 * 00000000001A0023: push    [ebp+arg_8]; struct tagWND *
 * 00000000001A0026: push    [ebp+arg_4]; int
 * 00000000001A0029: call    ?_SfnINBOXSTRING@@YGJJPAUtagWND@@IIJKP6GHXZKPAUtagSMS@@@Z; _SfnINBOXSTRING(long,tagWND *,uint,uint,long,ulong,int (*)(void),ulong,tagSMS *)
 * 00000000001A002E: pop     ebp
 * 00000000001A002F: retn    20h ; ' '
 */
