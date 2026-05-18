/*
 * XREFs of sub_18008AE0C @ 0x18008AE0C
 * Callers:
 *     sub_18008BEE0 @ 0x18008BEE0 (sub_18008BEE0.c)
 *     sub_18008BFC0 @ 0x18008BFC0 (sub_18008BFC0.c)
 * Callees:
 *     sub_18007256C @ 0x18007256C (sub_18007256C.c)
 *     ??2@YAPEAX_K@Z @ 0x180124038 (--2@YAPEAX_K@Z.c)
 */

void __fastcall sub_18008AE0C(_QWORD *a1, _QWORD *a2)
{
  _DWORD *v4; // rax

  try
  {
    v4 = operator new(0x18uLL);
    if ( v4 )
    {
      v4[2] = 1;
      v4[3] = 1;
      *(_QWORD *)v4 = &std::_Ref_count<Spectre::Engine::Scene>::`vftable';
      *((_QWORD *)v4 + 2) = a2;
    }
    *a1 = a2;
    a1[1] = v4;
    sub_18007256C((__int64)a1, a2);
  }
  catch ( ... )
  {
    if ( a2 )
      sub_18008B6D4(a2, 1LL);
    throw;
  }
}
