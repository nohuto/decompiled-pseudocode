/*
 * XREFs of sub_18011CFC4 @ 0x18011CFC4
 * Callers:
 *     sub_18011CE94 @ 0x18011CE94 (sub_18011CE94.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18011E768 (--2@YAPEAX_K@Z.c)
 *     _Mtx_init_in_situ @ 0x18011F9A6 (_Mtx_init_in_situ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18011CFC4(__int64 a1)
{
  _QWORD *v2; // rax

  *(_QWORD *)a1 = &Spectre::Utils::Internal::SimpleCancellationToken::`vftable';
  Mtx_init_in_situ((_Mtx_t)(a1 + 8), 2);
  *(_DWORD *)(a1 + 88) = 0;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  v2 = operator new(0x68uLL);
  *v2 = v2;
  v2[1] = v2;
  v2[2] = v2;
  *((_WORD *)v2 + 12) = 257;
  *(_QWORD *)(a1 + 96) = v2;
  *(_BYTE *)(a1 + 112) = 0;
  return a1;
}
