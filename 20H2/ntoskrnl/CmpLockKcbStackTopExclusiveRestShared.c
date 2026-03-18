/*
 * XREFs of CmpLockKcbStackTopExclusiveRestShared @ 0x14066DDF8
 * Callers:
 *     CmDeleteLayeredKey @ 0x1404EB788 (CmDeleteLayeredKey.c)
 *     CmpSetKeySecurity @ 0x1405E0AE4 (CmpSetKeySecurity.c)
 *     CmpDoParseKey @ 0x140619BF0 (CmpDoParseKey.c)
 *     CmpGetSymbolicLinkTarget @ 0x14061CB10 (CmpGetSymbolicLinkTarget.c)
 *     CmDeleteValueKey @ 0x14066C6F4 (CmDeleteValueKey.c)
 *     CmSetValueKey @ 0x14066E7B0 (CmSetValueKey.c)
 *     CmDeleteKey @ 0x1407022EC (CmDeleteKey.c)
 *     CmSetKeyFlags @ 0x14087047C (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x140870938 (CmSetLastWriteTimeKey.c)
 *     CmpDoBuildVirtualStack @ 0x14087276C (CmpDoBuildVirtualStack.c)
 *     CmpPromoteKey @ 0x140882D40 (CmpPromoteKey.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140220C00 (ExAcquirePushLockSharedEx.c)
 *     CmpGetKcbAtLayerHeight @ 0x1405F3B6C (CmpGetKcbAtLayerHeight.c)
 *     CmpLockKcbExclusive @ 0x140670B6C (CmpLockKcbExclusive.c)
 */

__int64 __fastcall CmpLockKcbStackTopExclusiveRestShared(__int64 a1)
{
  int v1; // edx
  __int16 v2; // si
  __int64 v4; // rax
  __int64 KcbAtLayerHeight; // rbx

  v1 = *(__int16 *)(a1 + 2);
  v2 = 0;
  if ( v1 - 1 >= 0 )
  {
    do
    {
      KcbAtLayerHeight = CmpGetKcbAtLayerHeight(a1, v2);
      ExAcquirePushLockSharedEx(KcbAtLayerHeight + 48, 0LL);
      _InterlockedAdd((volatile signed __int32 *)(KcbAtLayerHeight + 56), 1u);
      LOWORD(v1) = *(_WORD *)(a1 + 2);
      ++v2;
    }
    while ( v2 <= (__int16)v1 - 1 );
  }
  v4 = CmpGetKcbAtLayerHeight(a1, v1);
  return CmpLockKcbExclusive(v4);
}
