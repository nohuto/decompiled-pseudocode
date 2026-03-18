/*
 * XREFs of _ultow_s @ 0x1403D3700
 * Callers:
 *     LocalConvertAclToString @ 0x140641F7C (LocalConvertAclToString.c)
 *     _CmCreateOrdinalInstanceKey @ 0x140756F40 (_CmCreateOrdinalInstanceKey.c)
 *     BiDeleteElement @ 0x140770DBC (BiDeleteElement.c)
 *     BcdSetElementDataWithFlags @ 0x140771BFC (BcdSetElementDataWithFlags.c)
 *     BcdGetElementDataWithFlags @ 0x140771DE0 (BcdGetElementDataWithFlags.c)
 *     LocalGetStringForRelativeAttribute @ 0x140925C1C (LocalGetStringForRelativeAttribute.c)
 * Callees:
 *     xtow_s @ 0x1403D3860 (xtow_s.c)
 */

errno_t __cdecl ultow_s(unsigned int Val, wchar_t *DstBuf, size_t SizeInWords, int Radix)
{
  return xtow_s(Val, (_DWORD)DstBuf, SizeInWords, Radix, 0);
}
