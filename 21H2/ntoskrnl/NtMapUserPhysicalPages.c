/*
 * XREFs of NtMapUserPhysicalPages @ 0x14097DFA0
 * Callers:
 *     <none>
 * Callees:
 *     MiAllocatePool @ 0x1402828F0 (MiAllocatePool.c)
 *     MiGetPteAddress @ 0x140313C70 (MiGetPteAddress.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     MiFreePhysicalPageChain @ 0x1405AA6C4 (MiFreePhysicalPageChain.c)
 *     MiGetAweNode @ 0x1405AAF14 (MiGetAweNode.c)
 *     MiGetAwePageSize @ 0x1405AAF90 (MiGetAwePageSize.c)
 *     MiGetAweViewPageSize @ 0x1405AB030 (MiGetAweViewPageSize.c)
 *     MiLockAwePagesShared @ 0x1405AB994 (MiLockAwePagesShared.c)
 *     MiLockAweVadsShared @ 0x1405AB9F0 (MiLockAweVadsShared.c)
 *     MiUnlockAweVadsShared @ 0x1405AC910 (MiUnlockAweVadsShared.c)
 *     MiWriteAwePtes @ 0x1405ACB84 (MiWriteAwePtes.c)
 *     MiCaptureUlongPtrArray @ 0x14097C8DC (MiCaptureUlongPtrArray.c)
 *     MiReferenceIncomingPhysicalPages @ 0x14097D2A0 (MiReferenceIncomingPhysicalPages.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall NtMapUserPhysicalPages(__int64 a1, unsigned __int64 a2, char *a3)
{
  char *v3; // r15
  struct _KTHREAD *CurrentThread; // r12
  __int64 v6; // r14
  unsigned __int64 v7; // rsi
  _QWORD *Pool; // rdi
  __int64 v9; // r13
  int v10; // ebx
  _QWORD *AweNode; // rax
  __int64 v13; // rbx
  __int64 AweViewPageSize; // r8
  __int64 v15; // r10
  unsigned __int64 v16; // r8
  unsigned __int64 PteAddress; // rax
  int v18; // r9d
  bool i; // zf
  int v20; // r9d
  ULONG_PTR v21; // r15
  ULONG_PTR v22; // rsi
  __int64 *v23; // rsi
  ULONG_PTR v25; // [rsp+48h] [rbp-1060h]
  __int128 v26; // [rsp+50h] [rbp-1058h] BYREF
  _BYTE P[4096]; // [rsp+60h] [rbp-1048h] BYREF

  v3 = a3;
  v26 = 0LL;
  if ( a2 - 1 > 0xFFFFFFFFFFFFELL )
    return 3221225712LL;
  CurrentThread = KeGetCurrentThread();
  v6 = 0LL;
  v7 = a1 & 0xFFFFFFFFFFFFF000uLL;
  Pool = 0LL;
  v9 = 2LL;
  if ( !a3 )
    goto LABEL_6;
  if ( a2 > 0x200 )
  {
    Pool = MiAllocatePool(64, 8 * a2, 0x77526D4Du);
    if ( !Pool )
      return 3221225626LL;
  }
  else
  {
    Pool = P;
  }
  v10 = MiCaptureUlongPtrArray(Pool, v3, a2);
  if ( v10 >= 0 )
  {
LABEL_6:
    v25 = MiLockAweVadsShared((__int64)CurrentThread);
    AweNode = MiGetAweNode(v7);
    v6 = (__int64)AweNode;
    if ( AweNode )
    {
      v13 = AweNode[4];
      AweViewPageSize = MiGetAweViewPageSize((__int64)AweNode);
      if ( !AweViewPageSize )
        AweViewPageSize = MiGetAwePageSize(v13);
      if ( AweViewPageSize == 1 || (((AweViewPageSize << 12) - 1) & v7) == 0 )
      {
        v16 = ((AweViewPageSize * a2) << 12) + v7 - 1;
        if ( v16 <= v7 )
        {
          v10 = -1073741584;
LABEL_27:
          if ( v25 )
            MiUnlockAweVadsShared((__int64)CurrentThread, v25);
          goto LABEL_29;
        }
        if ( v7 >= (*(unsigned int *)(v15 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v15 + 32) << 32)) << 12
          && v16 <= (((*(unsigned int *)(v15 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v15 + 33) << 32)) << 12) | 0xFFF) )
        {
          PteAddress = MiGetPteAddress(v7);
          for ( i = v18 == 0; ; i = v20 == 1 )
          {
            v21 = PteAddress;
            if ( i )
              break;
            PteAddress = MiGetPteAddress(PteAddress);
          }
          v22 = MiLockAwePagesShared(v13, (__int64)CurrentThread);
          if ( !Pool
            || (v10 = MiReferenceIncomingPhysicalPages(v13, (__int64)Pool, a2, 0LL, (__int64 *)&v26, v6, v21), v10 >= 0) )
          {
            *((_QWORD *)&v26 + 1) = MiWriteAwePtes(v6, Pool, a2, 0LL, v21, 1);
            v10 = 0;
          }
          if ( v22 )
            MiUnlockAweVadsShared((__int64)CurrentThread, v22);
          v3 = a3;
          goto LABEL_27;
        }
      }
    }
    v10 = -1073741585;
    goto LABEL_27;
  }
LABEL_29:
  v23 = (__int64 *)&v26;
  do
  {
    if ( *v23 )
      MiFreePhysicalPageChain(v6, *v23, 0);
    ++v23;
    --v9;
  }
  while ( v9 );
  if ( v3 )
  {
    if ( Pool != (_QWORD *)P )
      ExFreePoolWithTag(Pool, 0);
  }
  return (unsigned int)v10;
}
