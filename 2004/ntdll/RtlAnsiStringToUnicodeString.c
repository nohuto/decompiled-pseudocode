/*
 * XREFs of RtlAnsiStringToUnicodeString @ 0x180019580
 * Callers:
 *     RtlIntegerToUnicodeString @ 0x1800164A0 (RtlIntegerToUnicodeString.c)
 *     RtlCreateUnicodeStringFromAsciiz @ 0x180016570 (RtlCreateUnicodeStringFromAsciiz.c)
 *     LdrpAppendAnsiStringToFilenameBuffer @ 0x180016E4C (LdrpAppendAnsiStringToFilenameBuffer.c)
 *     LdrpSnapKernelBaseExtensions @ 0x180016EE4 (LdrpSnapKernelBaseExtensions.c)
 *     LdrpLoadDependentModule @ 0x180017BE0 (LdrpLoadDependentModule.c)
 *     LdrpReportError @ 0x18003F2A4 (LdrpReportError.c)
 *     RtlInt64ToUnicodeString @ 0x1800ED780 (RtlInt64ToUnicodeString.c)
 * Callees:
 *     NtdllpFreeStringRoutine @ 0x180022E70 (NtdllpFreeStringRoutine.c)
 *     RtlUTF8ToUnicodeN @ 0x180059460 (RtlUTF8ToUnicodeN.c)
 *     NtdllpAllocateStringRoutine @ 0x18006DAA0 (NtdllpAllocateStringRoutine.c)
 */

NTSTATUS __stdcall RtlAnsiStringToUnicodeString(
        PUNICODE_STRING DestinationString,
        PCANSI_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  ULONG Length; // edx
  char *Buffer; // r8
  ULONG v8; // ecx
  char v9; // si
  __int64 v10; // rcx
  unsigned __int64 v11; // rcx
  ULONG UTF8StringByteCount; // edx
  char *v13; // rbx
  ULONG v14; // r10d
  WCHAR *v15; // r11
  ULONG v16; // r10d
  __int64 v17; // r9
  ULONG i; // eax
  int v19; // r9d
  __int64 v20; // rsi
  __int64 v21; // rdi
  __int64 v22; // rax
  __int64 v23; // rcx
  WCHAR v24; // ax
  wchar_t *StringRoutine; // rax
  __int64 v27; // rax
  ULONG UnicodeStringActualByteCount; // [rsp+A8h] [rbp+10h] BYREF
  BOOLEAN v29; // [rsp+B0h] [rbp+18h]

  v29 = AllocateDestinationString;
  Length = SourceString->Length;
  Buffer = SourceString->Buffer;
  v8 = 0;
  v9 = NlsActiveCodePageIsUTF8;
  if ( NlsActiveCodePageIsUTF8 )
  {
    if ( Length )
    {
      RtlUTF8ToUnicodeN(0LL, 0, &UnicodeStringActualByteCount, Buffer, Length);
      v8 = UnicodeStringActualByteCount;
    }
  }
  else
  {
    if ( !NlsMbCodePageTag )
    {
      v8 = 2 * Length;
      goto LABEL_4;
    }
    for ( ; Length; v8 += 2 )
    {
      --Length;
      v27 = (unsigned __int8)*Buffer++;
      if ( NlsLeadByteInfoTable[v27] )
      {
        if ( !Length )
        {
          v8 += 2;
          break;
        }
        --Length;
        ++Buffer;
      }
    }
  }
LABEL_4:
  v10 = v8 + 2;
  if ( (unsigned int)v10 > 0xFFFE )
    return -1073741584;
  DestinationString->Length = v10 - 2;
  if ( AllocateDestinationString )
  {
    DestinationString->MaximumLength = v10;
    StringRoutine = (wchar_t *)NtdllpAllocateStringRoutine(v10);
    DestinationString->Buffer = StringRoutine;
    if ( !StringRoutine )
      return -1073741801;
    v9 = NlsActiveCodePageIsUTF8;
  }
  else
  {
    v11 = (unsigned __int16)(v10 - 2) + 2LL;
    if ( v11 > DestinationString->MaximumLength || v11 < 2 )
      return -2147483643;
  }
  UTF8StringByteCount = SourceString->Length;
  v13 = SourceString->Buffer;
  v14 = DestinationString->Length;
  v15 = DestinationString->Buffer;
  if ( v9 )
  {
    if ( UTF8StringByteCount )
      RtlUTF8ToUnicodeN(v15, v14, &UnicodeStringActualByteCount, v13, UTF8StringByteCount);
    else
      UnicodeStringActualByteCount = 0;
  }
  else
  {
    v16 = v14 >> 1;
    if ( NlsMbCodePageTag )
    {
      v19 = (int)DestinationString->Buffer;
      v20 = NlsMbAnsiCodePageTables;
      v21 = NlsAnsiToUnicodeData;
      while ( v16 && UTF8StringByteCount )
      {
        --v16;
        --UTF8StringByteCount;
        v22 = (unsigned __int8)*v13;
        v23 = (unsigned __int16)NlsLeadByteInfoTable[v22];
        if ( (_WORD)v23 )
        {
          if ( !UTF8StringByteCount )
          {
            *v15 = 0;
            LODWORD(v15) = (_DWORD)v15 + 2;
            break;
          }
          v24 = *(_WORD *)(v20 + 2 * ((unsigned __int8)v13[1] + v23));
          v13 += 2;
          --UTF8StringByteCount;
        }
        else
        {
          v24 = *(_WORD *)(v22 * 2 + v21);
          ++v13;
        }
        *v15++ = v24;
      }
      UnicodeStringActualByteCount = (_DWORD)v15 - v19;
    }
    else
    {
      if ( v16 >= UTF8StringByteCount )
        v16 = UTF8StringByteCount;
      UnicodeStringActualByteCount = 2 * v16;
      v17 = NlsAnsiToUnicodeData;
      for ( i = 0; i < v16; ++i )
        v15[i] = *(_WORD *)(v17 + 2LL * (unsigned __int8)v13[i]);
    }
  }
  DestinationString->Buffer[(unsigned __int64)UnicodeStringActualByteCount >> 1] = 0;
  return 0;
}
