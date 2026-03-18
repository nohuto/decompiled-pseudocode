/*
 * XREFs of KiReadGuestSchedulerAssistPriority @ 0x14051E168
 * Callers:
 *     KiDeferredReadySingleThread @ 0x140219BA0 (KiDeferredReadySingleThread.c)
 *     KiQuantumEnd @ 0x1402DAD50 (KiQuantumEnd.c)
 *     KiUpdateVPBackingThreadPriority @ 0x1402DBE70 (KiUpdateVPBackingThreadPriority.c)
 *     KiQueueReadyThread @ 0x1402DC4D0 (KiQueueReadyThread.c)
 *     KiDirectSwitchThread @ 0x1402DE570 (KiDirectSwitchThread.c)
 *     KiAddThreadToPrcbQueue @ 0x14035F310 (KiAddThreadToPrcbQueue.c)
 *     KiUpdateVpBackingThreadPriorityFromTopLevel @ 0x14051F1E0 (KiUpdateVpBackingThreadPriorityFromTopLevel.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiReadGuestSchedulerAssistPriority(__int64 a1)
{
  int *v1; // rdx
  int v3; // r9d
  int v4; // r8d
  int v5; // eax

  v1 = *(int **)(a1 + 968);
  if ( !v1 )
    return (unsigned int)*(char *)(a1 + 195);
  v3 = *v1;
  if ( (*v1 & 0x20000) == 0 )
  {
    v4 = BYTE1(v3);
    if ( (unsigned int)BYTE1(v3) - 1 > 0x1E )
      v4 = 1;
    if ( (KiVelocityFlags & 1) != 0 )
      goto LABEL_16;
    if ( (KiVelocityFlags & 8) != 0 )
    {
      v4 += PsPrioritySeparation;
      if ( v4 >= 16 )
        v4 = 15;
      goto LABEL_16;
    }
    v5 = *(char *)(a1 + 563);
    if ( v4 >= v5 )
    {
      if ( (unsigned int)v4 < 0x10 )
        goto LABEL_16;
      v5 = v4;
      if ( (KiVelocityFlags & 0x80u) == 0 )
        v5 = 15;
    }
    v4 = v5;
LABEL_16:
    if ( v1[7] && v4 < KiVpThreadSystemWorkPriority )
      v4 = KiVpThreadSystemWorkPriority;
    if ( v1[8] && v4 < KiVpThreadSystemWorkPriority )
      v4 = KiVpThreadSystemWorkPriority;
    if ( (KiVelocityFlags & 0x20) != 0 && v1[6] && v4 < KiVpThreadSystemWorkPriority )
      v4 = KiVpThreadSystemWorkPriority;
    if ( (KiVelocityFlags & 0x200) != 0 && v1[5] && v4 < KiVpThreadSystemWorkPriority )
      v4 = KiVpThreadSystemWorkPriority;
    if ( (KiVelocityFlags & 0x40) != 0 && (v3 & 0x80000) != 0 && v4 < KiVpThreadSystemWorkPriority )
      return (unsigned int)KiVpThreadSystemWorkPriority;
    return (unsigned int)v4;
  }
  return 7;
}
