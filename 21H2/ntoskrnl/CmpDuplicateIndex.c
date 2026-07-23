/*
 * XREFs of CmpDuplicateIndex @ 0x14087A510
 * Callers:
 *     CmRenameKey @ 0x14086CB64 (CmRenameKey.c)
 *     CmpLightWeightDuplicateParentLists @ 0x14087F43C (CmpLightWeightDuplicateParentLists.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     HvDuplicateCell @ 0x14061C030 (HvDuplicateCell.c)
 *     HvFreeCell @ 0x140720914 (HvFreeCell.c)
 */

__int64 __fastcall CmpDuplicateIndex(ULONG_PTR BugCheckParameter2, __int64 a2, int a3)
{
  __int64 (__fastcall *v5)(ULONG_PTR, __int64, int *); // rax
  unsigned int v6; // edi
  unsigned int v7; // r14d
  _DWORD *v8; // rsi
  _WORD *v9; // rax
  _WORD *v10; // r12
  unsigned int v12; // r14d
  ULONG_PTR v13; // rcx
  _DWORD *v14; // rax
  unsigned int v15; // r15d
  int v16; // ecx
  __int64 v17; // rax
  int v18; // [rsp+60h] [rbp+8h] BYREF
  int v19; // [rsp+64h] [rbp+Ch]
  int v20; // [rsp+78h] [rbp+20h] BYREF
  int v21; // [rsp+7Ch] [rbp+24h]

  v19 = 0;
  v21 = 0;
  v5 = *(__int64 (__fastcall **)(ULONG_PTR, __int64, int *))(BugCheckParameter2 + 8);
  v6 = 0;
  v18 = -1;
  v7 = a2;
  v20 = -1;
  v8 = 0LL;
  v9 = (_WORD *)v5(BugCheckParameter2, a2, &v18);
  v10 = v9;
  if ( !v9 )
    return 0xFFFFFFFFLL;
  if ( *v9 == 26994 )
  {
    v12 = HvDuplicateCell(BugCheckParameter2, v7, a3, 0);
    v13 = BugCheckParameter2;
    if ( v12 == -1 )
    {
LABEL_5:
      (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(v13, &v18);
      return 0xFFFFFFFFLL;
    }
    v14 = (_DWORD *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(
                      BugCheckParameter2,
                      v12,
                      &v20);
    v8 = v14;
    if ( !v14 )
    {
LABEL_14:
      HvFreeCell(BugCheckParameter2, v12);
      v13 = BugCheckParameter2;
      goto LABEL_5;
    }
    *v14 = 26994;
    v15 = 0;
    if ( v10[1] )
    {
      while ( 1 )
      {
        v16 = HvDuplicateCell(BugCheckParameter2, *(unsigned int *)&v10[2 * v15 + 2], a3, 1);
        if ( v16 == -1 )
          break;
        v17 = v15++;
        v8[v17 + 1] = v16;
        ++*((_WORD *)v8 + 1);
        if ( v15 >= (unsigned __int16)v10[1] )
          goto LABEL_16;
      }
      if ( *((_WORD *)v8 + 1) )
      {
        do
          HvFreeCell(BugCheckParameter2, (unsigned int)v8[++v6]);
        while ( v6 < *((unsigned __int16 *)v8 + 1) );
      }
      (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v20);
      goto LABEL_14;
    }
  }
  else
  {
    v12 = HvDuplicateCell(BugCheckParameter2, v7, a3, 1);
  }
LABEL_16:
  if ( v8 )
    (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v20);
  (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v18);
  return v12;
}
