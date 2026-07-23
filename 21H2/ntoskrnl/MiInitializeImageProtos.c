/*
 * XREFs of MiInitializeImageProtos @ 0x14025BF1C
 * Callers:
 *     MiCreateImageFileMap @ 0x1406AA6D4 (MiCreateImageFileMap.c)
 * Callees:
 *     MiInitializeTransitionPfn @ 0x14025C1CC (MiInitializeTransitionPfn.c)
 *     MiGetPageForHeader @ 0x14025C5CC (MiGetPageForHeader.c)
 *     MiGetEffectivePagePriorityThread @ 0x14025EE24 (MiGetEffectivePagePriorityThread.c)
 *     MmAccessFault @ 0x1402B1990 (MmAccessFault.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1402CB5C0 (MmMapLockedPagesSpecifyCache.c)
 *     MiUnlockProtoPoolPage @ 0x1402DE040 (MiUnlockProtoPoolPage.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     MiReferenceControlAreaPfn @ 0x140324CD0 (MiReferenceControlAreaPfn.c)
 *     MiLockProtoPoolPage @ 0x140324E50 (MiLockProtoPoolPage.c)
 *     MiEndingOffset @ 0x140327590 (MiEndingOffset.c)
 *     MiStartingOffset @ 0x140329160 (MiStartingOffset.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140333910 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14033C800 (MiMapPageInHyperSpaceWorker.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x140353660 (MiUnmapPageInHyperSpaceWorker.c)
 *     KeCopyPage @ 0x140403030 (KeCopyPage.c)
 *     memset @ 0x140414300 (memset.c)
 */

__int64 __fastcall MiInitializeImageProtos(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 result; // rax
  char v4; // bp
  __int64 v5; // rbx
  __int64 v6; // rsi
  __int64 v7; // r15
  ULONG_PTR v8; // rdi
  __int64 v9; // r14
  __int64 v10; // rdx
  ULONG_PTR v11; // rbx
  __int64 v12; // r12
  char *v13; // rbx
  __int64 v14; // r15
  __int64 v15; // rdx
  __int64 v16; // rbx
  unsigned __int64 v17; // [rsp+30h] [rbp-78h]
  __int64 v18; // [rsp+38h] [rbp-70h]
  unsigned __int64 v19; // [rsp+40h] [rbp-68h]
  ULONG_PTR v20; // [rsp+48h] [rbp-60h]
  __int64 v21; // [rsp+50h] [rbp-58h]
  char v24; // [rsp+C0h] [rbp+18h] BYREF
  int v25; // [rsp+C8h] [rbp+20h] BYREF

  v2 = a1;
  v18 = *(_QWORD *)(qword_140C4E688 + 8LL * (*(_WORD *)(a1 + 60) & 0x3FF));
  v17 = *(unsigned int *)(a2 + 40);
  result = MiGetEffectivePagePriorityThread(KeGetCurrentThread());
  v4 = result;
  if ( (unsigned int)result > 5 )
  {
    v4 = 5;
  }
  else if ( (_DWORD)result )
  {
    v4 = result - 1;
  }
  v5 = v2 + 128;
  v24 = 17;
  v6 = 0LL;
  if ( v2 != -128 )
  {
    do
    {
      v7 = *(_QWORD *)(v5 + 16);
      v8 = *(_QWORD *)(v5 + 8);
      v21 = v7;
      if ( (*(_BYTE *)(v5 + 34) & 2) == 0 )
      {
        v9 = MiStartingOffset(v5, v8, 0xFFFFFFFFLL);
        result = MiEndingOffset(v5);
        v19 = result;
        v11 = v8 + 8LL * *(unsigned int *)(v5 + 44);
        v20 = v11;
        if ( v8 < v11 )
        {
          while ( 1 )
          {
            if ( (v8 & 0xFFF) != 0 && v6 )
              goto LABEL_9;
            if ( v6 )
            {
              LOBYTE(v10) = v24;
              MiUnlockProtoPoolPage(v6, v10);
            }
            result = MiLockProtoPoolPage(v8, &v24);
            v6 = result;
            if ( result )
            {
LABEL_9:
              if ( v9 + 4096 > v17 )
              {
                v7 = 0LL;
                break;
              }
              result = MI_READ_PTE_LOCK_FREE(v8);
              if ( (result & 1) == 0 && (result & 0xC00) != 0x800 && (result & 0x400) != 0 )
              {
                result = MiGetPageForHeader(v18, (*(_DWORD *)(v2 + 56) >> 20) & 0x3F);
                v12 = result;
                if ( result != -1 )
                {
                  if ( (*(_BYTE *)(a2 + 10) & 5) != 0 )
                    v13 = *(char **)(a2 + 24);
                  else
                    v13 = (char *)MmMapLockedPagesSpecifyCache((PMDL)a2, 0, MmCached, 0LL, 0, 0xC0000020);
                  v14 = MiMapPageInHyperSpaceWorker(v12, 0LL, 0x80000000LL);
                  KeCopyPage(v14, &v13[v9]);
                  if ( v9 + 4096 > v19 )
                    memset((void *)(v14 - (unsigned int)(v9 - v19 + 4096) + 4096), 0, (unsigned int)(v9 - v19 + 4096));
                  LOBYTE(v15) = 17;
                  MiUnmapPageInHyperSpaceWorker(v14, v15, 0x80000000LL);
                  v16 = 48 * v12 - 0x58000000000LL;
                  MiReferenceControlAreaPfn(a1, 0LL, 1LL);
                  v25 = 0;
                  while ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 24), 0x3FuLL) )
                  {
                    do
                      KeYieldProcessorEx(&v25);
                    while ( *(__int64 *)(v16 + 24) < 0 );
                  }
                  MiInitializeTransitionPfn(v12, v8, -1LL);
                  *(_BYTE *)(v16 + 35) ^= (*(_BYTE *)(v16 + 35) ^ v4) & 7;
                  MiRemoveLockedPageChargeAndDecRef(48 * v12 - 0x58000000000LL);
                  result = 0x7FFFFFFFFFFFFFFFLL;
                  _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                  v11 = v20;
                }
                v2 = a1;
              }
              v8 += 8LL;
              v9 += 4096LL;
            }
            else
            {
              result = MmAccessFault(2uLL, v8);
            }
            if ( v8 >= v11 )
            {
              v7 = v21;
              break;
            }
          }
        }
        if ( v6 )
        {
          LOBYTE(v10) = v24;
          result = MiUnlockProtoPoolPage(v6, v10);
          v6 = 0LL;
        }
      }
      v5 = v7;
    }
    while ( v7 );
  }
  return result;
}
