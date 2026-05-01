/*
 * XREFs of CreateNewEventEntry @ 0x180119AAC
 * Callers:
 *     InsertEventEntryInLookUpTable @ 0x18011A130 (InsertEventEntryInLookUpTable.c)
 * Callees:
 *     memcpy_0 @ 0x1800CA497 (memcpy_0.c)
 *     CBufferGetNextOffset @ 0x180119844 (CBufferGetNextOffset.c)
 */

__int64 __fastcall CreateNewEventEntry(
        __int128 *a1,
        unsigned __int8 a2,
        __int64 a3,
        unsigned __int8 a4,
        int a5,
        __int64 *a6)
{
  unsigned __int8 v6; // di
  __int64 v7; // rbp
  __int64 v9; // rdx
  int v10; // r14d
  __int64 v11; // r10
  unsigned __int8 v12; // r8
  unsigned int *v13; // r9
  __int64 v14; // rcx
  __int64 v15; // rax
  SIZE_T v17; // rsi
  HANDLE ProcessHeap; // rax
  __int64 NextOffset; // r12
  unsigned int v20; // edx
  void *v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // rdi
  __int128 v24; // xmm0
  unsigned __int8 v25; // r14
  const void **v26; // rsi
  __int64 v27; // r12
  __int64 v28; // rbp
  unsigned int v29; // edx
  void *v30; // rbx
  char *v31; // rdx
  int v32; // eax
  __int64 v33[7]; // [rsp+20h] [rbp-38h] BYREF

  v6 = 0;
  v7 = a2;
  v33[0] = 0LL;
  v9 = 0LL;
  v10 = a4;
  v11 = 0LL;
  v12 = 0;
  *a6 = 0LL;
  if ( (_BYTE)v7 )
  {
    v13 = (unsigned int *)(a3 + 8);
    do
    {
      v14 = *v13;
      v13 += 4;
      if ( v12 >= 2u )
        v11 += v14;
      v15 = v14 + v9;
      if ( v12 >= 2u )
        v15 = v9;
      ++v12;
      v9 = v15;
    }
    while ( v12 < (unsigned __int8)v7 );
  }
  if ( (unsigned __int64)(v11 + v9) > 0xFFFF )
    return 534LL;
  v17 = v11 + 16 * v7 + 46;
  if ( !v17 )
    return 8LL;
  ProcessHeap = GetProcessHeap();
  v33[0] = (__int64)HeapAlloc(ProcessHeap, 8u, v17);
  if ( !v33[0] )
    return 8LL;
  v33[1] = v17;
  NextOffset = CBufferGetNextOffset(v33, 16 * v7);
  do
  {
    if ( v6 >= 2u )
    {
      v21 = (void *)CBufferGetNextOffset(v33, *(unsigned int *)(a3 + 16LL * v6 + 8));
      memcpy_0(v21, *(const void **)(a3 + 16LL * v6), v20);
      *(_QWORD *)(NextOffset + 16LL * v6) = v21;
      *(_DWORD *)(NextOffset + 16LL * v6 + 12) = *(_DWORD *)(a3 + 16LL * v6 + 12);
      *(_DWORD *)(NextOffset + 16LL * v6 + 8) = *(_DWORD *)(a3 + 16LL * v6 + 8);
    }
    else
    {
      *(_OWORD *)(NextOffset + 16LL * v6) = *(_OWORD *)(a3 + 16LL * v6);
    }
    ++v6;
  }
  while ( v6 < (unsigned int)(v10 + 2) );
  v23 = CBufferGetNextOffset(v33, 0x2EuLL);
  *(_QWORD *)(v23 + 16) = NextOffset;
  v24 = *a1;
  *(_BYTE *)(v23 + 45) = v10;
  v25 = v10 + 2;
  *(_BYTE *)(v23 + 44) = v7;
  *(_DWORD *)(v23 + 40) = a5;
  *(_OWORD *)v23 = v24;
  if ( v25 < (unsigned __int8)v7 )
  {
    v26 = (const void **)(16LL * v25 + a3 + 8);
    v27 = v22 - 54 - a3;
    v28 = (unsigned __int8)(v7 - v25);
    do
    {
      v30 = (void *)CBufferGetNextOffset(v33, *(unsigned int *)v26);
      memcpy_0(v30, *(v26 - 1), v29);
      v31 = (char *)v26 + v27;
      *(_QWORD *)&v31[*(_QWORD *)(v23 + 16)] = v30;
      *(_DWORD *)&v31[*(_QWORD *)(v23 + 16) + 12] = *((_DWORD *)v26 + 1);
      v32 = *(_DWORD *)v26;
      v26 += 2;
      *(_DWORD *)&v31[*(_QWORD *)(v23 + 16) + 8] = v32;
      --v28;
    }
    while ( v28 );
  }
  *a6 = v23;
  return 0LL;
}
