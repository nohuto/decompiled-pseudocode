/*
 * XREFs of HmgNextGarbageCollectible @ 0x1C00996F4
 * Callers:
 *     ?vGarbageCollectObjects@@YAXXZ @ 0x1C00D034C (-vGarbageCollectObjects@@YAXXZ.c)
 * Callees:
 *     GreAcquireHmgrSemaphore @ 0x1C0076C90 (GreAcquireHmgrSemaphore.c)
 *     GreReleaseHmgrSemaphore @ 0x1C007B8A0 (GreReleaseHmgrSemaphore.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C00841C0 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?GetNextEntryIndex@GdiHandleManager@@QEAAIIPEAPEAU_ENTRY@@@Z @ 0x1C009AB80 (-GetNextEntryIndex@GdiHandleManager@@QEAAIIPEAPEAU_ENTRY@@@Z.c)
 */

__int64 __fastcall HmgNextGarbageCollectible(__int64 a1, unsigned __int64 *a2, _BYTE *a3)
{
  unsigned int v5; // ebx
  __int64 v6; // rcx
  GdiHandleManager *v7; // rbp
  unsigned int NextEntryIndex; // eax
  unsigned __int64 v9; // rdx
  unsigned int v10; // r8d
  struct _ENTRY *v11; // rdi
  unsigned int v13; // eax
  __int64 v14; // r9
  unsigned __int64 v15; // rdx
  __int64 v16; // r9
  __int64 v17; // rdx
  struct _ENTRY *v18; // [rsp+58h] [rbp+20h] BYREF

  v5 = a1;
  GreAcquireHmgrSemaphore(a1, (int)a2, (int)a3);
  v18 = 0LL;
  v7 = gpHandleManager;
  while ( 1 )
  {
    NextEntryIndex = GdiHandleManager::GetNextEntryIndex((GdiHandleManager *)v6, v5, &v18);
    v5 = NextEntryIndex;
    if ( !NextEntryIndex )
    {
      v5 = 0;
      goto LABEL_9;
    }
    v11 = v18;
    if ( *((_DWORD *)v18 + 2) == -2147483630 )
    {
      v13 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)gpHandleManager, NextEntryIndex);
      v14 = *((_QWORD *)v7 + 2);
      v15 = v13;
      v10 = *(_DWORD *)(v14 + 2056);
      v6 = v10 + ((*(unsigned __int16 *)(v14 + 2) + 0xFFFF) << 16);
      if ( v13 < (unsigned int)v6 )
      {
        if ( v13 >= v10 )
          v6 = ((v13 - v10) >> 16) + 1;
        else
          v6 = 0LL;
        v16 = *(_QWORD *)(v14 + 8 * v6 + 8);
        if ( (_DWORD)v6 )
          v15 = ((1 - (_DWORD)v6) << 16) - v10 + v13;
        if ( (unsigned int)v15 >= *(_DWORD *)(v16 + 20) )
        {
          v17 = 0LL;
        }
        else
        {
          v6 = 2LL * (unsigned __int8)v15;
          v17 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v16 + 24) + 8 * (v15 >> 8)) + 16LL * (unsigned __int8)v15 + 8);
        }
        if ( v17 )
        {
          v6 = 0x4000LL;
          if ( (*(_WORD *)(v17 + 14) & 0x4000) != 0 )
            break;
        }
      }
    }
  }
  LODWORD(v6) = (unsigned __int16)v5;
  v9 = (unsigned __int16)v5 | (unsigned __int64)(*((unsigned __int16 *)v11 + 6) << 16);
  *a3 = *((_BYTE *)v11 + 14);
  *a2 = v9;
LABEL_9:
  GreReleaseHmgrSemaphore(v6, v9, v10);
  return v5;
}
