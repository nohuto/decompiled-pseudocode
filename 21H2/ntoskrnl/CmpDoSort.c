/*
 * XREFs of CmpDoSort @ 0x140A615D8
 * Callers:
 *     CmpSortDriverList @ 0x140A61418 (CmpSortDriverList.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x1406F0B70 (RtlEqualUnicodeString.c)
 *     CmpSortByTag @ 0x140A61710 (CmpSortByTag.c)
 */

char __fastcall CmpDoSort(_QWORD *a1, __int64 a2)
{
  unsigned __int16 *v3; // r11
  __int16 v4; // bp
  wchar_t *v5; // r15
  _QWORD *v6; // r12
  wchar_t *i; // rbx
  _QWORD *v8; // rdi
  _QWORD *v9; // r13
  _QWORD *v10; // r14
  _QWORD *v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  UNICODE_STRING String1; // [rsp+20h] [rbp-38h] BYREF
  _QWORD *v16; // [rsp+70h] [rbp+18h]

  String1 = 0LL;
  if ( !(unsigned __int8)CmpSortByTag(a1, a2) )
    return 0;
  v4 = 0;
  v5 = (wchar_t *)*((_QWORD *)v3 + 1);
  v6 = a1;
  for ( i = &v5[((unsigned __int64)*v3 >> 1) - 1]; i > v5; --i )
  {
    do
    {
      if ( !*i )
        v4 = (__int16)i;
      --i;
    }
    while ( i != v5 && *(i - 1) );
    v8 = (_QWORD *)a1[1];
    String1.Buffer = i;
    String1.Length = v4 - (_WORD)i;
    String1.MaximumLength = v4 - (_WORD)i;
    while ( v8 != v6 )
    {
      v9 = v8;
      if ( v8 == a1 )
        break;
      v10 = v8;
      v11 = v8 + 1;
      v8 = (_QWORD *)v8[1];
      v16 = v11;
      if ( v10[14] && RtlEqualUnicodeString(&String1, (PCUNICODE_STRING)(v10 + 13), 1u) )
      {
        v12 = *v10;
        if ( *(_QWORD **)(*v10 + 8LL) != v10
          || (_QWORD *)*v8 != v10
          || (*v8 = v12, *(_QWORD *)(v12 + 8) = v8, v13 = *a1, *(_QWORD **)(*a1 + 8LL) != a1) )
        {
          __fastfail(3u);
        }
        *v10 = v13;
        if ( v6 != a1 )
          v9 = v6;
        v6 = v9;
        *v16 = a1;
        *(_QWORD *)(v13 + 8) = v10;
        *a1 = v10;
      }
    }
  }
  return 1;
}
