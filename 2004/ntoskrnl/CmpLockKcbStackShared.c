/*
 * XREFs of CmpLockKcbStackShared @ 0x1405F0AD0
 * Callers:
 *     CmQueryLayeredKey @ 0x140200A58 (CmQueryLayeredKey.c)
 *     CmpEnumerateLayeredKey @ 0x1405CF0D0 (CmpEnumerateLayeredKey.c)
 *     CmSetValueKey @ 0x1405E3F50 (CmSetValueKey.c)
 *     CmpQueryKeySecurity @ 0x1405E4A10 (CmpQueryKeySecurity.c)
 *     CmCallbackGetKeyObjectIDEx @ 0x1405E5670 (CmCallbackGetKeyObjectIDEx.c)
 *     CmpGetSymbolicLinkTarget @ 0x1405E6CF0 (CmpGetSymbolicLinkTarget.c)
 *     CmQueryValueKey @ 0x1405EB260 (CmQueryValueKey.c)
 *     CmpDoParseKey @ 0x1405EF1F0 (CmpDoParseKey.c)
 *     CmSaveKey @ 0x14071717C (CmSaveKey.c)
 *     CmCallbackGetKeyObjectID @ 0x140866420 (CmCallbackGetKeyObjectID.c)
 *     CmEnumerateValueFromLayeredKey @ 0x140868C10 (CmEnumerateValueFromLayeredKey.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x140868EE4 (CmQueryMultipleValueForLayeredKey.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140207C80 (ExAcquirePushLockSharedEx.c)
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
