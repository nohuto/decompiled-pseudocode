/*
 * XREFs of KiSetSystemAffinityThread @ 0x14035C1C0
 * Callers:
 *     KeRevertToUserGroupAffinityThread @ 0x14035BE00 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x14035BFE0 (KeSetSystemGroupAffinityThread.c)
 *     KeRevertToUserMultipleGroupAffinityThread @ 0x14056B410 (KeRevertToUserMultipleGroupAffinityThread.c)
 *     KeSetSystemMultipleGroupAffinityThread @ 0x14056B9FC (KeSetSystemMultipleGroupAffinityThread.c)
 * Callees:
 *     KiCheckPrcbAffinityEx @ 0x140291EB8 (KiCheckPrcbAffinityEx.c)
 *     KiUpdateSharedReadyQueueAffinityThread @ 0x140292818 (KiUpdateSharedReadyQueueAffinityThread.c)
 *     KiComputeThreadAffinity @ 0x140292884 (KiComputeThreadAffinity.c)
 *     KiUpdateNodeAffinitizedFlag @ 0x140292A04 (KiUpdateNodeAffinitizedFlag.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     KiCopyAffinityEx @ 0x140300030 (KiCopyAffinityEx.c)
 *     KiSelectNextThread @ 0x14035C3FC (KiSelectNextThread.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140435E00 (memset.c)
 *     KeFindFirstSetLeftAffinityEx @ 0x14056C170 (KeFindFirstSetLeftAffinityEx.c)
 */

char __fastcall KiSetSystemAffinityThread(__int64 a1, unsigned __int16 *a2, __int64 *a3, unsigned int a4, __int64 a5)
{
  __int64 v5; // rdi
  __int64 v7; // rbp
  unsigned __int16 *v9; // rbx
  _WORD *v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rbx
  _WORD *v14; // r9
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rcx
  int FirstSetLeftAffinity; // eax
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  struct _KPRCB *CurrentPrcb; // rbx
  _DWORD *SchedulerAssist; // rcx
  struct _KPRCB *v25; // rcx
  _DWORD *v26; // rdx
  _DWORD *v27; // rcx
  int v28; // eax
  bool v29; // zf
  int v30; // eax
  int v32; // [rsp+50h] [rbp+8h] BYREF
  int v33; // [rsp+68h] [rbp+20h]

  v5 = *(_QWORD *)(a1 + 8);
  v7 = a4;
  if ( a2 )
  {
    KiCopyAffinityEx(*(_QWORD *)(v5 + 576), *(_WORD *)(*(_QWORD *)(v5 + 576) + 2LL), a2);
  }
  else
  {
    v9 = *(unsigned __int16 **)(v5 + 576);
    memset(v9 + 4, 0, 8LL * *v9);
    *v9 = 1;
    v10 = *(_WORD **)(v5 + 576);
    v11 = *((unsigned __int16 *)a3 + 4);
    v12 = *a3;
    if ( *v10 > (unsigned __int16)v11 )
    {
LABEL_3:
      *(_QWORD *)&v10[4 * v11 + 4] |= v12;
      goto LABEL_4;
    }
    if ( v10[1] > (unsigned __int16)v11 )
    {
      *v10 = v11 + 1;
      goto LABEL_3;
    }
  }
LABEL_4:
  if ( (unsigned int)v7 < 0x800 )
  {
    _mm_lfence();
    *(_DWORD *)(v5 + 588) = v7;
    v13 = KiProcessorBlock[v7];
  }
  else
  {
    v13 = KiProcessorBlock[*(unsigned int *)(v5 + 588)];
    if ( !KiCheckPrcbAffinityEx(*(_WORD **)(v5 + 576), v13) )
    {
      v15 = *(_QWORD *)(v13 + 192);
      v16 = *(unsigned __int16 *)(v15 + 136);
      if ( (unsigned __int16)v16 >= *v14 )
        v17 = 0LL;
      else
        v17 = *(_QWORD *)&v14[4 * v16 + 4];
      if ( (v17 & *(_QWORD *)(v15 + 128)) != 0 )
      {
        _BitScanReverse64((unsigned __int64 *)&v17, v17 & *(_QWORD *)(v15 + 128));
        v33 = v17;
        FirstSetLeftAffinity = KiProcessorNumberToIndexMappingTable[(unsigned int)(v17 + ((_DWORD)v16 << 6))];
      }
      else
      {
        FirstSetLeftAffinity = KeFindFirstSetLeftAffinityEx(v14);
      }
      *(_DWORD *)(v5 + 588) = FirstSetLeftAffinity;
      v13 = KiProcessorBlock[FirstSetLeftAffinity];
    }
  }
  *(_WORD *)(v5 + 584) = *(unsigned __int8 *)(v13 + 208);
  if ( (*(_DWORD *)(v5 + 116) & 8) != 0 || !(unsigned int)KiComputeThreadAffinity(v5) )
  {
    KiUpdateSharedReadyQueueAffinityThread(v13, v5);
    KiUpdateNodeAffinitizedFlag(v5);
  }
  LOBYTE(v19) = KiCheckPrcbAffinityEx(*(_WORD **)(v5 + 576), a1);
  if ( !(_BYTE)v19 )
  {
    _interlockedbittestandset((volatile signed __int32 *)(v5 + 120), 0xCu);
    if ( !*(_QWORD *)(a1 + 16) )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v32 = 0;
      while ( 1 )
      {
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        if ( SchedulerAssist )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v28 = SchedulerAssist[6];
            v29 = v28 == -1;
            LODWORD(v19) = v28 + 1;
            SchedulerAssist[6] = v19;
            if ( v29 )
              LOBYTE(v19) = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
          break;
        v27 = CurrentPrcb->SchedulerAssist;
        if ( v27 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v30 = v27[6] - 1;
            v27[6] = v30;
            if ( !v30 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        do
        {
          KeYieldProcessorEx(&v32, v20, v21, v22);
          v19 = *(_QWORD *)(a1 + 48);
        }
        while ( v19 );
      }
      if ( !*(_QWORD *)(a1 + 16) )
        LOBYTE(v19) = KiSelectNextThread(a1, a5, v21);
      _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
      v25 = KeGetCurrentPrcb();
      v26 = v25->SchedulerAssist;
      if ( v26 )
      {
        if ( v25->NestingLevel <= 1u )
        {
          LODWORD(v19) = v26[6] - 1;
          v26[6] = v19;
          if ( !(_DWORD)v19 )
            LOBYTE(v19) = KiRemoveSystemWorkPriorityKick(v25);
        }
      }
    }
  }
  return v19;
}
