/*
 * XREFs of sub_18011CE94 @ 0x18011CE94
 * Callers:
 *     sub_18011D50C @ 0x18011D50C (sub_18011D50C.c)
 * Callees:
 *     sub_18011CFC4 @ 0x18011CFC4 (sub_18011CFC4.c)
 *     ??2@YAPEAX_K@Z @ 0x18011E768 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall sub_18011CE94(__int64 a1)
{
  _DWORD *v2; // rax
  _DWORD *v3; // rbx

  v2 = operator new(0x88uLL);
  v3 = v2;
  if ( v2 )
  {
    v2[2] = 1;
    v2[3] = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj<Spectre::Utils::Internal::SimpleCancellationToken>::`vftable';
    sub_18011CFC4(v2 + 4);
  }
  else
  {
    v3 = 0LL;
  }
  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)a1 = v3 + 4;
  *(_QWORD *)(a1 + 8) = v3;
  return a1;
}
