/*
 * XREFs of ?IsInkDevice@InkDeviceParser@@SG_NGGPBG0@Z @ 0x1AC683
 * Callers:
 *     _InkProcessorIsInkDevice@16 @ 0x183963 (_InkProcessorIsInkDevice@16.c)
 *     ?Initialize@InkDevice@@UAEJPAURawInputManagerDeviceObject@@@Z @ 0x1B0877 (-Initialize@InkDevice@@UAEJPAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     <none>
 */

bool __userpurge InkDeviceParser::IsInkDevice@<al>(
        __int16 a1@<dx>,
        __int16 a2@<cx>,
        _WORD *a3,
        _WORD *a4,
        const unsigned __int16 *a5,
        const unsigned __int16 *a6)
{
  return a2 == -241 && a1 == 256 && (!a3 || *a3 == 1118) && (!a4 || *a4 == 85);
}
