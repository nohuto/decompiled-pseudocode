/*
 * XREFs of AslpFileQueryExportName_Vb @ 0x1405D226C
 * Callers:
 *     AslpFileGetExportName @ 0x14096B144 (AslpFileGetExportName.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x1402532D0 (RtlImageDirectoryEntryToData.c)
 *     RtlStringCchCopyA @ 0x1402C8734 (RtlStringCchCopyA.c)
 *     AslLogCallPrintf @ 0x140755F64 (AslLogCallPrintf.c)
 *     AslpFileGetImageNtHeader @ 0x14096B664 (AslpFileGetImageNtHeader.c)
 *     AslpImageRvaToVa @ 0x14096BE78 (AslpImageRvaToVa.c)
 */

__int64 __fastcall AslpFileQueryExportName_Vb(NTSTRSAFE_PSTR pszDest, __int64 a2)
{
  int v4; // edx
  NTSTATUS ImageNtHeader; // ebx
  const char *v6; // r9
  int v7; // r8d
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdx
  const char *v10; // rax
  unsigned int v11; // ecx
  const char *v12; // r9
  int v13; // r8d
  unsigned int v15; // [rsp+50h] [rbp+8h] BYREF
  __int64 v16; // [rsp+60h] [rbp+18h] BYREF

  v15 = 0;
  v16 = 0LL;
  *pszDest = 0;
  ImageNtHeader = AslpFileGetImageNtHeader(&v16);
  if ( ImageNtHeader < 0 )
  {
    v6 = "AslpFileGetImageNtHeader failed [%x]";
    v7 = 4347;
    goto LABEL_3;
  }
  LOBYTE(v4) = *(_BYTE *)(a2 + 59);
  v8 = RtlImageDirectoryEntryToData(*(_QWORD *)(a2 + 32), v4, 0, (int)&v15);
  if ( !v8 || v15 < 0x28 )
  {
    ImageNtHeader = -1073741275;
    if ( !v8 )
      return (unsigned int)ImageNtHeader;
    v12 = "RtlImageDirectoryEntryToData returned ExportDirectory that was too small";
    v13 = 4364;
LABEL_20:
    AslLogCallPrintf(2, (unsigned int)"AslpFileQueryExportName_Vb", v13, (_DWORD)v12);
    return (unsigned int)ImageNtHeader;
  }
  v9 = *(_QWORD *)(a2 + 32);
  if ( v8 < v9 || v8 + 40 > *(_QWORD *)(a2 + 24) + v9 )
  {
    ImageNtHeader = -1073741701;
    v12 = "Export directory pointer invalid (points to location outside file), invalid image format";
    v13 = 4378;
    goto LABEL_20;
  }
  v10 = (const char *)AslpImageRvaToVa(v16, a2 + 8, *(unsigned int *)(v8 + 12));
  if ( !v10 || (unsigned __int64)v10 >= *(_QWORD *)(a2 + 32) + *(_QWORD *)(a2 + 24) || !*v10 )
  {
    ImageNtHeader = -1073741701;
    v12 = "Export directory invalid or invalid image format";
    v13 = 4387;
    goto LABEL_20;
  }
  v11 = *(_DWORD *)(a2 + 32) + *(_DWORD *)(a2 + 24) - (_DWORD)v10;
  if ( v11 > 0x100 )
    v11 = 256;
  ImageNtHeader = RtlStringCchCopyA(pszDest, v11, v10);
  if ( ImageNtHeader >= 0 )
    return 0;
  v6 = "RtlStringCchCopyA failed [%x]";
  v7 = 4399;
LABEL_3:
  AslLogCallPrintf(1, (unsigned int)"AslpFileQueryExportName_Vb", v7, (_DWORD)v6);
  return (unsigned int)ImageNtHeader;
}
