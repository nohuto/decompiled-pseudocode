/*
 * XREFs of _RtlAnsiStringToUnicodeString@12 @ 0x4B2CC520
 * Callers:
 *     _LdrpLoadDependentModule@24 @ 0x4B2CB610 (_LdrpLoadDependentModule@24.c)
 *     _RtlCreateUnicodeStringFromAsciiz@8 @ 0x4B2CD500 (_RtlCreateUnicodeStringFromAsciiz@8.c)
 *     _LdrpSnapKernelBaseExtensions@0 @ 0x4B2CE517 (_LdrpSnapKernelBaseExtensions@0.c)
 *     _LdrpAppendAnsiStringToFilenameBuffer@8 @ 0x4B2CE8EA (_LdrpAppendAnsiStringToFilenameBuffer@8.c)
 *     _RtlIntegerToUnicodeString@12 @ 0x4B2D2A70 (_RtlIntegerToUnicodeString@12.c)
 *     _LdrpReportError@12 @ 0x4B2E9F63 (_LdrpReportError@12.c)
 *     _LdrpFixSectionProtection@12 @ 0x4B32C976 (_LdrpFixSectionProtection@12.c)
 *     _RtlInt64ToUnicodeString@16 @ 0x4B350510 (_RtlInt64ToUnicodeString@16.c)
 * Callees:
 *     _RtlDeleteBoundaryDescriptor@4 @ 0x4B2ABA40 (_RtlDeleteBoundaryDescriptor@4.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _RtlAnsiStringToUnicodeString@12 @ 0x4B2CC520 (_RtlAnsiStringToUnicodeString@12.c)
 *     _RtlUTF8ToUnicodeN@20 @ 0x4B2DD1E0 (_RtlUTF8ToUnicodeN@20.c)
 */

NTSTATUS __stdcall RtlAnsiStringToUnicodeString(
        PUNICODE_STRING DestinationString,
        PCANSI_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  ULONG Length; // esi
  char *Buffer; // edi
  int v5; // ecx
  unsigned int v6; // ecx
  unsigned int v7; // ecx
  char v8; // al
  ULONG v9; // esi
  char *v10; // ebx
  ULONG v11; // edx
  wchar_t *v12; // edi
  ULONG v13; // edx
  int v14; // esi
  ULONG i; // eax
  wchar_t *Heap; // eax
  int v18; // eax
  int v19; // eax
  wchar_t v20; // ax
  SIZE_T v21; // [esp-4h] [ebp-5Ch]
  wchar_t *v22; // [esp+14h] [ebp-44h]
  ULONG v23; // [esp+34h] [ebp-24h] BYREF
  ULONG UnicodeStringActualByteCount; // [esp+38h] [ebp-20h] BYREF
  char v25; // [esp+3Fh] [ebp-19h]
  CPPEH_RECORD ms_exc; // [esp+40h] [ebp-18h]

  Length = SourceString->Length;
  Buffer = SourceString->Buffer;
  v5 = 0;
  v25 = NlsActiveCodePageIsUTF8;
  if ( NlsActiveCodePageIsUTF8 )
  {
    if ( !Length )
    {
      v5 = 0;
      goto LABEL_4;
    }
    RtlUTF8ToUnicodeN(0, 0, &UnicodeStringActualByteCount, Buffer, Length);
    v5 = UnicodeStringActualByteCount;
  }
  else
  {
    if ( !NlsMbCodePageTag )
    {
      v5 = 2 * Length;
      goto LABEL_4;
    }
    for ( ; Length; v5 += 2 )
    {
      --Length;
      v18 = (unsigned __int8)*Buffer++;
      if ( NlsLeadByteInfoTable[v18] )
      {
        if ( !Length )
        {
          v5 += 2;
          break;
        }
        --Length;
        ++Buffer;
      }
    }
LABEL_4:
    UnicodeStringActualByteCount = v5;
  }
  v6 = v5 + 2;
  if ( v6 > 0xFFFE )
    return -1073741584;
  DestinationString->Length = v6 - 2;
  if ( AllocateDestinationString )
  {
    DestinationString->MaximumLength = v6;
    LODWORD(v21) = v6;
    Heap = (wchar_t *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v21);
    DestinationString->Buffer = Heap;
    if ( !Heap )
      return -1073741801;
    v8 = NlsActiveCodePageIsUTF8;
  }
  else
  {
    v7 = (unsigned __int16)(v6 - 2) + 2;
    if ( v7 > DestinationString->MaximumLength || v7 < 2 )
      return -2147483643;
    v8 = v25;
  }
  ms_exc.registration.TryLevel = 0;
  v9 = SourceString->Length;
  v10 = SourceString->Buffer;
  v11 = DestinationString->Length;
  v12 = DestinationString->Buffer;
  if ( v8 )
  {
    if ( SourceString->Length )
      RtlUTF8ToUnicodeN((PWSTR)v12, v11, &v23, v10, v9);
    else
      v23 = 0;
  }
  else
  {
    v13 = v11 >> 1;
    if ( NlsMbCodePageTag )
    {
      v22 = DestinationString->Buffer;
      while ( v13 && v9 )
      {
        --v13;
        --v9;
        v19 = (unsigned __int8)*v10;
        UnicodeStringActualByteCount = (unsigned __int16)NlsLeadByteInfoTable[v19];
        if ( (_WORD)UnicodeStringActualByteCount )
        {
          if ( !v9 )
          {
            *v12++ = 0;
            break;
          }
          v20 = *(_WORD *)(NlsMbAnsiCodePageTables
                         + 2 * ((unsigned __int16)UnicodeStringActualByteCount + (unsigned __int8)v10[1]));
          v10 += 2;
          --v9;
        }
        else
        {
          v20 = *(_WORD *)(NlsAnsiToUnicodeData + 2 * v19);
          ++v10;
        }
        *v12++ = v20;
      }
      v23 = (char *)v12 - (char *)v22;
    }
    else
    {
      if ( v13 >= v9 )
        v13 = SourceString->Length;
      v23 = 2 * v13;
      v14 = NlsAnsiToUnicodeData;
      for ( i = 0; i < v13; ++i )
        v12[i] = *(_WORD *)(v14 + 2 * (unsigned __int8)v10[i]);
    }
  }
  DestinationString->Buffer[v23 >> 1] = 0;
  ms_exc.registration.TryLevel = -2;
  return 0;
}
