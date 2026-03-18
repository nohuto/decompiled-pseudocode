/*
 * XREFs of MiMirrorNodeLargePages @ 0x14038F3B8
 * Callers:
 *     MiMirrorGatherBrownPages @ 0x14038A428 (MiMirrorGatherBrownPages.c)
 *     MiMirrorReduceBlackWrites @ 0x14038F620 (MiMirrorReduceBlackWrites.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     MiMirrorAddPagesToBrownList @ 0x14038A790 (MiMirrorAddPagesToBrownList.c)
 *     MiMirrorOmitPagesFromCopy @ 0x14038F830 (MiMirrorOmitPagesFromCopy.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

volatile LONG *__fastcall MiMirrorNodeLargePages(__int64 a1, __int64 a2, int a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // r9
  volatile LONG *result; // rax
  int *v6; // rax
  __int64 *v7; // rcx
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // r8
  __int64 v10; // r13
  unsigned int v11; // ecx
  __int64 i; // rbp
  unsigned int v13; // r12d
  __int64 v14; // rax
  __int64 v15; // rdi
  _QWORD **v16; // r14
  __int64 v17; // rax
  _QWORD *v18; // rsi
  bool v19; // zf
  KIRQL v20; // al
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v24; // eax
  volatile LONG *SpinLock; // [rsp+20h] [rbp-A8h]
  __int64 v26; // [rsp+28h] [rbp-A0h]
  __int64 v27; // [rsp+30h] [rbp-98h]
  __int64 v28; // [rsp+38h] [rbp-90h]
  __int64 *v29; // [rsp+40h] [rbp-88h]
  int *v30; // [rsp+48h] [rbp-80h]
  unsigned __int64 v31; // [rsp+50h] [rbp-78h]
  __int64 v32; // [rsp+58h] [rbp-70h]
  unsigned __int64 v33; // [rsp+60h] [rbp-68h]
  unsigned __int64 v34; // [rsp+68h] [rbp-60h]
  unsigned __int64 v35; // [rsp+70h] [rbp-58h]
  unsigned __int8 v37; // [rsp+D8h] [rbp+10h]
  int v38; // [rsp+E0h] [rbp+18h]
  int v39; // [rsp+E8h] [rbp+20h]

  v38 = a3;
  v3 = *(_QWORD *)(a2 + 16);
  v4 = a1;
  result = (volatile LONG *)(unsigned __int16)KeNumberNodes;
  v37 = 17;
  v33 = v3;
  v35 = v3 + 24512LL * (unsigned __int16)KeNumberNodes;
  if ( v3 < v35 )
  {
    result = (volatile LONG *)(v3 + 22848);
    SpinLock = (volatile LONG *)(v3 + 22848);
    do
    {
      if ( !a3 )
      {
        v20 = ExAcquireSpinLockExclusive(result);
        v4 = a1;
        v37 = v20;
      }
      v6 = dword_140C507C0;
      v31 = v3;
      v7 = MiLargePageSizes;
      v30 = dword_140C507C0;
      v8 = v3;
      v29 = MiLargePageSizes;
      v32 = 3LL;
      do
      {
        v9 = *v7;
        v10 = 0LL;
        v11 = *v6;
        v34 = v9;
        v39 = *v6;
        v28 = 0LL;
        do
        {
          for ( i = 0LL; i <= 1; ++i )
          {
            v13 = 0;
            if ( MmNumberOfChannels )
            {
              do
              {
                v14 = 4LL;
                v27 = 4LL;
                v15 = 32 * (4 * (v10 + i) + v13) + 560;
                do
                {
                  v16 = *(_QWORD ***)(v8 + v15);
                  if ( v11 )
                  {
                    v17 = v11;
                    v26 = v11;
                    do
                    {
                      v18 = *v16;
                      if ( *v16 != v16 )
                      {
                        do
                        {
                          if ( v38 )
                            MiMirrorOmitPagesFromCopy(
                              v4,
                              0xAAAAAAAAAAAAAAABuLL * ((__int64)(v18 + 0x44000000000LL) >> 4),
                              v34);
                          else
                            MiMirrorAddPagesToBrownList(
                              0xAAAAAAAAAAAAAAABuLL * ((__int64)(v18 + 0x44000000000LL) >> 4),
                              v34);
                          v18 = (_QWORD *)*v18;
                          v4 = a1;
                        }
                        while ( v18 != v16 );
                        v17 = v26;
                      }
                      v4 = a1;
                      v16 += 3;
                      v26 = --v17;
                    }
                    while ( v17 );
                    v14 = v27;
                    v8 = v31;
                    v11 = v39;
                  }
                  v4 = a1;
                  v15 += 8LL;
                  v27 = --v14;
                }
                while ( v14 );
                ++v13;
              }
              while ( v13 < MmNumberOfChannels );
              v10 = v28;
            }
            v4 = a1;
          }
          v10 += 2LL;
          v28 = v10;
        }
        while ( v10 <= 2 );
        v8 += 1072LL;
        v7 = v29 + 1;
        v6 = v30 + 1;
        ++v29;
        v19 = v32-- == 1;
        ++v30;
        v31 = v8;
      }
      while ( !v19 );
      if ( !v38 )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && v37 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v24 = ~(unsigned __int16)(-1LL << (v37 + 1));
              v19 = (v24 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v24;
              if ( v19 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
        }
        __writecr8(v37);
      }
      a3 = v38;
      v3 = v33 + 24512;
      v4 = a1;
      result = SpinLock + 6128;
      v33 = v3;
      SpinLock += 6128;
    }
    while ( v3 < v35 );
  }
  return result;
}
