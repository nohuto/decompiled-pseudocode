/*
 * XREFs of sub_1800B3C60 @ 0x1800B3C60
 * Callers:
 *     sub_1800B4DE0 @ 0x1800B4DE0 (sub_1800B4DE0.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180124038 (--2@YAPEAX_K@Z.c)
 *     ?_Throw_Cpp_error@std@@YAXH@Z @ 0x180125392 (-_Throw_Cpp_error@std@@YAXH@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800B3C60(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  _QWORD *v6; // rax
  __int64 v7; // rax

  v6 = operator new(0x10uLL);
  if ( v6 )
  {
    *v6 = *a3;
    v6[1] = *a2;
  }
  v7 = o__beginthreadex(0LL, 0LL, sub_1800B4430);
  *(_QWORD *)a1 = v7;
  if ( !v7 )
  {
    *(_DWORD *)(a1 + 8) = 0;
    std::_Throw_Cpp_error(6);
    JUMPOUT(0x1800B3CE8LL);
  }
  return a1;
}
