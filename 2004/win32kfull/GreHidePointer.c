/*
 * XREFs of GreHidePointer @ 0x1C004A8C0
 * Callers:
 *     SetPointerMetaVisibility @ 0x1C004A88C (SetPointerMetaVisibility.c)
 *     ?RenderCursor@@YAXAEBUtagPOINTERCURSORDATA@@@Z @ 0x1C01DB1E8 (-RenderCursor@@YAXAEBUtagPOINTERCURSORDATA@@@Z.c)
 *     ?xxxSwitchCursors@@YAXHH@Z @ 0x1C01DB508 (-xxxSwitchCursors@@YAXHH@Z.c)
 *     NtUserShowSystemCursor @ 0x1C02041E0 (NtUserShowSystemCursor.c)
 * Callees:
 *     ?GreHidePointerInternal@@YAXPEAUHDEV__@@@Z @ 0x1C00089EC (-GreHidePointerInternal@@YAXPEAUHDEV__@@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C000F68C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     GreMovePointer @ 0x1C002B390 (GreMovePointer.c)
 *     GreSetPointer @ 0x1C0088550 (GreSetPointer.c)
 */

__int64 __fastcall GreHidePointer(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // ebp
  __int64 HDEV; // rax
  HDEV v7; // rsi
  __int64 v8; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v10; // rbx
  int v11; // eax
  unsigned int v13; // eax
  unsigned int v14; // edx
  struct _CURSINFO *v15; // rcx
  __int64 v16; // [rsp+48h] [rbp+10h] BYREF
  __int64 v17; // [rsp+50h] [rbp+18h] BYREF

  v5 = 1;
  GreAcquireSemaphoreSharedInternal(ghsemDynamicModeChange, a2, a3, a4);
  EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
  HDEV = UserGetHDEV();
  v7 = (HDEV)HDEV;
  if ( HDEV )
  {
    v16 = HDEV;
    if ( !PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v16) )
      GreAcquireSemaphore(ghsemGreLock);
    v17 = *(_QWORD *)(v16 + 64);
    GreAcquireSemaphore(v17);
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v8);
    v10 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
    {
      v11 = *(_DWORD *)(CurrentProcessWin32Process + 12);
      if ( a1 )
      {
        if ( (v11 & 0x40000000) == 0 && gulCachedPointerRefs != -1 )
        {
          if ( !gulCachedPointerRefs )
          {
            GreHidePointerInternal(v7);
            v11 = *(_DWORD *)(v10 + 12);
          }
          ++gulCachedPointerRefs;
          *(_DWORD *)(v10 + 12) = v11 | 0x40000000;
        }
      }
      else if ( (v11 & 0x40000000) != 0 )
      {
        *(_DWORD *)(v10 + 12) = v11 & 0xBFFFFFFF;
        v13 = gulCachedPointerRefs;
        if ( gulCachedPointerRefs )
        {
          --gulCachedPointerRefs;
          if ( v13 == 1 )
          {
            if ( bCachedSetPointerRefs )
            {
              if ( byte_1C033A324 )
              {
                v14 = dword_1C033A318;
                v15 = gCachedSetPointerState;
              }
              else
              {
                v14 = 0;
                v15 = 0LL;
              }
              GreSetPointer(v15, v14);
              bCachedSetPointerRefs = 0;
            }
            if ( bCachedMovePointerRefs )
            {
              GreMovePointer(v7, dword_1C033C888, dword_1C033C88C, dword_1C033C890);
              bCachedMovePointerRefs = 0;
            }
          }
        }
      }
    }
    SEMOBJ::vUnlock((SEMOBJ *)&v17);
    if ( !PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v16) )
    {
      EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
      GreReleaseSemaphoreInternal(ghsemGreLock);
    }
  }
  else
  {
    v5 = 0;
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
  GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
  return v5;
}
