/*
 * XREFs of RtlpGetRetpolineStubsFunctionTable @ 0x14058A7A0
 * Callers:
 *     RtlCopyRetpolineStubsUnwindInfo @ 0x14058A5C0 (RtlCopyRetpolineStubsUnwindInfo.c)
 *     RtlCreateRetpolineStubsFunctionTable @ 0x14058A6A8 (RtlCreateRetpolineStubsFunctionTable.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x14027C310 (RtlImageDirectoryEntryToData.c)
 */

__int64 __fastcall RtlpGetRetpolineStubsFunctionTable(int a1, __int64 a2, __int64 a3, unsigned int a4, int *a5)
{
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // r11
  unsigned __int64 v9; // r10
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // rbx
  int v12; // eax
  unsigned __int64 v13; // rdi
  int v14; // edx
  __int64 v15; // rcx
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // r8
  __int64 result; // rax
  unsigned int *v19; // r8
  __int64 v20; // rax
  int v21; // r9d
  int v22; // edx
  __int64 v23; // r11
  unsigned int *v24; // r8
  unsigned int v25; // [rsp+20h] [rbp-18h] BYREF

  v25 = 0;
  v6 = a4;
  v7 = a2;
  LOBYTE(a2) = 1;
  v8 = RtlImageDirectoryEntryToData(a1, a2, 3, (int)&v25);
  if ( !v8 )
    return 0LL;
  if ( !v25 )
    return 0LL;
  v9 = v25 / 0xCuLL;
  v10 = v25 % 0xCuLL;
  if ( v10 )
    return 0LL;
  v11 = a3 - v7;
  v12 = v9 - 1;
  v13 = v11 + v6;
  if ( (int)v9 - 1 < 0 )
    return 0LL;
  while ( 1 )
  {
    v14 = ((int)v10 + v12) >> 1;
    v15 = v14;
    v16 = *(unsigned int *)(v8 + 12LL * v14);
    if ( v13 > v16 )
      break;
    v12 = v14 - 1;
LABEL_9:
    if ( v12 < (int)v10 )
      return 0LL;
  }
  v17 = *(unsigned int *)(v8 + 12LL * v14 + 4);
  if ( v11 >= v17 )
  {
    LODWORD(v10) = v14 + 1;
    goto LABEL_9;
  }
  if ( v11 > v16 || v13 < v17 )
    return 0LL;
  if ( v14 > 0 )
  {
    v19 = (unsigned int *)(v8 - 12 + 12LL * v14);
    do
    {
      if ( *v19 < v11 )
        break;
      --v14;
      --v15;
      v19 -= 3;
    }
    while ( v15 > 0 );
  }
  v20 = v14;
  v21 = 1;
  v22 = v14 + 1;
  v23 = v8 + 12 * v20;
  if ( v22 < v9 )
  {
    v24 = (unsigned int *)(v23 + 16);
    do
    {
      if ( *v24 > v13 )
        break;
      ++v22;
      ++v21;
      v24 += 3;
    }
    while ( v22 < v9 );
  }
  result = v23;
  *a5 = v21;
  return result;
}
