/*
 * XREFs of PoAllProcessorsDeepIdle @ 0x1403545B0
 * Callers:
 *     KePrepareClockTimerForIdle @ 0x140353FB0 (KePrepareClockTimerForIdle.c)
 *     PpmIdleSelectStates @ 0x1403A1620 (PpmIdleSelectStates.c)
 * Callees:
 *     MmGetNextNode @ 0x14030B3F0 (MmGetNextNode.c)
 *     KeEnumerateNextSchedulerSubNodeInNode @ 0x140354698 (KeEnumerateNextSchedulerSubNodeInNode.c)
 */

char PoAllProcessorsDeepIdle()
{
  struct _KPRCB *CurrentPrcb; // rbx
  unsigned __int16 *v1; // rdx
  __int64 v2; // rsi
  int v3; // edi
  unsigned __int64 DeepIdleSet; // rdx
  unsigned __int64 Mask; // rax
  int NextNode; // eax
  unsigned __int16 *v8; // [rsp+20h] [rbp-28h] BYREF
  int v9; // [rsp+28h] [rbp-20h]
  int v10; // [rsp+2Ch] [rbp-1Ch]
  int v11; // [rsp+50h] [rbp+8h] BYREF
  _KSCHEDULER_SUBNODE *v12; // [rsp+58h] [rbp+10h] BYREF

  CurrentPrcb = KeGetCurrentPrcb();
  v12 = 0LL;
  v11 = 0;
  v1 = (unsigned __int16 *)KeNodeBlock[CurrentPrcb->SchedulerSubNode->Affinity.Reserved[0]];
  v2 = 4LL * CurrentPrcb->Number + 13690336;
  v3 = *v1;
  while ( 1 )
  {
    v9 = *((_DWORD *)v1 + 4);
    v10 = 0;
    v8 = v1;
    while ( !(unsigned int)KeEnumerateNextSchedulerSubNodeInNode(&v8, &v12) )
    {
      DeepIdleSet = v12->DeepIdleSet;
      Mask = v12->Affinity.Mask;
      if ( v12 == CurrentPrcb->SchedulerSubNode )
      {
        DeepIdleSet &= ~(1LL << CurrentPrcb->GroupIndex);
        _bittestandreset64((__int64 *)&Mask, *(_DWORD *)(v2 + 0x140000000LL) & 0x3F);
      }
      if ( DeepIdleSet != Mask )
        return 0;
    }
    NextNode = MmGetNextNode(v3, &v11);
    if ( NextNode == -1 )
      break;
    v1 = (unsigned __int16 *)KeNodeBlock[NextNode];
  }
  return 1;
}
