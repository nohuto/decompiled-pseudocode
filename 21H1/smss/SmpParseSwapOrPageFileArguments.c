/*
 * XREFs of SmpParseSwapOrPageFileArguments @ 0x1400073E0
 * Callers:
 *     SmpCreatePagingFileDescriptor @ 0x140007260 (SmpCreatePagingFileDescriptor.c)
 *     SmpCreateWorkingSetSwapPagingFile @ 0x14000BEDC (SmpCreateWorkingSetSwapPagingFile.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SmpParseSwapOrPageFileArguments(PCUNICODE_STRING String, PULONG Value, PULONG a3)
{
  PWSTR Buffer; // r10
  USHORT Length; // r9
  unsigned __int16 v7; // cx
  unsigned __int16 v8; // r9
  __int64 v9; // r8
  NTSTATUS v10; // r8d
  PWSTR v11; // rdi
  WCHAR *v12; // rcx
  WCHAR v13; // ax
  NTSTATUS v14; // eax
  signed __int32 v16; // edx
  __int64 v17; // rcx
  signed __int32 v18; // edx

  *Value = 0;
  *a3 = 0;
  Buffer = String->Buffer;
  if ( !Buffer )
    return 0LL;
  Length = String->Length;
  v7 = 0;
  v8 = Length >> 1;
  if ( !v8 )
    return 0LL;
  while ( Buffer[v7] <= 0x30u )
  {
    v9 = 0x1000100000200LL;
    if ( !_bittest64(&v9, Buffer[v7]) )
      break;
    if ( ++v7 >= v8 )
      return 0LL;
  }
  v10 = RtlUnicodeStringToInteger(String, 0, Value);
  if ( v10 < 0 )
  {
    v16 = _InterlockedIncrement(&SmpPagefileLogIndex) % 32;
    v17 = 2LL * v16;
    *((_DWORD *)&SmpPagefileLog + 4 * v16) = 5100;
  }
  else
  {
    v11 = String->Buffer;
    v12 = v11;
    if ( !*v11 )
      return 0LL;
    while ( 1 )
    {
      v13 = *v12++;
      if ( v13 == 32 )
        break;
      if ( !*v12 )
        return 0LL;
    }
    String->Buffer = v12;
    String->Length += (_WORD)v11 - (_WORD)v12;
    String->MaximumLength = String->Length;
    v14 = RtlUnicodeStringToInteger(String, 0, a3);
    String->Buffer = v11;
    v10 = v14;
    if ( v14 >= 0 )
      return 0LL;
    v18 = _InterlockedIncrement(&SmpPagefileLogIndex) % 32;
    v17 = 2LL * v18;
    *((_DWORD *)&SmpPagefileLog + 4 * v18) = 5122;
  }
  *((_DWORD *)&SmpPagefileLog + 2 * v17 + 1) = v10;
  *((_QWORD *)&SmpPagefileLog + v17 + 1) = 0LL;
  return (unsigned int)v10;
}
