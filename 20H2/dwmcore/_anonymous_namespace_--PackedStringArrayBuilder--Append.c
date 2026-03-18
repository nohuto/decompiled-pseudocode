/*
 * XREFs of _anonymous_namespace_::PackedStringArrayBuilder::Append @ 0x180058F5C
 * Callers:
 *     _anonymous_namespace_::SendFramesReport @ 0x1800585C4 (_anonymous_namespace_--SendFramesReport.c)
 * Callees:
 *     ??$_Emplace_reallocate@AEBE@?$vector@EV?$allocator@E@std@@@std@@QEAAPEAEQEAEAEBE@Z @ 0x1800583DC (--$_Emplace_reallocate@AEBE@-$vector@EV-$allocator@E@std@@@std@@QEAAPEAEQEAEAEBE@Z.c)
 */

char *__fastcall anonymous_namespace_::PackedStringArrayBuilder::Append(_DWORD *a1, _QWORD *a2)
{
  _DWORD *v2; // rbx
  unsigned __int64 v3; // rdi
  _QWORD *v4; // rcx
  char *result; // rax
  char *v6; // rbp
  char *v7; // rsi
  char *v8; // rdx
  char v9; // al
  _BYTE *v10; // rdx
  char v11; // [rsp+40h] [rbp+8h] BYREF

  ++*a1;
  v2 = a1 + 2;
  v3 = (unsigned __int64)a2;
  v4 = a2;
  if ( a2[3] >= 0x10uLL )
    v4 = (_QWORD *)*a2;
  result = (char *)v4 + a2[2];
  if ( a2[3] >= 0x10uLL )
    v3 = *a2;
  v6 = &result[-v3];
  v7 = (char *)v3;
  if ( v3 > (unsigned __int64)result )
    v6 = 0LL;
  if ( v6 )
  {
    do
    {
      v8 = (char *)*((_QWORD *)v2 + 1);
      v9 = *v7;
      v11 = *v7;
      if ( *((char **)v2 + 2) == v8 )
      {
        std::vector<unsigned char>::_Emplace_reallocate<unsigned char const &>((const void **)v2, v8, &v11);
      }
      else
      {
        *v8 = v9;
        ++*((_QWORD *)v2 + 1);
      }
      v10 = (_BYTE *)*((_QWORD *)v2 + 1);
      result = &(++v7)[-v3];
    }
    while ( &v7[-v3] != v6 );
  }
  else
  {
    v10 = (_BYTE *)*((_QWORD *)v2 + 1);
  }
  v11 = 0;
  if ( *((_BYTE **)v2 + 2) == v10 )
    return std::vector<unsigned char>::_Emplace_reallocate<unsigned char const &>((const void **)v2, v10, &v11);
  *v10 = 0;
  ++*((_QWORD *)v2 + 1);
  return result;
}
