/*
 * XREFs of SdbFindFirstNamedTag @ 0x1407AC4EC
 * Callers:
 *     SdbpSearchDB @ 0x140769830 (SdbpSearchDB.c)
 *     SdbQueryDataExTagID @ 0x1407AC2C8 (SdbQueryDataExTagID.c)
 * Callees:
 *     _wcsicmp @ 0x1403CDC90 (_wcsicmp.c)
 *     AslLogCallPrintf @ 0x14073EA44 (AslLogCallPrintf.c)
 *     SdbGetStringTagPtr @ 0x14073F050 (SdbGetStringTagPtr.c)
 *     SdbFindFirstTag @ 0x140742C54 (SdbFindFirstTag.c)
 *     SdbGetNextChild @ 0x140742CC8 (SdbGetNextChild.c)
 *     SdbGetTagFromTagID @ 0x140742EC4 (SdbGetTagFromTagID.c)
 *     SdbGetFirstChild @ 0x140742F40 (SdbGetFirstChild.c)
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
