/*
 * XREFs of MiWriteValidPteVolatile @ 0x140241370
 * Callers:
 *     MiResolveProtoPteFault @ 0x1402153D0 (MiResolveProtoPteFault.c)
 *     MiCheckProtoPtePageState @ 0x14023B270 (MiCheckProtoPtePageState.c)
 *     MiCopyOnWrite @ 0x14023F300 (MiCopyOnWrite.c)
 *     MiSetReadOnlyOnSectionView @ 0x140240B90 (MiSetReadOnlyOnSectionView.c)
 *     MiWriteWsle @ 0x1402C0ED0 (MiWriteWsle.c)
 *     MiTryLockProtoPoolPageAtDpc @ 0x140304CB4 (MiTryLockProtoPoolPageAtDpc.c)
 *     MiLockOwnedProtoPage @ 0x14031A320 (MiLockOwnedProtoPage.c)
 *     MmCheckCachedPageStates @ 0x140321590 (MmCheckCachedPageStates.c)
 *     MiLockCode @ 0x1403235B0 (MiLockCode.c)
 *     MiMakePageAvoidRead @ 0x140324070 (MiMakePageAvoidRead.c)
 *     MiRemoveWsle @ 0x140338FE0 (MiRemoveWsle.c)
 *     MiLockPagedAddress @ 0x14036B924 (MiLockPagedAddress.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall MiWriteValidPteVolatile(volatile signed __int64 *a1, int a2, unsigned __int8 a3)
{
  signed __int64 v3; // r9
  __int64 v4; // r11
  __int64 v5; // rbx
  int v6; // edx
  unsigned __int64 v8; // rax
  __int64 v9; // r10
  signed __int64 v10; // rcx
  bool v11; // zf
  signed __int64 result; // rax

  v3 = *a1;
  v4 = a2 & 0x80000000;
  v5 = a2 & 1;
  v6 = a2 & 2;
  do
  {
    v8 = v3;
    if ( v4 )
      v8 = v3 ^ (v3 ^ ((unsigned __int64)a3 << 56)) & 0x7F00000000000000LL;
    v9 = v8 | 0x20;
    if ( !v5 )
      v9 = v8;
    v10 = v9 | 0x42;
    if ( !v6 )
      v10 = v9;
    result = _InterlockedCompareExchange64(a1, v10, v3);
    v11 = v3 == result;
    v3 = result;
  }
  while ( !v11 );
  return result;
}
