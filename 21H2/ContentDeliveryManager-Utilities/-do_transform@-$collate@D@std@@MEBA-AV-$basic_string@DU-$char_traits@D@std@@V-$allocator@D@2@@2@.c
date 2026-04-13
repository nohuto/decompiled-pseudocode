/*
 * XREFs of ?do_transform@?$collate@D@std@@MEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@PEBD0@Z @ 0x1800CE5D0
 * Callers:
 *     <none>
 * Callees:
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_KD@Z @ 0x18003AED0 (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@_KD@Z.c)
 *     _Strxfrm @ 0x1800CF138 (_Strxfrm.c)
 */

// Hidden C++ exception states: #wind=1
char *__fastcall std::collate<char>::do_transform(const _Collvec *a1, char *a2, const char *a3, const char *a4)
{
  size_t v8; // rax
  unsigned __int64 v9; // rcx
  const _Collvec *v10; // rbp
  char *v11; // rcx
  char *v12; // rax
  char *v13; // rcx
  char *v14; // rcx

  *((_QWORD *)a2 + 3) = 15LL;
  *((_QWORD *)a2 + 2) = 0LL;
  *a2 = 0;
  v8 = a4 - a3;
  if ( a4 != a3 )
  {
    v9 = *((_QWORD *)a2 + 2);
    v10 = a1 + 1;
    do
    {
      if ( v8 > v9 )
      {
        std::string::append(a2, v8 - v9, 0);
      }
      else
      {
        *((_QWORD *)a2 + 2) = v8;
        if ( *((_QWORD *)a2 + 3) < 0x10uLL )
          v11 = a2;
        else
          v11 = *(char **)a2;
        v11[v8] = 0;
      }
      if ( *((_QWORD *)a2 + 3) < 0x10uLL )
        v12 = a2;
      else
        v12 = *(char **)a2;
      if ( *((_QWORD *)a2 + 3) < 0x10uLL )
        v13 = a2;
      else
        v13 = *(char **)a2;
      v8 = Strxfrm(v13, &v12[*((_QWORD *)a2 + 2)], a3, a4, v10);
      v9 = *((_QWORD *)a2 + 2);
    }
    while ( v8 > v9 && v8 );
  }
  if ( v8 > *((_QWORD *)a2 + 2) )
  {
    std::string::append(a2, v8 - *((_QWORD *)a2 + 2), 0);
  }
  else
  {
    *((_QWORD *)a2 + 2) = v8;
    if ( *((_QWORD *)a2 + 3) < 0x10uLL )
      v14 = a2;
    else
      v14 = *(char **)a2;
    v14[v8] = 0;
  }
  return a2;
}
