/*
 * XREFs of CmpFreeKeyBody @ 0x1406603FC
 * Callers:
 *     CmpFreeKeyByCell @ 0x1406600A0 (CmpFreeKeyByCell.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     HvFreeCell @ 0x140720914 (HvFreeCell.c)
 */

char __fastcall CmpFreeKeyBody(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  unsigned int v2; // esi
  __int64 v4; // rax
  __int64 v5; // rdi
  ULONG_PTR v6; // rdx
  int v8; // [rsp+30h] [rbp+8h] BYREF
  int v9; // [rsp+34h] [rbp+Ch]

  v8 = -1;
  v2 = BugCheckParameter3;
  v9 = 0;
  v4 = (*(__int64 (__fastcall **)(ULONG_PTR, ULONG_PTR, int *))(BugCheckParameter2 + 8))(
         BugCheckParameter2,
         BugCheckParameter3,
         &v8);
  v5 = v4;
  if ( v4 )
  {
    if ( (*(_BYTE *)(v4 + 2) & 2) == 0 )
    {
      v6 = *(unsigned int *)(v4 + 44);
      if ( (_DWORD)v6 != -1 )
        HvFreeCell(BugCheckParameter2, v6);
      if ( *(_WORD *)(v5 + 74) )
        HvFreeCell(BugCheckParameter2, *(unsigned int *)(v5 + 48));
    }
    (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v8);
    HvFreeCell(BugCheckParameter2, v2);
    LOBYTE(v4) = 1;
  }
  return v4;
}
