/*
 * XREFs of AslpFileGetExeWrapper @ 0x1409665A8
 * Callers:
 *     AslpFileGetPeExportNameExeWrapper @ 0x140966E94 (AslpFileGetPeExportNameExeWrapper.c)
 * Callees:
 *     AslLogCallPrintf @ 0x14073EA44 (AslLogCallPrintf.c)
 *     AslpFileGetImageNtHeader @ 0x140966C54 (AslpFileGetImageNtHeader.c)
 *     AslpFileHasActiveMarkWrapper @ 0x140966FB8 (AslpFileHasActiveMarkWrapper.c)
 *     AslpFileHasSecuromWrapper @ 0x1409670F8 (AslpFileHasSecuromWrapper.c)
 *     AslpHasStarForceWrapper @ 0x14096756C (AslpHasStarForceWrapper.c)
 */

__int64 __fastcall AslpFileGetExeWrapper(_DWORD *a1, __int64 a2)
{
  int ImageNtHeader; // ebx
  __int64 v6; // rdi
  int v7; // [rsp+60h] [rbp+8h] BYREF
  __int64 v8; // [rsp+68h] [rbp+10h] BYREF

  v7 = 0;
  *a1 = 0;
  v8 = 0LL;
  if ( *(_QWORD *)(a2 + 24) >= 0x100000000uLL )
    return 0LL;
  ImageNtHeader = AslpFileGetImageNtHeader(&v8, a2);
  if ( ImageNtHeader < 0 )
    goto LABEL_4;
  v6 = v8;
  if ( (unsigned int)AslpFileHasSecuromWrapper(v8) )
  {
    *a1 = 1;
    return 0;
  }
  ImageNtHeader = AslpFileHasActiveMarkWrapper(&v7, v6, a2);
  if ( ImageNtHeader >= 0 )
  {
    if ( v7 )
    {
      *a1 = 2;
    }
    else if ( *(_DWORD *)v6 == 17744 && *(_BYTE *)(v6 + 26) == 83 && *(_BYTE *)(v6 + 27) == 82 )
    {
      *a1 = 3;
    }
    else if ( (unsigned int)AslpHasStarForceWrapper(v6) )
    {
      *a1 = 4;
    }
    return 0;
  }
  if ( ImageNtHeader == -1073741275 )
  {
    AslLogCallPrintf(2LL);
    return (unsigned int)ImageNtHeader;
  }
LABEL_4:
  AslLogCallPrintf(1LL);
  return (unsigned int)ImageNtHeader;
}
