/*
 * XREFs of CmpSelectLeaf @ 0x14076BDCC
 * Callers:
 *     CmpAddSubKeyToList @ 0x14065EBC0 (CmpAddSubKeyToList.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     CmpFindSubKeyInRoot @ 0x1406DCD6C (CmpFindSubKeyInRoot.c)
 *     CmpDoCompareKeyName @ 0x1406DDD60 (CmpDoCompareKeyName.c)
 *     CmpSplitLeaf @ 0x140733A08 (CmpSplitLeaf.c)
 *     HvMarkCellDirty @ 0x14087BE48 (HvMarkCellDirty.c)
 */

__int64 __fastcall CmpSelectLeaf(
        ULONG_PTR BugCheckParameter2,
        unsigned int *a2,
        const UNICODE_STRING *a3,
        int a4,
        unsigned int **a5)
{
  __int64 v7; // rdx
  __int64 v9; // rdi
  unsigned int i; // esi
  unsigned int v11; // r14d
  __int64 (__fastcall *v12)(ULONG_PTR, _QWORD, _DWORD *); // rax
  __int64 v13; // rax
  unsigned int *v14; // r15
  __int64 v16; // rax
  int v17; // eax
  bool v18; // sf
  void (__fastcall *v19)(ULONG_PTR, _DWORD *); // rax
  __int64 (__fastcall *v20)(ULONG_PTR, _QWORD, _DWORD *); // rax
  __int64 v21; // rax
  unsigned int v22; // esi
  __int64 (__fastcall *v23)(ULONG_PTR, _QWORD, _DWORD *); // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rax
  unsigned int v27; // [rsp+30h] [rbp-20h] BYREF
  _DWORD v28[2]; // [rsp+38h] [rbp-18h] BYREF
  _DWORD v29[4]; // [rsp+40h] [rbp-10h] BYREF

  v27 = 0;
  v29[0] = -1;
  v28[0] = -1;
  v7 = *a2;
  v29[1] = 0;
  v28[1] = 0;
  if ( (unsigned __int8)HvMarkCellDirty(BugCheckParameter2, v7, 0LL) )
  {
    v9 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(BugCheckParameter2, *a2, v29);
    if ( v9 )
    {
      for ( i = CmpFindSubKeyInRoot(BugCheckParameter2, v9, (__int64)a3, 0, &v27);
            (i & 0x80000000) == 0;
            i = CmpFindSubKeyInRoot(BugCheckParameter2, v9, (__int64)a3, 0, &v27) )
      {
        v11 = v27;
        v12 = *(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8);
        if ( v27 == -1 )
        {
          v14 = (unsigned int *)(v9 + 4 * (i + 1LL));
          v16 = v12(BugCheckParameter2, *v14, v28);
          if ( !v16 )
            break;
          v17 = CmpDoCompareKeyName(BugCheckParameter2, a3, 0LL, *(_DWORD *)(v16 + 4));
          if ( v17 == 2 )
          {
LABEL_28:
            (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v28);
            break;
          }
          v18 = v17 < 0;
          v19 = *(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16);
          if ( !v18 )
          {
            v19(BugCheckParameter2, v28);
            v20 = *(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8);
            v27 = *v14;
            v11 = v27;
            v21 = v20(BugCheckParameter2, v27, v28);
            if ( !v21 )
              break;
            if ( *(_WORD *)(v21 + 2) < 0x3F5u )
              goto LABEL_8;
            if ( i >= (unsigned int)*(unsigned __int16 *)(v9 + 2) - 1 )
              goto LABEL_15;
            (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v28);
            v23 = *(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8);
            v24 = i + 1;
            goto LABEL_22;
          }
          v19(BugCheckParameter2, v28);
          v23 = *(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8);
          if ( i )
          {
            v24 = i - 1;
LABEL_22:
            v14 = (unsigned int *)(v9 + 4 * (v24 + 1));
            v27 = *v14;
            v11 = v27;
            v25 = v23(BugCheckParameter2, v27, v28);
            if ( !v25 )
              break;
            if ( *(_WORD *)(v25 + 2) < 0x3F5u )
              goto LABEL_8;
            goto LABEL_15;
          }
          v27 = *(_DWORD *)(v9 + 4);
          v11 = v27;
          v26 = v23(BugCheckParameter2, v27, v28);
          if ( !v26 )
            break;
          if ( *(_WORD *)(v26 + 2) < 0x3F5u )
          {
            v14 = (unsigned int *)(v9 + 4);
            goto LABEL_8;
          }
        }
        else
        {
          v13 = v12(BugCheckParameter2, v27, v28);
          if ( !v13 )
            break;
          if ( *(_WORD *)(v13 + 2) < 0x3F5u )
          {
            v14 = (unsigned int *)(v9 + 4 * (i + 1LL));
LABEL_8:
            *a5 = v14;
            (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v28);
            (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v29);
            return v11;
          }
        }
LABEL_15:
        v22 = CmpSplitLeaf(BugCheckParameter2, *a2, i, a4);
        if ( v22 == -1 )
          goto LABEL_28;
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v29);
        *a2 = v22;
        v9 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(
               BugCheckParameter2,
               v22,
               v29);
        if ( !v9 )
          goto LABEL_28;
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v28);
      }
      if ( v9 )
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v29);
    }
  }
  return 0xFFFFFFFFLL;
}
