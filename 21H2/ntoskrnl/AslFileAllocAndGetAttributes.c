/*
 * XREFs of AslFileAllocAndGetAttributes @ 0x14084192C
 * Callers:
 *     SdbpCheckAllAttributes @ 0x140841610 (SdbpCheckAllAttributes.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1406E0C3C (AslLogCallPrintf.c)
 *     AslFileMappingEnsure @ 0x140841A58 (AslFileMappingEnsure.c)
 *     AslpFileGetVersionAttributes @ 0x140841AE8 (AslpFileGetVersionAttributes.c)
 *     AslpFileGetChecksumAttributes @ 0x140A18724 (AslpFileGetChecksumAttributes.c)
 *     AslpFileGetClrVersionAttribute @ 0x140A18AA0 (AslpFileGetClrVersionAttribute.c)
 *     AslpFileGetFileKindDetailAttribute @ 0x140A18F30 (AslpFileGetFileKindDetailAttribute.c)
 *     AslpFileGetHeaderAttributesNE @ 0x140A18FB4 (AslpFileGetHeaderAttributesNE.c)
 *     AslpFileGetHeaderAttributesPE @ 0x140A19154 (AslpFileGetHeaderAttributesPE.c)
 *     AslpFileGetPeExportNameExeWrapper @ 0x140A19614 (AslpFileGetPeExportNameExeWrapper.c)
 *     AslpFileLargeEnsureLargeFileMapping @ 0x140A19DE8 (AslpFileLargeEnsureLargeFileMapping.c)
 */

__int64 __fastcall AslFileAllocAndGetAttributes(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  int v5; // eax
  int PeExportNameExeWrapper; // ebx
  unsigned int v7; // edi
  __int64 j; // r13
  int VersionAttributes; // eax
  int v11; // edx
  int *i; // rcx
  int v13; // eax
  int v14; // eax
  unsigned int v15; // eax
  _DWORD *v16; // rcx
  __int64 v17; // rax
  bool v18; // zf
  __int64 v19; // rax

  if ( !a3 )
    return 0;
  if ( *(_DWORD *)(a2 + 64) == 1 )
  {
    v11 = 0;
    for ( i = (int *)(a1 + 24); ; i += 8 )
    {
      v13 = *i;
      if ( !v11 || v11 == 17 )
        break;
      if ( v11 == 28 )
      {
        *((_QWORD *)i - 1) = 1LL;
LABEL_30:
        *(i - 6) = 2;
        v14 = v13 | 1;
        *((_QWORD *)i - 2) = 4LL;
        goto LABEL_31;
      }
      v14 = v13 | 2;
LABEL_31:
      *i = v14;
      if ( ++v11 >= 34 )
        return 0;
    }
    *((_QWORD *)i - 1) = 0LL;
    goto LABEL_30;
  }
  if ( *(_DWORD *)(a2 + 80) )
  {
    v15 = 0;
    v16 = (_DWORD *)(a1 + 24);
    do
    {
      if ( v15 != 1 && (v15 <= 0x10 || v15 > 0x13 && v15 != 22 && (v15 <= 0x1B || v15 > 0x1F && v15 != 33)) )
        *v16 |= 2u;
      ++v15;
      v16 += 8;
    }
    while ( (int)v15 < 34 );
  }
  v5 = AslFileMappingEnsure(a2);
  PeExportNameExeWrapper = v5;
  if ( v5 == -1073741801 )
  {
    if ( !*(_DWORD *)(a2 + 80) )
    {
      PeExportNameExeWrapper = AslpFileLargeEnsureLargeFileMapping(a1, a2);
      if ( PeExportNameExeWrapper >= 0 )
        goto LABEL_6;
    }
LABEL_46:
    AslLogCallPrintf(1LL);
    return (unsigned int)PeExportNameExeWrapper;
  }
  if ( v5 < 0 )
    goto LABEL_46;
LABEL_6:
  v7 = 0;
  for ( j = 0LL; ; j += 32LL )
  {
    if ( ((a3 >> v7) & 1) == 0 || (*(_DWORD *)(a1 + j + 24) & 3) != 0 )
      goto LABEL_8;
    if ( v7 <= 0x17 )
      break;
    switch ( v7 )
    {
      case 0x18u:
        goto LABEL_19;
      case 0x19u:
LABEL_78:
        PeExportNameExeWrapper = AslpFileGetPeExportNameExeWrapper(a1, a2);
        if ( PeExportNameExeWrapper < 0 )
          goto LABEL_46;
        goto LABEL_8;
      case 0x1Au:
LABEL_76:
        PeExportNameExeWrapper = AslpFileGetChecksumAttributes(a1, a2);
        if ( PeExportNameExeWrapper < 0 )
          goto LABEL_46;
        goto LABEL_8;
      case 0x1Bu:
        PeExportNameExeWrapper = AslpFileGetClrVersionAttribute(a1, a2);
        if ( PeExportNameExeWrapper < 0 )
          goto LABEL_46;
        goto LABEL_8;
      case 0x1Cu:
        PeExportNameExeWrapper = AslpFileGetFileKindDetailAttribute(a1, a2);
        if ( PeExportNameExeWrapper < 0 )
          goto LABEL_46;
        goto LABEL_8;
    }
    if ( v7 <= 0x1F )
      goto LABEL_60;
    if ( v7 != 32 )
    {
      v18 = v7 == 33;
      goto LABEL_59;
    }
LABEL_71:
    v19 = *(_QWORD *)(a2 + 24);
    *(_DWORD *)(a1 + 1048) |= 1u;
    *(_DWORD *)(a1 + 24) |= 1u;
    *(_QWORD *)(a1 + 16) = (unsigned int)v19;
    *(_DWORD *)(a1 + 1024) = 3;
    *(_QWORD *)(a1 + 1032) = 8LL;
    *(_QWORD *)(a1 + 1040) = v19;
    *(_DWORD *)a1 = 2;
    *(_QWORD *)(a1 + 8) = 4LL;
LABEL_8:
    if ( (int)++v7 >= 34 )
      return 0;
  }
  if ( v7 == 23 )
    goto LABEL_78;
  if ( v7 <= 0x11 )
  {
    if ( v7 == 17 )
    {
      switch ( *(_DWORD *)(a2 + 64) )
      {
        case 4:
          v17 = 1LL;
          break;
        case 5:
          v17 = 2LL;
          break;
        case 6:
          v17 = 3LL;
          break;
        default:
          v17 = 0LL;
          break;
      }
      *(_DWORD *)(a1 + 568) |= 1u;
      *(_DWORD *)(a1 + 544) = 2;
      *(_QWORD *)(a1 + 552) = 4LL;
      *(_QWORD *)(a1 + 560) = v17;
      goto LABEL_8;
    }
    if ( v7 )
    {
      if ( v7 == 1 )
        goto LABEL_60;
      if ( v7 == 2 )
        goto LABEL_76;
LABEL_19:
      VersionAttributes = AslpFileGetVersionAttributes(a1, a2);
      if ( (unsigned int)(VersionAttributes + 1073741684) <= 0x3FFFFF73 || VersionAttributes <= -1073741688 )
        AslLogCallPrintf(1LL);
      goto LABEL_8;
    }
    goto LABEL_71;
  }
  if ( v7 <= 0x13 )
    goto LABEL_60;
  if ( v7 <= 0x15 )
  {
    PeExportNameExeWrapper = AslpFileGetHeaderAttributesNE(a1, a2);
    if ( PeExportNameExeWrapper < 0 )
      goto LABEL_46;
    goto LABEL_8;
  }
  v18 = v7 == 22;
LABEL_59:
  if ( v18 )
  {
LABEL_60:
    PeExportNameExeWrapper = AslpFileGetHeaderAttributesPE(a1, a2);
    if ( PeExportNameExeWrapper < 0 )
      goto LABEL_46;
    goto LABEL_8;
  }
  return (unsigned int)-1073741595;
}
