/*
 * XREFs of AslFileMappingEnsure @ 0x1407ADCAC
 * Callers:
 *     AslFileAllocAndGetAttributes @ 0x1407ADB80 (AslFileAllocAndGetAttributes.c)
 *     AslpFileGetVersionBlock @ 0x1407AE608 (AslpFileGetVersionBlock.c)
 *     AslFileMappingGetFileKindDetail @ 0x14096A7CC (AslFileMappingGetFileKindDetail.c)
 *     AslFileMappingGetImageTypeEx @ 0x14096A990 (AslFileMappingGetImageTypeEx.c)
 *     AslpFileGetClrVersionAttribute @ 0x14096D4E8 (AslpFileGetClrVersionAttribute.c)
 *     AslpFileGetHeaderAttributesNE @ 0x14096D9FC (AslpFileGetHeaderAttributesNE.c)
 *     AslpFileGetHeaderAttributesPE @ 0x14096DB98 (AslpFileGetHeaderAttributesPE.c)
 *     AslpFileGetPeExportNameExeWrapper @ 0x14096E004 (AslpFileGetPeExportNameExeWrapper.c)
 * Callees:
 *     RtlFileMapMapView @ 0x1403BCDB4 (RtlFileMapMapView.c)
 *     AslLogCallPrintf @ 0x14074F1A4 (AslLogCallPrintf.c)
 *     AslpFileMappingGetFileKind @ 0x1407AEC78 (AslpFileMappingGetFileKind.c)
 */

__int64 __fastcall AslFileMappingEnsure(__int64 a1)
{
  int FileKind; // edi
  _DWORD *v4; // rsi

  if ( !*(_DWORD *)(a1 + 80) )
  {
    if ( *(_QWORD *)(a1 + 32) )
      return 0;
    v4 = (_DWORD *)(a1 + 64);
    if ( *(_DWORD *)(a1 + 64) != 1 )
    {
      FileKind = RtlFileMapMapView(a1 + 8, 0);
      if ( FileKind >= 0 )
      {
        if ( *(_BYTE *)(a1 + 59) )
        {
          *v4 = 6;
        }
        else
        {
          FileKind = AslpFileMappingGetFileKind(a1 + 8, v4);
          if ( FileKind < 0 )
          {
            AslLogCallPrintf(1LL);
            *v4 = 3;
          }
        }
      }
      return (unsigned int)FileKind;
    }
    return 3221225758LL;
  }
  if ( *(_DWORD *)(a1 + 64) == 1 )
    return 3221225758LL;
  return *(_QWORD *)(a1 + 32) == 0LL ? 0xC000046D : 0;
}
