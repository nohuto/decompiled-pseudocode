/*
 * XREFs of NtMapUserPhysicalPagesScatter @ 0x1408D2650
 * Callers:
 *     <none>
 * Callees:
 *     MiAllocatePool @ 0x1402A0FB0 (MiAllocatePool.c)
 *     ExGetCallBackBlockRoutine @ 0x14037F340 (ExGetCallBackBlockRoutine.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memset @ 0x140408F80 (memset.c)
 *     MiFreePhysicalPageChain @ 0x1405460C8 (MiFreePhysicalPageChain.c)
 *     MiGetAweNode @ 0x1405468C0 (MiGetAweNode.c)
 *     MiLockAwePagesShared @ 0x1405474BC (MiLockAwePagesShared.c)
 *     MiLockAweVadsShared @ 0x140547518 (MiLockAweVadsShared.c)
 *     MiUnlockAweVadsShared @ 0x1405484AC (MiUnlockAweVadsShared.c)
 *     MiWriteAwePtes @ 0x140548778 (MiWriteAwePtes.c)
 *     MiCaptureUlongPtrArray @ 0x1408D0E54 (MiCaptureUlongPtrArray.c)
 *     MiReferenceIncomingPhysicalPages @ 0x1408D17B4 (MiReferenceIncomingPhysicalPages.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtMapUserPhysicalPagesScatter(
        PVOID *VirtualAddresses,
        ULONG_PTR NumberOfPages,
        PULONG_PTR UserPfnArray)
{
  struct _KTHREAD *CurrentThread; // r12
  unsigned __int64 *Pool; // r14
  __int64 v9; // r15
  unsigned __int64 *v10; // rbp
  unsigned __int64 *v11; // r13
  NTSTATUS v12; // edi
  unsigned __int64 v13; // rbx
  _QWORD *AweNode; // rax
  __int64 v15; // r15
  __int64 v16; // rbx
  __int64 v17; // r8
  int v18; // r10d
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // r9
  __int64 v21; // rax
  _QWORD *v22; // rax
  int v23; // r11d
  int v24; // eax
  ULONG_PTR v25; // rbx
  __int64 *v26; // rbx
  __int64 v27; // rsi
  __int64 v28; // [rsp+40h] [rbp-2068h]
  ULONG_PTR v29; // [rsp+48h] [rbp-2060h]
  __int128 v30; // [rsp+50h] [rbp-2058h] BYREF
  _BYTE P[4096]; // [rsp+60h] [rbp-2048h] BYREF
  char v32; // [rsp+1060h] [rbp-1048h] BYREF

  memset(P, 0, sizeof(P));
  v30 = 0LL;
  if ( NumberOfPages > 0xFFFFFFFFFFFFFLL )
    return -1073741584;
  CurrentThread = KeGetCurrentThread();
  Pool = (unsigned __int64 *)P;
  v9 = 0LL;
  v10 = 0LL;
  if ( NumberOfPages > 0x200 )
  {
    Pool = (unsigned __int64 *)MiAllocatePool(
                                 64,
                                 NumberOfPages
                               * ((((unsigned __int128)-(__int128)(unsigned __int64)UserPfnArray >> 64) & 8) + 8),
                                 0x77526D4Du);
    if ( !Pool )
      return -1073741670;
  }
  v11 = Pool;
  v12 = MiCaptureUlongPtrArray(Pool, (char *)VirtualAddresses, NumberOfPages);
  if ( v12 >= 0 )
  {
    if ( !NumberOfPages )
      return 0;
    if ( !UserPfnArray )
      goto LABEL_13;
    v10 = (unsigned __int64 *)&v32;
    if ( NumberOfPages > 0x200 )
      v10 = &Pool[NumberOfPages];
    v12 = MiCaptureUlongPtrArray(v10, (char *)UserPfnArray, NumberOfPages);
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
        v28 = (__int64)AweNode;
        v16 = ExGetCallBackBlockRoutine(v15);
        v18 = -1073741585;
        do
        {
          v19 = *v11;
          if ( v16 == 1 )
          {
            v20 = *v11;
          }
          else
          {
            v21 = (v16 << 12) - 1;
            if ( (v21 & v19) != 0 )
              goto LABEL_38;
            v20 = v21 + v19;
          }
          if ( v19 < (*(unsigned int *)(v17 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v17 + 32) << 32)) << 12
            || v20 > (((*(unsigned int *)(v17 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v17 + 33) << 32)) << 12) | 0xFFF) )
          {
            v22 = MiGetAweNode(*v11);
            if ( !v22 || (v22[5] & 3) != 0 || v22[4] != v15 )
            {
LABEL_38:
              v9 = v28;
              v12 = v18;
              goto LABEL_39;
            }
            v17 = v22[3];
            v24 = *(_DWORD *)(v17 + 48) & 0x1100000;
            if ( v23 == 17825792 )
            {
              if ( v24 != 17825792 )
                v12 = v18;
            }
            else if ( v24 == 17825792 )
            {
              v12 = v18;
            }
          }
          ++v11;
        }
        while ( v11 < &Pool[NumberOfPages] );
        v25 = MiLockAwePagesShared(v15, (__int64)CurrentThread);
        if ( v10
          && (v12 = MiReferenceIncomingPhysicalPages(
                      v15,
                      (__int64)v10,
                      NumberOfPages,
                      (__int64)Pool,
                      (__int64 *)&v30,
                      v28,
                      0LL),
              v12 < 0) )
        {
          v9 = v28;
        }
        else
        {
          v9 = v28;
          *((_QWORD *)&v30 + 1) = MiWriteAwePtes(v28, v10, NumberOfPages, (__int64)Pool, 0LL, 1);
        }
        if ( v25 )
          MiUnlockAweVadsShared((__int64)CurrentThread, v25);
      }
LABEL_39:
      if ( v29 )
        MiUnlockAweVadsShared((__int64)CurrentThread, v29);
    }
  }
  v26 = (__int64 *)&v30;
  v27 = 2LL;
  do
  {
    if ( *v26 )
      MiFreePhysicalPageChain(v9, *v26, 0);
    ++v26;
    --v27;
  }
  while ( v27 );
  if ( Pool != (unsigned __int64 *)P )
    ExFreePoolWithTag(Pool, 0);
  return v12;
}
