/*
 * XREFs of ??_EPWSLayoutParser@@UEAAPEAXI@Z @ 0x180227230
 * Callers:
 *     <none>
 * Callees:
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18007C9C8 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008D714 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEAA@XZ @ 0x1801A18D4 (--1SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEAA@XZ.c)
 */

PWSLayoutParser *__fastcall PWSLayoutParser::`vector deleting destructor'(PWSLayoutParser *this, char a2)
{
  OLECHAR *v4; // rcx
  OLECHAR *v5; // rcx
  OLECHAR *v6; // rcx

  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)this + 144);
  WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData::~SelectionData((PWSLayoutParser *)((char *)this + 40));
  v4 = (OLECHAR *)*((_QWORD *)this + 4);
  if ( v4 )
    SysFreeString(v4);
  v5 = (OLECHAR *)*((_QWORD *)this + 3);
  if ( v5 )
    SysFreeString(v5);
  v6 = (OLECHAR *)*((_QWORD *)this + 2);
  if ( v6 )
    SysFreeString(v6);
  *((_DWORD *)this + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xA8);
  return this;
}
