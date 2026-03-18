/*
 * XREFs of MiInitializeImageProtos @ 0x14031C75C
 * Callers:
 *     MiCreateImageFileMap @ 0x14060C454 (MiCreateImageFileMap.c)
 * Callees:
 *     MmMapLockedPagesSpecifyCache @ 0x14021BA60 (MmMapLockedPagesSpecifyCache.c)
 *     MiEndingOffset @ 0x140224680 (MiEndingOffset.c)
 *     MiLockProtoPoolPage @ 0x140229D70 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x14022A960 (MiUnlockProtoPoolPage.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x14022C820 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1402385A0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiStartingOffset @ 0x140245D90 (MiStartingOffset.c)
 *     MiGetEffectivePagePriorityThread @ 0x14025AF90 (MiGetEffectivePagePriorityThread.c)
 *     MiReferenceControlAreaPfn @ 0x14025F72C (MiReferenceControlAreaPfn.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     MmAccessFault @ 0x14029F070 (MmAccessFault.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1402F7480 (MiMapPageInHyperSpaceWorker.c)
 *     MiInitializeTransitionPfn @ 0x14031CA0C (MiInitializeTransitionPfn.c)
 *     MiGetPageForHeader @ 0x14031CC60 (MiGetPageForHeader.c)
 *     KeCopyPage @ 0x1403FB0A0 (KeCopyPage.c)
 *     memset @ 0x14040A280 (memset.c)
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
  unsigned __int64 v11; // rbx
  __int64 v12; // r9
  __int64 v13; // r12
  char *v14; // rbx
  unsigned __int64 v15; // r15
  __int64 v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned __int64 v23; // [rsp+30h] [rbp-78h]
  __int64 v24; // [rsp+38h] [rbp-70h]
  unsigned __int64 v25; // [rsp+40h] [rbp-68h]
  unsigned __int64 v26; // [rsp+48h] [rbp-60h]
  __int64 v27; // [rsp+50h] [rbp-58h]
  unsigned __int8 v30; // [rsp+C0h] [rbp+18h] BYREF
  int v31; // [rsp+C8h] [rbp+20h] BYREF

  v2 = a1;
  v24 = *(_QWORD *)(qword_140C4E448 + 8LL * (*(_WORD *)(a1 + 60) & 0x3FF));
  v23 = *(unsigned int *)(a2 + 40);
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
  v30 = 17;
  v6 = 0LL;
  if ( v2 != -128 )
  {
    do
    {
      v7 = *(_QWORD *)(v5 + 16);
      v8 = *(_QWORD *)(v5 + 8);
      v27 = v7;
      if ( (*(_BYTE *)(v5 + 34) & 2) == 0 )
      {
        v9 = MiStartingOffset((__int64 *)v5, v8, 0xFFFFFFFF);
        result = MiEndingOffset(v5);
        v25 = result;
        v11 = v8 + 8LL * *(unsigned int *)(v5 + 44);
        v26 = v11;
        if ( v8 < v11 )
        {
          while ( 1 )
          {
            if ( (v8 & 0xFFF) != 0 && v6 )
              goto LABEL_9;
            if ( v6 )
            {
              LOBYTE(v10) = v30;
              MiUnlockProtoPoolPage(v6, v10);
            }
            result = MiLockProtoPoolPage(v8, &v30);
            v6 = result;
            if ( result )
            {
LABEL_9:
              if ( v9 + 4096 > v23 )
              {
                v7 = 0LL;
                break;
              }
              result = MI_READ_PTE_LOCK_FREE(v8);
              if ( (result & 1) == 0 && (result & 0xC00) != 0x800 && (result & 0x400) != 0 )
              {
                result = MiGetPageForHeader(v24, (*(_DWORD *)(v2 + 56) >> 20) & 0x3F);
                v13 = result;
                if ( result != -1 )
                {
                  if ( (*(_BYTE *)(a2 + 10) & 5) != 0 )
                    v14 = *(char **)(a2 + 24);
                  else
                    v14 = (char *)MmMapLockedPagesSpecifyCache((PMDL)a2, 0, MmCached, 0LL, 0, 0xC0000020);
                  v15 = MiMapPageInHyperSpaceWorker(v13, 0LL, 0x80000000, v12);
                  KeCopyPage(v15, &v14[v9]);
                  if ( v9 + 4096 > v25 )
                    memset((void *)(v15 - (unsigned int)(v9 - v25 + 4096) + 4096), 0, (unsigned int)(v9 - v25 + 4096));
                  MiUnmapPageInHyperSpaceWorker(v15, 0x11u, 0x80000000);
                  v16 = 48 * v13 - 0x58000000000LL;
                  MiReferenceControlAreaPfn(a1, 0LL, 1u);
                  v31 = 0;
                  while ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 24), 0x3FuLL) )
                  {
                    do
                      KeYieldProcessorEx(&v31, v17, v18, v19);
                    while ( *(__int64 *)(v16 + 24) < 0 );
                  }
                  MiInitializeTransitionPfn(v13, v8, -1LL);
                  *(_BYTE *)(v16 + 35) ^= (*(_BYTE *)(v16 + 35) ^ v4) & 7;
                  MiRemoveLockedPageChargeAndDecRef(48 * v13 - 0x58000000000LL, v20, v21, v22);
                  result = 0x7FFFFFFFFFFFFFFFLL;
                  _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                  v11 = v26;
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
            if ( v8 >= v11 )
            {
              v7 = v27;
              break;
            }
          }
        }
        if ( v6 )
        {
          LOBYTE(v10) = v30;
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
