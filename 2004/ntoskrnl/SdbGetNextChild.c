/*
 * XREFs of SdbGetNextChild @ 0x140744848
 * Callers:
 *     SdbpMatchList @ 0x14073EF98 (SdbpMatchList.c)
 *     SdbFindNextTag @ 0x140744498 (SdbFindNextTag.c)
 *     SdbFindFirstTag @ 0x1407447D4 (SdbFindFirstTag.c)
 *     SdbFindFirstNamedTag @ 0x1407AF64C (SdbFindFirstNamedTag.c)
 *     SdbpFindNextNamedTag @ 0x140962A8C (SdbpFindNextNamedTag.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1407405C4 (AslLogCallPrintf.c)
 *     SdbpGetNextTagId @ 0x140744908 (SdbpGetNextTagId.c)
 *     SdbGetTagFromTagID @ 0x140744A44 (SdbGetTagFromTagID.c)
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
