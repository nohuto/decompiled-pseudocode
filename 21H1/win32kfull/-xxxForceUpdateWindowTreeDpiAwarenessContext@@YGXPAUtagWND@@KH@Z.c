/*
 * XREFs of ?xxxForceUpdateWindowTreeDpiAwarenessContext@@YGXPAUtagWND@@KH@Z @ 0x150226
 * Callers:
 *     ?xxxForceUpdateWindowTreeDpiAwarenessContext@@YGXPAUtagWND@@KH@Z @ 0x150226 (-xxxForceUpdateWindowTreeDpiAwarenessContext@@YGXPAUtagWND@@KH@Z.c)
 *     _xxxForceUpdateProcessDpiAwarenessContext@8 @ 0x1523FE (_xxxForceUpdateProcessDpiAwarenessContext@8.c)
 * Callees:
 *     _UpdateWindowMonitor@8 @ 0x2A95A (_UpdateWindowMonitor@8.c)
 *     _xxxSetWindowPos@28 @ 0x32F7A (_xxxSetWindowPos@28.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     __PostMessage@16 @ 0x6DA60 (__PostMessage@16.c)
 *     _GetPrimaryMonitorRectForWindow@4 @ 0xA8E18 (_GetPrimaryMonitorRectForWindow@4.c)
 *     ?PostEventMessage@@YGHPAUtagTHREADINFO@@PAUtagQ@@KPAUtagWND@@IIJ@Z @ 0xF0F56 (-PostEventMessage@@YGHPAUtagTHREADINFO@@PAUtagQ@@KPAUtagWND@@IIJ@Z.c)
 *     ?PostEventMessageEx@@YGHPAUtagTHREADINFO@@PAUtagQ@@KPAUtagWND@@IIJPAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0xF0F76 (-PostEventMessageEx@@YGHPAUtagTHREADINFO@@PAUtagQ@@KPAUtagWND@@IIJPAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     ?xxxForceUpdateWindowTreeDpiAwarenessContext@@YGXPAUtagWND@@KH@Z @ 0x150226 (-xxxForceUpdateWindowTreeDpiAwarenessContext@@YGXPAUtagWND@@KH@Z.c)
 */

void __userpurge xxxForceUpdateWindowTreeDpiAwarenessContext(
        struct tagWND *a1@<edx>,
        int a2@<ecx>,
        struct tagWND *a3,
        unsigned int a4,
        int a5)
{
  int v7; // eax
  unsigned int v8; // ecx
  int v9; // eax
  _DWORD *v10; // eax
  struct tagQ *i; // esi
  int *PrimaryMonitorRectForWindow; // eax
  int v13; // ecx
  int v14; // edx
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  PKTHREAD v17; // eax
  int v18; // eax
  unsigned int v19; // [esp+0h] [ebp-44h]
  unsigned int v20; // [esp+0h] [ebp-44h]
  struct tagINPUT_MESSAGE_SOURCE *v21; // [esp+4h] [ebp-40h]
  int v22; // [esp+4h] [ebp-40h]
  int v23; // [esp+10h] [ebp-34h]
  int v24; // [esp+14h] [ebp-30h] BYREF
  struct tagQ *v25; // [esp+18h] [ebp-2Ch]
  int v26; // [esp+1Ch] [ebp-28h]
  int v27; // [esp+20h] [ebp-24h] BYREF
  _DWORD v28[4]; // [esp+24h] [ebp-20h] BYREF
  struct tagQ *v29; // [esp+34h] [ebp-10h]
  struct tagWND *v30; // [esp+38h] [ebp-Ch]
  unsigned int v31; // [esp+3Ch] [ebp-8h]

  v7 = *(_DWORD *)(a2 + 20);
  v30 = a1;
  v8 = *(_DWORD *)(v7 + 184);
  *(_DWORD *)(v7 + 184) = a1;
  v9 = *(_DWORD *)(a2 + 20);
  v31 = v8;
  v10 = (_DWORD *)ValidateHmonitorNoRip(*(_DWORD *)(v9 + 164));
  UpdateWindowMonitor(a2, v10);
  i = *(struct tagQ **)(a2 + 60);
  v29 = i;
  if ( !a3 )
    goto LABEL_17;
  PostEventMessageEx(
    *(tagDomLock **)(*(_DWORD *)(a2 + 8) + 236),
    *(_DWORD *)(a2 + 8),
    (struct tagTHREADINFO *)0x18,
    0,
    0,
    a1,
    0,
    0,
    v19,
    v21);
  PrimaryMonitorRectForWindow = GetPrimaryMonitorRectForWindow(&v27);
  v23 = *PrimaryMonitorRectForWindow;
  v24 = PrimaryMonitorRectForWindow[1];
  v25 = (struct tagQ *)PrimaryMonitorRectForWindow[2];
  v26 = PrimaryMonitorRectForWindow[3];
  _PostMessage(
    a2,
    126,
    *(unsigned __int16 *)(_gpsi + 6240),
    (unsigned __int16)((_WORD)v25 - v23) | ((unsigned __int16)(v26 - v24) << 16));
  if ( ((((unsigned int)v30 >> 8) ^ (v31 >> 8)) & 0x1FF) != 0 )
    goto LABEL_11;
  v13 = 1;
  v14 = (v31 & 0xF) == 2 && (v31 & 0x20000000) != 0;
  if ( ((unsigned __int8)v30 & 0xF) != 2 || ((unsigned int)v30 & 0x20000000) == 0 )
    v13 = 0;
  if ( v14 != v13 )
  {
LABEL_11:
    PostEventMessage(
      (struct tagTHREADINFO *)9,
      (struct tagQ *)a2,
      0x1Au,
      (struct tagWND *)0x2A,
      0xFFFFFFFF,
      v19,
      (int)v21);
    PostEventMessage((struct tagTHREADINFO *)9, (struct tagQ *)a2, 0x1Au, (struct tagWND *)0x2E, 0xFFFFFFFF, v20, v22);
  }
  if ( *(_DWORD *)(*(_DWORD *)(a2 + 20) + 152) )
  {
    i = v29;
    goto LABEL_17;
  }
  v28[2] = 0;
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
  v28[0] = *(_DWORD *)(ThreadWin32Thread + 228);
  *(_DWORD *)(ThreadWin32Thread + 228) = v28;
  v28[1] = a2;
  HMLockObject(a2);
  xxxSetWindowPos(a2, 0, 0, 0, 0, 0, 55);
  for ( i = *(struct tagQ **)(a2 + 60); ; i = (struct tagQ *)*((_DWORD *)i + 12) )
  {
    ThreadUnlock1();
LABEL_17:
    if ( !i )
      break;
    v26 = 0;
    v17 = KeGetCurrentThread();
    v18 = W32GetThreadWin32Thread(v17);
    v24 = *(_DWORD *)(v18 + 228);
    *(_DWORD *)(v18 + 228) = &v24;
    v25 = i;
    HMLockObject(i);
    xxxForceUpdateWindowTreeDpiAwarenessContext(0, v19, (int)v21);
  }
}
