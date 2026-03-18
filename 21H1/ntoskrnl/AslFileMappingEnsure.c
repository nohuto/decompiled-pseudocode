/*
 * XREFs of AslFileMappingEnsure @ 0x14079A5AC
 * Callers:
 *     AslFileAllocAndGetAttributes @ 0x14079A480 (AslFileAllocAndGetAttributes.c)
 *     AslpFileGetVersionBlock @ 0x14079AF08 (AslpFileGetVersionBlock.c)
 *     AslFileMappingGetFileKindDetail @ 0x14096365C (AslFileMappingGetFileKindDetail.c)
 *     AslFileMappingGetImageTypeEx @ 0x140963820 (AslFileMappingGetImageTypeEx.c)
 *     AslpFileGetClrVersionAttribute @ 0x140966378 (AslpFileGetClrVersionAttribute.c)
 *     AslpFileGetHeaderAttributesNE @ 0x14096688C (AslpFileGetHeaderAttributesNE.c)
 *     AslpFileGetHeaderAttributesPE @ 0x140966A28 (AslpFileGetHeaderAttributesPE.c)
 *     AslpFileGetPeExportNameExeWrapper @ 0x140966E94 (AslpFileGetPeExportNameExeWrapper.c)
 * Callees:
 *     RtlFileMapMapView @ 0x1403B95C4 (RtlFileMapMapView.c)
 *     AslLogCallPrintf @ 0x14073EA44 (AslLogCallPrintf.c)
 *     AslpFileMappingGetFileKind @ 0x14079B578 (AslpFileMappingGetFileKind.c)
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
