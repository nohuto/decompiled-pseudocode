/*
 * XREFs of NtMapUserPhysicalPages @ 0x1408D6E40
 * Callers:
 *     <none>
 * Callees:
 *     MiAllocatePool @ 0x14027C2E0 (MiAllocatePool.c)
 *     MiGetPteAddress @ 0x140322E50 (MiGetPteAddress.c)
 *     ExGetCallBackBlockRoutine @ 0x140381CB0 (ExGetCallBackBlockRoutine.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     MiFreePhysicalPageChain @ 0x14054BE28 (MiFreePhysicalPageChain.c)
 *     MiGetAweNode @ 0x14054C620 (MiGetAweNode.c)
 *     MiGetAweViewPageSize @ 0x14054C718 (MiGetAweViewPageSize.c)
 *     MiLockAwePagesShared @ 0x14054D21C (MiLockAwePagesShared.c)
 *     MiLockAweVadsShared @ 0x14054D278 (MiLockAweVadsShared.c)
 *     MiUnlockAweVadsShared @ 0x14054E20C (MiUnlockAweVadsShared.c)
 *     MiWriteAwePtes @ 0x14054E4D8 (MiWriteAwePtes.c)
 *     MiCaptureUlongPtrArray @ 0x1408D5904 (MiCaptureUlongPtrArray.c)
 *     MiReferenceIncomingPhysicalPages @ 0x1408D6264 (MiReferenceIncomingPhysicalPages.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtMapUserPhysicalPages(PVOID VirtualAddress, ULONG_PTR NumberOfPages, PULONG_PTR UserPfnArray)
{
  struct _KTHREAD *CurrentThread; // r12
  unsigned __int64 v6; // rsi
  ULONG_PTR v7; // r15
  __int64 v8; // r14
  _QWORD *Pool; // rdi
  NTSTATUS v10; // ebx
  _QWORD *AweNode; // rax
  __int64 v13; // rbx
  __int64 AweViewPageSize; // r8
  __int64 v15; // r10
  unsigned __int64 v16; // r11
  _DWORD *PteAddress; // rsi
  __int64 v18; // r8
  int v19; // r9d
  __int64 *v20; // rsi
  __int64 v21; // rbp
  ULONG_PTR v22; // [rsp+40h] [rbp-1068h]
  __int64 v23[3]; // [rsp+48h] [rbp-1060h] BYREF
  _BYTE P[4096]; // [rsp+60h] [rbp-1048h] BYREF

  *(_OWORD *)v23 = 0LL;
  if ( NumberOfPages - 1 > 0xFFFFFFFFFFFFELL )
    return -1073741584;
  CurrentThread = KeGetCurrentThread();
  v6 = (unsigned __int64)VirtualAddress & 0xFFFFFFFFFFFFF000uLL;
  v7 = 0LL;
  v8 = 0LL;
  Pool = 0LL;
  if ( !UserPfnArray )
    goto LABEL_6;
  if ( NumberOfPages > 0x200 )
  {
    Pool = MiAllocatePool(64, 8 * NumberOfPages, 0x77526D4Du);
    if ( !Pool )
      return -1073741670;
  }
  else
  {
    Pool = P;
  }
  v10 = MiCaptureUlongPtrArray(Pool, (char *)UserPfnArray, NumberOfPages);
  if ( v10 >= 0 )
  {
LABEL_6:
    v22 = MiLockAweVadsShared((__int64)CurrentThread);
    AweNode = MiGetAweNode(v6);
    v8 = (__int64)AweNode;
    if ( !AweNode )
      goto LABEL_7;
    v13 = AweNode[4];
    AweViewPageSize = MiGetAweViewPageSize((__int64)AweNode);
    if ( !AweViewPageSize )
      AweViewPageSize = ExGetCallBackBlockRoutine(v13);
    if ( AweViewPageSize == 1 || (((AweViewPageSize << 12) - 1) & v6) == 0 )
    {
      v16 = ((AweViewPageSize * NumberOfPages) << 12) + v6 - 1;
      if ( v16 > v6 )
      {
        if ( v6 < (*(unsigned int *)(v15 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v15 + 32) << 32)) << 12
          || v16 > (((*(unsigned int *)(v15 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v15 + 33) << 32)) << 12) | 0xFFF) )
        {
          v10 = -1073741585;
        }
        else
        {
          PteAddress = (_DWORD *)MiGetPteAddress(v6);
          if ( v18 == 512 )
          {
            do
              PteAddress = (_DWORD *)MiGetPteAddress((unsigned __int64)PteAddress);
            while ( v19 != 1 );
          }
          v7 = MiLockAwePagesShared(v13, (__int64)CurrentThread);
          if ( !Pool
            || (v10 = MiReferenceIncomingPhysicalPages(v13, (__int64)Pool, NumberOfPages, 0LL, v23, v8, PteAddress),
                v10 >= 0) )
          {
            v23[1] = MiWriteAwePtes(v8, Pool, NumberOfPages, 0LL, (unsigned __int64)PteAddress, 1);
            v10 = 0;
          }
        }
        if ( v7 )
          MiUnlockAweVadsShared((__int64)CurrentThread, v7);
      }
      else
      {
        v10 = -1073741584;
      }
    }
    else
    {
LABEL_7:
      v10 = -1073741585;
    }
    if ( v22 )
      MiUnlockAweVadsShared((__int64)CurrentThread, v22);
  }
  v20 = v23;
  v21 = 2LL;
  do
  {
    if ( *v20 )
      MiFreePhysicalPageChain(v8, *v20, 0);
    ++v20;
    --v21;
  }
  while ( v21 );
  if ( UserPfnArray )
  {
    if ( Pool != (_QWORD *)P )
      ExFreePoolWithTag(Pool, 0);
  }
  return v10;
}
