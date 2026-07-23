/*
 * XREFs of PipLookupGroupName @ 0x140A5FD70
 * Callers:
 *     IopInitializeSystemDrivers @ 0x140A5E754 (IopInitializeSystemDrivers.c)
 *     IopInitializeBootDrivers @ 0x140A5EB88 (IopInitializeBootDrivers.c)
 *     PipCheckDependencies @ 0x140A5FD14 (PipCheckDependencies.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x1406F0B70 (RtlEqualUnicodeString.c)
 *     PipCreateEntry @ 0x140A5FE6C (PipCreateEntry.c)
 */

__int64 __fastcall PipLookupGroupName(PCUNICODE_STRING String1, int a2)
{
  __int64 v2; // rbx
  unsigned __int16 Length; // cx
  __int64 v6; // rax
  __int64 result; // rax
  __int64 i; // rsi

  v2 = IopGroupListHead;
  if ( IopGroupListHead )
  {
    Length = String1->Length;
    while ( 1 )
    {
      if ( Length >= *(_WORD *)(v2 + 32) )
      {
        if ( Length <= *(_WORD *)(v2 + 32) )
        {
          if ( RtlEqualUnicodeString(String1, (PCUNICODE_STRING)(v2 + 32), 1u) )
            return v2;
          for ( i = *(_QWORD *)(v2 + 16); i; i = *(_QWORD *)(i + 16) )
          {
            if ( RtlEqualUnicodeString(String1, (PCUNICODE_STRING)(i + 32), 1u) )
              return i;
            v2 = *(_QWORD *)(v2 + 16);
          }
          if ( a2 )
          {
            result = PipCreateEntry(String1);
            *(_QWORD *)(v2 + 16) = result;
            return result;
          }
          return 0LL;
        }
        v6 = *(_QWORD *)(v2 + 8);
        if ( !v6 )
        {
          if ( !a2 )
            return 0LL;
          result = PipCreateEntry(String1);
          *(_QWORD *)(v2 + 8) = result;
          return result;
        }
      }
      else
      {
        v6 = *(_QWORD *)v2;
        if ( !*(_QWORD *)v2 )
        {
          if ( !a2 )
            return 0LL;
          result = PipCreateEntry(String1);
          *(_QWORD *)v2 = result;
          return result;
        }
      }
      v2 = v6;
    }
  }
  if ( !a2 )
    return 0LL;
  result = ((__int64 (*)(void))PipCreateEntry)();
  IopGroupListHead = result;
  return result;
}
