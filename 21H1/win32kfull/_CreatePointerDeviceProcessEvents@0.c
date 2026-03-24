/*
 * XREFs of _CreatePointerDeviceProcessEvents@0 @ 0xD520C
 * Callers:
 *     _RawInputThread@4 @ 0xD57F4 (_RawInputThread@4.c)
 * Callees:
 *     ?CreatePointerDeviceProcessEvent@@YGHKHEPAGPAPAX@Z @ 0xD5244 (-CreatePointerDeviceProcessEvent@@YGHKHEPAGPAPAX@Z.c)
 */

/*
 * Hex-Rays decompilation failed for _CreatePointerDeviceProcessEvents@0 @ 0xD520C
 * Reason: Hex-Rays returned no pseudocode for 0xD520C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000000000D520C: mov     edi, edi
 * 00000000000D520E: push    ecx; unsigned __int16 *
 * 00000000000D520F: push    offset ?ghPntrProcRunningEvent@@3PAXA; unsigned __int8
 * 00000000000D5214: xor     edx, edx
 * 00000000000D5216: mov     ecx, 100000h
 * 00000000000D521B: push    offset a773f1b9a35b94e_0; "{773F1B9A-35B9-4E95-83A0-A210F2DE3B37}-"...
 * 00000000000D5220: inc     edx
 * 00000000000D5221: push    edx; InitialState
 * 00000000000D5222: call    ?CreatePointerDeviceProcessEvent@@YGHKHEPAGPAPAX@Z; CreatePointerDeviceProcessEvent(ulong,int,uchar,ushort *,void * *)
 * 00000000000D5227: test    eax, eax
 * 00000000000D5229: jz      short loc_D5241
 * 00000000000D522B: push    offset ?ghPntrProcRequestEvent@@3PAXA; unsigned __int8
 * 00000000000D5230: push    offset a773f1b9a35b94e; "{773F1B9A-35B9-4E95-83A0-A210F2DE3B37}-"...
 * 00000000000D5235: push    0; InitialState
 * 00000000000D5237: push    2
 * 00000000000D5239: xor     edx, edx
 * 00000000000D523B: pop     ecx
 * 00000000000D523C: call    ?CreatePointerDeviceProcessEvent@@YGHKHEPAGPAPAX@Z; CreatePointerDeviceProcessEvent(ulong,int,uchar,ushort *,void * *)
 * 00000000000D5241: pop     ecx
 * 00000000000D5242: retn
 */
