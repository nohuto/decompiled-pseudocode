/*
 * XREFs of ??_ESelectionDataParser@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAPEAXI@Z @ 0x180468ED0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008D274 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?_Free@_bstr_t@@AEAAXXZ @ 0x1801A036C (-_Free@_bstr_t@@AEAAXXZ.c)
 */

_bstr_t::Data_t **__fastcall WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionDataParser::`vector deleting destructor'(
        _bstr_t::Data_t **this,
        const struct std::nothrow_t *a2)
{
  char v3; // bl
  const struct std::nothrow_t *v4; // rdx
  const struct std::nothrow_t *v5; // rdx
  const struct std::nothrow_t *v6; // rdx
  const struct std::nothrow_t *v7; // rdx
  const struct std::nothrow_t *v8; // rdx
  const struct std::nothrow_t *v9; // rdx
  const struct std::nothrow_t *v10; // rdx
  const struct std::nothrow_t *v11; // rdx

  v3 = (char)a2;
  _bstr_t::_Free(this + 10, a2);
  _bstr_t::_Free(this + 9, v4);
  _bstr_t::_Free(this + 8, v5);
  _bstr_t::_Free(this + 7, v6);
  _bstr_t::_Free(this + 6, v7);
  _bstr_t::_Free(this + 5, v8);
  _bstr_t::_Free(this + 4, v9);
  _bstr_t::_Free(this + 3, v10);
  _bstr_t::_Free(this + 2, v11);
  *((_DWORD *)this + 3) = -1073741823;
  if ( (v3 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x58);
  return this;
}
