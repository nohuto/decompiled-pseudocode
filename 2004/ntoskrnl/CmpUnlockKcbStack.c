/*
 * XREFs of CmpUnlockKcbStack @ 0x1405F0B30
 * Callers:
 *     CmQueryLayeredKey @ 0x140200A58 (CmQueryLayeredKey.c)
 *     CmDeleteLayeredKey @ 0x1404E7EF8 (CmDeleteLayeredKey.c)
 *     CmpEnumerateLayeredKey @ 0x1405CF0D0 (CmpEnumerateLayeredKey.c)
 *     CmDeleteValueKey @ 0x1405DDB38 (CmDeleteValueKey.c)
 *     CmSetValueKey @ 0x1405E3F50 (CmSetValueKey.c)
 *     CmpQueryKeySecurity @ 0x1405E4A10 (CmpQueryKeySecurity.c)
 *     CmCallbackGetKeyObjectIDEx @ 0x1405E5670 (CmCallbackGetKeyObjectIDEx.c)
 *     CmpGetSymbolicLinkTarget @ 0x1405E6CF0 (CmpGetSymbolicLinkTarget.c)
 *     CmQueryValueKey @ 0x1405EB260 (CmQueryValueKey.c)
 *     CmpDoParseKey @ 0x1405EF1F0 (CmpDoParseKey.c)
 *     CmpSetKeySecurity @ 0x14063D900 (CmpSetKeySecurity.c)
 *     CmDeleteKey @ 0x140643F58 (CmDeleteKey.c)
 *     CmpStartSiloRegistryNamespace @ 0x14064F8D0 (CmpStartSiloRegistryNamespace.c)
 *     CmSaveKey @ 0x14071717C (CmSaveKey.c)
 *     CmpAssignKeySecurity @ 0x1407BD900 (CmpAssignKeySecurity.c)
 *     CmCallbackGetKeyObjectID @ 0x140866420 (CmCallbackGetKeyObjectID.c)
 *     CmEnumerateValueFromLayeredKey @ 0x140868C10 (CmEnumerateValueFromLayeredKey.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x140868EE4 (CmQueryMultipleValueForLayeredKey.c)
 *     CmSetKeyFlags @ 0x14086AA28 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x14086AEE4 (CmSetLastWriteTimeKey.c)
 *     CmpPromoteKey @ 0x14087D190 (CmpPromoteKey.c)
 * Callees:
 *     ExReleasePushLockEx @ 0x140207FC0 (ExReleasePushLockEx.c)
 *     CmpFreeKeyControlBlock @ 0x140652CD0 (CmpFreeKeyControlBlock.c)
 */

char __fastcall CmpUnlockKcbStack(__int64 a1)
{
  __int16 i; // bx
  ULONG_PTR v3; // rdi
  bool v4; // bp
  char result; // al

  for ( i = 0; i <= *(__int16 *)(a1 + 2); ++i )
  {
    if ( i >= 2 )
      v3 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL * i - 16);
    else
      v3 = *(_QWORD *)(a1 + 8LL * i + 8);
    v4 = (*(_DWORD *)(v3 + 8) & 0x80000) != 0;
    if ( *(struct _KTHREAD **)(v3 + 56) == KeGetCurrentThread() )
      *(_QWORD *)(v3 + 56) = 0LL;
    else
      _InterlockedDecrement((volatile signed __int32 *)(v3 + 56));
    result = ExReleasePushLockEx(v3 + 48, 0LL);
    if ( v4 && (*(_DWORD *)(v3 + 8) & 0x80000) != 0 )
      result = CmpFreeKeyControlBlock(v3);
  }
  return result;
}
