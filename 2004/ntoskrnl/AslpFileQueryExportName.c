/*
 * XREFs of AslpFileQueryExportName @ 0x140968748
 * Callers:
 *     AslpFileGetExportName @ 0x140967ADC (AslpFileGetExportName.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x14027C310 (RtlImageDirectoryEntryToData.c)
 *     RtlStringCchCopyA @ 0x140356B64 (RtlStringCchCopyA.c)
 *     AslLogCallPrintf @ 0x1407405C4 (AslLogCallPrintf.c)
 *     AslpFileGetImageNtHeader @ 0x140967FF4 (AslpFileGetImageNtHeader.c)
 *     AslpImageRvaToVa @ 0x140968990 (AslpImageRvaToVa.c)
 */

__int64 __fastcall AslpFileQueryExportName(NTSTRSAFE_PSTR pszDest, __int64 a2)
{
  int v4; // edx
  int ImageNtHeader; // ebx
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rdx
  const char *v8; // rax
  unsigned int v9; // ecx
  unsigned int v11; // [rsp+50h] [rbp+8h] BYREF
  __int64 v12; // [rsp+60h] [rbp+18h] BYREF

  v11 = 0;
  v12 = 0LL;
  *pszDest = 0;
  ImageNtHeader = AslpFileGetImageNtHeader(&v12, a2);
  if ( ImageNtHeader < 0 )
    goto LABEL_2;
  LOBYTE(v4) = *(_BYTE *)(a2 + 59);
  v6 = RtlImageDirectoryEntryToData(*(_QWORD *)(a2 + 32), v4, 0, (int)&v11);
  if ( !v6 || v11 < 0x28 )
  {
    ImageNtHeader = -1073741275;
    if ( !v6 )
      return (unsigned int)ImageNtHeader;
LABEL_17:
    AslLogCallPrintf(2LL);
    return (unsigned int)ImageNtHeader;
  }
  v7 = *(_QWORD *)(a2 + 32);
  if ( v6 < v7 || v6 + 40 > *(_QWORD *)(a2 + 24) + v7 )
  {
    ImageNtHeader = -1073741701;
    goto LABEL_17;
  }
  v8 = (const char *)AslpImageRvaToVa(v12, a2 + 8, *(unsigned int *)(v6 + 12));
  if ( !v8 || (unsigned __int64)v8 >= *(_QWORD *)(a2 + 32) + *(_QWORD *)(a2 + 24) || !*v8 )
  {
    ImageNtHeader = -1073741701;
    goto LABEL_17;
  }
  v9 = *(_DWORD *)(a2 + 32) + *(_DWORD *)(a2 + 24) - (_DWORD)v8;
  if ( v9 > 0x100 )
    v9 = 256;
  ImageNtHeader = RtlStringCchCopyA(pszDest, v9, v8);
  if ( ImageNtHeader >= 0 )
    return 0;
LABEL_2:
  AslLogCallPrintf(1LL);
  return (unsigned int)ImageNtHeader;
}
