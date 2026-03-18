/*
 * XREFs of SdbpGetNextIndexedRecord @ 0x1407AB96C
 * Callers:
 *     SdbFindNextStringIndexedTag @ 0x1407AB87C (SdbFindNextStringIndexedTag.c)
 *     SdbpFindMatchingName @ 0x1407AB8C0 (SdbpFindMatchingName.c)
 * Callees:
 *     AslLogCallPrintf @ 0x14073EA44 (AslLogCallPrintf.c)
 *     SdbpGetMappedTagData @ 0x1407428D4 (SdbpGetMappedTagData.c)
 *     SdbpGetNextTagId @ 0x140742D88 (SdbpGetNextTagId.c)
 *     SdbGetTagDataSize @ 0x140742E10 (SdbGetTagDataSize.c)
 *     SdbGetTagFromTagID @ 0x140742EC4 (SdbGetTagFromTagID.c)
 */

__int64 __fastcall SdbpGetNextIndexedRecord(__int64 a1, __int64 a2, _DWORD *a3)
{
  unsigned int v4; // esi
  __int64 MappedTagData; // rdi
  unsigned int TagDataSize; // eax
  __int64 v8; // r9
  __int64 v9; // rcx
  __int64 v10; // r9
  unsigned int NextTagId; // edi
  unsigned int v13; // esi
  __int16 TagFromTagID; // si
  __int16 v15; // ax

  v4 = a2;
  if ( (unsigned __int16)SdbGetTagFromTagID(a1, a2) == 0x9801 && (MappedTagData = SdbpGetMappedTagData(a1, v4)) != 0 )
  {
    if ( (a3[5] & 1) != 0 )
    {
      v13 = a3[1];
      if ( !v13 )
        v13 = *(_DWORD *)(MappedTagData + 12LL * (unsigned int)a3[4] + 8);
      NextTagId = SdbpGetNextTagId(a1, v13);
      TagFromTagID = SdbGetTagFromTagID(a1, v13);
      v15 = SdbGetTagFromTagID(a1, NextTagId);
      if ( v15 && (v15 & 0xF000) == 0x7000 && v15 == TagFromTagID && NextTagId != a3[2] )
      {
        a3[1] = NextTagId;
        return NextTagId;
      }
    }
    else
    {
      TagDataSize = SdbGetTagDataSize(a1, v4);
      v8 = (unsigned int)a3[4];
      if ( (_DWORD)v8 != TagDataSize / 0xC - 1 )
      {
        v9 = 3 * v8;
        v10 = (unsigned int)(v8 + 1);
        if ( *(_QWORD *)(MappedTagData + 4 * v9) == *(_QWORD *)(MappedTagData + 12 * v10) )
        {
          a3[4] = v10;
          return *(unsigned int *)(MappedTagData + 12 * v10 + 8);
        }
      }
    }
  }
  else
  {
    AslLogCallPrintf(1LL);
  }
  return 0LL;
}
