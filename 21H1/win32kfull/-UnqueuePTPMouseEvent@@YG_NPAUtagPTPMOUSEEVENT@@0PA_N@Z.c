/*
 * XREFs of ?UnqueuePTPMouseEvent@@YG_NPAUtagPTPMOUSEEVENT@@0PA_N@Z @ 0x178899
 * Callers:
 *     _OnPTPMouseOperation@0 @ 0x178BB9 (_OnPTPMouseOperation@0.c)
 * Callees:
 *     <none>
 */

char __userpurge UnqueuePTPMouseEvent@<al>(
        int *a1@<edx>,
        int *a2@<ecx>,
        struct tagPTPMOUSEEVENT *a3,
        struct tagPTPMOUSEEVENT *a4,
        bool *a5)
{
  char v5; // bl
  char v7; // dl
  char v8; // bl
  int v11; // [esp+Ch] [ebp-4h]

  v5 = 0;
  *(_BYTE *)a3 = 0;
  ExEnterCriticalRegionAndAcquireResourceExclusive(_gpresPTPEventQueue);
  v11 = gdwPTPMouseEvents;
  if ( gdwPTPMouseEvents )
  {
    v7 = gdwPTPQueueHead;
    v8 = gdwPTPMouseEvents - 1;
    qmemcpy(a2, &gPTPMouseEventQueue[10 * (((_BYTE)gdwPTPQueueHead - (_BYTE)gdwPTPMouseEvents + 1) & 0x3F)], 0x28u);
    gdwPTPMouseEvents = v11 - 1;
    if ( v11 != 1 )
    {
      qmemcpy(a1, &gPTPMouseEventQueue[10 * ((v7 - v8 + 1) & 0x3F)], 0x28u);
      *(_BYTE *)a3 = 1;
    }
    v5 = 1;
  }
  ExReleaseResourceAndLeaveCriticalRegion(_gpresPTPEventQueue);
  return v5;
}
