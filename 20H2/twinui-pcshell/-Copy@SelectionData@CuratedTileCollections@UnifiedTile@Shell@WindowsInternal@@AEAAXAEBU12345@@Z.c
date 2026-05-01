/*
 * XREFs of ?Copy@SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEAAXAEBU12345@@Z @ 0x1801A1AF4
 * Callers:
 *     ??0SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEAA@AEBU01234@@Z @ 0x1801A12AC (--0SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEAA@AEBU01234@@Z.c)
 *     ??4ParsedTaskbarLayout@@QEAAXAEBU0@@Z @ 0x1801A1558 (--4ParsedTaskbarLayout@@QEAAXAEBU0@@Z.c)
 *     ??4ParsedPenWorkspaceLayout@@QEAAAEAU0@AEBU0@@Z @ 0x1802268B4 (--4ParsedPenWorkspaceLayout@@QEAAAEAU0@AEBU0@@Z.c)
 * Callees:
 *     ??$_Emplace_reallocate@AEBQEAG@?$vector@PEAGV?$allocator@PEAG@std@@@std@@QEAAPEAPEAGQEAPEAGAEBQEAG@Z @ 0x1801A0B10 (--$_Emplace_reallocate@AEBQEAG@-$vector@PEAGV-$allocator@PEAG@std@@@std@@QEAAPEAPEAGQEAPEAGAEBQE.c)
 *     ??$_Emplace_reallocate@AEBW4CollectionSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@?$vector@W4CollectionSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@V?$allocator@W4CollectionSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@std@@@std@@QEAAPEAW4CollectionSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEAW423456@AEBW423456@@Z @ 0x1801A0C5C (--$_Emplace_reallocate@AEBW4CollectionSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsIntern.c)
 */

void __fastcall WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData::Copy(
        WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData *this,
        const struct WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData *a2)
{
  char *v2; // r14
  __int64 v5; // rbp
  LPVOID *v6; // rsi
  unsigned __int64 v7; // r15
  __int64 v8; // rbp
  const WCHAR **v9; // r15
  unsigned __int64 v10; // rsi
  const WCHAR *v11; // rcx
  _BYTE *v12; // rdx
  _DWORD *v13; // rbp
  _DWORD *i; // r14
  _BYTE *v15; // rdx
  _DWORD *v16; // rbp
  _DWORD *j; // r14
  _BYTE *v18; // rdx
  LPWSTR ppwsz; // [rsp+50h] [rbp+8h] BYREF

  v2 = (char *)this + 16;
  *(_BYTE *)this = *(_BYTE *)a2;
  *((_BYTE *)this + 1) = *((_BYTE *)a2 + 1);
  v5 = 0LL;
  *((_BYTE *)this + 2) = *((_BYTE *)a2 + 2);
  *((_BYTE *)this + 3) = *((_BYTE *)a2 + 3);
  *((_BYTE *)this + 4) = *((_BYTE *)a2 + 4);
  *((_BYTE *)this + 5) = *((_BYTE *)a2 + 5);
  *((_BYTE *)this + 6) = *((_BYTE *)a2 + 6);
  *((_BYTE *)this + 7) = *((_BYTE *)a2 + 7);
  *((_BYTE *)this + 8) = *((_BYTE *)a2 + 8);
  v6 = (LPVOID *)*((_QWORD *)this + 2);
  v7 = (unsigned __int64)(*((_QWORD *)this + 3) - (_QWORD)v6 + 7LL) >> 3;
  if ( (unsigned __int64)v6 > *((_QWORD *)this + 3) )
    v7 = 0LL;
  if ( v7 )
  {
    do
    {
      CoTaskMemFree(*v6);
      ++v5;
      ++v6;
    }
    while ( v5 != v7 );
  }
  v8 = 0LL;
  *((_QWORD *)v2 + 1) = *(_QWORD *)v2;
  v9 = (const WCHAR **)*((_QWORD *)a2 + 2);
  v10 = (unsigned __int64)(*((_QWORD *)a2 + 3) - (_QWORD)v9 + 7LL) >> 3;
  if ( (unsigned __int64)v9 > *((_QWORD *)a2 + 3) )
    v10 = 0LL;
  if ( v10 )
  {
    do
    {
      v11 = *v9;
      ppwsz = 0LL;
      if ( SHStrDupW(v11, &ppwsz) >= 0 )
      {
        v12 = (_BYTE *)*((_QWORD *)v2 + 1);
        if ( *((_BYTE **)v2 + 2) == v12 )
        {
          std::vector<unsigned short *>::_Emplace_reallocate<unsigned short * const &>((const void **)v2, v12, &ppwsz);
        }
        else
        {
          *(_QWORD *)v12 = ppwsz;
          *((_QWORD *)v2 + 1) += 8LL;
        }
      }
      ++v9;
      ++v8;
    }
    while ( v8 != v10 );
  }
  *((_QWORD *)this + 6) = *((_QWORD *)this + 5);
  v13 = (_DWORD *)*((_QWORD *)a2 + 6);
  for ( i = (_DWORD *)*((_QWORD *)a2 + 5); i != v13; ++i )
  {
    v15 = (_BYTE *)*((_QWORD *)this + 6);
    if ( *((_BYTE **)this + 7) == v15 )
    {
      std::vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionSKU>::_Emplace_reallocate<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionSKU const &>(
        (const void **)this + 5,
        v15,
        i);
    }
    else
    {
      *(_DWORD *)v15 = *i;
      *((_QWORD *)this + 6) += 4LL;
    }
  }
  *((_QWORD *)this + 9) = *((_QWORD *)this + 8);
  v16 = (_DWORD *)*((_QWORD *)a2 + 9);
  for ( j = (_DWORD *)*((_QWORD *)a2 + 8); j != v16; ++j )
  {
    v18 = (_BYTE *)*((_QWORD *)this + 9);
    if ( *((_BYTE **)this + 10) == v18 )
    {
      std::vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionSKU>::_Emplace_reallocate<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionSKU const &>(
        (const void **)this + 8,
        v18,
        j);
    }
    else
    {
      *(_DWORD *)v18 = *j;
      *((_QWORD *)this + 9) += 4LL;
    }
  }
  *((_DWORD *)this + 22) = *((_DWORD *)a2 + 22);
  *((_BYTE *)this + 92) = *((_BYTE *)a2 + 92);
  *((_BYTE *)this + 93) = *((_BYTE *)a2 + 93);
  *((_BYTE *)this + 94) = *((_BYTE *)a2 + 94);
  *((_BYTE *)this + 95) = *((_BYTE *)a2 + 95);
  *((_BYTE *)this + 96) = *((_BYTE *)a2 + 96);
}
