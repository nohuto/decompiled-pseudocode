/*
 * XREFs of SdbpCheckMatchingFiles @ 0x14074D860
 * Callers:
 *     <none>
 * Callees:
 *     SdbpInitializeSearchDBContext @ 0x14074CBA8 (SdbpInitializeSearchDBContext.c)
 *     SdbpResolveMatchingFile @ 0x14074CD7C (SdbpResolveMatchingFile.c)
 *     AslFree @ 0x14074DA50 (AslFree.c)
 *     AslLogCallPrintf @ 0x14074F1A4 (AslLogCallPrintf.c)
 *     AslFileNotFound @ 0x14074F568 (AslFileNotFound.c)
 *     AslFileMappingDelete @ 0x14074F594 (AslFileMappingDelete.c)
 *     SdbGetStringTagPtr @ 0x14074F7B0 (SdbGetStringTagPtr.c)
 *     AslFileMappingCreate @ 0x140751C28 (AslFileMappingCreate.c)
 *     SdbFindFirstTag @ 0x1407533B4 (SdbFindFirstTag.c)
 *     SdbpCheckAllAttributes @ 0x1407AD86C (SdbpCheckAllAttributes.c)
 */

__int64 __fastcall SdbpCheckMatchingFiles(int *a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5, _QWORD *P)
{
  __int64 v6; // rsi
  unsigned int v7; // ebx
  int v9; // r15d
  __int64 v10; // r14
  PVOID v11; // r13
  unsigned int FirstTag; // eax
  unsigned __int16 *StringTagPtr; // r12
  __int64 v14; // rdx
  int v15; // eax
  int *v16; // r8
  int v17; // r15d
  __int64 v18; // rcx
  unsigned __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rcx
  unsigned int v23; // eax
  int v24; // ecx
  const char *v25; // r9
  int v26; // r8d
  __int64 v27; // rcx
  int v28; // [rsp+30h] [rbp-20h] BYREF
  __int64 v29; // [rsp+38h] [rbp-18h] BYREF
  __int64 v30; // [rsp+40h] [rbp-10h]
  int *v31; // [rsp+48h] [rbp-8h]
  int v34; // [rsp+A0h] [rbp+50h]

  v34 = a3;
  v6 = (__int64)P;
  v7 = 0;
  v28 = 0;
  v9 = a2;
  v29 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  if ( P[11] )
  {
    v28 = 1;
    goto LABEL_18;
  }
  FirstTag = SdbFindFirstTag(a3, a5, 24577LL);
  if ( FirstTag )
  {
    StringTagPtr = (unsigned __int16 *)SdbGetStringTagPtr(a3, FirstTag);
    if ( StringTagPtr )
    {
      if ( *(_QWORD *)(v6 + 8) && *StringTagPtr == 42 )
      {
        v23 = SdbpCheckAllAttributes((unsigned int)&v28, v9, a3, a5, *(_QWORD *)(v6 + 8));
        if ( (unsigned int)AslFileNotFound(v23) || v24 >= 0 )
          v7 = 1;
        else
          AslLogCallPrintf(
            1,
            (unsigned int)"SdbpCheckMatchingFiles",
            2461,
            (unsigned int)"Failed to check file attributes [%x]");
        goto LABEL_19;
      }
      v14 = -1LL;
      do
        ++v14;
      while ( StringTagPtr[v14] );
      v15 = *(_DWORD *)v6;
      v30 = v14;
      if ( (v15 & 1) != 0 )
        goto LABEL_10;
      if ( (unsigned int)SdbpInitializeSearchDBContext(v6) )
      {
        LODWORD(v14) = v30;
LABEL_10:
        v16 = *(int **)(v6 + 72);
        v17 = 0;
        v31 = v16;
        if ( *v16 <= 0 )
          goto LABEL_15;
        while ( 1 )
        {
          if ( !(unsigned int)SdbpResolveMatchingFile(a2, v6, StringTagPtr, v14, (__int64)&v16[12 * v17 + 2], &v29) )
          {
            AslLogCallPrintf(
              1,
              (unsigned int)"SdbpCheckMatchingFiles",
              2511,
              (unsigned int)"Failed to resolve matching file");
            v10 = v29;
            goto LABEL_19;
          }
          v10 = v29;
          P = 0LL;
          if ( (int)AslFileMappingCreate((unsigned int)&P, v29, 0, 0, 0LL) >= 0 )
          {
            v11 = P;
            if ( (int)SdbpCheckAllAttributes((unsigned int)&v28, a2, v34, a5, (__int64)P) >= 0 )
            {
              if ( v17 > 0 )
                *(_DWORD *)(v6 + 80) = 1;
LABEL_15:
              v19 = *StringTagPtr;
              LOWORD(v19) = v19 - 37;
              if ( (unsigned __int16)v19 <= 0x37u )
              {
                v20 = 0x80000000000201LL;
                if ( _bittest64(&v20, v19) )
                  *(_DWORD *)(v6 + 80) = 1;
              }
LABEL_18:
              v7 = 1;
              goto LABEL_19;
            }
            AslFileMappingDelete(v11);
            v11 = 0LL;
            AslFree(v27, v10);
          }
          else
          {
            AslFree(v18, v10);
            v11 = P;
          }
          v16 = v31;
          ++v17;
          LODWORD(v14) = v30;
          v10 = 0LL;
          v29 = 0LL;
          if ( v17 >= *v31 )
            goto LABEL_15;
        }
      }
      v25 = "Failed to initialize SEARCHDBCONTEXT";
      v26 = 2487;
    }
    else
    {
      v25 = "Failed to get the string from the database";
      v26 = 2436;
    }
    AslLogCallPrintf(1, (unsigned int)"SdbpCheckMatchingFiles", v26, (_DWORD)v25);
  }
LABEL_19:
  AslFileMappingDelete(v11);
  AslFree(v21, v10);
  *a1 = v28;
  return v7;
}
