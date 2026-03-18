/*
 * XREFs of _GreMovePointer@16 @ 0x7BA8A
 * Callers:
 *     _GreStretchBltInternal@52 @ 0x78C6A (_GreStretchBltInternal@52.c)
 *     ?zzzInternalSetCursorPos@@YGXHHKW4_SetCursorPosReason@@@Z @ 0x7B8F8 (-zzzInternalSetCursorPos@@YGXHHKW4_SetCursorPosReason@@@Z.c)
 *     _GreHidePointer@4 @ 0xB02B2 (_GreHidePointer@4.c)
 *     _ApplyGatheredDeviceInfoSummaryInformation@28 @ 0xEB8F6 (_ApplyGatheredDeviceInfoSummaryInformation@28.c)
 *     ?xxxMoveEventAbsolute@@YG?AW4_CommitMousePosAndMoveResult@@JJKPAXPAU_MOUSE_INPUT_DATA@@_K2HHHPAU_MousePacketPerf@@@Z @ 0xF0598 (-xxxMoveEventAbsolute@@YG-AW4_CommitMousePosAndMoveResult@@JJKPAXPAU_MOUSE_INPUT_DATA@@_K2HHHPAU.c)
 *     _HideMouseTrails@16 @ 0x1436A8 (_HideMouseTrails@16.c)
 *     ?RenderCursor@@YGXABUtagPOINTERCURSORDATA@@@Z @ 0x148A86 (-RenderCursor@@YGXABUtagPOINTERCURSORDATA@@@Z.c)
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     ?vMovePointer@@YGXPAUHDEV__@@HHJ@Z @ 0x7BC92 (-vMovePointer@@YGXPAUHDEV__@@HHJ@Z.c)
 */

int __stdcall GreMovePointer(_DWORD *a1, int a2, HDEV a3, int a4)
{
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // ebx
  int v6; // edi
  int v7; // ecx
  int v8; // esi
  int v9; // edx
  _DWORD *v10; // eax
  HDEV v11; // edx
  _DWORD *v13; // eax
  int v14; // ebx
  int v15; // edi
  _DWORD *v16; // edx
  int v17; // eax
  int v18; // esi
  int v19; // [esp+0h] [ebp-30h]
  int v20; // [esp+4h] [ebp-2Ch]
  int v21; // [esp+10h] [ebp-20h]
  int v22; // [esp+14h] [ebp-1Ch]
  int v23; // [esp+18h] [ebp-18h]
  int v24; // [esp+18h] [ebp-18h]
  int v25; // [esp+1Ch] [ebp-14h]
  int v26; // [esp+20h] [ebp-10h]
  _DWORD *v27; // [esp+24h] [ebp-Ch]
  HDEV v28; // [esp+28h] [ebp-8h]
  _DWORD *v29; // [esp+2Ch] [ebp-4h] BYREF
  int v30; // [esp+38h] [ebp+8h]

  v23 = 0;
  v29 = a1;
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
  LOBYTE(v21) = 0;
  v22 = ThreadWin32Thread;
  if ( ThreadWin32Thread )
  {
    v21 = (int)(*(_DWORD *)(ThreadWin32Thread + 180) << 31) >> 31;
    *(_DWORD *)(ThreadWin32Thread + 180) &= ~1u;
  }
  v6 = _ghsemDynamicModeChange;
  GreAcquireSemaphoreSharedInternal(_ghsemDynamicModeChange);
  EtwTraceGreLockAcquireSemaphoreShared(L"hsem", _ghsemDynamicModeChange);
  if ( !PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v29) )
  {
    GreAcquireSemaphore(_ghsemGreLock);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemGreLock", _ghsemGreLock, 2);
  }
  GreAcquireSemaphore(v29[10]);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"po.hsemPointer()", v29[10], 4);
  DrvUniformSpaceToPixelSpacePoint(&a2, &a3);
  v7 = a4;
  v28 = a3;
  dword_275644 = (int)a3;
  gCachedMovePointerState = a1;
  v8 = a2;
  dword_275640 = a2;
  dword_275648 = a4;
  if ( gulCachedPointerRefs )
  {
    v26 = 1;
    bCachedMovePointerRefs = 1;
    if ( gbForceSoftwareCursor )
    {
      v9 = 1;
      v23 = 1;
    }
    else
    {
      v9 = 0;
    }
  }
  else
  {
    v9 = 0;
    v26 = 0;
  }
  v10 = v29;
  if ( ((unsigned int)&loc_20000 & v29[6]) != 0 )
  {
    v13 = (_DWORD *)v29[277];
    v14 = v23;
    v15 = a2;
    v16 = (_DWORD *)*v13;
    v17 = v13[2];
    v27 = v16;
    v30 = v17;
    while ( 1 )
    {
      v18 = v16[9];
      v24 = v7;
      if ( v15 < v16[5] || v15 >= v16[7] )
        goto LABEL_35;
      if ( (int)v28 < v16[6] || (int)v28 >= v16[8] )
        break;
      if ( v26 && (*(_DWORD *)(v18 + 1416) & 0x2000) == 0 && !v14 )
        goto LABEL_39;
      if ( v14 )
        v24 = v7 | 4;
      GreAcquireSemaphore(*(_DWORD *)(v18 + 40));
      EtwTraceGreLockAcquireSemaphoreExclusive(L"poThis.hsemPointer()", *(_DWORD *)(v18 + 40), 4);
      vMovePointer((HDEV)((char *)a3 - v27[6]), v24, v19, v20);
LABEL_38:
      EtwTraceGreLockReleaseSemaphore(L"poThis.hsemPointer()", *(_DWORD *)(v18 + 40));
      GreReleaseSemaphoreInternal(*(_DWORD *)(v18 + 40));
      v16 = v27;
      v7 = a4;
      v15 = a2;
      v28 = a3;
LABEL_39:
      v17 = v30;
LABEL_40:
      v16 = (_DWORD *)*v16;
      --v17;
      v27 = v16;
      v30 = v17;
      if ( !v17 )
      {
        v10 = v29;
        ThreadWin32Thread = v22;
        v25 = v15;
        v6 = _ghsemDynamicModeChange;
        v8 = v25;
        goto LABEL_21;
      }
    }
    v17 = v30;
LABEL_35:
    if ( v26 && (*(_DWORD *)(v18 + 1416) & 0x2000) == 0 )
      goto LABEL_40;
    GreAcquireSemaphore(*(_DWORD *)(v18 + 40));
    EtwTraceGreLockAcquireSemaphoreExclusive(L"poThis.hsemPointer()", *(_DWORD *)(v18 + 40), 4);
    vMovePointer((HDEV)0xFFFFFFFF, a4, v19, v20);
    goto LABEL_38;
  }
  if ( !v26 || (v29[354] & 0x2000) != 0 || v9 )
  {
    if ( v9 )
      v7 = a4 | 4;
    vMovePointer(a3, v7, v19, v20);
    v11 = a3;
    v8 = a2;
    v10 = v29;
  }
  else
  {
LABEL_21:
    v11 = v28;
  }
  v10[11] = v8;
  v29[12] = v11;
  EtwTraceGreLockReleaseSemaphore(L"po.hsemPointer()", v29[10]);
  GreReleaseSemaphoreInternal(v29[10]);
  if ( !PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v29) )
  {
    EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", _ghsemGreLock);
    GreReleaseSemaphoreInternal(_ghsemGreLock);
  }
  if ( ThreadWin32Thread )
    *(_DWORD *)(ThreadWin32Thread + 180) ^= (*(_DWORD *)(ThreadWin32Thread + 180) ^ (unsigned __int8)v21) & 1;
  EtwTraceGreLockReleaseSemaphore(L"hsem", v6);
  return GreReleaseSemaphoreInternal(v6);
}
