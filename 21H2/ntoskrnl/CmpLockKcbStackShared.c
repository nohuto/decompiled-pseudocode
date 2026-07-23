/*
 * XREFs of CmpLockKcbStackShared @ 0x1407127C0
 * Callers:
 *     CmQueryLayeredKey @ 0x140200A78 (CmQueryLayeredKey.c)
 *     CmpEnumerateLayeredKey @ 0x1405D8520 (CmpEnumerateLayeredKey.c)
 *     CmSetValueKey @ 0x1406594E0 (CmSetValueKey.c)
 *     CmpQueryKeySecurity @ 0x14065A180 (CmpQueryKeySecurity.c)
 *     CmCallbackGetKeyObjectIDEx @ 0x14065AA10 (CmCallbackGetKeyObjectIDEx.c)
 *     CmpGetSymbolicLinkTarget @ 0x1406DE1D0 (CmpGetSymbolicLinkTarget.c)
 *     CmQueryValueKey @ 0x1406E6E60 (CmQueryValueKey.c)
 *     CmpDoParseKey @ 0x140710550 (CmpDoParseKey.c)
 *     CmSaveKey @ 0x14072907C (CmSaveKey.c)
 *     CmCallbackGetKeyObjectID @ 0x140869BD0 (CmCallbackGetKeyObjectID.c)
 *     CmEnumerateValueFromLayeredKey @ 0x14086C3C0 (CmEnumerateValueFromLayeredKey.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x14086C6A8 (CmQueryMultipleValueForLayeredKey.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
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
