/*
 * XREFs of AslFileAllocAndGetAttributes @ 0x1407B2664
 * Callers:
 *     SdbpCheckAllAttributes @ 0x1407B219C (SdbpCheckAllAttributes.c)
 * Callees:
 *     AslLogCallPrintf @ 0x140756124 (AslLogCallPrintf.c)
 *     AslFileMappingEnsure @ 0x1407B2A68 (AslFileMappingEnsure.c)
 *     AslpFileGetVersionAttributes @ 0x1407B2AF8 (AslpFileGetVersionAttributes.c)
 *     AslFileResourceNotFound @ 0x140967E74 (AslFileResourceNotFound.c)
 *     AslpFileGetChecksumAttributes @ 0x14096ABD4 (AslpFileGetChecksumAttributes.c)
 *     AslpFileGetClrVersionAttribute @ 0x14096AF60 (AslpFileGetClrVersionAttribute.c)
 *     AslpFileGetFileKindDetailAttribute @ 0x14096B3F0 (AslpFileGetFileKindDetailAttribute.c)
 *     AslpFileGetHeaderAttributesNE @ 0x14096B474 (AslpFileGetHeaderAttributesNE.c)
 *     AslpFileGetHeaderAttributesPE @ 0x14096B614 (AslpFileGetHeaderAttributesPE.c)
 *     AslpFileGetModuleType @ 0x14096B920 (AslpFileGetModuleType.c)
 *     AslpFileGetPeExportNameExeWrapper @ 0x14096BAC0 (AslpFileGetPeExportNameExeWrapper.c)
 *     AslpFileLargeEnsureLargeFileMapping @ 0x14096C0D4 (AslpFileLargeEnsureLargeFileMapping.c)
 */

__int64 __fastcall AslFileAllocAndGetAttributes(__int64 a1, _DWORD *a2, unsigned __int64 a3)
{
  _DWORD *v3; // rbp
  int PeExportNameExeWrapper; // ebx
  int v6; // edx
  int *i; // rcx
  int v8; // eax
  int v9; // eax
  int v10; // ecx
  int v11; // eax
  int v12; // esi
  __int64 j; // r13
  int VersionAttributes; // eax
  __int64 v16; // rax
  bool v17; // zf
  __int64 v18; // rax
  unsigned int v20; // [rsp+88h] [rbp+20h] BYREF

  v3 = a2;
  v20 = 0;
  if ( a3 )
  {
    if ( a2[16] == 1 )
    {
      v6 = 0;
      for ( i = (int *)(a1 + 24); ; i += 8 )
      {
        v8 = *i;
        if ( !v6 || v6 == 17 )
          break;
        if ( v6 == 28 )
        {
          *((_QWORD *)i - 1) = 1LL;
LABEL_11:
          *(i - 6) = 2;
          v9 = v8 | 1;
          *((_QWORD *)i - 2) = 4LL;
          goto LABEL_12;
        }
        v9 = v8 | 2;
LABEL_12:
        *i = v9;
        if ( ++v6 >= 35 )
          return 0;
      }
      *((_QWORD *)i - 1) = 0LL;
      goto LABEL_11;
    }
    if ( a2[20] )
    {
      v10 = 0;
      a2 = (_DWORD *)(a1 + 24);
      do
      {
        if ( v10 > 22 )
        {
          if ( v10 >= 28 && v10 <= 31 )
            goto LABEL_25;
        }
        else if ( v10 == 22 || v10 == 1 || v10 > 16 && v10 <= 19 )
        {
          goto LABEL_25;
        }
        *a2 |= 2u;
LABEL_25:
        ++v10;
        a2 += 8;
      }
      while ( v10 < 35 );
    }
    v11 = AslFileMappingEnsure(v3, a2);
    PeExportNameExeWrapper = v11;
    if ( v11 == -1073741801 )
    {
      if ( v3[20] )
        goto LABEL_29;
      PeExportNameExeWrapper = AslpFileLargeEnsureLargeFileMapping(a1, v3);
      if ( PeExportNameExeWrapper < 0 )
        goto LABEL_29;
    }
    else if ( v11 < 0 )
    {
LABEL_29:
      AslLogCallPrintf(1LL);
      return (unsigned int)PeExportNameExeWrapper;
    }
    v12 = 0;
    for ( j = 0LL; ; j += 32LL )
    {
      if ( ((a3 >> v12) & 1) != 0 && (*(_DWORD *)(a1 + j + 24) & 3) == 0 )
      {
        if ( v12 > 23 )
        {
          switch ( v12 )
          {
            case 24:
              goto LABEL_43;
            case 25:
              PeExportNameExeWrapper = AslpFileGetPeExportNameExeWrapper(a1, v3);
              if ( PeExportNameExeWrapper < 0 )
                goto LABEL_29;
              goto LABEL_46;
            case 26:
LABEL_74:
              PeExportNameExeWrapper = AslpFileGetChecksumAttributes(a1, v3);
              if ( PeExportNameExeWrapper < 0 )
                goto LABEL_29;
              goto LABEL_46;
            case 27:
              PeExportNameExeWrapper = AslpFileGetClrVersionAttribute(a1, v3);
              if ( PeExportNameExeWrapper < 0 )
                goto LABEL_29;
              goto LABEL_46;
            case 28:
              PeExportNameExeWrapper = AslpFileGetFileKindDetailAttribute(a1, v3);
              if ( PeExportNameExeWrapper < 0 )
                goto LABEL_29;
              goto LABEL_46;
          }
          if ( v12 <= 31 )
            goto LABEL_55;
          if ( v12 != 32 )
          {
            v17 = v12 == 33;
            goto LABEL_54;
          }
        }
        else
        {
          if ( v12 == 23 )
          {
            PeExportNameExeWrapper = AslpFileGetPeExportNameExeWrapper(a1, v3);
            if ( PeExportNameExeWrapper < 0 )
              goto LABEL_29;
            goto LABEL_46;
          }
          if ( v12 > 17 )
          {
            if ( v12 > 19 )
            {
              if ( v12 <= 21 )
              {
                PeExportNameExeWrapper = AslpFileGetHeaderAttributesNE(a1, v3);
                if ( PeExportNameExeWrapper < 0 )
                  goto LABEL_29;
                goto LABEL_46;
              }
              v17 = v12 == 22;
LABEL_54:
              if ( !v17 )
                return (unsigned int)-1073741595;
            }
LABEL_55:
            PeExportNameExeWrapper = AslpFileGetHeaderAttributesPE(a1, v3);
            if ( PeExportNameExeWrapper < 0 )
              goto LABEL_29;
            goto LABEL_46;
          }
          if ( v12 == 17 )
          {
            PeExportNameExeWrapper = AslpFileGetModuleType(&v20, v3);
            if ( PeExportNameExeWrapper < 0 )
              goto LABEL_29;
            v16 = v20;
            *(_DWORD *)(a1 + 568) |= 1u;
            *(_QWORD *)(a1 + 560) = v16;
            *(_DWORD *)(a1 + 544) = 2;
            *(_QWORD *)(a1 + 552) = 4LL;
            goto LABEL_46;
          }
          if ( v12 )
          {
            if ( v12 == 1 )
              goto LABEL_55;
            if ( v12 == 2 )
              goto LABEL_74;
            if ( (unsigned int)(v12 - 3) > 0xD )
              return (unsigned int)-1073741595;
LABEL_43:
            VersionAttributes = AslpFileGetVersionAttributes(a1, v3);
            if ( VersionAttributes < 0
              && !(unsigned int)AslFileResourceNotFound(
                                  (unsigned int)VersionAttributes,
                                  (unsigned int)VersionAttributes) )
            {
              AslLogCallPrintf(1LL);
            }
            goto LABEL_46;
          }
        }
        v18 = *((_QWORD *)v3 + 3);
        *(_DWORD *)(a1 + 1048) |= 1u;
        *(_DWORD *)(a1 + 24) |= 1u;
        *(_QWORD *)(a1 + 16) = (unsigned int)v18;
        *(_DWORD *)(a1 + 1024) = 3;
        *(_QWORD *)(a1 + 1032) = 8LL;
        *(_QWORD *)(a1 + 1040) = v18;
        *(_DWORD *)a1 = 2;
        *(_QWORD *)(a1 + 8) = 4LL;
      }
LABEL_46:
      if ( ++v12 >= 35 )
        return 0;
    }
  }
  return 0;
}
