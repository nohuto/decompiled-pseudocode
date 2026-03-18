/*
 * XREFs of ?DoQueuedSyncPaint@@YGXPAUtagWND@@KPAUtagTHREADINFO@@@Z @ 0x739C0
 * Callers:
 *     _xxxDoSyncPaint@8 @ 0x7348A (_xxxDoSyncPaint@8.c)
 *     ?DoQueuedSyncPaint@@YGXPAUtagWND@@KPAUtagTHREADINFO@@@Z @ 0x739C0 (-DoQueuedSyncPaint@@YGXPAUtagWND@@KPAUtagTHREADINFO@@@Z.c)
 * Callees:
 *     _SetOrClrWF@16 @ 0x1B9C0 (_SetOrClrWF@16.c)
 *     __GetDesktopWindow@4 @ 0x381A0 (__GetDesktopWindow@4.c)
 *     ?DoQueuedSyncPaint@@YGXPAUtagWND@@KPAUtagTHREADINFO@@@Z @ 0x739C0 (-DoQueuedSyncPaint@@YGXPAUtagWND@@KPAUtagTHREADINFO@@@Z.c)
 *     ?QueueNotifyTransformableMessage@@YGXPAUtagWND@@IIJHH@Z @ 0x8136E (-QueueNotifyTransformableMessage@@YGXPAUtagWND@@IIJHH@Z.c)
 */

void __userpurge DoQueuedSyncPaint(
        struct tagWND *a1@<edx>,
        _DWORD *a2@<ecx>,
        struct tagWND *a3,
        unsigned int a4,
        struct tagTHREADINFO *a5)
{
  int v7; // edx
  int v8; // ecx
  int i; // esi
  _DWORD *v10; // eax
  _DWORD *v11; // edx
  unsigned int v12; // [esp+0h] [ebp-Ch]
  struct tagTHREADINFO *v13; // [esp+4h] [ebp-8h]

  v7 = a2[2];
  if ( (struct tagWND *)v7 == a3 )
    goto LABEL_25;
  v8 = a2[5];
  if ( (*(_BYTE *)(v8 + 9) & 0xA) != 0xA || (*(_BYTE *)(v8 + 23) & 0x10) == 0 )
    goto LABEL_25;
  v10 = *(_DWORD **)(v7 + 280);
  v11 = (_DWORD *)(v7 + 280);
  if ( v10 == v11 )
  {
LABEL_16:
    QueueNotifyTransformableMessage(a1, 0, 1u, 0, v12, (int)v13);
    SetOrClrWF(1, (int)a2, 0x280u, 1);
  }
  else
  {
    while ( v10[12] != 136 || (_DWORD *)v10[13] != a2 )
    {
      v10 = (_DWORD *)*v10;
      if ( v10 == v11 )
        goto LABEL_16;
    }
  }
  if ( a2 == (_DWORD *)_GetDesktopWindow(a2) )
  {
LABEL_25:
    if ( ((unsigned __int8)a1 & 0x20) != 0 || ((unsigned __int8)a1 & 4) != 0 && (*(_BYTE *)(a2[5] + 23) & 2) != 0 )
    {
      for ( i = a2[15]; i; i = *(_DWORD *)(i + 48) )
      {
        if ( (*(_BYTE *)(*(_DWORD *)(i + 20) + 23) & 0x40) == 0 || a3 == *(struct tagWND **)(i + 8) )
          DoQueuedSyncPaint(a3, v12, v13);
      }
    }
  }
}
