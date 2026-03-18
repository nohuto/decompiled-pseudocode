/*
 * XREFs of AslFileMappingEnsureMappedAs @ 0x14096492C
 * Callers:
 *     SdbOpenDatabaseEx @ 0x140960A3C (SdbOpenDatabaseEx.c)
 *     SdbpCheckMatchingTextEntry @ 0x140961624 (SdbpCheckMatchingTextEntry.c)
 *     AslpFileGetChecksumAttributes @ 0x14096739C (AslpFileGetChecksumAttributes.c)
 * Callees:
 *     RtlFileMapMapView @ 0x1403BA934 (RtlFileMapMapView.c)
 *     AslLogCallPrintf @ 0x1407405C4 (AslLogCallPrintf.c)
 *     AslpFileMappingGetFileKind @ 0x14079F948 (AslpFileMappingGetFileKind.c)
 */

__int64 __fastcall AslFileMappingEnsureMappedAs(__int64 a1)
{
  int *v1; // rsi
  int v2; // eax
  int v5; // eax
  int FileKind; // ebx

  v1 = (int *)(a1 + 64);
  v2 = *(_DWORD *)(a1 + 64);
  if ( *(_DWORD *)(a1 + 80) )
  {
    if ( v2 != 1 )
      return 3221226605LL;
    return 3221225758LL;
  }
  if ( v2 == 1 )
    return 3221225758LL;
  v5 = RtlFileMapMapView(a1 + 8, 0);
  FileKind = v5;
  if ( v5 >= 0 )
  {
    if ( *(_BYTE *)(a1 + 59) )
    {
      *v1 = 6;
    }
    else
    {
      FileKind = AslpFileMappingGetFileKind((_QWORD *)(a1 + 8), v1);
      if ( FileKind < 0 )
      {
        AslLogCallPrintf(1LL);
        *v1 = 3;
      }
    }
  }
  else if ( v5 == -1073741554 && !*(_BYTE *)(a1 + 59) )
  {
    return 0;
  }
  return (unsigned int)FileKind;
}
