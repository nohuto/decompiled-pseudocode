/*
 * XREFs of MiInitializeMdlOneNodeBatchPages @ 0x140265D40
 * Callers:
 *     MiInitializeMdlBatchPages @ 0x1402655A0 (MiInitializeMdlBatchPages.c)
 * Callees:
 *     MiCreatePageChains @ 0x140263558 (MiCreatePageChains.c)
 *     MiZeroInParallel @ 0x14026446C (MiZeroInParallel.c)
 *     MiDereferencePageChains @ 0x1402646FC (MiDereferencePageChains.c)
 *     MiPageAttributeBatchChangeNeeded @ 0x140266074 (MiPageAttributeBatchChangeNeeded.c)
 *     MiInsertMdlPageNeedsZero @ 0x1402660E4 (MiInsertMdlPageNeedsZero.c)
 *     MiChangePageAttributeBatch @ 0x1402680C0 (MiChangePageAttributeBatch.c)
 *     MiSearchNumaNodeTable @ 0x1402C1550 (MiSearchNumaNodeTable.c)
 *     MiZeroAndConvertPage @ 0x1405B05D0 (MiZeroAndConvertPage.c)
 */

void __fastcall MiInitializeMdlOneNodeBatchPages(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v3; // r14
  int v5; // edx
  __int64 v6; // rbp
  char *v7; // r10
  __int64 v8; // r9
  __int64 v9; // r15
  __int64 v10; // r11
  int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // r13
  __int64 v14; // r12
  char v15; // r15
  __int64 v16; // rdi
  int v17; // ecx
  __int64 v18; // rax
  char *PageChains; // rax
  __int64 v20; // [rsp+20h] [rbp-68h]
  __int64 v21; // [rsp+28h] [rbp-60h]
  __int64 v22; // [rsp+30h] [rbp-58h]
  char v23; // [rsp+90h] [rbp+8h]
  __int64 v24; // [rsp+98h] [rbp+10h]
  char *StartContext; // [rsp+A0h] [rbp+18h]
  __int64 v26; // [rsp+A8h] [rbp+20h]

  v3 = *(int *)(a1 + 60);
  v21 = 0LL;
  v5 = *(_DWORD *)(a1 + 8);
  v6 = a3;
  v23 = v5;
  v7 = 0LL;
  StartContext = 0LL;
  v8 = 0LL;
  v24 = 0LL;
  v9 = 0LL;
  v26 = 0LL;
  v10 = 0LL;
  v20 = 0LL;
  v22 = 0LL;
  if ( !a3 )
    return;
  v11 = v5 & 1;
  do
  {
    v12 = *a2;
    v13 = v9;
    v14 = v8;
    v15 = 0;
    v16 = 48 * *a2 - 0x220000000000LL;
    if ( v11
      || (*(_DWORD *)(v16 + 16) & 0x3E0LL) == 0
      && ((v17 = *(unsigned __int8 *)(v16 + 34) >> 6, v17 == (_DWORD)v3)
       || ((unsigned __int8)((1 << v17) | (1 << v3)) & (unsigned __int8)byte_140C50818) == 0) )
    {
      if ( *(unsigned __int8 *)(v16 + 34) >> 6 == (_DWORD)v3 )
        goto LABEL_7;
    }
    else
    {
      if ( !v7 )
      {
        v18 = MiSearchNumaNodeTable(0xAAAAAAAAAAAAAAABuLL * ((48 * *a2) >> 4));
        PageChains = (char *)MiCreatePageChains(*(unsigned int *)(v18 + 8), v3);
        StartContext = PageChains;
        v7 = PageChains;
        if ( !PageChains )
        {
          MiZeroAndConvertPage(v16, 3LL, (unsigned int)v3);
          goto LABEL_21;
        }
        *(_DWORD *)PageChains = 3;
        if ( (v23 & 8) != 0 )
          *(_DWORD *)PageChains = 7;
        v12 = *a2;
      }
      MiInsertMdlPageNeedsZero(v7, v12, 1LL);
      ++v21;
      v15 = 1;
    }
    if ( (_DWORD)v3 != 3 || !v15 )
    {
      if ( (unsigned int)MiPageAttributeBatchChangeNeeded(v16) )
      {
        if ( !v15 || dword_140C507D8[4 * ((unsigned __int64)*(unsigned __int8 *)(v16 + 34) >> 6) + v3] == (_DWORD)v3 )
        {
          v10 = v16;
          *(_QWORD *)(v16 + 16) = v20;
          v20 = v16;
          goto LABEL_22;
        }
        *(_QWORD *)(v16 + 16) = v22;
        v22 = v16;
      }
LABEL_21:
      v10 = v20;
LABEL_22:
      v7 = StartContext;
      v8 = v24;
LABEL_7:
      v9 = v26;
      goto LABEL_8;
    }
    if ( (unsigned int)MiPageAttributeBatchChangeNeeded(v16) )
    {
      v9 = v26;
      v8 = v16;
      v24 = v16;
    }
    else
    {
      v8 = v24;
      v9 = v16;
      v26 = v16;
      v14 = v13;
    }
    v7 = StartContext;
    v10 = v20;
    *(_QWORD *)(v16 + 16) = v14;
LABEL_8:
    ++a2;
    --v6;
  }
  while ( v6 );
  if ( v10 )
  {
    MiChangePageAttributeBatch(v10, (unsigned int)v3, 0LL);
    v8 = v24;
  }
  if ( v8 )
    MiChangePageAttributeBatch(v8, 1LL, -1LL);
  if ( v21 )
  {
    MiZeroInParallel(StartContext);
    if ( v24 )
      MiChangePageAttributeBatch(v24, 3LL, 0LL);
    if ( v9 )
      MiChangePageAttributeBatch(v9, 3LL, 0LL);
    if ( v22 )
      MiChangePageAttributeBatch(v22, (unsigned int)v3, 0LL);
  }
  if ( StartContext )
    MiDereferencePageChains((volatile signed __int32 *)StartContext);
}
