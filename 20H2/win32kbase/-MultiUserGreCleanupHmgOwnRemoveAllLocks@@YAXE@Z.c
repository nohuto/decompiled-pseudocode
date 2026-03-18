/*
 * XREFs of ?MultiUserGreCleanupHmgOwnRemoveAllLocks@@YAXE@Z @ 0x1C014108C
 * Callers:
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C001783C (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     ?GetNextEntryIndex@GdiHandleManager@@QEAAIIPEAPEAU_ENTRY@@@Z @ 0x1C001A4C0 (-GetNextEntryIndex@GdiHandleManager@@QEAAIIPEAPEAU_ENTRY@@@Z.c)
 *     ?vAppContainerOwner@SURFACE@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C001B4B8 (-vAppContainerOwner@SURFACE@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     UserIsProcessImmersiveAppContainer @ 0x1C001B520 (UserIsProcessImmersiveAppContainer.c)
 *     HmgSetOwner @ 0x1C003D030 (HmgSetOwner.c)
 *     GreReleaseHmgrSemaphore @ 0x1C003D970 (GreReleaseHmgrSemaphore.c)
 *     ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x1C0045660 (-GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z.c)
 *     GreAcquireHmgrSemaphore @ 0x1C005EA20 (GreAcquireHmgrSemaphore.c)
 *     HmgIsProcessCleanupRequired @ 0x1C00CF338 (HmgIsProcessCleanupRequired.c)
 */

void __fastcall MultiUserGreCleanupHmgOwnRemoveAllLocks(__int64 a1, __int64 a2)
{
  char v2; // si
  __int64 CurrentProcess; // rbp
  __int64 v4; // rcx
  __int64 CurrentProcessWin32Process; // rax
  int v6; // edx
  __int64 v7; // rcx
  int v8; // r8d
  GdiHandleManager *v9; // rcx
  unsigned int i; // edx
  struct _ENTRY *v11; // rbx
  struct OBJECT *EntryObject; // rax
  struct OBJECT *v13; // rax
  char v14; // r8
  char v15; // al
  unsigned int NextEntryIndex; // eax
  __int64 v17; // rdx
  int v18; // r8d
  unsigned int v19; // edi
  struct _ENTRY *v20; // [rsp+48h] [rbp+10h] BYREF

  v2 = a1;
  v20 = 0LL;
  CurrentProcess = PsGetCurrentProcess(a1, a2);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v4);
  if ( (unsigned int)HmgIsProcessCleanupRequired(CurrentProcessWin32Process)
    || v2 == 5 && (unsigned int)UserIsProcessImmersiveAppContainer(CurrentProcess) )
  {
    GreAcquireHmgrSemaphore(v7, v6, v8);
    for ( i = 0; ; i = v19 )
    {
      NextEntryIndex = GdiHandleManager::GetNextEntryIndex(v9, i, &v20);
      v19 = NextEntryIndex;
      if ( !NextEntryIndex )
      {
        GreReleaseHmgrSemaphore((int)v9, v17, v18);
        return;
      }
      v11 = v20;
      if ( v2 == 5 )
      {
        if ( *((_BYTE *)v20 + 14) != 5
          || *((char *)v20 + 15) >= 0
          || (EntryObject = GdiHandleManager::GetEntryObject(gpHandleManager, NextEntryIndex),
              *((_QWORD *)EntryObject + 80) != CurrentProcess) )
        {
LABEL_11:
          if ( v2 != *((_BYTE *)v11 + 14) )
            continue;
          goto LABEL_14;
        }
        SURFACE::vAppContainerOwner(EntryObject, 0LL);
      }
      if ( v2 )
        goto LABEL_11;
      if ( (unsigned __int8)(*((_BYTE *)v11 + 14) - 1) > 0x1Du )
        continue;
LABEL_14:
      if ( ((*((_DWORD *)v11 + 2) ^ (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFD) & 0xFFFFFFFE) == 0 )
      {
        v13 = GdiHandleManager::GetEntryObject(gpHandleManager, v19);
        v14 = *((_BYTE *)v11 + 14);
        if ( (v14 == 5 || v14 == 8) && (*((_WORD *)v13 + 7) & 0x4000) != 0 )
        {
          if ( (unsigned int)HmgSetOwner(*(_QWORD *)v13, -2147483630, v14) )
            _InterlockedIncrement(&gGarbageCollectionPendingCount);
        }
        else
        {
          *((_DWORD *)v13 + 2) = 0;
          *((_WORD *)v13 + 6) = 0;
          *((_QWORD *)v13 + 2) = 0LL;
          *((_DWORD *)v11 + 2) &= ~1u;
          *((_BYTE *)v11 + 15) &= ~1u;
          v15 = *((_BYTE *)v11 + 15);
          if ( (v15 & 0x20) != 0 )
            *((_QWORD *)v11 + 2) = 0LL;
          *((_BYTE *)v11 + 15) = v15 & 0xDF;
        }
      }
    }
  }
}
