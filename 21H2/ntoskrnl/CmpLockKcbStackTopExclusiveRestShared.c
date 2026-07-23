/*
 * XREFs of CmpLockKcbStackTopExclusiveRestShared @ 0x14065DE90
 * Callers:
 *     CmDeleteLayeredKey @ 0x1404ED2B8 (CmDeleteLayeredKey.c)
 *     CmSetValueKey @ 0x1406594E0 (CmSetValueKey.c)
 *     CmDeleteValueKey @ 0x14065B364 (CmDeleteValueKey.c)
 *     CmDeleteKey @ 0x140660814 (CmDeleteKey.c)
 *     CmpSetKeySecurity @ 0x140662D2C (CmpSetKeySecurity.c)
 *     CmpGetSymbolicLinkTarget @ 0x1406DE1D0 (CmpGetSymbolicLinkTarget.c)
 *     CmpDoParseKey @ 0x140710550 (CmpDoParseKey.c)
 *     CmSetKeyFlags @ 0x14086DDD8 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x14086E29C (CmSetLastWriteTimeKey.c)
 *     CmpDoBuildVirtualStack @ 0x1408700FC (CmpDoBuildVirtualStack.c)
 *     CmpPromoteKey @ 0x140880428 (CmpPromoteKey.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 *     CmpLockKcbExclusive @ 0x1406DBABC (CmpLockKcbExclusive.c)
 *     CmpGetKcbAtLayerHeight @ 0x1406DECB0 (CmpGetKcbAtLayerHeight.c)
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
