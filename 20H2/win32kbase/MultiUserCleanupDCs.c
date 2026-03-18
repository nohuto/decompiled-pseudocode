/*
 * XREFs of MultiUserCleanupDCs @ 0x1C0018EB4
 * Callers:
 *     DrvCleanupAndDestroyMDEV @ 0x1C00BC1E8 (DrvCleanupAndDestroyMDEV.c)
 * Callees:
 *     ?GetNextEntryIndex@GdiHandleManager@@QEAAIIPEAPEAU_ENTRY@@@Z @ 0x1C001A4C0 (-GetNextEntryIndex@GdiHandleManager@@QEAAIIPEAPEAU_ENTRY@@@Z.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C00455B0 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0045800 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?vCleanupDCs@@YAXK@Z @ 0x1C00C2B54 (-vCleanupDCs@@YAXK@Z.c)
 */

void MultiUserCleanupDCs()
{
  unsigned int CurrentProcessId; // eax
  GdiHandleManager *v1; // rcx
  unsigned int v2; // esi
  int v3; // ebp
  unsigned int v4; // edi
  unsigned int NextEntryIndex; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  GdiHandleManager *v10; // rbx
  unsigned int v11; // eax
  struct _ENTRY *Entry; // rax
  int v13; // edx
  __int64 CurrentProcessWin32Process; // rax
  struct _ENTRY *v15; // [rsp+30h] [rbp+8h] BYREF

  CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
  v15 = 0LL;
  v2 = 0;
  v3 = 0;
  v4 = CurrentProcessId & 0xFFFFFFFC;
  if ( gpHandleManager )
  {
    while ( 1 )
    {
      NextEntryIndex = GdiHandleManager::GetNextEntryIndex(v1, v2, &v15);
      v2 = NextEntryIndex;
      if ( !NextEntryIndex )
        break;
      v10 = gpHandleManager;
      v11 = GdiHandleManager::DecodeIndex(gpHandleManager, NextEntryIndex);
      Entry = GdiHandleEntryDirectory::GetEntry(*((GdiHandleEntryDirectory **)v10 + 2), v11, 0);
      v15 = Entry;
      if ( *((_BYTE *)Entry + 14) == 1 )
      {
        v13 = *((_DWORD *)Entry + 2);
        v1 = (GdiHandleManager *)(v13 & 0xFFFFFFFE);
        if ( (_DWORD)v1 != v4 )
        {
          *((_DWORD *)Entry + 2) = v4 | v13 & 1;
          ++v3;
        }
      }
    }
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v7, v6, v8, v9);
    if ( CurrentProcessWin32Process )
      *(_DWORD *)(CurrentProcessWin32Process + 60) += v3;
    vCleanupDCs(v4);
  }
}
