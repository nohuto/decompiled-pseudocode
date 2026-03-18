/*
 * XREFs of ??1CAtlasEntry@@QEAA@XZ @ 0x18024C6D0
 * Callers:
 *     ??1CAtlasBitmapResource@@MEAA@XZ @ 0x18020C0B8 (--1CAtlasBitmapResource@@MEAA@XZ.c)
 *     ?GenerateWhitePixel@CAtlasTexture@@AEAAXXZ @ 0x18024D404 (-GenerateWhitePixel@CAtlasTexture@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CAtlasEntry::~CAtlasEntry(CAtlasEntry *this)
{
  __int64 v1; // rdx

  v1 = *(_QWORD *)this;
  if ( *(_QWORD *)this )
  {
    *(_QWORD *)(*(_QWORD *)(v1 + 16) + 8LL * (unsigned int)(*((_DWORD *)this + 4) - 1)) = -1LL;
    ++*(_DWORD *)(v1 + 32);
  }
}
