/*
 * XREFs of CmpUpdateParentForEachSon @ 0x140876AE4
 * Callers:
 *     CmRenameKey @ 0x140867FFC (CmRenameKey.c)
 *     CmpCommitRenameKeyUoW @ 0x14087A2A8 (CmpCommitRenameKeyUoW.c)
 *     CmpLightWeightCommitRenameKeyUoW @ 0x14087AB10 (CmpLightWeightCommitRenameKeyUoW.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     CmpFindSubKeyByNumber @ 0x1405F9C40 (CmpFindSubKeyByNumber.c)
 *     CmpMarkAllChildrenDirty @ 0x1408765E0 (CmpMarkAllChildrenDirty.c)
 */

char __fastcall CmpUpdateParentForEachSon(ULONG_PTR BugCheckParameter2, __int64 a2, char a3)
{
  unsigned int v4; // r15d
  _DWORD *v6; // r14
  char v7; // bl
  unsigned int v8; // esi
  unsigned int v9; // ebp
  __int64 v10; // rax
  _DWORD v12[14]; // [rsp+20h] [rbp-38h] BYREF
  unsigned int v13; // [rsp+60h] [rbp+8h] BYREF
  int v14; // [rsp+78h] [rbp+20h] BYREF
  int v15; // [rsp+7Ch] [rbp+24h]

  v12[0] = -1;
  v13 = 0;
  v14 = -1;
  v12[1] = 0;
  v4 = a2;
  v15 = 0;
  v6 = (_DWORD *)(*(__int64 (__fastcall **)(ULONG_PTR, __int64, _DWORD *))(BugCheckParameter2 + 8))(
                   BugCheckParameter2,
                   a2,
                   v12);
  if ( !v6 )
    return 0;
  if ( !a3 || (v7 = CmpMarkAllChildrenDirty(BugCheckParameter2, v4)) != 0 )
  {
    v7 = 1;
    v8 = 0;
    v9 = v6[5] + v6[6];
    if ( v9 )
    {
      while ( 1 )
      {
        CmpFindSubKeyByNumber(BugCheckParameter2, v6, v8, &v13);
        if ( v13 == -1 )
          break;
        v10 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(
                BugCheckParameter2,
                v13,
                &v14);
        if ( !v10 )
          break;
        *(_DWORD *)(v10 + 16) = v4;
        (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v14);
        if ( ++v8 >= v9 )
          goto LABEL_11;
      }
      v7 = 0;
    }
  }
LABEL_11:
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v12);
  return v7;
}
