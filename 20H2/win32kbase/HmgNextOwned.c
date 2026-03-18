/*
 * XREFs of HmgNextOwned @ 0x1C00925E0
 * Callers:
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C001783C (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 *     ?vCleanupRegions@@YAXK@Z @ 0x1C00924C4 (-vCleanupRegions@@YAXK@Z.c)
 *     ?vCleanupSurfaces@@YAXKW4_CLEANUPTYPE@@@Z @ 0x1C0092554 (-vCleanupSurfaces@@YAXKW4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     ?GetNextEntryIndex@GdiHandleManager@@QEAAIIPEAPEAU_ENTRY@@@Z @ 0x1C001A4C0 (-GetNextEntryIndex@GdiHandleManager@@QEAAIIPEAPEAU_ENTRY@@@Z.c)
 *     GreReleaseHmgrSemaphore @ 0x1C003D970 (GreReleaseHmgrSemaphore.c)
 *     ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x1C0045660 (-GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z.c)
 *     GreAcquireHmgrSemaphore @ 0x1C005EA20 (GreAcquireHmgrSemaphore.c)
 *     ?bOwnedBy@ENTRYOBJ@@QEBAHK@Z @ 0x1C0082980 (-bOwnedBy@ENTRYOBJ@@QEBAHK@Z.c)
 *     HmgIsProcessCleanupRequiredByW32Pid @ 0x1C00CF354 (HmgIsProcessCleanupRequiredByW32Pid.c)
 */

__int64 __fastcall HmgNextOwned(unsigned int NextEntryIndex, unsigned int a2, unsigned __int64 *a3)
{
  __int64 result; // rax
  int v7; // edx
  __int64 v8; // rcx
  int v9; // r8d
  GdiHandleManager *CurrentThread; // rcx
  unsigned __int64 v11; // rdx
  int v12; // ecx
  int v13; // r8d
  ENTRYOBJ *v14; // rdi
  struct OBJECT *EntryObject; // rax
  ENTRYOBJ *v16; // [rsp+58h] [rbp+20h] BYREF

  result = HmgIsProcessCleanupRequiredByW32Pid(a2);
  if ( (_DWORD)result )
  {
    GreAcquireHmgrSemaphore(v8, v7, v9);
    v16 = 0LL;
    while ( 1 )
    {
      NextEntryIndex = GdiHandleManager::GetNextEntryIndex(CurrentThread, NextEntryIndex, &v16);
      if ( !NextEntryIndex )
        break;
      v14 = v16;
      if ( ENTRYOBJ::bOwnedBy(v16, a2) )
      {
        if ( (*((_BYTE *)v14 + 15) & 0x40) == 0 )
          goto LABEL_10;
        EntryObject = GdiHandleManager::GetEntryObject(gpHandleManager, NextEntryIndex);
        if ( !EntryObject )
          goto LABEL_10;
        if ( *((_WORD *)EntryObject + 6) )
        {
          CurrentThread = KeGetCurrentThread();
          if ( *((GdiHandleManager **)EntryObject + 2) == CurrentThread )
          {
            v14 = v16;
LABEL_10:
            v12 = (unsigned __int16)NextEntryIndex;
            v11 = (unsigned __int16)NextEntryIndex | (unsigned __int64)(*((unsigned __int16 *)v14 + 6) << 16);
            *a3 = v11;
            goto LABEL_12;
          }
        }
      }
    }
    NextEntryIndex = 0;
LABEL_12:
    GreReleaseHmgrSemaphore(v12, v11, v13);
    return NextEntryIndex;
  }
  return result;
}
