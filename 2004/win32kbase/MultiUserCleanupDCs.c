/*
 * XREFs of MultiUserCleanupDCs @ 0x1C00BDE54
 * Callers:
 *     DrvCleanupAndDestroyMDEV @ 0x1C005BDA8 (DrvCleanupAndDestroyMDEV.c)
 * Callees:
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C008B040 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C008B290 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?GetNextEntryIndex@GdiHandleManager@@QEAAIIPEAPEAU_ENTRY@@@Z @ 0x1C00BF460 (-GetNextEntryIndex@GdiHandleManager@@QEAAIIPEAPEAU_ENTRY@@@Z.c)
 *     ?vCleanupDCs@@YAXK@Z @ 0x1C00C3B20 (-vCleanupDCs@@YAXK@Z.c)
 */

void MultiUserCleanupDCs()
{
  unsigned int CurrentProcessId; // eax
  GdiHandleManager *v1; // rcx
  unsigned int v2; // esi
  int v3; // ebp
  unsigned int v4; // edi
  unsigned int NextEntryIndex; // eax
  __int64 v6; // rcx
  GdiHandleManager *v7; // rbx
  unsigned int v8; // eax
  struct _ENTRY *Entry; // rax
  int v10; // edx
  __int64 CurrentProcessWin32Process; // rax
  struct _ENTRY *v12; // [rsp+30h] [rbp+8h] BYREF

  CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
  v12 = 0LL;
  v2 = 0;
  v3 = 0;
  v4 = CurrentProcessId & 0xFFFFFFFC;
  if ( gpHandleManager )
  {
    while ( 1 )
    {
      NextEntryIndex = GdiHandleManager::GetNextEntryIndex(v1, v2, &v12);
      v2 = NextEntryIndex;
      if ( !NextEntryIndex )
        break;
      v7 = gpHandleManager;
      v8 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)gpHandleManager, NextEntryIndex);
      Entry = GdiHandleEntryDirectory::GetEntry(*((GdiHandleEntryDirectory **)v7 + 2), v8, 0);
      v12 = Entry;
      if ( *((_BYTE *)Entry + 14) == 1 )
      {
        v10 = *((_DWORD *)Entry + 2);
        v1 = (GdiHandleManager *)(v10 & 0xFFFFFFFE);
        if ( (_DWORD)v1 != v4 )
        {
          *((_DWORD *)Entry + 2) = v4 | v10 & 1;
          ++v3;
        }
      }
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v6);
    if ( CurrentProcessWin32Process )
      *(_DWORD *)(CurrentProcessWin32Process + 60) += v3;
    vCleanupDCs(v4);
  }
}
