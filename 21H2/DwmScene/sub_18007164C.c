/*
 * XREFs of sub_18007164C @ 0x18007164C
 * Callers:
 *     sub_18007F068 @ 0x18007F068 (sub_18007F068.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180124038 (--2@YAPEAX_K@Z.c)
 *     ?_Throw_Cpp_error@std@@YAXH@Z @ 0x180125392 (-_Throw_Cpp_error@std@@YAXH@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18007164C(__int64 a1, _OWORD *a2, _QWORD *a3)
{
  char *v6; // r9
  __int64 v7; // rax

  v6 = (char *)operator new(0x18uLL);
  if ( v6 )
  {
    *(_QWORD *)v6 = *a3;
    *(_OWORD *)(v6 + 8) = *a2;
  }
  v7 = o__beginthreadex(0LL, 0LL, sub_1800759A0);
  *(_QWORD *)a1 = v7;
  if ( !v7 )
  {
    *(_DWORD *)(a1 + 8) = 0;
    std::_Throw_Cpp_error(6);
    JUMPOUT(0x1800716D6LL);
  }
  return a1;
}
