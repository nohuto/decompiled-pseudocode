/*
 * XREFs of GreHidePointer @ 0x1C0097950
 * Callers:
 *     SetPointerMetaVisibility @ 0x1C002A16C (SetPointerMetaVisibility.c)
 *     ?RenderCursor@@YAXAEBUtagPOINTERCURSORDATA@@@Z @ 0x1C01DA528 (-RenderCursor@@YAXAEBUtagPOINTERCURSORDATA@@@Z.c)
 *     ?xxxSwitchCursors@@YAXHH@Z @ 0x1C01DA848 (-xxxSwitchCursors@@YAXHH@Z.c)
 *     NtUserShowSystemCursor @ 0x1C0203370 (NtUserShowSystemCursor.c)
 * Callees:
 *     ?GreHidePointerInternal@@YAXPEAUHDEV__@@@Z @ 0x1C00089DC (-GreHidePointerInternal@@YAXPEAUHDEV__@@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C002120C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     GreMovePointer @ 0x1C00C4410 (GreMovePointer.c)
 *     GreSetPointer @ 0x1C00CDFB0 (GreSetPointer.c)
 */

__int64 __fastcall GreHidePointer(int a1)
{
  unsigned int v2; // ebp
  __int64 HDEV; // rax
  HDEV v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 CurrentProcessWin32Process; // rax
  __int64 v9; // rbx
  int v10; // eax
  unsigned int v12; // eax
  unsigned int v13; // edx
  struct _CURSINFO *v14; // rcx
  __int64 v15; // [rsp+48h] [rbp+10h] BYREF
  __int64 v16; // [rsp+50h] [rbp+18h] BYREF

  v2 = 1;
  GreAcquireSemaphoreSharedInternal(ghsemDynamicModeChange);
  EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
  HDEV = UserGetHDEV();
  v4 = (HDEV)HDEV;
  if ( HDEV )
  {
    v15 = HDEV;
    if ( !PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v15) )
      GreAcquireSemaphore(ghsemGreLock);
    v16 = *(_QWORD *)(v15 + 64);
    GreAcquireSemaphore(v16);
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v6, v5, v7);
    v9 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
    {
      v10 = *(_DWORD *)(CurrentProcessWin32Process + 12);
      if ( a1 )
      {
        if ( (v10 & 0x40000000) == 0 && gulCachedPointerRefs != -1 )
        {
          if ( !gulCachedPointerRefs )
          {
            GreHidePointerInternal(v4);
            v10 = *(_DWORD *)(v9 + 12);
          }
          ++gulCachedPointerRefs;
          *(_DWORD *)(v9 + 12) = v10 | 0x40000000;
        }
      }
      else if ( (v10 & 0x40000000) != 0 )
      {
        *(_DWORD *)(v9 + 12) = v10 & 0xBFFFFFFF;
        v12 = gulCachedPointerRefs;
        if ( gulCachedPointerRefs )
        {
          --gulCachedPointerRefs;
          if ( v12 == 1 )
          {
            if ( bCachedSetPointerRefs )
            {
              if ( byte_1C033934C )
              {
                v13 = dword_1C0339340;
                v14 = gCachedSetPointerState;
              }
              else
              {
                v13 = 0;
                v14 = 0LL;
              }
              GreSetPointer(v14, v13);
              bCachedSetPointerRefs = 0;
            }
            if ( bCachedMovePointerRefs )
            {
              GreMovePointer(v4);
              bCachedMovePointerRefs = 0;
            }
          }
        }
      }
    }
    SEMOBJ::vUnlock((SEMOBJ *)&v16);
    if ( !PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v15) )
    {
      EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
      GreReleaseSemaphoreInternal(ghsemGreLock);
    }
  }
  else
  {
    v2 = 0;
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
  GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
  return v2;
}
