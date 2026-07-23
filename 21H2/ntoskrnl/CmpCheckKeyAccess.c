/*
 * XREFs of CmpCheckKeyAccess @ 0x140871884
 * Callers:
 *     CmpDoAccessCheckOnSubtree @ 0x140871C24 (CmpDoAccessCheckOnSubtree.c)
 *     CmRestoreKey @ 0x14087C090 (CmRestoreKey.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     CmpCheckSecurityCellAccess @ 0x14060385C (CmpCheckSecurityCellAccess.c)
 */

__int64 __fastcall CmpCheckKeyAccess(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  unsigned int v5; // ebx
  int v6; // [rsp+40h] [rbp+8h] BYREF
  int v7; // [rsp+44h] [rbp+Ch]

  v6 = -1;
  v7 = 0;
  if ( !a1 || (unsigned int)(a2 - 1) > 0xFFFFFFFD )
    return 3221225852LL;
  v3 = (*(__int64 (__fastcall **)(__int64, __int64, int *))(a1 + 8))(a1, a2, &v6);
  if ( !v3 )
    return 3221225626LL;
  v5 = *(_DWORD *)(v3 + 44);
  (*(void (__fastcall **)(__int64, int *))(a1 + 16))(a1, &v6);
  return CmpCheckSecurityCellAccess(a1, v5);
}
