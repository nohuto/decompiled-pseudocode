/*
 * XREFs of SdbGetFirstChild @ 0x1407536A0
 * Callers:
 *     SdbpMatchList @ 0x14074DB78 (SdbpMatchList.c)
 *     InitOnceScanIndexes @ 0x1407531F0 (InitOnceScanIndexes.c)
 *     SdbFindFirstTag @ 0x1407533B4 (SdbFindFirstTag.c)
 *     SdbFindFirstNamedTag @ 0x1407BD58C (SdbFindFirstNamedTag.c)
 * Callees:
 *     SdbpGetNextTagId @ 0x1407534E8 (SdbpGetNextTagId.c)
 *     SdbGetTagFromTagID @ 0x140753624 (SdbGetTagFromTagID.c)
 */

__int64 __fastcall SdbGetFirstChild(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  unsigned int NextTagId; // eax
  unsigned int v5; // ecx

  v2 = a2;
  if ( !(_DWORD)a2 )
  {
    NextTagId = *(_DWORD *)(a1 + 20);
    v5 = 12;
    return v5 < NextTagId ? v5 : 0;
  }
  if ( (SdbGetTagFromTagID(a1, a2) & 0xF000) == 0x7000 )
  {
    NextTagId = SdbpGetNextTagId(a1, v2);
    v5 = v2 + 6;
    return v5 < NextTagId ? v5 : 0;
  }
  return 0LL;
}
