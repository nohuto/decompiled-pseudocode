/*
 * XREFs of AslpFileQueryExportName_Vb @ 0x1405D226C
 * Callers:
 *     AslpFileGetExportName @ 0x14096B324 (AslpFileGetExportName.c)
 * Callees:
 *     RtlStringCchCopyA @ 0x140246F94 (RtlStringCchCopyA.c)
 *     RtlImageDirectoryEntryToData @ 0x140286140 (RtlImageDirectoryEntryToData.c)
 *     AslLogCallPrintf @ 0x140756124 (AslLogCallPrintf.c)
 *     AslpFileGetImageNtHeader @ 0x14096B844 (AslpFileGetImageNtHeader.c)
 *     AslpImageRvaToVa @ 0x14096C058 (AslpImageRvaToVa.c)
 */

__int64 __fastcall AslpFileQueryExportName_Vb(NTSTRSAFE_PSTR pszDest, __int64 a2)
{
  NTSTATUS ImageNtHeader; // ebx
  const char *v5; // r9
  int v6; // r8d
  unsigned int *v7; // rax
  unsigned __int64 v8; // rdx
  const char *v9; // rax
  unsigned int v10; // ecx
  const char *v11; // r9
  int v12; // r8d
  ULONG Size; // [rsp+50h] [rbp+8h] BYREF
  __int64 v15; // [rsp+60h] [rbp+18h] BYREF

  Size = 0;
  v15 = 0LL;
  *pszDest = 0;
  ImageNtHeader = AslpFileGetImageNtHeader(&v15);
  if ( ImageNtHeader < 0 )
  {
    v5 = "AslpFileGetImageNtHeader failed [%x]";
    v6 = 4347;
    goto LABEL_3;
  }
  v7 = (unsigned int *)RtlImageDirectoryEntryToData(*(PVOID *)(a2 + 32), *(_BYTE *)(a2 + 59), 0, &Size);
  if ( !v7 || Size < 0x28 )
  {
    ImageNtHeader = -1073741275;
    if ( !v7 )
      return (unsigned int)ImageNtHeader;
    v11 = "RtlImageDirectoryEntryToData returned ExportDirectory that was too small";
    v12 = 4364;
LABEL_20:
    AslLogCallPrintf(2, (unsigned int)"AslpFileQueryExportName_Vb", v12, (_DWORD)v11);
    return (unsigned int)ImageNtHeader;
  }
  v8 = *(_QWORD *)(a2 + 32);
  if ( (unsigned __int64)v7 < v8 || (unsigned __int64)(v7 + 10) > *(_QWORD *)(a2 + 24) + v8 )
  {
    ImageNtHeader = -1073741701;
    v11 = "Export directory pointer invalid (points to location outside file), invalid image format";
    v12 = 4378;
    goto LABEL_20;
  }
  v9 = (const char *)AslpImageRvaToVa(v15, a2 + 8, v7[3]);
  if ( !v9 || (unsigned __int64)v9 >= *(_QWORD *)(a2 + 32) + *(_QWORD *)(a2 + 24) || !*v9 )
  {
    ImageNtHeader = -1073741701;
    v11 = "Export directory invalid or invalid image format";
    v12 = 4387;
    goto LABEL_20;
  }
  v10 = *(_DWORD *)(a2 + 32) + *(_DWORD *)(a2 + 24) - (_DWORD)v9;
  if ( v10 > 0x100 )
    v10 = 256;
  ImageNtHeader = RtlStringCchCopyA(pszDest, v10, v9);
  if ( ImageNtHeader >= 0 )
    return 0;
  v5 = "RtlStringCchCopyA failed [%x]";
  v6 = 4399;
LABEL_3:
  AslLogCallPrintf(1, (unsigned int)"AslpFileQueryExportName_Vb", v6, (_DWORD)v5);
  return (unsigned int)ImageNtHeader;
}
