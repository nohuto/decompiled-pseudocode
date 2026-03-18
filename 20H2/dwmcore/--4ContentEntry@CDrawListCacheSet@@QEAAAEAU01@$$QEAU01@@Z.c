/*
 * XREFs of ??4ContentEntry@CDrawListCacheSet@@QEAAAEAU01@$$QEAU01@@Z @ 0x1800C52A8
 * Callers:
 *     ??$move@V?$move_iterator@PEAUContentEntry@CDrawListCacheSet@@@std@@V?$checked_array_iterator@PEAUContentEntry@CDrawListCacheSet@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUContentEntry@CDrawListCacheSet@@@stdext@@V?$move_iterator@PEAUContentEntry@CDrawListCacheSet@@@0@0V12@@Z @ 0x1800C51C0 (--$move@V-$move_iterator@PEAUContentEntry@CDrawListCacheSet@@@std@@V-$checked_array_iterator@PEA.c)
 *     ??$move_backward@V?$move_iterator@PEAUContentEntry@CDrawListCacheSet@@@std@@V?$checked_array_iterator@PEAUContentEntry@CDrawListCacheSet@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUContentEntry@CDrawListCacheSet@@@stdext@@V?$move_iterator@PEAUContentEntry@CDrawListCacheSet@@@0@0V12@@Z @ 0x180265D64 (--$move_backward@V-$move_iterator@PEAUContentEntry@CDrawListCacheSet@@@std@@V-$checked_array_ite.c)
 * Callees:
 *     ?Release@CDrawListEntry@@UEAAKXZ @ 0x18005EDD0 (-Release@CDrawListEntry@@UEAAKXZ.c)
 */

__int64 __fastcall CDrawListCacheSet::ContentEntry::operator=(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  CDrawListEntry *v4; // rcx

  *(_DWORD *)a1 = *(_DWORD *)a2;
  *(_DWORD *)(a1 + 4) = *(_DWORD *)(a2 + 4);
  *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(a1 + 12) = *(_DWORD *)(a2 + 12);
  v3 = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a2 + 16) = 0LL;
  v4 = *(CDrawListEntry **)(a1 + 16);
  *(_QWORD *)(a1 + 16) = v3;
  if ( v4 )
    CDrawListEntry::Release(v4);
  return a1;
}
