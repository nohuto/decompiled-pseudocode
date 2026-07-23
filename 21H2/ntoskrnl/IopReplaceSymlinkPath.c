/*
 * XREFs of IopReplaceSymlinkPath @ 0x140895310
 * Callers:
 *     IopSymlinkApplyToOpenedName @ 0x140895620 (IopSymlinkApplyToOpenedName.c)
 * Callees:
 *     _wcsnicmp @ 0x1403D2380 (_wcsnicmp.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     FsRtlRemoveDotsFromPath @ 0x140760270 (FsRtlRemoveDotsFromPath.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall IopReplaceSymlinkPath(
        const wchar_t *a1,
        unsigned int a2,
        __int64 a3,
        unsigned __int16 *a4,
        unsigned int NewLength,
        __int16 a6,
        __int16 a7)
{
  unsigned int v7; // r15d
  unsigned __int16 v9; // bx
  size_t v11; // r13
  WCHAR *v12; // r14
  wchar_t *v13; // rdi
  unsigned int v14; // esi
  wchar_t *v15; // rcx
  const void *v16; // rdx
  WCHAR *v17; // rdi
  __int16 v18; // r15
  _WORD *v19; // rdx
  __int64 v20; // rax
  NTSTATUS result; // eax
  wchar_t *v22; // rcx
  unsigned __int16 v23; // r8
  unsigned __int16 v24; // dx
  __int16 v25; // cx
  __int16 v26; // r9
  __int64 v27; // rbx
  wchar_t v28; // r14
  wchar_t v29; // r8
  __int64 v30; // rax
  unsigned __int16 v31; // [rsp+60h] [rbp+8h]
  __int16 v32; // [rsp+68h] [rbp+10h]
  _WORD *Src; // [rsp+78h] [rbp+20h]

  v7 = NewLength;
  v9 = a4[5];
  v11 = a4[3];
  v12 = (WCHAR *)&a1[NewLength];
  v31 = v9;
  v13 = (wchar_t *)&a1[a2];
  LOWORD(NewLength) = 0;
  LOWORD(v14) = 0;
  if ( a2 < v7 )
    return -1073741192;
  Src = (unsigned __int16 *)((char *)a4 + a4[4] + 20);
  if ( *Src == 92 )
  {
    if ( wcsnicmp(a1, L"\\Device\\Mup", 0xBuLL) )
      goto LABEL_8;
    v23 = *(_WORD *)(a3 + 88);
    v24 = 0;
    v32 = **(_WORD **)(a3 + 96);
    v25 = v32;
    v26 = (v32 != 59) + 3;
    if ( (v23 & 0xFFFE) != 0 )
    {
      do
      {
        v27 = *(_QWORD *)(a3 + 96);
        v28 = *(_WORD *)(v27 + 2LL * v24);
        if ( v28 == 92 )
        {
          --v26;
          if ( v25 != 59 && v26 == 2 )
          {
            if ( (unsigned __int16)(v24 + 1) < (unsigned __int16)(v23 >> 1) && *(_WORD *)(v27 + 2LL * v24 + 2) != 59 )
              v26 = 0;
            v25 = v32;
          }
          if ( !v26 )
            goto LABEL_36;
        }
        *v13 = v28;
        ++v24;
        v23 = *(_WORD *)(a3 + 88);
        ++v13;
      }
      while ( v24 < (unsigned __int16)(v23 >> 1) );
    }
    if ( !v26 )
    {
LABEL_36:
      if ( v24 < (unsigned __int16)(v23 >> 1) )
      {
        v29 = *(_WORD *)(*(_QWORD *)(a3 + 96) + 2LL * v24);
        do
        {
          *v13 = v29;
          ++v24;
          ++v13;
          v29 = *(_WORD *)(*(_QWORD *)(a3 + 96) + 2LL * v24);
        }
        while ( v29 != 92 && v24 < (unsigned __int16)(*(_WORD *)(a3 + 88) >> 1) );
      }
      v9 = v31;
      v30 = v7 + v24;
      v18 = 2 * v24 + a6;
      v12 = (WCHAR *)&a1[v30];
      goto LABEL_9;
    }
    return -1073741192;
  }
  v15 = (wchar_t *)&a1[a2];
  v16 = *(const void **)(a3 + 96);
  LOWORD(NewLength) = *(_WORD *)(a3 + 88) - v11;
  v14 = (unsigned __int16)NewLength;
  memmove(v15, v16, (unsigned __int16)NewLength);
  v17 = &v13[(unsigned __int64)v14 >> 1];
  if ( v17 != v12 )
  {
    do
    {
      if ( *v17 == 92 )
        break;
      LOWORD(v14) = v14 - 2;
      *v17-- = 0;
      LOWORD(NewLength) = v14;
    }
    while ( v17 != v12 );
    if ( v17 < v12 )
      return -1073741192;
  }
  v13 = v17 + 1;
LABEL_8:
  v18 = a6;
LABEL_9:
  if ( v9 )
  {
    memmove(v13, Src, v9);
    LOWORD(v14) = v31 + v14;
    LOWORD(NewLength) = v14;
    v13 += (unsigned __int64)v9 >> 1;
  }
  if ( (_WORD)v11 )
  {
    v19 = (_WORD *)(*(_QWORD *)(a3 + 96) + *(unsigned __int16 *)(a3 + 88) - v11);
    if ( *(v13 - 1) == 92 && *v19 == 92 )
    {
      *v13-- = 0;
      LOWORD(v14) = v14 - 2;
    }
    memmove(v13, v19, v11);
    LOWORD(NewLength) = v11 + v14;
    v13 += v11 >> 1;
  }
  *v13 = 0;
  v20 = -1LL;
  do
    ++v20;
  while ( v12[v20] );
  result = FsRtlRemoveDotsFromPath(v12, 2 * v20, (USHORT *)&NewLength);
  if ( result >= 0 )
  {
    v22 = *(wchar_t **)(a3 + 96);
    *(_WORD *)(a3 + 88) = v18 + NewLength;
    *(_WORD *)(a3 + 90) = a7;
    if ( a1 != v22 )
    {
      if ( v22 )
        ExFreePoolWithTag(v22, 0);
      *(_QWORD *)(a3 + 96) = a1;
    }
    return 0;
  }
  return result;
}
