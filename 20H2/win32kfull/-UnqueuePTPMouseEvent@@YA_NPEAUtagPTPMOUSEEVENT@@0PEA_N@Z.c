/*
 * XREFs of ?UnqueuePTPMouseEvent@@YA_NPEAUtagPTPMOUSEEVENT@@0PEA_N@Z @ 0x1C0213358
 * Callers:
 *     OnPTPMouseOperation @ 0x1C02137E0 (OnPTPMouseOperation.c)
 * Callees:
 *     <none>
 */

char __fastcall UnqueuePTPMouseEvent(struct tagPTPMOUSEEVENT *a1, struct tagPTPMOUSEEVENT *a2, bool *a3)
{
  char v4; // bl
  char v7; // dl
  __int64 v8; // rcx
  bool v9; // zf
  char v10; // r9
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int64 v13; // rax
  __int128 v14; // xmm1
  __int128 v15; // xmm0

  v4 = 0;
  *a3 = 0;
  ExEnterCriticalRegionAndAcquireResourceExclusive(gpresPTPEventQueue);
  if ( gdwPTPMouseEvents )
  {
    v7 = gdwPTPQueueHead;
    v8 = ((_BYTE)gdwPTPQueueHead - (_BYTE)gdwPTPMouseEvents + 1) & 0x3F;
    v9 = gdwPTPMouseEvents == 1;
    v10 = --gdwPTPMouseEvents;
    v11 = gPTPMouseEventQueue[3 * v8 + 1];
    *(_OWORD *)a1 = gPTPMouseEventQueue[3 * v8];
    v12 = gPTPMouseEventQueue[3 * v8 + 2];
    *((_OWORD *)a1 + 1) = v11;
    *((_OWORD *)a1 + 2) = v12;
    if ( !v9 )
    {
      *a3 = 1;
      v13 = (v7 - v10 + 1) & 0x3F;
      v14 = gPTPMouseEventQueue[3 * v13 + 1];
      *(_OWORD *)a2 = gPTPMouseEventQueue[3 * v13];
      v15 = gPTPMouseEventQueue[3 * v13 + 2];
      *((_OWORD *)a2 + 1) = v14;
      *((_OWORD *)a2 + 2) = v15;
    }
    v4 = 1;
  }
  ExReleaseResourceAndLeaveCriticalRegion(gpresPTPEventQueue);
  return v4;
}
