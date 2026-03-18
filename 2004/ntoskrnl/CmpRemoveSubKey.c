/*
 * XREFs of CmpRemoveSubKey @ 0x140640800
 * Callers:
 *     CmpFreeKeyByCell @ 0x14069CB70 (CmpFreeKeyByCell.c)
 *     CmpCommitRenameKeyUoW @ 0x14087B598 (CmpCommitRenameKeyUoW.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     CmpRemoveSubKeyFromList @ 0x140640898 (CmpRemoveSubKeyFromList.c)
 */

char __fastcall CmpRemoveSubKey(ULONG_PTR a1, __int64 a2, unsigned int a3)
{
  __int64 v5; // rbp
  unsigned __int64 v6; // rdi
  char v7; // bl
  int v9; // [rsp+30h] [rbp+8h] BYREF
  int v10; // [rsp+34h] [rbp+Ch]

  v9 = -1;
  v10 = 0;
  v5 = (*(__int64 (__fastcall **)(ULONG_PTR, __int64, int *))(a1 + 8))(a1, a2, &v9);
  if ( !v5 )
    return 0;
  v6 = (unsigned __int64)a3 >> 31;
  v7 = CmpRemoveSubKeyFromList(a1);
  if ( v7 )
  {
    --*(_DWORD *)(v5 + 4 * v6 + 20);
    v7 = 1;
  }
  (*(void (__fastcall **)(ULONG_PTR, int *))(a1 + 16))(a1, &v9);
  return v7;
}
