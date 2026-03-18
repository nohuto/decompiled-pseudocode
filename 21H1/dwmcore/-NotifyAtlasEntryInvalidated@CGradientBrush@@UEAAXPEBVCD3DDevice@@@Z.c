/*
 * XREFs of ?NotifyAtlasEntryInvalidated@CGradientBrush@@UEAAXPEBVCD3DDevice@@@Z @ 0x1801EAEA0
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyAtlasEntryInvalidated@CGradientSource@@MEAAXPEBVCD3DDevice@@@Z @ 0x18020BF2C (-NotifyAtlasEntryInvalidated@CGradientSource@@MEAAXPEBVCD3DDevice@@@Z.c)
 */

void __fastcall CGradientBrush::NotifyAtlasEntryInvalidated(CGradientBrush *this, const struct CD3DDevice *a2)
{
  CGradientSource::NotifyAtlasEntryInvalidated(this, a2);
  (*(void (__fastcall **)(char *, __int64))(*((_QWORD *)this - 10) + 72LL))((char *)this - 80, 5LL);
}
