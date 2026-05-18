/*
 * XREFs of sub_180076608 @ 0x180076608
 * Callers:
 *     sub_18007948C @ 0x18007948C (sub_18007948C.c)
 * Callees:
 *     sub_18007256C @ 0x18007256C (sub_18007256C.c)
 *     sub_1800B4510 @ 0x1800B4510 (sub_1800B4510.c)
 *     ??2@YAPEAX_K@Z @ 0x180124038 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180076608(__int64 a1, __int64 a2, unsigned int *a3, unsigned int *a4)
{
  _DWORD *v8; // rax
  _DWORD *v9; // rbx

  v8 = operator new(0x1F0uLL);
  v9 = v8;
  if ( v8 )
  {
    v8[2] = 1;
    v8[3] = 1;
    *(_QWORD *)v8 = &std::_Ref_count_obj<Spectre::Engine::Display>::`vftable';
    sub_1800B4510(v8 + 4, a2, *a3, *a4);
  }
  else
  {
    v9 = 0LL;
  }
  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)a1 = v9 + 4;
  *(_QWORD *)(a1 + 8) = v9;
  sub_18007256C(a1, (_QWORD *)v9 + 2);
  return a1;
}
