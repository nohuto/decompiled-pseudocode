/*
 * XREFs of _GreHidePointer@4 @ 0xB02B2
 * Callers:
 *     _SetPointerMetaVisibility@4 @ 0xB0292 (_SetPointerMetaVisibility@4.c)
 *     ?RenderCursor@@YGXABUtagPOINTERCURSORDATA@@@Z @ 0x148A86 (-RenderCursor@@YGXABUtagPOINTERCURSORDATA@@@Z.c)
 *     ?xxxSwitchCursors@@YGXHH@Z @ 0x148CF8 (-xxxSwitchCursors@@YGXHH@Z.c)
 *     _NtUserShowSystemCursor@4 @ 0x16A6D8 (_NtUserShowSystemCursor@4.c)
 * Callees:
 *     _GreSetPointer@16 @ 0x771C2 (_GreSetPointer@16.c)
 *     _GreMovePointer@16 @ 0x7BA8A (_GreMovePointer@16.c)
 *     ?vUnlock@SEMOBJ@@QAEXXZ @ 0x98AE4 (-vUnlock@SEMOBJ@@QAEXXZ.c)
 *     ?GreHidePointerInternal@@YGXPAUHDEV__@@@Z @ 0xAEFD4 (-GreHidePointerInternal@@YGXPAUHDEV__@@@Z.c)
 */

int __stdcall GreHidePointer(int a1)
{
  int v1; // ebx
  _DWORD *HDEV; // eax
  _DWORD *v3; // edi
  int CurrentProcessWin32Process; // eax
  int v5; // esi
  int v6; // eax
  HDEV v8; // [esp+0h] [ebp-14h]
  int v9; // [esp+Ch] [ebp-8h] BYREF
  _DWORD *v10; // [esp+10h] [ebp-4h] BYREF

  v1 = 1;
  GreAcquireSemaphoreSharedInternal(_ghsemDynamicModeChange);
  EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", _ghsemDynamicModeChange);
  HDEV = (_DWORD *)UserGetHDEV();
  v3 = HDEV;
  if ( HDEV )
  {
    v10 = HDEV;
    if ( !PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v10) )
      GreAcquireSemaphore(_ghsemGreLock);
    v9 = v10[10];
    GreAcquireSemaphore(v9);
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
    v5 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
    {
      v6 = *(_DWORD *)(CurrentProcessWin32Process + 8);
      if ( a1 )
      {
        if ( (v6 & 0x40000000) == 0 && gulCachedPointerRefs != -1 )
        {
          if ( !gulCachedPointerRefs )
          {
            GreHidePointerInternal(v3, v8);
            v6 = *(_DWORD *)(v5 + 8);
          }
          ++gulCachedPointerRefs;
          *(_DWORD *)(v5 + 8) = v6 | 0x40000000;
        }
      }
      else if ( (v6 & 0x40000000) != 0 )
      {
        *(_DWORD *)(v5 + 8) = v6 & 0xBFFFFFFF;
        if ( gulCachedPointerRefs )
        {
          if ( !--gulCachedPointerRefs )
          {
            if ( bCachedSetPointerRefs )
            {
              if ( byte_272888 )
                GreSetPointer(
                  gCachedSetPointerState,
                  (HDEV)dword_27287C,
                  (struct _CURSINFO *)dword_272880,
                  dword_272884);
              else
                GreSetPointer(0, 0, 0, 0);
              bCachedSetPointerRefs = 0;
            }
            if ( bCachedMovePointerRefs )
            {
              GreMovePointer(v3, dword_275640, (HDEV)dword_275644, dword_275648);
              bCachedMovePointerRefs = 0;
            }
          }
        }
      }
    }
    SEMOBJ::vUnlock((SEMOBJ *)&v9);
    if ( !PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v10) )
    {
      EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", _ghsemGreLock);
      GreReleaseSemaphoreInternal(_ghsemGreLock);
    }
  }
  else
  {
    v1 = 0;
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", _ghsemDynamicModeChange);
  GreReleaseSemaphoreInternal(_ghsemDynamicModeChange);
  return v1;
}
