/*
 * XREFs of ?do_transform@?$collate@G@std@@MEBA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@PEBG0@Z @ 0x1800C6900
 * Callers:
 *     <none>
 * Callees:
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_KG@Z @ 0x18003A69C (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@_KG@Z.c)
 *     memcpy_s_0 @ 0x1800CD9B5 (memcpy_s_0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::collate<unsigned short>::do_transform(__int64 a1, __int64 a2, const void *a3, __int64 a4)
{
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rax
  void *v8; // r8
  void *v9; // rcx
  unsigned __int64 v10; // rdx
  _WORD *v11; // rax

  *(_QWORD *)(a2 + 24) = 7LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_WORD *)a2 = 0;
  v6 = (a4 - (__int64)a3) >> 1;
  if ( v6 )
  {
    v7 = 0LL;
    do
    {
      std::wstring::append((void **)a2, v6 - v7, 0);
      if ( *(_QWORD *)(a2 + 24) < 8uLL )
        v8 = (void *)a2;
      else
        v8 = *(void **)a2;
      v7 = *(_QWORD *)(a2 + 16);
      if ( *(_QWORD *)(a2 + 24) < 8uLL )
        v9 = (void *)a2;
      else
        v9 = *(void **)a2;
      v10 = (__int64)((__int64)v8 + 2 * v7 - (_QWORD)v9) >> 1;
      if ( v6 <= v10 )
      {
        memcpy_s_0(v9, 2 * v10, a3, 2 * v6);
        v7 = *(_QWORD *)(a2 + 16);
      }
    }
    while ( v6 > v7 );
  }
  if ( v6 > *(_QWORD *)(a2 + 16) )
  {
    std::wstring::append((void **)a2, v6 - *(_QWORD *)(a2 + 16), 0);
  }
  else
  {
    *(_QWORD *)(a2 + 16) = v6;
    if ( *(_QWORD *)(a2 + 24) < 8uLL )
      v11 = (_WORD *)a2;
    else
      v11 = *(_WORD **)a2;
    v11[v6] = 0;
  }
  return a2;
}
