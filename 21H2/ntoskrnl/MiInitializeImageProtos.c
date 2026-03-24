/*
 * XREFs of MiInitializeImageProtos @ 0x14026DF7C
 * Callers:
 *     MiCreateImageFileMap @ 0x1406D33F4 (MiCreateImageFileMap.c)
 * Callees:
 *     MmAccessFault @ 0x14020D090 (MmAccessFault.c)
 *     MmMapLockedPagesSpecifyCache @ 0x140226CC0 (MmMapLockedPagesSpecifyCache.c)
 *     MiUnlockProtoPoolPage @ 0x1402397F0 (MiUnlockProtoPoolPage.c)
 *     KeYieldProcessorEx @ 0x14024B280 (KeYieldProcessorEx.c)
 *     MiInitializeTransitionPfn @ 0x14026E22C (MiInitializeTransitionPfn.c)
 *     MiGetPageForHeader @ 0x14026E62C (MiGetPageForHeader.c)
 *     MiGetEffectivePagePriorityThread @ 0x140270E84 (MiGetEffectivePagePriorityThread.c)
 *     MiReferenceControlAreaPfn @ 0x140319F80 (MiReferenceControlAreaPfn.c)
 *     MiLockProtoPoolPage @ 0x14031A100 (MiLockProtoPoolPage.c)
 *     MiEndingOffset @ 0x14031C840 (MiEndingOffset.c)
 *     MiStartingOffset @ 0x14031E410 (MiStartingOffset.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140328BC0 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14032DEC0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140331AB0 (MiMapPageInHyperSpaceWorker.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x140348910 (MiUnmapPageInHyperSpaceWorker.c)
 *     KeCopyPage @ 0x140402E50 (KeCopyPage.c)
 *     memset @ 0x140414200 (memset.c)
 */

__int64 __fastcall MiInitializeImageProtos(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 result; // rax
  char v4; // bp
  __int64 v5; // rbx
  __int64 v6; // rsi
  __int64 v7; // r15
  unsigned __int64 v8; // rdi
  __int64 v9; // r14
  unsigned __int64 v10; // rbx
  __int64 v11; // r9
  __int64 v12; // r12
  char *v13; // rbx
  __int64 v14; // r15
  __int64 v15; // rdx
  __int64 v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned __int64 v20; // [rsp+30h] [rbp-78h]
  __int64 v21; // [rsp+38h] [rbp-70h]
  unsigned __int64 v22; // [rsp+40h] [rbp-68h]
  unsigned __int64 v23; // [rsp+48h] [rbp-60h]
  __int64 v24; // [rsp+50h] [rbp-58h]
  unsigned __int8 v27; // [rsp+C0h] [rbp+18h] BYREF
  int v28; // [rsp+C8h] [rbp+20h] BYREF

  v2 = a1;
  v21 = *(_QWORD *)(qword_140C4E648 + 8LL * (*(_WORD *)(a1 + 60) & 0x3FF));
  v20 = *(unsigned int *)(a2 + 40);
  result = MiGetEffectivePagePriorityThread(KeGetCurrentThread(), a2);
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
  v27 = 17;
  v6 = 0LL;
  if ( v2 != -128 )
  {
    do
    {
      v7 = *(_QWORD *)(v5 + 16);
      v8 = *(_QWORD *)(v5 + 8);
      v24 = v7;
      if ( (*(_BYTE *)(v5 + 34) & 2) == 0 )
      {
        v9 = MiStartingOffset(v5, v8, 0xFFFFFFFFLL);
        result = MiEndingOffset(v5);
        v22 = result;
        v10 = v8 + 8LL * *(unsigned int *)(v5 + 44);
        v23 = v10;
        if ( v8 < v10 )
        {
          while ( 1 )
          {
            if ( (v8 & 0xFFF) != 0 && v6 )
              goto LABEL_9;
            if ( v6 )
              MiUnlockProtoPoolPage(v6, v27);
            result = MiLockProtoPoolPage(v8, &v27);
            v6 = result;
            if ( result )
            {
LABEL_9:
              if ( v9 + 4096 > v20 )
              {
                v7 = 0LL;
                break;
              }
              result = MI_READ_PTE_LOCK_FREE(v8);
              if ( (result & 1) == 0 && (result & 0xC00) != 0x800 && (result & 0x400) != 0 )
              {
                result = MiGetPageForHeader(v21, (*(_DWORD *)(v2 + 56) >> 20) & 0x3F);
                v12 = result;
                if ( result != -1 )
                {
                  if ( (*(_BYTE *)(a2 + 10) & 5) != 0 )
                    v13 = *(char **)(a2 + 24);
                  else
                    v13 = (char *)MmMapLockedPagesSpecifyCache((PMDL)a2, 0, MmCached, 0LL, 0, 0xC0000020);
                  v14 = MiMapPageInHyperSpaceWorker(v12, 0LL, 0x80000000LL, v11);
                  KeCopyPage(v14, &v13[v9]);
                  if ( v9 + 4096 > v22 )
                    memset((void *)(v14 - (unsigned int)(v9 - v22 + 4096) + 4096), 0, (unsigned int)(v9 - v22 + 4096));
                  LOBYTE(v15) = 17;
                  MiUnmapPageInHyperSpaceWorker(v14, v15, 0x80000000LL);
                  v16 = 48 * v12 - 0x58000000000LL;
                  MiReferenceControlAreaPfn(a1, 0LL, 1LL);
                  v28 = 0;
                  while ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 24), 0x3FuLL) )
                  {
                    do
                      KeYieldProcessorEx(&v28, v17, v18, v19);
                    while ( *(__int64 *)(v16 + 24) < 0 );
                  }
                  MiInitializeTransitionPfn(v12, v8, -1LL);
                  *(_BYTE *)(v16 + 35) ^= (*(_BYTE *)(v16 + 35) ^ v4) & 7;
                  MiRemoveLockedPageChargeAndDecRef(48 * v12 - 0x58000000000LL);
                  result = 0x7FFFFFFFFFFFFFFFLL;
                  _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                  v10 = v23;
                }
                v2 = a1;
              }
              v8 += 8LL;
              v9 += 4096LL;
            }
            else
            {
              result = MmAccessFault(2uLL, v8, 0, 0LL);
            }
            if ( v8 >= v10 )
            {
              v7 = v24;
              break;
            }
          }
        }
        if ( v6 )
        {
          result = MiUnlockProtoPoolPage(v6, v27);
          v6 = 0LL;
        }
      }
      v5 = v7;
    }
    while ( v7 );
  }
  return result;
}
