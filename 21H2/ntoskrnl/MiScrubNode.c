/*
 * XREFs of MiScrubNode @ 0x14056428C
 * Callers:
 *     MiScrubMemoryWorker @ 0x1408DC100 (MiScrubMemoryWorker.c)
 * Callees:
 *     MiInsertPageInFreeOrZeroedList @ 0x1402D9760 (MiInsertPageInFreeOrZeroedList.c)
 *     MiLockPageInline @ 0x14030AB80 (MiLockPageInline.c)
 *     MiClaimPhysicalRun @ 0x14030B77C (MiClaimPhysicalRun.c)
 *     MiPfnsWorthTrying @ 0x14030CE80 (MiPfnsWorthTrying.c)
 *     MiEmptyKernelStackCache @ 0x1403D0414 (MiEmptyKernelStackCache.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     MiMakePageBad @ 0x140563B74 (MiMakePageBad.c)
 *     MiScrubInterrupted @ 0x140563C98 (MiScrubInterrupted.c)
 *     MiScrubPage @ 0x140564534 (MiScrubPage.c)
 *     MiScrubNodeLargePages @ 0x1408D8928 (MiScrubNodeLargePages.c)
 */

unsigned __int64 __fastcall MiScrubNode(__int64 a1)
{
  __int64 v1; // r8
  __int16 *v3; // rbx
  unsigned int *v4; // rax
  unsigned int *v5; // rbp
  unsigned __int64 result; // rax
  _DWORD *v7; // rcx
  __int64 v8; // r12
  ULONG_PTR v9; // r13
  ULONG_PTR v10; // rsi
  __int64 i; // rdi
  unsigned __int64 v12; // r8
  __int64 v13; // rcx
  int v14; // ebx
  __int64 v15; // rdx
  __int64 v16; // r8
  _DWORD *v17; // r9
  __int64 v18; // r8
  _DWORD *v19; // r9
  unsigned __int64 v20; // r15
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v23; // zf
  int v24; // [rsp+90h] [rbp+8h] BYREF
  __int16 *v25; // [rsp+98h] [rbp+10h]

  v1 = *(unsigned int *)(a1 + 8);
  v3 = *(__int16 **)(*(_QWORD *)a1 + 48LL);
  v4 = *(unsigned int **)(a1 + 216);
  v25 = v3;
  v5 = &v4[4 * *v4 + 4];
  result = MiScrubNodeLargePages(a1, v3, v1);
  v7 = *(_DWORD **)(a1 + 216);
  v8 = 0LL;
  if ( *v7 )
  {
    while ( 1 )
    {
      result = *(unsigned int *)(a1 + 8);
      if ( v5[2 * v8] == (_DWORD)result )
        break;
LABEL_26:
      v7 = *(_DWORD **)(a1 + 216);
      v8 = (unsigned int)(v8 + 1);
      if ( (unsigned int)v8 >= *v7 )
        return result;
    }
    v9 = *(_QWORD *)&v7[4 * (unsigned int)v8 + 4];
    v10 = v9 + *(_QWORD *)&v7[4 * (unsigned int)v8 + 6] - 1LL;
    result = 0xFFFFFA8000000000uLL;
    for ( i = 48 * v10 - 0x58000000000LL; ; i -= 48LL )
    {
      if ( v10 < v9 || !v9 )
        goto LABEL_26;
      result = MiScrubInterrupted(a1);
      if ( (_DWORD)result )
        return result;
      v24 = 0;
      result = MiPfnsWorthTrying(v3, i, 1LL, 117440512, &v24);
      v12 = result;
      if ( result )
      {
        if ( result >= v10 - v9 + 1 )
          goto LABEL_26;
        v13 = 48 - 48 * result;
        result = 1 - result;
        i += v13;
        v10 += 1 - v12;
      }
      else
      {
        if ( v24 == 1 )
          MiEmptyKernelStackCache();
        result = MiClaimPhysicalRun(
                   (__int64)v3,
                   v10,
                   1LL,
                   0xFFFFFFFFFLL,
                   a1 + 176,
                   117440512,
                   -1,
                   0LL,
                   *(unsigned __int8 *)(i + 34) >> 6,
                   0LL);
        if ( !result )
        {
          v14 = MiScrubPage(a1, i, 0LL, 0LL);
          v20 = (unsigned __int8)MiLockPageInline(i, v15, v16, v17);
          if ( v14 < 0 || (*(_BYTE *)(i + 35) & 0x40) != 0 )
          {
            v3 = v25;
            if ( *(__int16 **)(qword_140C4E688 + 8 * ((*(_QWORD *)(i + 40) >> 39) & 0x3FFLL)) == v25 )
            {
              MiMakePageBad(i, 2LL, v18, v19);
              goto LABEL_16;
            }
          }
          else
          {
            v3 = v25;
          }
          MiInsertPageInFreeOrZeroedList(v10, 2);
LABEL_16:
          _InterlockedAnd64((volatile signed __int64 *)(i + 24), 0x7FFFFFFFFFFFFFFFuLL);
          result = (unsigned int)KiIrqlFlags;
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              result = KeGetCurrentIrql();
              if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v20 <= 0xFu && (unsigned __int8)result >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                SchedulerAssist = CurrentPrcb->SchedulerAssist;
                result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v20 + 1));
                v23 = ((unsigned int)result & SchedulerAssist[5]) == 0;
                SchedulerAssist[5] &= result;
                if ( v23 )
                  result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
              }
            }
          }
          __writecr8(v20);
        }
      }
      --v10;
    }
  }
  return result;
}
