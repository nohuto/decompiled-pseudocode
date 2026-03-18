/*
 * XREFs of AslFileMappingEnsure @ 0x14079E97C
 * Callers:
 *     AslFileAllocAndGetAttributes @ 0x14079E850 (AslFileAllocAndGetAttributes.c)
 *     AslpFileGetVersionBlock @ 0x14079F2D8 (AslpFileGetVersionBlock.c)
 *     AslFileMappingGetFileKindDetail @ 0x1409649FC (AslFileMappingGetFileKindDetail.c)
 *     AslFileMappingGetImageTypeEx @ 0x140964BC0 (AslFileMappingGetImageTypeEx.c)
 *     AslpFileGetClrVersionAttribute @ 0x140967718 (AslpFileGetClrVersionAttribute.c)
 *     AslpFileGetHeaderAttributesNE @ 0x140967C2C (AslpFileGetHeaderAttributesNE.c)
 *     AslpFileGetHeaderAttributesPE @ 0x140967DC8 (AslpFileGetHeaderAttributesPE.c)
 *     AslpFileGetPeExportNameExeWrapper @ 0x140968234 (AslpFileGetPeExportNameExeWrapper.c)
 * Callees:
 *     RtlFileMapMapView @ 0x1403BA934 (RtlFileMapMapView.c)
 *     AslLogCallPrintf @ 0x1407405C4 (AslLogCallPrintf.c)
 *     AslpFileMappingGetFileKind @ 0x14079F948 (AslpFileMappingGetFileKind.c)
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
