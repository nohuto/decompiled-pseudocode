/*
 * XREFs of CmpRemoveSubKey @ 0x14066077C
 * Callers:
 *     CmpFreeKeyByCell @ 0x1406600A0 (CmpFreeKeyByCell.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     CmpRemoveSubKeyFromList @ 0x140660490 (CmpRemoveSubKeyFromList.c)
 */

char __fastcall CmpRemoveSubKey(ULONG_PTR a1, __int64 a2, unsigned int a3)
{
  __int64 v5; // rax
  __int64 v6; // rbp
  unsigned __int64 v7; // rdi
  char v8; // bl
  int v10; // [rsp+30h] [rbp+8h] BYREF
  int v11; // [rsp+34h] [rbp+Ch]

  v10 = -1;
  v11 = 0;
  v5 = (*(__int64 (__fastcall **)(ULONG_PTR, __int64, int *))(a1 + 8))(a1, a2, &v10);
  v6 = v5;
  if ( !v5 )
    return 0;
  v7 = (unsigned __int64)a3 >> 31;
  v8 = CmpRemoveSubKeyFromList(a1, (int *)(v5 + 4 * v7 + 28), a3);
  if ( v8 )
  {
    --*(_DWORD *)(v6 + 4 * v7 + 20);
    v8 = 1;
  }
  (*(void (__fastcall **)(ULONG_PTR, int *))(a1 + 16))(a1, &v10);
  return v8;
}
