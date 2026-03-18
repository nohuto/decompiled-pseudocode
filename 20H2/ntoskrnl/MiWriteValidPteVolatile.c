/*
 * XREFs of MiWriteValidPteVolatile @ 0x14028F7D0
 * Callers:
 *     MiResolveProtoPteFault @ 0x140276BB0 (MiResolveProtoPteFault.c)
 *     MiSetReadOnlyOnSectionView @ 0x14028EFF0 (MiSetReadOnlyOnSectionView.c)
 *     MiCopyOnWrite @ 0x14028F8B0 (MiCopyOnWrite.c)
 *     MmCheckCachedPageStates @ 0x1402A4CE0 (MmCheckCachedPageStates.c)
 *     MiLockCode @ 0x1402A6D00 (MiLockCode.c)
 *     MiMakePageAvoidRead @ 0x1402A77C0 (MiMakePageAvoidRead.c)
 *     MiRemoveWsle @ 0x1402BC4C0 (MiRemoveWsle.c)
 *     MiCheckProtoPtePageState @ 0x1402C9A90 (MiCheckProtoPtePageState.c)
 *     MiLockOwnedProtoPage @ 0x1402CABD0 (MiLockOwnedProtoPage.c)
 *     MiWriteWsle @ 0x14030D2E4 (MiWriteWsle.c)
 *     MiTryLockProtoPoolPageAtDpc @ 0x14034F510 (MiTryLockProtoPoolPageAtDpc.c)
 *     MiLockPagedAddress @ 0x14036B674 (MiLockPagedAddress.c)
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
