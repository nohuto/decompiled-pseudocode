/*
 * XREFs of CmpSelectLeaf @ 0x140758E70
 * Callers:
 *     CmpAddSubKeyToList @ 0x140640F04 (CmpAddSubKeyToList.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     CmpFindSubKeyInRoot @ 0x1405E5B0C (CmpFindSubKeyInRoot.c)
 *     CmpDoCompareKeyName @ 0x1405E69B0 (CmpDoCompareKeyName.c)
 *     CmpSplitLeaf @ 0x140721824 (CmpSplitLeaf.c)
 *     HvMarkCellDirty @ 0x1408787F0 (HvMarkCellDirty.c)
 */

__int64 __fastcall CmpSelectLeaf(
        ULONG_PTR BugCheckParameter2,
        unsigned int *a2,
        const UNICODE_STRING *a3,
        unsigned int a4,
        unsigned int **a5)
{
  __int64 v7; // rdx
  __int64 v9; // rax
  __int64 v10; // rdi
  unsigned int i; // esi
  unsigned int v12; // r14d
  __int64 (__fastcall *v13)(ULONG_PTR, _QWORD, _DWORD *); // rax
  __int64 v14; // rax
  unsigned int *v15; // r15
  __int64 v17; // rax
  int v18; // eax
  bool v19; // sf
  void (__fastcall *v20)(ULONG_PTR, _DWORD *); // rax
  __int64 (__fastcall *v21)(ULONG_PTR, _QWORD, _DWORD *); // rax
  __int64 v22; // rax
  unsigned int v23; // esi
  __int64 (__fastcall *v24)(ULONG_PTR, _QWORD, _DWORD *); // rax
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rax
  unsigned int v28; // [rsp+20h] [rbp-20h] BYREF
  _DWORD v29[2]; // [rsp+28h] [rbp-18h] BYREF
  _DWORD v30[4]; // [rsp+30h] [rbp-10h] BYREF

  v28 = 0;
  v30[0] = -1;
  v29[0] = -1;
  v7 = *a2;
  v30[1] = 0;
  v29[1] = 0;
  if ( (unsigned __int8)HvMarkCellDirty(BugCheckParameter2, v7, 0LL) )
  {
    v9 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(BugCheckParameter2, *a2, v30);
    v10 = v9;
    if ( v9 )
    {
      for ( i = CmpFindSubKeyInRoot(BugCheckParameter2, v9, (int)a3, &v28);
            (i & 0x80000000) == 0;
            i = CmpFindSubKeyInRoot(BugCheckParameter2, v10, (int)a3, &v28) )
      {
        v12 = v28;
        v13 = *(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8);
        if ( v28 == -1 )
        {
          v15 = (unsigned int *)(v10 + 4 * (i + 1LL));
          v17 = v13(BugCheckParameter2, *v15, v29);
          if ( !v17 )
            break;
          v18 = CmpDoCompareKeyName(BugCheckParameter2, a3, *(_DWORD *)(v17 + 4));
          if ( v18 == 2 )
          {
LABEL_28:
            (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v29);
            break;
          }
          v19 = v18 < 0;
          v20 = *(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16);
          if ( !v19 )
          {
            v20(BugCheckParameter2, v29);
            v21 = *(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8);
            v28 = *v15;
            v12 = v28;
            v22 = v21(BugCheckParameter2, v28, v29);
            if ( !v22 )
              break;
            if ( *(_WORD *)(v22 + 2) < 0x3F5u )
              goto LABEL_8;
            if ( i >= (unsigned int)*(unsigned __int16 *)(v10 + 2) - 1 )
              goto LABEL_15;
            (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v29);
            v24 = *(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8);
            v25 = i + 1;
            goto LABEL_22;
          }
          v20(BugCheckParameter2, v29);
          v24 = *(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8);
          if ( i )
          {
            v25 = i - 1;
LABEL_22:
            v15 = (unsigned int *)(v10 + 4 * (v25 + 1));
            v28 = *v15;
            v12 = v28;
            v26 = v24(BugCheckParameter2, v28, v29);
            if ( !v26 )
              break;
            if ( *(_WORD *)(v26 + 2) < 0x3F5u )
              goto LABEL_8;
            goto LABEL_15;
          }
          v28 = *(_DWORD *)(v10 + 4);
          v12 = v28;
          v27 = v24(BugCheckParameter2, v28, v29);
          if ( !v27 )
            break;
          if ( *(_WORD *)(v27 + 2) < 0x3F5u )
          {
            v15 = (unsigned int *)(v10 + 4);
            goto LABEL_8;
          }
        }
        else
        {
          v14 = v13(BugCheckParameter2, v28, v29);
          if ( !v14 )
            break;
          if ( *(_WORD *)(v14 + 2) < 0x3F5u )
          {
            v15 = (unsigned int *)(v10 + 4 * (i + 1LL));
LABEL_8:
            *a5 = v15;
            (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v29);
            (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v30);
            return v12;
          }
        }
LABEL_15:
        v23 = CmpSplitLeaf(BugCheckParameter2, *a2, i, a4);
        if ( v23 == -1 )
          goto LABEL_28;
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v30);
        *a2 = v23;
        v10 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter2 + 8))(
                BugCheckParameter2,
                v23,
                v30);
        if ( !v10 )
          goto LABEL_28;
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v29);
      }
      if ( v10 )
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter2 + 16))(BugCheckParameter2, v30);
    }
  }
  return 0xFFFFFFFFLL;
}
