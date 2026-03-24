/*
 * XREFs of _anonymous_namespace_::PackedStringArrayBuilder::PackedStringArrayBuilder @ 0x1800DB1D0
 * Callers:
 *     _anonymous_namespace_::SendFramesReport @ 0x18004B7F8 (_anonymous_namespace_--SendFramesReport.c)
 * Callees:
 *     ??$_Emplace_reallocate@AEBE@?$vector@EV?$allocator@E@std@@@std@@QEAAPEAEQEAEAEBE@Z @ 0x18004B610 (--$_Emplace_reallocate@AEBE@-$vector@EV-$allocator@E@std@@@std@@QEAAPEAEQEAEAEBE@Z.c)
 */

__int64 __fastcall anonymous_namespace_::PackedStringArrayBuilder::PackedStringArrayBuilder(__int64 a1)
{
  __int64 v1; // rbx
  _BYTE *v3; // rdx
  char v5; // [rsp+30h] [rbp+8h] BYREF

  *(_DWORD *)a1 = 0;
  v1 = a1 + 8;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  v5 = 0;
  std::vector<unsigned char>::_Emplace_reallocate<unsigned char const &>((const void **)(a1 + 8), 0LL, &v5);
  v3 = *(_BYTE **)(v1 + 8);
  v5 = 0;
  if ( *(_BYTE **)(v1 + 16) == v3 )
  {
    std::vector<unsigned char>::_Emplace_reallocate<unsigned char const &>((const void **)v1, v3, &v5);
  }
  else
  {
    *v3 = 0;
    ++*(_QWORD *)(v1 + 8);
  }
  return a1;
}
