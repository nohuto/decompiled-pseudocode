/*
 * XREFs of CmpLockKcbStackTopExclusiveRestShared @ 0x1406958E8
 * Callers:
 *     CmDeleteLayeredKey @ 0x1404E78C8 (CmDeleteLayeredKey.c)
 *     CmSetValueKey @ 0x140619570 (CmSetValueKey.c)
 *     CmpGetSymbolicLinkTarget @ 0x14061C310 (CmpGetSymbolicLinkTarget.c)
 *     CmpDoParseKey @ 0x140624810 (CmpDoParseKey.c)
 *     CmpSetKeySecurity @ 0x14068AE1C (CmpSetKeySecurity.c)
 *     CmDeleteKey @ 0x140692448 (CmDeleteKey.c)
 *     CmDeleteValueKey @ 0x1406941D8 (CmDeleteValueKey.c)
 *     CmSetKeyFlags @ 0x1408696D8 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x140869B94 (CmSetLastWriteTimeKey.c)
 *     CmpPromoteKey @ 0x14087BEA0 (CmpPromoteKey.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140260BA0 (ExAcquirePushLockSharedEx.c)
 *     CmpGetKcbAtLayerHeight @ 0x14061CD58 (CmpGetKcbAtLayerHeight.c)
 *     CmpLockKcbExclusive @ 0x140695D18 (CmpLockKcbExclusive.c)
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
