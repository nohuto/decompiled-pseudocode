/*
 * XREFs of ?vAddLeftNice@WIDENER@@IAEXPAVEVECTORFX@@H@Z @ 0x2364E6
 * Callers:
 *     ?cptAddRound@WIDEPENOBJ@@QAEKAAVWIDENER@@AAVLINEDATA@@1HHH@Z @ 0x235DD7 (-cptAddRound@WIDEPENOBJ@@QAEKAAVWIDENER@@AAVLINEDATA@@1HHH@Z.c)
 * Callees:
 *     ?vAddNice@@YGXAAVWIDEPATHOBJ@@PAU_POINTFIX@@PAVEVECTORFX@@H@Z @ 0x23650C (-vAddNice@@YGXAAVWIDEPATHOBJ@@PAU_POINTFIX@@PAVEVECTORFX@@H@Z.c)
 */

/*
 * Hex-Rays decompilation failed for ?vAddLeftNice@WIDENER@@IAEXPAVEVECTORFX@@H@Z @ 0x2364E6
 * Reason: Hex-Rays returned no pseudocode for 0x2364E6
 * Fallback: raw IDA disassembly follows.
 *
 * 00000000002364E6: mov     edi, edi
 * 00000000002364E8: push    ebp; struct EVECTORFX *
 * 00000000002364E9: mov     ebp, esp
 * 00000000002364EB: xor     eax, eax
 * 00000000002364ED: lea     edx, [ecx+2A4h]
 * 00000000002364F3: cmp     [ebp+arg_4], eax
 * 00000000002364F6: setz    al
 * 00000000002364F9: add     ecx, 390h
 * 00000000002364FF: push    eax; struct _POINTFIX *
 * 0000000000236500: push    [ebp+arg_0]; struct WIDEPATHOBJ *
 * 0000000000236503: call    ?vAddNice@@YGXAAVWIDEPATHOBJ@@PAU_POINTFIX@@PAVEVECTORFX@@H@Z; vAddNice(WIDEPATHOBJ &,_POINTFIX *,EVECTORFX *,int)
 * 0000000000236508: pop     ebp
 * 0000000000236509: retn    8
 */
