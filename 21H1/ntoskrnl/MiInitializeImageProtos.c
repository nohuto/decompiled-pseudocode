/*
 * XREFs of MiInitializeImageProtos @ 0x14034BA9C
 * Callers:
 *     MiCreateImageFileMap @ 0x1406415A4 (MiCreateImageFileMap.c)
 * Callees:
 *     MmAccessFault @ 0x14020C560 (MmAccessFault.c)
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     MmMapLockedPagesSpecifyCache @ 0x140274AB0 (MmMapLockedPagesSpecifyCache.c)
 *     MiEndingOffset @ 0x14027D6D0 (MiEndingOffset.c)
 *     MiLockProtoPoolPage @ 0x140282DC0 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x1402839B0 (MiUnlockProtoPoolPage.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140285870 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1402915F0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiStartingOffset @ 0x14029EDC0 (MiStartingOffset.c)
 *     MiGetEffectivePagePriorityThread @ 0x1402B3FC0 (MiGetEffectivePagePriorityThread.c)
 *     MiReferenceControlAreaPfn @ 0x1402B875C (MiReferenceControlAreaPfn.c)
 *     MiInitializeTransitionPfn @ 0x14034BD4C (MiInitializeTransitionPfn.c)
 *     MiGetPageForHeader @ 0x14034BFA0 (MiGetPageForHeader.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140353460 (MiMapPageInHyperSpaceWorker.c)
 *     KeCopyPage @ 0x1403F9E10 (KeCopyPage.c)
 *     memset @ 0x140408F80 (memset.c)
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
  unsigned __int64 v9; // r14
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int64 v13; // rbx
  __int64 v14; // r12
  char *v15; // rbx
  unsigned __int64 v16; // r15
  __int64 v17; // rdx
  __int64 v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  unsigned __int64 v22; // [rsp+30h] [rbp-78h]
  __int64 v23; // [rsp+38h] [rbp-70h]
  unsigned __int64 v24; // [rsp+40h] [rbp-68h]
  unsigned __int64 v25; // [rsp+48h] [rbp-60h]
  __int64 v26; // [rsp+50h] [rbp-58h]
  char v29; // [rsp+C0h] [rbp+18h] BYREF
  int v30; // [rsp+C8h] [rbp+20h] BYREF

  v2 = a1;
  v23 = *(_QWORD *)(qword_140C4E588 + 8LL * (*(_WORD *)(a1 + 60) & 0x3FF));
  v22 = *(unsigned int *)(a2 + 40);
  result = MiGetEffectivePagePriorityThread((__int64)KeGetCurrentThread());
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
  v29 = 17;
  v6 = 0LL;
  if ( v2 != -128 )
  {
    do
    {
      v7 = *(_QWORD *)(v5 + 16);
      v8 = *(_QWORD *)(v5 + 8);
      v26 = v7;
      if ( (*(_BYTE *)(v5 + 34) & 2) == 0 )
      {
        v9 = MiStartingOffset((__int64 *)v5, v8, 0xFFFFFFFFLL);
        result = MiEndingOffset(v5);
        v24 = result;
        v13 = v8 + 8LL * *(unsigned int *)(v5 + 44);
        v25 = v13;
        if ( v8 < v13 )
        {
          while ( 1 )
          {
            if ( (v8 & 0xFFF) != 0 && v6 )
              goto LABEL_9;
            if ( v6 )
            {
              LOBYTE(v10) = v29;
              MiUnlockProtoPoolPage(v6, v10, v11, v12);
            }
            result = MiLockProtoPoolPage(v8, (__int64)&v29);
            v6 = result;
            if ( result )
            {
LABEL_9:
              if ( v9 + 4096 > v22 )
              {
                v7 = 0LL;
                break;
              }
              result = MI_READ_PTE_LOCK_FREE(v8);
              if ( (result & 1) == 0 && (result & 0xC00) != 0x800 && (result & 0x400) != 0 )
              {
                result = MiGetPageForHeader(v23, (*(_DWORD *)(v2 + 56) >> 20) & 0x3F);
                v14 = result;
                if ( result != -1 )
                {
                  if ( (*(_BYTE *)(a2 + 10) & 5) != 0 )
                    v15 = *(char **)(a2 + 24);
                  else
                    v15 = (char *)MmMapLockedPagesSpecifyCache((PMDL)a2, 0, MmCached, 0LL, 0, 0xC0000020);
                  v16 = MiMapPageInHyperSpaceWorker(v14, 0LL, 0x80000000LL, v12);
                  KeCopyPage(v16, &v15[v9]);
                  if ( v9 + 4096 > v24 )
                    memset((void *)(v16 - (unsigned int)(v9 - v24 + 4096) + 4096), 0, (unsigned int)(v9 - v24 + 4096));
                  LOBYTE(v17) = 17;
                  MiUnmapPageInHyperSpaceWorker(v16, v17, 0x80000000);
                  v18 = 48 * v14 - 0x58000000000LL;
                  MiReferenceControlAreaPfn(a1, 0LL, 1u);
                  v30 = 0;
                  while ( _interlockedbittestandset64((volatile signed __int32 *)(v18 + 24), 0x3FuLL) )
                  {
                    do
                      KeYieldProcessorEx(&v30, v19, v20, v21);
                    while ( *(__int64 *)(v18 + 24) < 0 );
                  }
                  MiInitializeTransitionPfn(v14, v8, -1LL);
                  *(_BYTE *)(v18 + 35) ^= (*(_BYTE *)(v18 + 35) ^ v4) & 7;
                  MiRemoveLockedPageChargeAndDecRef(48 * v14 - 0x58000000000LL);
                  result = 0x7FFFFFFFFFFFFFFFLL;
                  _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                  v13 = v25;
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
            if ( v8 >= v13 )
            {
              v7 = v26;
              break;
            }
          }
        }
        if ( v6 )
        {
          LOBYTE(v10) = v29;
          result = MiUnlockProtoPoolPage(v6, v10, v11, v12);
          v6 = 0LL;
        }
      }
      v5 = v7;
    }
    while ( v7 );
  }
  return result;
}
