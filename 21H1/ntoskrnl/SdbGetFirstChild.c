/*
 * XREFs of SdbGetFirstChild @ 0x140742F40
 * Callers:
 *     SdbpMatchList @ 0x14073D418 (SdbpMatchList.c)
 *     InitOnceScanIndexes @ 0x140742A90 (InitOnceScanIndexes.c)
 *     SdbFindFirstTag @ 0x140742C54 (SdbFindFirstTag.c)
 *     SdbFindFirstNamedTag @ 0x1407AC4EC (SdbFindFirstNamedTag.c)
 * Callees:
 *     SdbpGetNextTagId @ 0x140742D88 (SdbpGetNextTagId.c)
 *     SdbGetTagFromTagID @ 0x140742EC4 (SdbGetTagFromTagID.c)
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
