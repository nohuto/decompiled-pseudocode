/*
 * XREFs of _ultow_s @ 0x1403D6390
 * Callers:
 *     LocalConvertAclToString @ 0x1406FCD64 (LocalConvertAclToString.c)
 *     _CmCreateOrdinalInstanceKey @ 0x140765B80 (_CmCreateOrdinalInstanceKey.c)
 *     BiDeleteElement @ 0x14077F3BC (BiDeleteElement.c)
 *     BcdSetElementDataWithFlags @ 0x1407801FC (BcdSetElementDataWithFlags.c)
 *     BcdGetElementDataWithFlags @ 0x1407803E0 (BcdGetElementDataWithFlags.c)
 *     LocalGetStringForRelativeAttribute @ 0x14092BA44 (LocalGetStringForRelativeAttribute.c)
 * Callees:
 *     xtow_s @ 0x1403D64F0 (xtow_s.c)
 */

errno_t __cdecl ultow_s(unsigned int Val, wchar_t *DstBuf, size_t SizeInWords, int Radix)
{
  return xtow_s(Val, (_DWORD)DstBuf, SizeInWords, Radix, 0);
}
