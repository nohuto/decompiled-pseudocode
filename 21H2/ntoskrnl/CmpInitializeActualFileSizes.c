/*
 * XREFs of CmpInitializeActualFileSizes @ 0x1406FC494
 * Callers:
 *     HvLoadHive @ 0x1406FA774 (HvLoadHive.c)
 *     CmpMountPreloadedHives @ 0x1407AADF4 (CmpMountPreloadedHives.c)
 * Callees:
 *     CmpGetFileSize @ 0x1406FC5AC (CmpGetFileSize.c)
 *     HvpLogTypeToLogArrayIndex @ 0x1406FC688 (HvpLogTypeToLogArrayIndex.c)
 *     CmpLogFailureToGetFileSize @ 0x140876974 (CmpLogFailureToGetFileSize.c)
 */

__int64 __fastcall CmpInitializeActualFileSizes(__int64 a1, _DWORD *a2)
{
  int FileSize; // eax
  __int64 v5; // rcx
  unsigned int v6; // edi
  __int64 v7; // rcx
  __int64 v8; // rax
  int v9; // eax
  unsigned int v10; // edi
  int v11; // eax
  __int64 v12; // rcx
  unsigned int v13; // eax
  __int64 v14; // rdx
  int v15; // eax
  __int64 v16; // rcx
  unsigned int v17; // eax
  __int64 v18; // rdx
  __int64 v20; // [rsp+30h] [rbp+8h] BYREF

  v20 = 0LL;
  FileSize = CmpGetFileSize(*(_QWORD *)(a1 + 1536), &v20);
  v6 = FileSize;
  if ( FileSize < 0 )
  {
    CmpLogFailureToGetFileSize(v5, 0LL, (unsigned int)FileSize);
    return v6;
  }
  v7 = v20;
  *(_QWORD *)(a1 + 1792) = v20;
  if ( v7 )
  {
    v8 = v7;
    if ( v7 > 2147479552 )
      v8 = 2147479552LL;
  }
  else
  {
    v8 = (unsigned int)(*(_DWORD *)(*(_QWORD *)(a1 + 64) + 40LL) + 4096);
  }
  *(_QWORD *)(a1 + 1792) = v8;
  if ( a2 )
    *a2 = v8;
  v9 = *(_DWORD *)(a1 + 164);
  v10 = 1;
  if ( v9 == 1 )
  {
    v15 = CmpGetFileSize(*(_QWORD *)(a1 + 1544), &v20);
LABEL_12:
    if ( v15 < 0 )
      CmpLogFailureToGetFileSize(v16, v10, (unsigned int)v15);
    v17 = HvpLogTypeToLogArrayIndex(v10);
    *(_QWORD *)(a1 + 8LL * v17 + 1800) = v18;
    return 0;
  }
  if ( (unsigned int)(v9 - 4) <= 1 )
  {
    v11 = CmpGetFileSize(*(_QWORD *)(a1 + 1568), &v20);
    if ( v11 < 0 )
    {
      CmpLogFailureToGetFileSize(v12, 4LL, (unsigned int)v11);
      v20 = 0LL;
    }
    v13 = HvpLogTypeToLogArrayIndex(4LL);
    *(_QWORD *)(a1 + 8LL * v13 + 1800) = v14;
    v15 = CmpGetFileSize(*(_QWORD *)(a1 + 1576), &v20);
    v10 = 5;
    goto LABEL_12;
  }
  return 0;
}
