/*
 * XREFs of _FONTOBJ_vGetInfo@12 @ 0x1F36D2
 * Callers:
 *     _NtGdiFONTOBJ_vGetInfo@12 @ 0x21A4F5 (_NtGdiFONTOBJ_vGetInfo@12.c)
 * Callees:
 *     ??1RFONTOBJ@@QAE@XZ @ 0x86B86 (--1RFONTOBJ@@QAE@XZ.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 *     ?vGetInfo@RFONTOBJ@@QBEXPAU_FONTINFO@@@Z @ 0x209B41 (-vGetInfo@RFONTOBJ@@QBEXPAU_FONTINFO@@@Z.c)
 */

void __stdcall FONTOBJ_vGetInfo(FONTOBJ *pfo, ULONG cjSize, FONTINFO *pfi)
{
  size_t v3; // eax
  struct _FONTINFO Src; // [esp+4h] [ebp-1Ch] BYREF

  memset(&Src, 0, sizeof(Src));
  RFONTOBJ::vGetInfo((RFONTOBJ *)&pfo, &Src);
  v3 = cjSize;
  if ( cjSize >= 0x1C )
    v3 = 28;
  memcpy(pfi, &Src, v3);
  pfo = 0;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&pfo);
}
