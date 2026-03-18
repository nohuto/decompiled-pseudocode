/*
 * XREFs of CmpUnlockKcbStack @ 0x14061B550
 * Callers:
 *     CmQueryLayeredKey @ 0x140200A58 (CmQueryLayeredKey.c)
 *     CmDeleteLayeredKey @ 0x1404EB788 (CmDeleteLayeredKey.c)
 *     CmpEnumerateLayeredKey @ 0x1405D5580 (CmpEnumerateLayeredKey.c)
 *     CmpSetKeySecurity @ 0x1405E0AE4 (CmpSetKeySecurity.c)
 *     CmpDoParseKey @ 0x140619BF0 (CmpDoParseKey.c)
 *     CmpGetSymbolicLinkTarget @ 0x14061CB10 (CmpGetSymbolicLinkTarget.c)
 *     CmDeleteValueKey @ 0x14066C6F4 (CmDeleteValueKey.c)
 *     CmSetValueKey @ 0x14066E7B0 (CmSetValueKey.c)
 *     CmpQueryKeySecurity @ 0x14066F1E0 (CmpQueryKeySecurity.c)
 *     CmCallbackGetKeyObjectIDEx @ 0x14066FA70 (CmCallbackGetKeyObjectIDEx.c)
 *     CmQueryValueKey @ 0x14067A400 (CmQueryValueKey.c)
 *     CmpStartSiloRegistryNamespace @ 0x1406E3CDC (CmpStartSiloRegistryNamespace.c)
 *     CmDeleteKey @ 0x1407022EC (CmDeleteKey.c)
 *     CmSaveKey @ 0x14072513C (CmSaveKey.c)
 *     CmpAssignKeySecurity @ 0x1407CC190 (CmpAssignKeySecurity.c)
 *     CmCallbackGetKeyObjectID @ 0x14086BE40 (CmCallbackGetKeyObjectID.c)
 *     CmEnumerateValueFromLayeredKey @ 0x14086E630 (CmEnumerateValueFromLayeredKey.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x14086E904 (CmQueryMultipleValueForLayeredKey.c)
 *     CmSetKeyFlags @ 0x14087047C (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x140870938 (CmSetLastWriteTimeKey.c)
 *     CmpDoBuildVirtualStack @ 0x14087276C (CmpDoBuildVirtualStack.c)
 *     CmpPromoteKey @ 0x140882D40 (CmpPromoteKey.c)
 * Callees:
 *     ExReleasePushLockEx @ 0x140220F40 (ExReleasePushLockEx.c)
 *     CmpFreeKeyControlBlock @ 0x1406A38E0 (CmpFreeKeyControlBlock.c)
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
