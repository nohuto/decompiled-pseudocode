/*
 * XREFs of CmpLockKcbStackShared @ 0x1406260F0
 * Callers:
 *     CmQueryLayeredKey @ 0x140200A58 (CmQueryLayeredKey.c)
 *     CmpEnumerateLayeredKey @ 0x1405CDD00 (CmpEnumerateLayeredKey.c)
 *     CmSetValueKey @ 0x140619570 (CmSetValueKey.c)
 *     CmpQueryKeySecurity @ 0x14061A030 (CmpQueryKeySecurity.c)
 *     CmCallbackGetKeyObjectIDEx @ 0x14061AC90 (CmCallbackGetKeyObjectIDEx.c)
 *     CmpGetSymbolicLinkTarget @ 0x14061C310 (CmpGetSymbolicLinkTarget.c)
 *     CmQueryValueKey @ 0x140620880 (CmQueryValueKey.c)
 *     CmpDoParseKey @ 0x140624810 (CmpDoParseKey.c)
 *     CmSaveKey @ 0x140714DEC (CmSaveKey.c)
 *     CmCallbackGetKeyObjectID @ 0x140865100 (CmCallbackGetKeyObjectID.c)
 *     CmEnumerateValueFromLayeredKey @ 0x1408678C0 (CmEnumerateValueFromLayeredKey.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x140867B94 (CmQueryMultipleValueForLayeredKey.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140260BA0 (ExAcquirePushLockSharedEx.c)
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
