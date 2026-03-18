/*
 * XREFs of NtMapUserPhysicalPagesScatter @ 0x14097E270
 * Callers:
 *     <none>
 * Callees:
 *     MiAllocatePool @ 0x1402828F0 (MiAllocatePool.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MiFreePhysicalPageChain @ 0x1405AA6C4 (MiFreePhysicalPageChain.c)
 *     MiGetAweNode @ 0x1405AAF14 (MiGetAweNode.c)
 *     MiGetAwePageSize @ 0x1405AAF90 (MiGetAwePageSize.c)
 *     MiLockAwePagesShared @ 0x1405AB994 (MiLockAwePagesShared.c)
 *     MiLockAweVadsShared @ 0x1405AB9F0 (MiLockAweVadsShared.c)
 *     MiUnlockAweVadsShared @ 0x1405AC910 (MiUnlockAweVadsShared.c)
 *     MiWriteAwePtes @ 0x1405ACB84 (MiWriteAwePtes.c)
 *     MiCaptureUlongPtrArray @ 0x14097C8DC (MiCaptureUlongPtrArray.c)
 *     MiReferenceIncomingPhysicalPages @ 0x14097D2A0 (MiReferenceIncomingPhysicalPages.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall NtMapUserPhysicalPagesScatter(char *a1, unsigned __int64 a2, char *a3)
{
  struct _KTHREAD *CurrentThread; // r12
  unsigned __int64 *Pool; // r14
  __int64 v9; // r15
  unsigned __int64 *v10; // rbp
  unsigned __int64 *v11; // r13
  int v12; // edi
  unsigned __int64 v13; // rbx
  _QWORD *AweNode; // rax
  __int64 v15; // r15
  int v16; // ebx
  __int64 AwePageSize; // rax
  __int64 v18; // r8
  int v19; // r11d
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // r9
  _QWORD *v22; // rax
  int v23; // eax
  ULONG_PTR v24; // rbx
  __int64 *v25; // rbx
  __int64 v26; // rsi
  __int64 v27; // [rsp+40h] [rbp-2078h]
  __int64 v28; // [rsp+48h] [rbp-2070h]
  ULONG_PTR v29; // [rsp+50h] [rbp-2068h]
  __int128 v30; // [rsp+58h] [rbp-2060h] BYREF
  _BYTE P[4096]; // [rsp+70h] [rbp-2048h] BYREF
  char v32; // [rsp+1070h] [rbp-1048h] BYREF

  memset(P, 0, sizeof(P));
  v30 = 0LL;
  if ( a2 > 0xFFFFFFFFFFFFFLL )
    return 3221225712LL;
  CurrentThread = KeGetCurrentThread();
  Pool = (unsigned __int64 *)P;
  v9 = 0LL;
  v10 = 0LL;
  if ( a2 > 0x200 )
  {
    Pool = (unsigned __int64 *)MiAllocatePool(
                                 64,
                                 a2 * ((((unsigned __int128)-(__int128)(unsigned __int64)a3 >> 64) & 8) + 8),
                                 0x77526D4Du);
    if ( !Pool )
      return 3221225626LL;
  }
  v11 = Pool;
  v12 = MiCaptureUlongPtrArray(Pool, a1, a2);
  if ( v12 >= 0 )
  {
    if ( !a2 )
      return 0LL;
    if ( !a3 )
      goto LABEL_13;
    v10 = (unsigned __int64 *)&v32;
    if ( a2 > 0x200 )
      v10 = &Pool[a2];
    v12 = MiCaptureUlongPtrArray(v10, a3, a2);
    if ( v12 >= 0 )
    {
LABEL_13:
      v13 = *Pool;
      v12 = 0;
      v29 = MiLockAweVadsShared((__int64)CurrentThread);
      AweNode = MiGetAweNode(v13);
      if ( !AweNode || (AweNode[5] & 3) != 0 )
      {
        v12 = -1073741585;
      }
      else
      {
        v15 = AweNode[4];
        v27 = (__int64)AweNode;
        v16 = *(_DWORD *)(AweNode[3] + 48LL) & 0x2200000;
        AwePageSize = MiGetAwePageSize(v15);
        v28 = AwePageSize;
        v19 = -1073741585;
        while ( 1 )
        {
          v20 = *v11;
          if ( AwePageSize == 1 )
          {
            v21 = *v11;
          }
          else
          {
            if ( (((AwePageSize << 12) - 1) & v20) != 0 )
              goto LABEL_39;
            v21 = (AwePageSize << 12) + v20 - 1;
          }
          if ( v20 < (*(unsigned int *)(v18 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v18 + 32) << 32)) << 12
            || v21 > (((*(unsigned int *)(v18 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v18 + 33) << 32)) << 12) | 0xFFF) )
          {
            v22 = MiGetAweNode(*v11);
            if ( !v22 || (v22[5] & 3) != 0 || v22[4] != v15 )
            {
LABEL_39:
              v9 = v27;
              v12 = v19;
              goto LABEL_40;
            }
            v18 = v22[3];
            v23 = *(_DWORD *)(v18 + 48) & 0x2200000;
            if ( v16 == 35651584 )
            {
              if ( v23 != 35651584 )
                v12 = v19;
            }
            else if ( v23 == 35651584 )
            {
              v12 = v19;
            }
          }
          if ( ++v11 >= &Pool[a2] )
            break;
          AwePageSize = v28;
        }
        v24 = MiLockAwePagesShared(v15, (__int64)CurrentThread);
        if ( v10
          && (v12 = MiReferenceIncomingPhysicalPages(v15, (__int64)v10, a2, (__int64)Pool, (__int64 *)&v30, v27, 0LL),
              v12 < 0) )
        {
          v9 = v27;
        }
        else
        {
          v9 = v27;
          *((_QWORD *)&v30 + 1) = MiWriteAwePtes(v27, v10, a2, (__int64)Pool, 0LL, 1);
        }
        if ( v24 )
          MiUnlockAweVadsShared((__int64)CurrentThread, v24);
      }
LABEL_40:
      if ( v29 )
        MiUnlockAweVadsShared((__int64)CurrentThread, v29);
    }
  }
  v25 = (__int64 *)&v30;
  v26 = 2LL;
  do
  {
    if ( *v25 )
      MiFreePhysicalPageChain(v9, *v25, 0);
    ++v25;
    --v26;
  }
  while ( v26 );
  if ( Pool != (unsigned __int64 *)P )
    ExFreePoolWithTag(Pool, 0);
  return (unsigned int)v12;
}
