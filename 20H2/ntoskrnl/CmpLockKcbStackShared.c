/*
 * XREFs of CmpLockKcbStackShared @ 0x14061B4F0
 * Callers:
 *     CmQueryLayeredKey @ 0x140200A58 (CmQueryLayeredKey.c)
 *     CmpEnumerateLayeredKey @ 0x1405D5580 (CmpEnumerateLayeredKey.c)
 *     CmpDoParseKey @ 0x140619BF0 (CmpDoParseKey.c)
 *     CmpGetSymbolicLinkTarget @ 0x14061CB10 (CmpGetSymbolicLinkTarget.c)
 *     CmSetValueKey @ 0x14066E7B0 (CmSetValueKey.c)
 *     CmpQueryKeySecurity @ 0x14066F1E0 (CmpQueryKeySecurity.c)
 *     CmCallbackGetKeyObjectIDEx @ 0x14066FA70 (CmCallbackGetKeyObjectIDEx.c)
 *     CmQueryValueKey @ 0x14067A400 (CmQueryValueKey.c)
 *     CmSaveKey @ 0x14072513C (CmSaveKey.c)
 *     CmCallbackGetKeyObjectID @ 0x14086BE40 (CmCallbackGetKeyObjectID.c)
 *     CmEnumerateValueFromLayeredKey @ 0x14086E630 (CmEnumerateValueFromLayeredKey.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x14086E904 (CmQueryMultipleValueForLayeredKey.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140220C00 (ExAcquirePushLockSharedEx.c)
 */

__int64 __fastcall CmpLockKcbStackShared(__int64 a1)
{
  __int16 i; // bx
  __int64 v3; // rdi
  __int64 result; // rax

  for ( i = 0; i <= *(__int16 *)(a1 + 2); ++i )
  {
    if ( i >= 2 )
      v3 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL * i - 16);
    else
      v3 = *(_QWORD *)(a1 + 8LL * i + 8);
    result = ExAcquirePushLockSharedEx(v3 + 48, 0LL);
    _InterlockedIncrement((volatile signed __int32 *)(v3 + 56));
  }
  return result;
}
