/*
 * XREFs of SdbFindFirstNamedTag @ 0x1407AF64C
 * Callers:
 *     SdbpSearchDB @ 0x14076BC10 (SdbpSearchDB.c)
 *     SdbQueryDataExTagID @ 0x1407AF428 (SdbQueryDataExTagID.c)
 * Callees:
 *     _wcsicmp @ 0x1403CEAD0 (_wcsicmp.c)
 *     AslLogCallPrintf @ 0x1407405C4 (AslLogCallPrintf.c)
 *     SdbGetStringTagPtr @ 0x140740BD0 (SdbGetStringTagPtr.c)
 *     SdbFindFirstTag @ 0x1407447D4 (SdbFindFirstTag.c)
 *     SdbGetNextChild @ 0x140744848 (SdbGetNextChild.c)
 *     SdbGetTagFromTagID @ 0x140744A44 (SdbGetTagFromTagID.c)
 *     SdbGetFirstChild @ 0x140744AC0 (SdbGetFirstChild.c)
 */

__int64 __fastcall SdbFindFirstNamedTag(__int64 a1, __int64 a2, __int16 a3, __int16 a4, wchar_t *Str1)
{
  unsigned int v5; // ebx
  unsigned int v8; // ebp
  unsigned int i; // eax
  unsigned int v11; // edi
  unsigned int FirstTag; // eax
  const wchar_t *StringTagPtr; // rax

  v5 = 0;
  v8 = a2;
  for ( i = SdbGetFirstChild(a1, a2); ; i = SdbGetNextChild(a1, v8, v11) )
  {
    v11 = i;
    if ( !i )
      break;
    if ( (unsigned __int16)SdbGetTagFromTagID(a1, i) == a3 )
    {
      FirstTag = SdbFindFirstTag(a1, v11, a4);
      if ( FirstTag )
      {
        StringTagPtr = (const wchar_t *)SdbGetStringTagPtr(a1, FirstTag);
        if ( !StringTagPtr )
        {
          AslLogCallPrintf(1LL);
          return v5;
        }
        if ( !wcsicmp(Str1, StringTagPtr) )
          return v11;
      }
    }
  }
  return v5;
}
