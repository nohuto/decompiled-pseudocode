/*
 * XREFs of ??4WARPDrawListEntryBitmapDesc@@QEAAAEAU0@AEBU0@@Z @ 0x1801A1220
 * Callers:
 *     ??0CWARPDrawListEntry@@AEAA@AEBUWARPDrawListEntryParams@@@Z @ 0x1801A1000 (--0CWARPDrawListEntry@@AEAA@AEBUWARPDrawListEntryParams@@@Z.c)
 * Callees:
 *     ??4CDrawListBitmap@@QEAAAEAV0@AEBV0@@Z @ 0x18005E72C (--4CDrawListBitmap@@QEAAAEAV0@AEBV0@@Z.c)
 */

__int64 __fastcall WARPDrawListEntryBitmapDesc::operator=(__int64 a1, __int64 a2)
{
  CDrawListBitmap::operator=(a1, a2);
  *(_OWORD *)(a1 + 48) = *(_OWORD *)(a2 + 48);
  *(_QWORD *)(a1 + 64) = *(_QWORD *)(a2 + 64);
  *(_OWORD *)(a1 + 72) = *(_OWORD *)(a2 + 72);
  *(_DWORD *)(a1 + 88) = *(_DWORD *)(a2 + 88);
  *(_DWORD *)(a1 + 92) = *(_DWORD *)(a2 + 92);
  *(_DWORD *)(a1 + 96) = *(_DWORD *)(a2 + 96);
  *(_BYTE *)(a1 + 100) = *(_BYTE *)(a2 + 100);
  return a1;
}
