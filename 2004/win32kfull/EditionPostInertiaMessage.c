/*
 * XREFs of EditionPostInertiaMessage @ 0x1C0218D10
 * Callers:
 *     <none>
 * Callees:
 *     _PostMessage @ 0x1C0058410 (_PostMessage.c)
 *     _PostThreadMessage @ 0x1C00BE8A8 (_PostThreadMessage.c)
 */

__int64 __fastcall EditionPostInertiaMessage(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5)
{
  if ( a5 )
    return PostThreadMessage(a5, a2, a3);
  else
    return PostMessage(*(_QWORD *)(a1 + 80), a2, a3, (WORD2(a4) << 16) | (unsigned int)(unsigned __int16)a4);
}
