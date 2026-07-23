/*
 * XREFs of CmpFreeIndexByCell @ 0x14087A734
 * Callers:
 *     CmRenameKey @ 0x14086CB64 (CmRenameKey.c)
 *     CmpLightWeightCleanupModifyKeyDataUoW @ 0x14087EC24 (CmpLightWeightCleanupModifyKeyDataUoW.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     HvFreeCell @ 0x140720914 (HvFreeCell.c)
 */

char __fastcall CmpFreeIndexByCell(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  unsigned int v2; // ebp
  _WORD *v4; // rsi
  __int64 i; // rbx
  int v7; // [rsp+30h] [rbp+8h] BYREF
  int v8; // [rsp+34h] [rbp+Ch]

  v7 = -1;
  v2 = BugCheckParameter3;
  v8 = 0;
  v4 = (_WORD *)(*(__int64 (__fastcall **)(ULONG_PTR, ULONG_PTR, int *))(BugCheckParameter2 + 8))(
                  BugCheckParameter2,
                  BugCheckParameter3,
                  &v7);
  if ( *v4 == 26994 )
  {
    for ( i = 0LL; (unsigned int)i < (unsigned __int16)v4[1]; i = (unsigned int)(i + 1) )
      HvFreeCell(BugCheckParameter2, *(unsigned int *)&v4[2 * i + 2]);
  }
  (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v7);
  return HvFreeCell(BugCheckParameter2, v2);
}
