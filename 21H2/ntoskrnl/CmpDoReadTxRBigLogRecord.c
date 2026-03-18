/*
 * XREFs of CmpDoReadTxRBigLogRecord @ 0x14091BF58
 * Callers:
 *     CmpRmReDoPhase @ 0x14091C3F0 (CmpRmReDoPhase.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140208AC0 (CmSiFreeMemory.c)
 *     CmpAllocateTransientPoolWithTag @ 0x14024AC60 (CmpAllocateTransientPoolWithTag.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     CmpVerifyBigLogRecordChunk @ 0x14091C758 (CmpVerifyBigLogRecordChunk.c)
 */

__int64 __fastcall CmpDoReadTxRBigLogRecord(void *a1, void *a2, ULONG a3, struct _PRIVILEGE_SET **a4, _DWORD *a5)
{
  unsigned int *v5; // rdi
  NTSTATUS v6; // ebx
  struct _LOOKASIDE_LIST_EX *v7; // r9
  SIZE_T v8; // r12
  struct _PRIVILEGE_SET *TransientPoolWithTag; // rax
  struct _PRIVILEGE_SET *v10; // rsi
  struct _PRIVILEGE_SET *v11; // rax
  int v12; // r13d
  unsigned int v13; // r14d
  __int64 v14; // r15
  unsigned int v16; // [rsp+40h] [rbp-38h]
  struct _PRIVILEGE_SET *v17; // [rsp+48h] [rbp-30h]
  PVOID ppvBuffer; // [rsp+50h] [rbp-28h] BYREF
  CLFS_LSN plsnRecord; // [rsp+58h] [rbp-20h] BYREF
  CLFS_LSN plsnPrevious; // [rsp+60h] [rbp-18h] BYREF
  CLFS_LSN plsnUndoNext; // [rsp+68h] [rbp-10h] BYREF
  ULONG pcbBuffer; // [rsp+C8h] [rbp+50h] BYREF
  CLS_RECORD_TYPE peRecordType; // [rsp+D0h] [rbp+58h] BYREF
  struct _PRIVILEGE_SET **v25; // [rsp+D8h] [rbp+60h]

  v25 = a4;
  ppvBuffer = a2;
  v5 = (unsigned int *)a2;
  plsnUndoNext.ullOffset = 0LL;
  plsnPrevious.ullOffset = 0LL;
  plsnRecord.ullOffset = 0LL;
  peRecordType = 0;
  pcbBuffer = a3;
  v6 = CmpVerifyBigLogRecordChunk(a2, a3);
  if ( v6 >= 0 )
  {
    v8 = v5[1];
    v16 = v5[12];
    TransientPoolWithTag = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithTag(PagedPool, v8, 0x20204D43u, v7);
    v10 = TransientPoolWithTag;
    if ( TransientPoolWithTag )
    {
      memset(TransientPoolWithTag, 0, v8);
      v11 = v10;
      v12 = 0;
      v13 = v8;
      v17 = v10;
      if ( !v5[13] )
      {
        do
        {
          v14 = v5[14];
          if ( (unsigned int)v14 > v13 )
            break;
          memmove(v11, v5 + 16, (unsigned int)v14);
          v17 = (struct _PRIVILEGE_SET *)((char *)v17 + v14);
          v13 -= v14;
          if ( ++v12 >= v16 )
          {
            if ( v13 )
              break;
            v6 = 0;
            *v25 = v10;
            *a5 = v8;
            return (unsigned int)v6;
          }
          peRecordType = 1;
          v6 = ClfsReadNextLogRecord(
                 a1,
                 &ppvBuffer,
                 &pcbBuffer,
                 &peRecordType,
                 0LL,
                 &plsnUndoNext,
                 &plsnPrevious,
                 &plsnRecord);
          if ( v6 < 0 )
            goto LABEL_11;
          v5 = (unsigned int *)ppvBuffer;
          v6 = CmpVerifyBigLogRecordChunk(ppvBuffer, pcbBuffer);
          if ( v6 < 0 )
            goto LABEL_11;
          v11 = v17;
        }
        while ( v5[13] == v12 );
      }
      v6 = -1073741762;
LABEL_11:
      CmSiFreeMemory(v10);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)v6;
}
