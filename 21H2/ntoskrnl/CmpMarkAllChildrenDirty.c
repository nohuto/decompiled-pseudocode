/*
 * XREFs of CmpMarkAllChildrenDirty @ 0x14087ADD8
 * Callers:
 *     CmRenameKey @ 0x14086CA04 (CmRenameKey.c)
 *     CmpLightWeightPrepareRenameKeyUoW @ 0x14087F7C4 (CmpLightWeightPrepareRenameKeyUoW.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 *     CmpFindSubKeyByNumber @ 0x1405F34E0 (CmpFindSubKeyByNumber.c)
 *     HvpMarkCellDirty @ 0x140708420 (HvpMarkCellDirty.c)
 */

char __fastcall CmpMarkAllChildrenDirty(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  char v2; // bl
  __int64 (__fastcall *v4)(ULONG_PTR, __int64, int *); // rax
  __int64 v5; // rax
  _DWORD *v6; // r14
  unsigned int v7; // edi
  unsigned int v8; // ebp
  ULONG_PTR BugCheckParameter3; // [rsp+40h] [rbp+8h] BYREF
  int v11; // [rsp+50h] [rbp+18h] BYREF
  int v12; // [rsp+54h] [rbp+1Ch]

  v11 = -1;
  v2 = 0;
  v12 = 0;
  v4 = *(__int64 (__fastcall **)(ULONG_PTR, __int64, int *))(BugCheckParameter2 + 8);
  LODWORD(BugCheckParameter3) = 0;
  v5 = v4(BugCheckParameter2, a2, &v11);
  v6 = (_DWORD *)v5;
  if ( v5 )
  {
    v7 = 0;
    v8 = *(_DWORD *)(v5 + 20) + *(_DWORD *)(v5 + 24);
    if ( v8 )
    {
      while ( (int)CmpFindSubKeyByNumber(BugCheckParameter2, v6, v7, &BugCheckParameter3) >= 0
           && (_DWORD)BugCheckParameter3 != -1
           && HvpMarkCellDirty(BugCheckParameter2, (unsigned int)BugCheckParameter3, 0) )
      {
        if ( ++v7 >= v8 )
          goto LABEL_7;
      }
    }
    else
    {
LABEL_7:
      v2 = 1;
    }
    (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v11);
  }
  return v2;
}
