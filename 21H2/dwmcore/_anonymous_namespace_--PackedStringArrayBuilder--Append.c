/*
 * XREFs of _anonymous_namespace_::PackedStringArrayBuilder::Append @ 0x180075D1C
 * Callers:
 *     _anonymous_namespace_::SendFramesReport @ 0x1800751DC (_anonymous_namespace_--SendFramesReport.c)
 * Callees:
 *     ??$_Emplace_reallocate@E@?$vector@EV?$allocator@E@std@@@std@@QEAAPEAEQEAE$$QEAE@Z @ 0x1800CEAFC (--$_Emplace_reallocate@E@-$vector@EV-$allocator@E@std@@@std@@QEAAPEAEQEAE$$QEAE@Z.c)
 *     ??$_Emplace_reallocate@AEBE@?$vector@EV?$allocator@E@std@@@std@@QEAAPEAEQEAEAEBE@Z @ 0x1800CEBC0 (--$_Emplace_reallocate@AEBE@-$vector@EV-$allocator@E@std@@@std@@QEAAPEAEQEAEAEBE@Z.c)
 */

void __fastcall anonymous_namespace_::PackedStringArrayBuilder::Append(__int64 a1, char *a2)
{
  char *v3; // rsi
  _QWORD *v4; // rcx
  char *v5; // rdi
  _BYTE *v6; // rdx
  char v7; // al
  _BYTE *v8; // rdx
  char v9; // [rsp+30h] [rbp+8h] BYREF

  ++*(_DWORD *)a1;
  v3 = a2;
  v4 = a2;
  if ( *((_QWORD *)a2 + 3) >= 0x10uLL )
    v4 = *(_QWORD **)a2;
  v5 = (char *)v4 + *((_QWORD *)a2 + 2);
  if ( *((_QWORD *)a2 + 3) >= 0x10uLL )
    v3 = *(char **)a2;
  if ( v3 == v5 )
  {
    v8 = *(_BYTE **)(a1 + 16);
  }
  else
  {
    do
    {
      v6 = *(_BYTE **)(a1 + 16);
      v7 = *v3;
      v9 = *v3;
      if ( v6 == *(_BYTE **)(a1 + 24) )
      {
        std::vector<unsigned char>::_Emplace_reallocate<unsigned char const &>(a1 + 8, v6, &v9);
      }
      else
      {
        *v6 = v7;
        ++*(_QWORD *)(a1 + 16);
      }
      v8 = *(_BYTE **)(a1 + 16);
      ++v3;
    }
    while ( v3 != v5 );
  }
  v9 = 0;
  if ( v8 == *(_BYTE **)(a1 + 24) )
  {
    std::vector<unsigned char>::_Emplace_reallocate<unsigned char>(a1 + 8, v8, &v9);
  }
  else
  {
    *v8 = 0;
    ++*(_QWORD *)(a1 + 16);
  }
}
