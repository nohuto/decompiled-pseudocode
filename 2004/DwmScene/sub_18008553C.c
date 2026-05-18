/*
 * XREFs of sub_18008553C @ 0x18008553C
 * Callers:
 *     sub_180086610 @ 0x180086610 (sub_180086610.c)
 *     sub_1800866F0 @ 0x1800866F0 (sub_1800866F0.c)
 * Callees:
 *     sub_18006CC9C @ 0x18006CC9C (sub_18006CC9C.c)
 *     ??2@YAPEAX_K@Z @ 0x18011E768 (--2@YAPEAX_K@Z.c)
 */

void __fastcall sub_18008553C(_QWORD *a1, _QWORD *a2)
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
    sub_18006CC9C((__int64)a1, a2);
  }
  catch ( ... )
  {
    if ( a2 )
      sub_180085E04(a2, 1LL);
    throw;
  }
}
