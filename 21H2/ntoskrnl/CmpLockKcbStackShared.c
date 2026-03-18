/*
 * XREFs of CmpLockKcbStackShared @ 0x140721B68
 * Callers:
 *     CmQueryLayeredKey @ 0x140226200 (CmQueryLayeredKey.c)
 *     CmSaveKey @ 0x14065A44C (CmSaveKey.c)
 *     CmpGetSymbolicLinkTarget @ 0x1406803C0 (CmpGetSymbolicLinkTarget.c)
 *     CmSetValueKey @ 0x140720260 (CmSetValueKey.c)
 *     CmCallbackGetKeyObjectIDEx @ 0x140720E20 (CmCallbackGetKeyObjectIDEx.c)
 *     CmpQueryKeySecurity @ 0x140721254 (CmpQueryKeySecurity.c)
 *     CmQueryValueKey @ 0x1407C83F0 (CmQueryValueKey.c)
 *     CmEnumerateValueFromLayeredKey @ 0x1407F6698 (CmEnumerateValueFromLayeredKey.c)
 *     CmCallbackGetKeyObjectID @ 0x1408812B0 (CmCallbackGetKeyObjectID.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x14091210C (CmQueryMultipleValueForLayeredKey.c)
 *     CmpEnumerateLayeredKey @ 0x140914324 (CmpEnumerateLayeredKey.c)
 * Callees:
 *     CmpGetKcbAtLayerHeight @ 0x140721CE0 (CmpGetKcbAtLayerHeight.c)
 *     CmpLockKcbShared @ 0x140AB42D0 (CmpLockKcbShared.c)
 */

void __fastcall CmpLockKcbStackShared(__int64 a1)
{
  unsigned __int16 i; // bx
  __int64 KcbAtLayerHeight; // rax

  for ( i = 0; i <= *(_WORD *)(a1 + 2); ++i )
  {
    KcbAtLayerHeight = CmpGetKcbAtLayerHeight(a1, i);
    CmpLockKcbShared(KcbAtLayerHeight);
  }
}
