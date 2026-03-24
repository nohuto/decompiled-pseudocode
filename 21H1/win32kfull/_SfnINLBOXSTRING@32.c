/*
 * XREFs of _SfnINLBOXSTRING@32 @ 0x1A0032
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
 * Hex-Rays decompilation failed for _SfnINLBOXSTRING@32 @ 0x1A0032
 * Reason: Hex-Rays returned no pseudocode for 0x1A0032
 * Fallback: raw IDA disassembly follows.
 *
 * 00000000001A0032: mov     edi, edi
 * 00000000001A0034: push    ebp; unsigned int
 * 00000000001A0035: mov     ebp, esp
 * 00000000001A0037: push    [ebp+arg_1C]; int (__stdcall *)()
 * 00000000001A003A: mov     edx, [ebp+arg_0]
 * 00000000001A003D: mov     ecx, 2A6h
 * 00000000001A0042: push    [ebp+arg_18]; unsigned int
 * 00000000001A0045: push    [ebp+arg_14]; int
 * 00000000001A0048: push    [ebp+arg_10]; unsigned int
 * 00000000001A004B: push    [ebp+arg_C]; unsigned int
 * 00000000001A004E: push    [ebp+arg_8]; struct tagWND *
 * 00000000001A0051: push    [ebp+arg_4]; int
 * 00000000001A0054: call    ?_SfnINBOXSTRING@@YGJJPAUtagWND@@IIJKP6GHXZKPAUtagSMS@@@Z; _SfnINBOXSTRING(long,tagWND *,uint,uint,long,ulong,int (*)(void),ulong,tagSMS *)
 * 00000000001A0059: pop     ebp
 * 00000000001A005A: retn    20h ; ' '
 */
