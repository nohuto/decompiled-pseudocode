/*
 * XREFs of MiInitializeImageProtos @ 0x140350EE8
 * Callers:
 *     MiCreateImageFileMap @ 0x1407084A8 (MiCreateImageFileMap.c)
 * Callees:
 *     MiUnmapPageInHyperSpaceWorker @ 0x14021E940 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiReferenceControlAreaPfn @ 0x140232A28 (MiReferenceControlAreaPfn.c)
 *     MmAccessFault @ 0x14026E3B0 (MmAccessFault.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1402864D0 (MmMapLockedPagesSpecifyCache.c)
 *     MiEndingOffset @ 0x140297130 (MiEndingOffset.c)
 *     MiStartingOffset @ 0x1402A1B60 (MiStartingOffset.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1402AC310 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402B12D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockProtoPoolPage @ 0x1402C8010 (MiUnlockProtoPoolPage.c)
 *     MiLockProtoPoolPage @ 0x1402CA9B0 (MiLockProtoPoolPage.c)
 *     MiGetEffectivePagePriorityThread @ 0x1402D1080 (MiGetEffectivePagePriorityThread.c)
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140349980 (MiMapPageInHyperSpaceWorker.c)
 *     MiInitializeTransitionPfn @ 0x14035090C (MiInitializeTransitionPfn.c)
 *     MiGetPageForHeader @ 0x140351198 (MiGetPageForHeader.c)
 *     KeCopyPage @ 0x1404009F0 (KeCopyPage.c)
 *     memset @ 0x140411300 (memset.c)
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
  unsigned __int64 v10; // rbx
  __int64 v11; // r9
  __int64 v12; // r12
  char *v13; // rbx
  unsigned __int64 v14; // r15
  __int64 v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned __int64 v19; // [rsp+30h] [rbp-78h]
  __int64 v20; // [rsp+38h] [rbp-70h]
  unsigned __int64 v21; // [rsp+40h] [rbp-68h]
  unsigned __int64 v22; // [rsp+48h] [rbp-60h]
  __int64 v23; // [rsp+50h] [rbp-58h]
  unsigned __int8 v26; // [rsp+C0h] [rbp+18h] BYREF
  int v27; // [rsp+C8h] [rbp+20h] BYREF

  v2 = a1;
  v20 = *(_QWORD *)(qword_140C4E4C8 + 8LL * (*(_WORD *)(a1 + 60) & 0x3FF));
  v19 = *(unsigned int *)(a2 + 40);
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
  v26 = 17;
  v6 = 0LL;
  if ( v2 != -128 )
  {
    do
    {
      v7 = *(_QWORD *)(v5 + 16);
      v8 = *(_QWORD *)(v5 + 8);
      v23 = v7;
      if ( (*(_BYTE *)(v5 + 34) & 2) == 0 )
      {
        v9 = MiStartingOffset((__int64 *)v5, v8, 0xFFFFFFFF);
        result = MiEndingOffset(v5);
        v21 = result;
        v10 = v8 + 8LL * *(unsigned int *)(v5 + 44);
        v22 = v10;
        if ( v8 < v10 )
        {
          while ( 1 )
          {
            if ( (v8 & 0xFFF) != 0 && v6 )
              goto LABEL_9;
            if ( v6 )
              MiUnlockProtoPoolPage(v6, v26);
            result = MiLockProtoPoolPage(v8, &v26);
            v6 = result;
            if ( result )
            {
LABEL_9:
              if ( v9 + 4096 > v19 )
              {
                v7 = 0LL;
                break;
              }
              result = MI_READ_PTE_LOCK_FREE(v8);
              if ( (result & 1) == 0 && (result & 0xC00) != 0x800 && (result & 0x400) != 0 )
              {
                result = MiGetPageForHeader(v20, (*(_DWORD *)(v2 + 56) >> 20) & 0x3F);
                v12 = result;
                if ( result != -1 )
                {
                  if ( (*(_BYTE *)(a2 + 10) & 5) != 0 )
                    v13 = *(char **)(a2 + 24);
                  else
                    v13 = (char *)MmMapLockedPagesSpecifyCache((PMDL)a2, 0, MmCached, 0LL, 0, 0xC0000020);
                  v14 = MiMapPageInHyperSpaceWorker(v12, 0LL, 0x80000000, v11);
                  KeCopyPage(v14, &v13[v9]);
                  if ( v9 + 4096 > v21 )
                    memset((void *)(v14 - (unsigned int)(v9 - v21 + 4096) + 4096), 0, (unsigned int)(v9 - v21 + 4096));
                  MiUnmapPageInHyperSpaceWorker(v14, 0x11u, 0x80000000);
                  v15 = 48 * v12 - 0x58000000000LL;
                  MiReferenceControlAreaPfn(a1, 0LL, 1u);
                  v27 = 0;
                  while ( _interlockedbittestandset64((volatile signed __int32 *)(v15 + 24), 0x3FuLL) )
                  {
                    do
                      KeYieldProcessorEx(&v27, v16, v17, v18);
                    while ( *(__int64 *)(v15 + 24) < 0 );
                  }
                  MiInitializeTransitionPfn(v12, (__int64 *)v8, -1LL);
                  *(_BYTE *)(v15 + 35) ^= (*(_BYTE *)(v15 + 35) ^ v4) & 7;
                  MiRemoveLockedPageChargeAndDecRef(48 * v12 - 0x58000000000LL);
                  result = 0x7FFFFFFFFFFFFFFFLL;
                  _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                  v10 = v22;
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
              v7 = v23;
              break;
            }
          }
        }
        if ( v6 )
        {
          result = MiUnlockProtoPoolPage(v6, v26);
          v6 = 0LL;
        }
      }
      v5 = v7;
    }
    while ( v7 );
  }
  return result;
}
