/*
 * XREFs of HalpAuditQuerySlicAddresses @ 0x140A664C8
 * Callers:
 *     HalpAuditAcpiTables @ 0x140A66350 (HalpAuditAcpiTables.c)
 * Callees:
 *     MmMapIoSpaceEx @ 0x140216B10 (MmMapIoSpaceEx.c)
 *     MmUnmapIoSpace @ 0x140217FB0 (MmUnmapIoSpace.c)
 *     memset @ 0x140414300 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall HalpAuditQuerySlicAddresses(__int64 a1)
{
  unsigned int v1; // esi
  unsigned int v3; // edi
  unsigned int *v4; // rax
  unsigned int *v5; // rbp
  unsigned int v6; // ebx
  __int64 v7; // rbx
  __int64 v8; // rax
  unsigned __int64 v9; // rbx
  _QWORD *PoolWithTag; // rax
  _QWORD *v11; // r12
  unsigned int v12; // r13d
  __int64 v13; // rsi
  unsigned int *v14; // r15
  __int64 *v15; // rcx
  __int64 v16; // rbx
  _DWORD *v17; // rax
  void *v18; // rcx
  __int64 v20; // rax
  unsigned int v21; // [rsp+60h] [rbp+8h]
  unsigned int *v22; // [rsp+68h] [rbp+10h]

  v1 = 4096 - (*(_DWORD *)a1 & 0xFFF);
  if ( v1 < 0x24 )
    v1 = 36;
  v3 = 0;
  v21 = v1;
  do
  {
    v4 = (unsigned int *)MmMapIoSpaceEx(*(_QWORD *)a1, v1, 0x204u);
    v5 = v4;
    if ( !v4 )
      return (unsigned int)-1073741823;
    v6 = v4[1];
    if ( v1 < v6 )
    {
      MmUnmapIoSpace(v4, v1);
      v5 = 0LL;
      v21 = v6;
      v1 = v6;
    }
  }
  while ( !v5 );
  v7 = v5[1];
  v8 = v7;
  if ( (*(_DWORD *)(a1 + 12) & 4) != 0 )
  {
    if ( (unsigned int)v7 >= 0x24 )
      v8 = 36LL;
    v9 = (unsigned __int64)(v7 - v8) >> 3;
  }
  else
  {
    if ( (unsigned int)v7 >= 0x24 )
      v8 = 36LL;
    v9 = (unsigned __int64)(v7 - v8) >> 2;
  }
  if ( (_DWORD)v9 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8LL * (unsigned int)v9, 0x206C6148u);
    v11 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 8LL * (unsigned int)v9);
      v12 = 0;
      v13 = (unsigned int)v9;
      v14 = v5 + 9;
      v15 = (__int64 *)(v5 + 9);
      v22 = v5 + 9;
      do
      {
        if ( (*(_DWORD *)(a1 + 12) & 4) != 0 )
          v16 = *v15;
        else
          v16 = *v14;
        v17 = (_DWORD *)MmMapIoSpaceEx(v16, 36LL, 0x204u);
        v18 = v17;
        if ( v17 )
        {
          if ( *v17 == 1128877139 )
          {
            v20 = v12++;
            v11[v20] = v16;
          }
          MmUnmapIoSpace(v18, 0x24uLL);
        }
        ++v14;
        v15 = (__int64 *)(v22 + 2);
        v22 += 2;
        --v13;
      }
      while ( v13 );
      v1 = v21;
      *(_QWORD *)(a1 + 24) = v11;
      *(_DWORD *)(a1 + 16) = v12;
    }
    else
    {
      v3 = -1073741801;
    }
  }
  MmUnmapIoSpace(v5, v1);
  return v3;
}
