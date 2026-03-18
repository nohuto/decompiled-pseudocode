/*
 * XREFs of SdbGetNextChild @ 0x140742CC8
 * Callers:
 *     SdbpMatchList @ 0x14073D418 (SdbpMatchList.c)
 *     SdbFindNextTag @ 0x140742918 (SdbFindNextTag.c)
 *     SdbFindFirstTag @ 0x140742C54 (SdbFindFirstTag.c)
 *     SdbFindFirstNamedTag @ 0x1407AC4EC (SdbFindFirstNamedTag.c)
 *     SdbpFindNextNamedTag @ 0x1409616EC (SdbpFindNextNamedTag.c)
 * Callees:
 *     AslLogCallPrintf @ 0x14073EA44 (AslLogCallPrintf.c)
 *     SdbpGetNextTagId @ 0x140742D88 (SdbpGetNextTagId.c)
 *     SdbGetTagFromTagID @ 0x140742EC4 (SdbGetTagFromTagID.c)
 */

__int64 __fastcall SdbGetNextChild(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v4; // edi
  unsigned int NextTagId; // edi
  unsigned int v7; // eax

  v4 = a2;
  if ( !(_DWORD)a2 )
  {
    NextTagId = *(_DWORD *)(a1 + 20);
    goto LABEL_4;
  }
  if ( (SdbGetTagFromTagID(a1, a2) & 0xF000) == 0x7000 )
  {
    NextTagId = SdbpGetNextTagId(a1, v4);
LABEL_4:
    v7 = SdbpGetNextTagId(a1, a3);
    return v7 < NextTagId ? v7 : 0;
  }
  AslLogCallPrintf(1LL);
  return 0LL;
}
