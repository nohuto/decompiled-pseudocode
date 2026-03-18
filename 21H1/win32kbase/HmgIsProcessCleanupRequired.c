/*
 * XREFs of HmgIsProcessCleanupRequired @ 0x1C00CEFCC
 * Callers:
 *     HmgIsProcessCleanupRequiredByW32Pid @ 0x1C00CEFE8 (HmgIsProcessCleanupRequiredByW32Pid.c)
 *     ?vGarbageCollectObjects@@YAXXZ @ 0x1C00D034C (-vGarbageCollectObjects@@YAXXZ.c)
 *     ?MultiUserGreCleanupHmgOwnRemoveAllLocks@@YAXE@Z @ 0x1C014987C (-MultiUserGreCleanupHmgOwnRemoveAllLocks@@YAXE@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HmgIsProcessCleanupRequired(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( !a1 || *(_DWORD *)(a1 + 64) )
    return 1LL;
  return result;
}
