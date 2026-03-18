/*
 * XREFs of CmpLockKcbStackTopExclusiveRestShared @ 0x14071F6D0
 * Callers:
 *     CmDeleteLayeredKey @ 0x14053F5E8 (CmDeleteLayeredKey.c)
 *     CmpSetKeySecurity @ 0x140677810 (CmpSetKeySecurity.c)
 *     CmDeleteKey @ 0x14067E1BC (CmDeleteKey.c)
 *     CmpGetSymbolicLinkTarget @ 0x1406803C0 (CmpGetSymbolicLinkTarget.c)
 *     CmDeleteValueKey @ 0x140714E58 (CmDeleteValueKey.c)
 *     CmSetValueKey @ 0x140720260 (CmSetValueKey.c)
 *     CmpDoParseKey @ 0x1407362A0 (CmpDoParseKey.c)
 *     CmOpenKeyForBugCheckRecovery @ 0x14090E160 (CmOpenKeyForBugCheckRecovery.c)
 *     CmSetKeyFlags @ 0x140913964 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x140913E28 (CmSetLastWriteTimeKey.c)
 *     CmpDoBuildVirtualStack @ 0x140916918 (CmpDoBuildVirtualStack.c)
 *     CmpPromoteKey @ 0x1409226E0 (CmpPromoteKey.c)
 * Callees:
 *     CmpGetKcbAtLayerHeight @ 0x140721CE0 (CmpGetKcbAtLayerHeight.c)
 *     CmpLockKcbExclusive @ 0x1407C0854 (CmpLockKcbExclusive.c)
 *     CmpLockKcbShared @ 0x140AB42D0 (CmpLockKcbShared.c)
 */

__int64 __fastcall CmpLockKcbStackTopExclusiveRestShared(__int64 a1)
{
  __int64 v1; // rdx
  unsigned __int16 v2; // di
  __int64 v4; // rax
  __int64 KcbAtLayerHeight; // rax

  v1 = (unsigned int)*(__int16 *)(a1 + 2);
  v2 = 0;
  if ( (int)v1 - 1 >= 0 )
  {
    do
    {
      KcbAtLayerHeight = CmpGetKcbAtLayerHeight(a1, v2);
      CmpLockKcbShared(KcbAtLayerHeight);
      v1 = (unsigned int)*(__int16 *)(a1 + 2);
      ++v2;
    }
    while ( (__int16)v2 <= *(__int16 *)(a1 + 2) - 1 );
  }
  v4 = CmpGetKcbAtLayerHeight(a1, v1);
  return CmpLockKcbExclusive(v4);
}
