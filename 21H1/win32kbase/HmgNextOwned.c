/*
 * XREFs of HmgNextOwned @ 0x1C00A9DE0
 * Callers:
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C000B02C (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 *     ?vCleanupRegions@@YAXK@Z @ 0x1C00A9CB8 (-vCleanupRegions@@YAXK@Z.c)
 *     ?vCleanupSurfaces@@YAXKW4_CLEANUPTYPE@@@Z @ 0x1C00A9D48 (-vCleanupSurfaces@@YAXKW4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     ?bOwnedBy@ENTRYOBJ@@QEBAHK@Z @ 0x1C0009020 (-bOwnedBy@ENTRYOBJ@@QEBAHK@Z.c)
 *     GreAcquireHmgrSemaphore @ 0x1C0076C90 (GreAcquireHmgrSemaphore.c)
 *     GreReleaseHmgrSemaphore @ 0x1C007B8A0 (GreReleaseHmgrSemaphore.c)
 *     ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x1C0084020 (-GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z.c)
 *     ?GetNextEntryIndex@GdiHandleManager@@QEAAIIPEAPEAU_ENTRY@@@Z @ 0x1C009AB80 (-GetNextEntryIndex@GdiHandleManager@@QEAAIIPEAPEAU_ENTRY@@@Z.c)
 *     HmgIsProcessCleanupRequiredByW32Pid @ 0x1C00CEFE8 (HmgIsProcessCleanupRequiredByW32Pid.c)
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
