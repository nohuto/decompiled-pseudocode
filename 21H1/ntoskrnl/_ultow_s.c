/*
 * XREFs of _ultow_s @ 0x1403D28C0
 * Callers:
 *     LocalConvertAclToString @ 0x14068FE40 (LocalConvertAclToString.c)
 *     _CmCreateOrdinalInstanceKey @ 0x1407548A8 (_CmCreateOrdinalInstanceKey.c)
 *     BiDeleteElement @ 0x14076E9AC (BiDeleteElement.c)
 *     BcdSetElementDataWithFlags @ 0x14076F7EC (BcdSetElementDataWithFlags.c)
 *     BcdGetElementDataWithFlags @ 0x14076F9D0 (BcdGetElementDataWithFlags.c)
 *     LocalGetStringForRelativeAttribute @ 0x14092496C (LocalGetStringForRelativeAttribute.c)
 * Callees:
 *     xtow_s @ 0x1403D2A20 (xtow_s.c)
 */

errno_t __cdecl ultow_s(unsigned int Val, wchar_t *DstBuf, size_t SizeInWords, int Radix)
{
  return xtow_s(Val, (_DWORD)DstBuf, SizeInWords, Radix, 0);
}
