/*
 * XREFs of ?DoQueuedSyncPaint@@YAXPEAUtagWND@@KPEAUtagTHREADINFO@@@Z @ 0x1C00EFF54
 * Callers:
 *     xxxDoSyncPaint @ 0x1C00EFEE4 (xxxDoSyncPaint.c)
 *     ?DoQueuedSyncPaint@@YAXPEAUtagWND@@KPEAUtagTHREADINFO@@@Z @ 0x1C00EFF54 (-DoQueuedSyncPaint@@YAXPEAUtagWND@@KPEAUtagTHREADINFO@@@Z.c)
 * Callees:
 *     _GetDesktopWindow @ 0x1C006F290 (_GetDesktopWindow.c)
 *     SetOrClrWF @ 0x1C00A2698 (SetOrClrWF.c)
 *     ?DoQueuedSyncPaint@@YAXPEAUtagWND@@KPEAUtagTHREADINFO@@@Z @ 0x1C00EFF54 (-DoQueuedSyncPaint@@YAXPEAUtagWND@@KPEAUtagTHREADINFO@@@Z.c)
 *     ?QueueNotifyTransformableMessage@@YAXPEAUtagWND@@I_K_JHH@Z @ 0x1C00F0578 (-QueueNotifyTransformableMessage@@YAXPEAUtagWND@@I_K_JHH@Z.c)
 */

void __fastcall DoQueuedSyncPaint(struct tagWND *a1, unsigned int a2, struct tagTHREADINFO *a3)
{
  struct tagTHREADINFO *v5; // r8
  __int64 v7; // rcx
  __int64 i; // rbx
  _QWORD **v9; // r8
  _QWORD *v10; // rax
  _QWORD *v11; // rcx

  v5 = (struct tagTHREADINFO *)*((_QWORD *)a1 + 2);
  if ( v5 == a3 )
    goto LABEL_5;
  v7 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v7 + 17) & 0xA) != 0xA || (*(_BYTE *)(v7 + 31) & 0x10) == 0 )
    goto LABEL_5;
  v9 = (_QWORD **)((char *)v5 + 512);
  v10 = *v9;
  if ( *v9 == v9 )
    goto LABEL_16;
  do
  {
    v11 = v10 - 2;
    if ( *((_DWORD *)v10 + 22) == 136 && (struct tagWND *)v11[14] == a1 )
      break;
    v10 = (_QWORD *)*v10;
    v11 = 0LL;
  }
  while ( v10 != v9 );
  if ( !v11 )
  {
LABEL_16:
    QueueNotifyTransformableMessage(a1, 0x88u, a2, 0LL, 1, 0);
    SetOrClrWF(1, (__int64)a1, 0x280u, 1);
  }
  if ( a1 == (struct tagWND *)GetDesktopWindow((__int64)a1) )
  {
LABEL_5:
    if ( (a2 & 0x20) != 0 || (a2 & 4) != 0 && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 2) != 0 )
    {
      for ( i = *((_QWORD *)a1 + 14); i; i = *(_QWORD *)(i + 88) )
      {
        if ( (*(_BYTE *)(*(_QWORD *)(i + 40) + 31LL) & 0x40) == 0 || a3 == *(struct tagTHREADINFO **)(i + 16) )
          DoQueuedSyncPaint((struct tagWND *)i, a2, a3);
      }
    }
  }
}
