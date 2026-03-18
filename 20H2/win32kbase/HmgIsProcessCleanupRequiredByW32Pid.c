/*
 * XREFs of HmgIsProcessCleanupRequiredByW32Pid @ 0x1C00CF354
 * Callers:
 *     HmgNextOwned @ 0x1C00925E0 (HmgNextOwned.c)
 *     ?vCleanupDCs@@YAXK@Z @ 0x1C00C2B54 (-vCleanupDCs@@YAXK@Z.c)
 * Callees:
 *     ?GetW32ProcessFromId@@YAPEAU_W32PROCESS@@KPEAPEAU_EPROCESS@@@Z @ 0x1C003E6B4 (-GetW32ProcessFromId@@YAPEAU_W32PROCESS@@KPEAPEAU_EPROCESS@@@Z.c)
 *     HmgIsProcessCleanupRequired @ 0x1C00CF338 (HmgIsProcessCleanupRequired.c)
 */

__int64 __fastcall HmgIsProcessCleanupRequiredByW32Pid(int a1)
{
  unsigned int IsProcessCleanupRequired; // ebx
  struct _W32PROCESS *W32ProcessFromId; // rax
  PVOID Object; // [rsp+38h] [rbp+10h] BYREF

  IsProcessCleanupRequired = 1;
  if ( a1 )
  {
    if ( a1 != -2147483630 )
    {
      Object = 0LL;
      W32ProcessFromId = GetW32ProcessFromId(a1, (struct _EPROCESS **)&Object);
      IsProcessCleanupRequired = HmgIsProcessCleanupRequired((__int64)W32ProcessFromId);
      if ( Object )
        ObfDereferenceObject(Object);
    }
  }
  return IsProcessCleanupRequired;
}
