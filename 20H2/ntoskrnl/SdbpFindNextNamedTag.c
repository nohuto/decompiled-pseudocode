/*
 * XREFs of SdbpFindNextNamedTag @ 0x14096885C
 * Callers:
 *     SdbpSearchDB @ 0x14077A9D0 (SdbpSearchDB.c)
 * Callees:
 *     _wcsicmp @ 0x1403D1760 (_wcsicmp.c)
 *     AslLogCallPrintf @ 0x14074F1A4 (AslLogCallPrintf.c)
 *     SdbGetStringTagPtr @ 0x14074F7B0 (SdbGetStringTagPtr.c)
 *     SdbFindFirstTag @ 0x1407533B4 (SdbFindFirstTag.c)
 *     SdbGetNextChild @ 0x140753428 (SdbGetNextChild.c)
 *     SdbGetTagFromTagID @ 0x140753624 (SdbGetTagFromTagID.c)
 */

__int64 __fastcall SdbpFindNextNamedTag(__int64 a1, unsigned int a2, unsigned int a3, __int16 a4, wchar_t *Str1)
{
  unsigned int v7; // edi
  unsigned int v9; // ebx
  __int16 TagFromTagID; // r15
  unsigned int FirstTag; // eax
  const wchar_t *StringTagPtr; // rax
  unsigned int NextChild; // eax

  v7 = a3;
  v9 = 0;
  TagFromTagID = SdbGetTagFromTagID(a1, a3);
  if ( TagFromTagID )
  {
    while ( 1 )
    {
      NextChild = SdbGetNextChild(a1, a2, v7);
      v7 = NextChild;
      if ( !NextChild )
        break;
      if ( (unsigned __int16)SdbGetTagFromTagID(a1, NextChild) == TagFromTagID )
      {
        FirstTag = SdbFindFirstTag(a1, v7, a4);
        if ( FirstTag )
        {
          StringTagPtr = (const wchar_t *)SdbGetStringTagPtr(a1, FirstTag);
          if ( !StringTagPtr )
          {
            AslLogCallPrintf(1LL);
            return v9;
          }
          if ( !wcsicmp(Str1, StringTagPtr) )
            return v7;
        }
      }
    }
    return v9;
  }
  else
  {
    AslLogCallPrintf(1LL);
    return 0LL;
  }
}
