/*
 * XREFs of CmpLockKcbStackTopExclusiveRestShared @ 0x1405DF248
 * Callers:
 *     CmDeleteLayeredKey @ 0x1404E7EF8 (CmDeleteLayeredKey.c)
 *     CmDeleteValueKey @ 0x1405DDB38 (CmDeleteValueKey.c)
 *     CmSetValueKey @ 0x1405E3F50 (CmSetValueKey.c)
 *     CmpGetSymbolicLinkTarget @ 0x1405E6CF0 (CmpGetSymbolicLinkTarget.c)
 *     CmpDoParseKey @ 0x1405EF1F0 (CmpDoParseKey.c)
 *     CmpSetKeySecurity @ 0x14063D900 (CmpSetKeySecurity.c)
 *     CmDeleteKey @ 0x140643F58 (CmDeleteKey.c)
 *     CmSetKeyFlags @ 0x14086AA28 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x14086AEE4 (CmSetLastWriteTimeKey.c)
 *     CmpPromoteKey @ 0x14087D190 (CmpPromoteKey.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140207C80 (ExAcquirePushLockSharedEx.c)
 *     CmpLockKcbExclusive @ 0x1405DF678 (CmpLockKcbExclusive.c)
 *     CmpGetKcbAtLayerHeight @ 0x1405E7738 (CmpGetKcbAtLayerHeight.c)
 */

__int64 __fastcall CmpLockKcbStackTopExclusiveRestShared(__int64 a1)
{
  __int16 i; // si
  __int64 v3; // rax
  __int64 KcbAtLayerHeight; // rbx

  for ( i = 0; i <= *(__int16 *)(a1 + 2) - 1; ++i )
  {
    KcbAtLayerHeight = CmpGetKcbAtLayerHeight(a1);
    ExAcquirePushLockSharedEx(KcbAtLayerHeight + 48, 0LL);
    _InterlockedAdd((volatile signed __int32 *)(KcbAtLayerHeight + 56), 1u);
  }
  v3 = CmpGetKcbAtLayerHeight(a1);
  return CmpLockKcbExclusive(v3);
}
