/*
 * XREFs of PiUEventHandleGetEvent @ 0x1406B8FF8
 * Callers:
 *     PiUEventHandleIoctl @ 0x1406B8F3C (PiUEventHandleIoctl.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140253C70 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x140354DD0 (ExAcquireFastMutex.c)
 *     PiUEventCopyEventData @ 0x1406B9178 (PiUEventCopyEventData.c)
 *     PiUEventDequeuePendingEventWorker @ 0x1406FD664 (PiUEventDequeuePendingEventWorker.c)
 *     PiUEventNotifyClientPendingEvent @ 0x1406FE240 (PiUEventNotifyClientPendingEvent.c)
 */

__int64 __fastcall PiUEventHandleGetEvent(__int64 a1, _DWORD *a2, __int64 a3, unsigned int a4, __int64 a5)
{
  __int64 v5; // rbp
  int v6; // ebx
  int v9; // edi
  unsigned int v10; // esi
  _QWORD *v11; // rax
  _QWORD *v12; // r12
  _QWORD *v13; // r15
  __int64 v14; // rax
  unsigned int v15; // ecx
  unsigned int v16; // r13d
  _QWORD *v18; // rax
  _QWORD *v19; // rdx
  _QWORD *v20; // [rsp+20h] [rbp-48h]
  unsigned int *v21; // [rsp+70h] [rbp+8h]
  unsigned int v22; // [rsp+80h] [rbp+18h]

  v5 = *(_QWORD *)(a1 + 32);
  v6 = 0;
  v9 = 0;
  if ( v5 && a2 && a4 > 4 )
  {
    *a2 = 0;
    v21 = a2 + 1;
    v10 = a4 - 4;
    ExAcquireFastMutex(*(PFAST_MUTEX *)(v5 + 16));
    v11 = (_QWORD *)(v5 + 112);
    v12 = *(_QWORD **)(v5 + 112);
    while ( v12 != v11 && v9 >= 0 )
    {
      v13 = v12;
      v20 = v12 + 3;
      v9 = PiUEventCopyEventData(v21, v10, v12[3]);
      if ( v9 < 0 )
      {
        if ( !*a2 )
        {
          *(_QWORD *)(a5 + 8) = 0LL;
          KeReleaseGuardedMutex(*(PKGUARDED_MUTEX *)(v5 + 16));
          return (unsigned int)v9;
        }
        break;
      }
      v14 = *v21;
      v15 = v10 - v14;
      v22 = v10 - v14;
      if ( (unsigned int)v14 > v10 )
        v9 = -1073741789;
      else
        v21 = (unsigned int *)((char *)v21 + v14);
      ++*a2;
      v12 = (_QWORD *)*v12;
      if ( *(_BYTE *)(*v20 + 68LL) )
      {
        if ( (_QWORD *)v12[1] != v13
          || (v18 = (_QWORD *)v13[1], (_QWORD *)*v18 != v13)
          || (*v18 = v12, v12[1] = v18, --*(_DWORD *)(v5 + 128), v19 = *(_QWORD **)(v5 + 104), *v19 != v5 + 96) )
        {
          __fastfail(3u);
        }
        *v13 = v5 + 96;
        v13[1] = v19;
        *v19 = v13;
        *(_QWORD *)(v5 + 104) = v13;
      }
      else
      {
        PiUEventDequeuePendingEventWorker(v5, v13, 0LL);
        v15 = v22;
      }
      v11 = (_QWORD *)(v5 + 112);
      v10 = v15;
    }
    KeReleaseGuardedMutex(*(PKGUARDED_MUTEX *)(v5 + 16));
    if ( v9 == -1073741789 )
      PiUEventNotifyClientPendingEvent(v5);
    v16 = a4 - v10;
    if ( v9 != -1073741789 )
      v6 = v9;
    v9 = v6;
    *(_QWORD *)(a5 + 8) = v16;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v9;
}
