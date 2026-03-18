/*
 * XREFs of SdbpResolveMatchingFile @ 0x14073C618
 * Callers:
 *     SdbpCheckMatchingFiles @ 0x14073D100 (SdbpCheckMatchingFiles.c)
 *     SdbpCheckMatchingDir @ 0x14095F980 (SdbpCheckMatchingDir.c)
 *     SdbpCheckMatchingTextEntry @ 0x140960284 (SdbpCheckMatchingTextEntry.c)
 *     SdbpCheckMatchingWildcardFiles @ 0x140960670 (SdbpCheckMatchingWildcardFiles.c)
 * Callees:
 *     RtlULongLongMult @ 0x1402C1CCC (RtlULongLongMult.c)
 *     _wcsnicmp @ 0x1403CDDD0 (_wcsnicmp.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     AslEnvExpandStrings2 @ 0x14073C86C (AslEnvExpandStrings2.c)
 *     AslImageFileToArchitecture @ 0x14073CE74 (AslImageFileToArchitecture.c)
 *     AslEnvGetProcessWowInfo @ 0x14073CEA0 (AslEnvGetProcessWowInfo.c)
 *     AslPathToNetworkPathNt @ 0x14073CF58 (AslPathToNetworkPathNt.c)
 *     AslPathClean @ 0x14073CFD0 (AslPathClean.c)
 *     AslLogCallPrintf @ 0x14073EA44 (AslLogCallPrintf.c)
 *     AslAlloc @ 0x140743A84 (AslAlloc.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SdbpResolveMatchingFile(__int64 a1, __int64 a2, _WORD *a3, unsigned int a4, __int64 a5, _QWORD *a6)
{
  _QWORD *v6; // r13
  unsigned int v11; // r12d
  __int64 v12; // r14
  __int16 v13; // ax
  int v14; // ecx
  ULONGLONG v15; // rax
  __int64 v16; // rcx
  ULONGLONG v17; // rdi
  _QWORD *v18; // rax
  _QWORD *v19; // rbx
  __int16 v20; // ax
  __int64 v21; // r8
  const char *v23; // r9
  int v24; // r8d
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rdx
  const char *v27; // r9
  int v28; // r8d
  int v29; // [rsp+28h] [rbp-28h]
  int v30; // [rsp+30h] [rbp-20h]
  ULONGLONG pullResult; // [rsp+40h] [rbp-10h] BYREF
  _QWORD *v32; // [rsp+48h] [rbp-8h] BYREF
  __int16 v35; // [rsp+A8h] [rbp+58h] BYREF

  v6 = a6;
  pullResult = 0LL;
  v32 = 0LL;
  *a6 = 0LL;
  v35 = -1;
  v11 = 0;
  LOWORD(a6) = -1;
  if ( !a4 )
  {
    v23 = "Invalid match file length";
    v24 = 561;
    goto LABEL_32;
  }
  v12 = a5;
  if ( *a3 != 37 )
  {
    v25 = *(unsigned int *)(a5 + 8);
    v26 = v25 + a4;
    if ( v26 >= v25 )
    {
      v15 = v26 + 1;
      if ( v26 + 1 >= v26 )
        goto LABEL_8;
      v24 = 617;
    }
    else
    {
      v24 = 612;
    }
LABEL_46:
    v23 = "Invalid path size";
    goto LABEL_32;
  }
  if ( (int)AslEnvGetProcessWowInfo(&a6, &v35) < 0 )
  {
    v23 = "AslEnvGetProcessWowInfo failed [%x]";
    v24 = 582;
    goto LABEL_32;
  }
  v13 = AslImageFileToArchitecture(*(unsigned __int16 *)(a1 + 576));
  if ( v13 == -1 )
    v13 = v35;
  v14 = AslEnvExpandStrings2(*(_QWORD *)(a2 + 56), a3, 0LL, 0LL, &pullResult, (_WORD)a6, v13);
  if ( (int)(v14 + 0x80000000) >= 0 && v14 != -1073741789 )
  {
    v23 = "AslEnvExpandStrings2 failed [%x]";
    v24 = 599;
LABEL_32:
    AslLogCallPrintf(1, (unsigned int)"SdbpResolveMatchingFile", v24, (_DWORD)v23);
    return v11;
  }
  v15 = 2 * pullResult;
LABEL_8:
  if ( v15 + 20 < v15 )
  {
    v24 = 623;
    goto LABEL_46;
  }
  pullResult = v15 + 20;
  if ( RtlULongLongMult(v15 + 20, 2uLL, &pullResult) < 0 )
  {
    v23 = "Invalid buffer size";
    v24 = 628;
    goto LABEL_32;
  }
  v17 = pullResult;
  if ( pullResult < 0x208 )
    v17 = 520LL;
  v18 = (_QWORD *)AslAlloc(v16, v17);
  v19 = v18;
  if ( !v18 )
  {
    v23 = "Out of memory";
    v24 = 636;
    goto LABEL_32;
  }
  if ( *a3 != 37 )
  {
    memmove(v18, *(const void **)v12, 2LL * *(unsigned int *)(v12 + 8));
    memmove((char *)v19 + 2 * *(unsigned int *)(v12 + 8), a3, 2LL * (a4 + 1));
    goto LABEL_18;
  }
  if ( (int)AslEnvGetProcessWowInfo(&a6, &v35) < 0 )
  {
    v27 = "AslEnvGetProcessWowInfo failed [%x]";
    v28 = 648;
LABEL_41:
    AslLogCallPrintf(1, (unsigned int)"SdbpResolveMatchingFile", v28, (_DWORD)v27);
    goto LABEL_25;
  }
  v20 = AslImageFileToArchitecture(*(unsigned __int16 *)(a1 + 576));
  if ( v20 == -1 )
    v20 = v35;
  LOWORD(v30) = v20;
  LOWORD(v29) = (_WORD)a6;
  if ( (int)AslEnvExpandStrings2(*(_QWORD *)(a2 + 56), a3, v19, v17 >> 1, &pullResult, v29, v30) >= 0 )
  {
LABEL_18:
    if ( (int)AslPathClean((wchar_t *)v19, v19) >= 0 )
    {
      if ( (int)AslPathToNetworkPathNt(&v32, v19) >= 0 )
      {
        ExFreePoolWithTag(v19, 0x74705041u);
        v19 = v32;
      }
      else if ( wcsnicmp((const wchar_t *)v19, L"\\??\\", 4uLL) )
      {
        v21 = -1LL;
        do
          ++v21;
        while ( *((_WORD *)v19 + v21) );
        memmove(v19 + 1, v19, 2 * v21 + 2);
        *v19 = *(_QWORD *)L"\\??\\";
      }
      *v6 = v19;
      v11 = 1;
      v19 = 0LL;
      goto LABEL_25;
    }
    v27 = "AslPathClean failed [%x]";
    v28 = 690;
    goto LABEL_41;
  }
  AslLogCallPrintf(
    1,
    (unsigned int)"SdbpResolveMatchingFile",
    665,
    (unsigned int)"AslEnvExpandStrings2 failed to expand strings for %ws [%x]");
LABEL_25:
  if ( v19 )
    ExFreePoolWithTag(v19, 0x74705041u);
  return v11;
}
