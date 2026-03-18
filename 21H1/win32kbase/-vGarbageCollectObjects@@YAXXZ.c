/*
 * XREFs of ?vGarbageCollectObjects@@YAXXZ @ 0x1C00D034C
 * Callers:
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C000B02C (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     HmgNextGarbageCollectible @ 0x1C00996F4 (HmgNextGarbageCollectible.c)
 *     ?Feature_Servicing_DynamicModeChange_23402279__private_IsEnabled@@YAHXZ @ 0x1C00CEC5C (-Feature_Servicing_DynamicModeChange_23402279__private_IsEnabled@@YAHXZ.c)
 *     HmgIsProcessCleanupRequired @ 0x1C00CEFCC (HmgIsProcessCleanupRequired.c)
 *     ??$vGarbageCollectObject@VEPALOBJ@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00D0078 (--$vGarbageCollectObject@VEPALOBJ@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VSURFREF@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00D0170 (--$vGarbageCollectObject@VSURFREF@@@@YAXPEAUHOBJ__@@@Z.c)
 *     ??$vGarbageCollectObject@VSURFREFGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00D0248 (--$vGarbageCollectObject@VSURFREFGC@@@@YAXPEAUHOBJ__@@@Z.c)
 */

void __fastcall vGarbageCollectObjects(__int64 a1)
{
  __int64 CurrentProcessWin32Process; // rax
  __int64 v2; // rcx
  __int64 v3; // rdx
  int v4; // r8d
  unsigned int v5; // ebx
  char v6; // [rsp+30h] [rbp+8h] BYREF
  unsigned __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  if ( gGarbageCollectionPendingCount )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
    if ( (unsigned int)HmgIsProcessCleanupRequired(CurrentProcessWin32Process) )
    {
      v7 = 0LL;
      v2 = 0LL;
      v6 = 30;
      while ( 1 )
      {
        v5 = HmgNextGarbageCollectible(v2, &v7, &v6);
        if ( !v5 )
          break;
        if ( v6 == 5 )
        {
          if ( (unsigned int)Feature_Servicing_DynamicModeChange_23402279__private_IsEnabled() )
            vGarbageCollectObject<SURFREFGC>(v7, v3, v4);
          else
            vGarbageCollectObject<SURFREF>(v7);
        }
        else if ( v6 == 8 )
        {
          vGarbageCollectObject<EPALOBJ>(v7);
        }
        v2 = v5;
      }
    }
  }
}
