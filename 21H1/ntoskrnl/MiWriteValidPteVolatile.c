/*
 * XREFs of MiWriteValidPteVolatile @ 0x14029EE60
 * Callers:
 *     MiResolveProtoPteFault @ 0x140214D60 (MiResolveProtoPteFault.c)
 *     MiLockOwnedProtoPage @ 0x140282FE0 (MiLockOwnedProtoPage.c)
 *     MiCheckProtoPtePageState @ 0x1402855A0 (MiCheckProtoPtePageState.c)
 *     MmCheckCachedPageStates @ 0x140288A80 (MmCheckCachedPageStates.c)
 *     MiLockCode @ 0x14028AAA0 (MiLockCode.c)
 *     MiMakePageAvoidRead @ 0x14028B560 (MiMakePageAvoidRead.c)
 *     MiCopyOnWrite @ 0x140291750 (MiCopyOnWrite.c)
 *     MiRemoveWsle @ 0x14029D120 (MiRemoveWsle.c)
 *     MiSetReadOnlyOnSectionView @ 0x14029F230 (MiSetReadOnlyOnSectionView.c)
 *     MiTryLockProtoPoolPageAtDpc @ 0x1402FD72C (MiTryLockProtoPoolPageAtDpc.c)
 *     MiWriteWsle @ 0x140325190 (MiWriteWsle.c)
 *     MiLockPagedAddress @ 0x140368CD4 (MiLockPagedAddress.c)
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
