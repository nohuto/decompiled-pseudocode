/*
 * XREFs of CmpSortDriverList @ 0x140A61418
 * Callers:
 *     CmGetSystemDriverList @ 0x140A60174 (CmGetSystemDriverList.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     CmpFindValueByName @ 0x14065E45C (CmpFindValueByName.c)
 *     CmpFindSubKeyByName @ 0x1407ACAD4 (CmpFindSubKeyByName.c)
 *     CmpValueToData @ 0x1407AD0F4 (CmpValueToData.c)
 *     CmpDoSort @ 0x140A615D8 (CmpDoSort.c)
 */

char __fastcall CmpSortDriverList(ULONG_PTR BugCheckParameter3, __int64 a2, __int64 a3)
{
  __int64 (__fastcall *v5)(ULONG_PTR, __int64, int *); // rax
  __int64 v6; // rax
  unsigned int SubKeyByName; // ebx
  __int64 v8; // rax
  unsigned int v9; // ebx
  __int64 v10; // rax
  unsigned int ValueByName; // ebx
  ULONG_PTR v12; // rax
  PVOID v13; // rbx
  char v14; // bl
  _DWORD v16[2]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v17; // [rsp+38h] [rbp-18h] BYREF
  __int128 v18; // [rsp+40h] [rbp-10h] BYREF
  unsigned int v19; // [rsp+70h] [rbp+20h] BYREF
  int v20; // [rsp+88h] [rbp+38h] BYREF
  int v21; // [rsp+8Ch] [rbp+3Ch]

  v19 = 0;
  v16[1] = 0;
  v21 = 0;
  v5 = *(__int64 (__fastcall **)(ULONG_PTR, __int64, int *))(BugCheckParameter3 + 8);
  v18 = 0LL;
  v17 = 0xFFFFFFFFLL;
  v16[0] = -1;
  v20 = -1;
  v6 = v5(BugCheckParameter3, a2, &v20);
  if ( v6 )
  {
    SubKeyByName = CmpFindSubKeyByName(BugCheckParameter3, v6, (__int64)&CmpControlString);
    (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter3 + 16))(BugCheckParameter3, &v20);
    if ( SubKeyByName != -1 )
    {
      v8 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter3 + 8))(
             BugCheckParameter3,
             SubKeyByName,
             &v20);
      if ( v8 )
      {
        v9 = CmpFindSubKeyByName(BugCheckParameter3, v8, (__int64)L"\"$");
        (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter3 + 16))(BugCheckParameter3, &v20);
        if ( v9 != -1 )
        {
          v10 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter3 + 8))(
                  BugCheckParameter3,
                  v9,
                  &v20);
          if ( v10 )
          {
            ValueByName = CmpFindValueByName(BugCheckParameter3, v10, (__int64)L"\b\n");
            (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter3 + 16))(BugCheckParameter3, &v20);
            if ( ValueByName != -1 )
            {
              v12 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter3 + 8))(
                      BugCheckParameter3,
                      ValueByName,
                      v16);
              if ( v12 )
              {
                if ( *(_DWORD *)(v12 + 12) == 7 )
                {
                  v13 = CmpValueToData(BugCheckParameter3, ValueByName, v12, &v19, (__int64)&v17);
                  *((_QWORD *)&v18 + 1) = v13;
                  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter3 + 16))(BugCheckParameter3, v16);
                  if ( v13 )
                  {
                    WORD1(v18) = v19 - 2;
                    LOWORD(v18) = v19 - 2;
                    v14 = CmpDoSort(a3, &v18);
                    (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter3 + 16))(BugCheckParameter3, &v17);
                    return v14;
                  }
                }
                else
                {
                  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter3 + 16))(BugCheckParameter3, v16);
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}
