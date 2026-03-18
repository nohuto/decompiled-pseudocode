/*
 * XREFs of ?xxxInternalDoPaint@@YGPAUtagWND@@PAU1@PAUtagTHREADINFO@@@Z @ 0x6BFB0
 * Callers:
 *     _xxxDoPaint@8 @ 0x6BD40 (_xxxDoPaint@8.c)
 *     ?xxxInternalDoPaint@@YGPAUtagWND@@PAU1@PAUtagTHREADINFO@@@Z @ 0x6BFB0 (-xxxInternalDoPaint@@YGPAUtagWND@@PAU1@PAUtagTHREADINFO@@@Z.c)
 * Callees:
 *     ?xxxInternalDoPaint@@YGPAUtagWND@@PAU1@PAUtagTHREADINFO@@@Z @ 0x6BFB0 (-xxxInternalDoPaint@@YGPAUtagWND@@PAU1@PAUtagTHREADINFO@@@Z.c)
 *     _ThreadLockExchange@8 @ 0xA378E (_ThreadLockExchange@8.c)
 *     _IsThreadCrossSessionAttached@0 @ 0xEF2EA (_IsThreadCrossSessionAttached@0.c)
 *     _xxxCompositedPaint@4 @ 0x19D911 (_xxxCompositedPaint@4.c)
 */

struct tagWND *__fastcall xxxInternalDoPaint(struct tagWND *a1, int a2)
{
  int v4; // edi
  int *ThreadWin32Thread; // eax
  int v6; // eax
  struct tagWND *v7; // eax
  struct tagWND *v8; // edi
  struct tagWND *v9; // edi
  _DWORD *v10; // esi
  int v11; // eax
  struct tagWND *v13; // [esp+0h] [ebp-20h]
  struct tagTHREADINFO *v14; // [esp+4h] [ebp-1Ch]
  PKTHREAD CurrentThread; // [esp+10h] [ebp-10h]
  int v16; // [esp+14h] [ebp-Ch] BYREF
  struct tagWND *v17; // [esp+18h] [ebp-8h]
  int v18; // [esp+1Ch] [ebp-4h]

  v18 = 0;
  CurrentThread = KeGetCurrentThread();
  v4 = 0;
  if ( !IsThreadCrossSessionAttached() )
  {
    ThreadWin32Thread = (int *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v4 = *ThreadWin32Thread;
  }
  v16 = *(_DWORD *)(v4 + 228);
  *(_DWORD *)(v4 + 228) = &v16;
  v17 = a1;
  if ( !a1 )
    return (struct tagWND *)ThreadUnlock1();
  HMLockObject(a1);
  while ( 1 )
  {
    if ( *((_DWORD *)a1 + 2) == a2 )
    {
      v6 = *((_DWORD *)a1 + 5);
      if ( (*(_BYTE *)(v6 + 19) & 2) != 0 )
      {
        xxxCompositedPaint(a1);
        a1 = (struct tagWND *)*((_DWORD *)a1 + 12);
        ThreadLockExchange(a1, &v16);
        goto LABEL_17;
      }
      if ( *(_DWORD *)(v6 + 92) || (*(_BYTE *)(v6 + 9) & 0x10) != 0 )
        break;
    }
    if ( *((_DWORD *)a1 + 15) )
    {
      v7 = xxxInternalDoPaint(v13, v14);
      v8 = v7;
      if ( v7 )
      {
        if ( v7 == a1 )
          return (struct tagWND *)ThreadUnlock1();
        ThreadUnlock1();
        return v8;
      }
    }
    a1 = (struct tagWND *)*((_DWORD *)a1 + 12);
    v9 = v17;
    v17 = a1;
    if ( a1 )
      HMLockObject(a1);
    if ( v9 )
      HMUnlockObject(v9);
LABEL_17:
    if ( !a1 )
      return (struct tagWND *)ThreadUnlock1();
  }
  if ( (*(_BYTE *)(v6 + 16) & 0x20) == 0 )
    return (struct tagWND *)ThreadUnlock1();
  v10 = (_DWORD *)*((_DWORD *)a1 + 12);
  if ( !v10 )
    return (struct tagWND *)ThreadUnlock1();
  while ( 1 )
  {
    if ( v10[2] == a2 )
    {
      v11 = v10[5];
      if ( (*(_DWORD *)(v11 + 92) || (*(_BYTE *)(v11 + 9) & 0x10) != 0) && (*(_BYTE *)(v11 + 16) & 0x20) == 0 )
        break;
    }
    v10 = (_DWORD *)v10[12];
    if ( !v10 )
      return (struct tagWND *)ThreadUnlock1();
  }
  ThreadUnlock1();
  return (struct tagWND *)v10;
}
