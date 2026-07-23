/*
 * XREFs of EtwpPreserveMdlList @ 0x140948C68
 * Callers:
 *     EtwpPreserveLogger @ 0x140948A2C (EtwpPreserveLogger.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall EtwpPreserveMdlList(_QWORD *a1, __int64 a2, int a3, __int64 a4)
{
  unsigned int v5; // ebx
  _QWORD *v8; // rsi
  _QWORD *v9; // rdi
  char *PoolWithTag; // rax
  void *v11; // rdi
  unsigned int v12; // ebx
  char *v13; // r14
  unsigned int v14; // ebp
  unsigned int v16; // [rsp+60h] [rbp+8h] BYREF

  v16 = 0;
  v5 = 0;
  v8 = a1;
  v9 = a1;
  do
  {
    KsrMdlToMemoryRuns(v9, 0LL, 0LL, &v16);
    v5 += v16;
    v9 = (_QWORD *)*v9;
  }
  while ( v9 );
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 8LL * v5, 0x4B777445u);
  v11 = PoolWithTag;
  if ( PoolWithTag )
  {
    v13 = PoolWithTag;
    v14 = v5;
    while ( v8 )
    {
      KsrMdlToMemoryRuns(v8, v13, v14, &v16);
      v14 -= v16;
      v8 = (_QWORD *)*v8;
      v13 += 8 * v16;
    }
    v12 = KsrPersistMemoryWithMetadata(EtwpKsrGuid, v11, v5, a2, a3, a4);
    ExFreePoolWithTag(v11, 0);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v12;
}
