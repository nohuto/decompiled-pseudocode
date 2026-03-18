/*
 * XREFs of _xxxForceUpdateProcessDpiAwarenessContext@8 @ 0x1523FE
 * Callers:
 *     _xxxCreateWindowEx@68 @ 0x2D67C (_xxxCreateWindowEx@68.c)
 *     ?xxxSetParentWorker@@YGPAUtagWND@@PAU1@00H@Z @ 0xC70E0 (-xxxSetParentWorker@@YGPAUtagWND@@PAU1@00H@Z.c)
 * Callees:
 *     _IsWindowBeingDestroyed@4 @ 0x1F28E (_IsWindowBeingDestroyed@4.c)
 *     _FreeHwndList@4 @ 0x2D2D0 (_FreeHwndList@4.c)
 *     _BuildHwndList@12 @ 0x2D340 (_BuildHwndList@12.c)
 *     _PopAndFreeW32ThreadLock@4 @ 0x3C354 (_PopAndFreeW32ThreadLock@4.c)
 *     @HMValidateHandleNoSecure@8 @ 0x3C46E (@HMValidateHandleNoSecure@8.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _PushW32ThreadLock@12 @ 0x6F9A0 (_PushW32ThreadLock@12.c)
 *     ?xxxForceUpdateWindowTreeDpiAwarenessContext@@YGXPAUtagWND@@KH@Z @ 0x150226 (-xxxForceUpdateWindowTreeDpiAwarenessContext@@YGXPAUtagWND@@KH@Z.c)
 *     _TraceChildWindowDpiTelemetry@12 @ 0x1519C8 (_TraceChildWindowDpiTelemetry@12.c)
 */

int __fastcall xxxForceUpdateProcessDpiAwarenessContext(_DWORD *a1, struct tagWND *a2)
{
  int result; // eax
  int v5; // ebx
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int v8; // ecx
  int v9; // eax
  _DWORD *v10; // esi
  unsigned int *v11; // edi
  unsigned int v12; // eax
  int v13; // eax
  unsigned int v14; // [esp+0h] [ebp-30h]
  unsigned int v15; // [esp+0h] [ebp-30h]
  int v16; // [esp+4h] [ebp-2Ch]
  int v17; // [esp+4h] [ebp-2Ch]
  _DWORD *v18; // [esp+Ch] [ebp-24h]
  int v19; // [esp+10h] [ebp-20h]
  int v20; // [esp+10h] [ebp-20h]
  _DWORD v22[3]; // [esp+18h] [ebp-18h] BYREF
  _DWORD v23[3]; // [esp+24h] [ebp-Ch] BYREF

  result = IsWindowBeingDestroyed(a1);
  if ( !result )
  {
    v5 = *(_DWORD *)(a1[2] + 232);
    v22[2] = 0;
    CurrentThread = KeGetCurrentThread();
    ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
    v22[0] = *(_DWORD *)(ThreadWin32Thread + 228);
    *(_DWORD *)(ThreadWin32Thread + 228) = v22;
    v22[1] = a1;
    HMLockObject(a1);
    TraceChildWindowDpiTelemetry((int)a1, a1[14], (PVOID *)2);
    v8 = *(_DWORD *)(v5 + 652);
    v9 = *(_DWORD *)(v5 + 156);
    if ( !v8 )
      *(_DWORD *)(v5 + 656) = v9;
    *(_DWORD *)(v5 + 660) = v9;
    *(_DWORD *)(v5 + 652) = v8 + 1;
    *(_DWORD *)(v5 + 156) = a2;
    if ( ((unsigned __int8)a2 & 0xF) == 1 )
      *(_WORD *)(v5 + 160) = ((unsigned int)a2 >> 8) & 0x1FF;
    GreIncrementDisplaySettingsUniqueness();
    v19 = *(_DWORD *)(v5 + 356);
    xxxForceUpdateWindowTreeDpiAwarenessContext(a2, (int)a1, (struct tagWND *)1, v14, v16);
    if ( v19 )
      v10 = *(_DWORD **)(v19 + 8);
    else
      v10 = 0;
    v18 = v10;
    while ( v10 )
    {
      v20 = BuildHwndList(*(_DWORD *)(v10[1] + 12), 1, 0);
      if ( v20 )
      {
        memset(v23, 0, sizeof(v23));
        PushW32ThreadLock((int)v10, v23, (int)UserDereferenceObject);
        ObfReferenceObject(v10);
        v11 = (unsigned int *)(v20 + 16);
        v12 = *(_DWORD *)(v20 + 16);
        if ( v12 != 1 )
        {
          do
          {
            v13 = HMValidateHandleNoSecure(v12, 1);
            if ( v13 )
            {
              if ( *(_DWORD *)(*(_DWORD *)(v13 + 8) + 232) == v5 )
                xxxForceUpdateWindowTreeDpiAwarenessContext(a2, v13, (struct tagWND *)1, v15, v17);
            }
            v12 = *++v11;
          }
          while ( *v11 != 1 );
          v10 = v18;
        }
        FreeHwndList((struct tagBWL *)v20);
        v10 = (_DWORD *)v10[4];
        v18 = v10;
        PopAndFreeW32ThreadLock((int)v23);
      }
    }
    return ThreadUnlock1();
  }
  return result;
}
