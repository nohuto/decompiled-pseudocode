/*
 * XREFs of sub_18011BFEC @ 0x18011BFEC
 * Callers:
 *     sub_18011A728 @ 0x18011A728 (sub_18011A728.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18011E768 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18011BFEC(__int64 a1, int a2, _QWORD *a3)
{
  __int64 v4; // rax
  _QWORD *v5; // rax

  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)a1 = &Spectre::Utils::IConfigurationManager::`vftable';
  *(_DWORD *)(a1 + 24) = a2;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  v4 = a3[1];
  if ( v4 )
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
  *(_QWORD *)(a1 + 32) = *a3;
  *(_QWORD *)(a1 + 40) = a3[1];
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  v5 = operator new(0x20uLL);
  *v5 = v5;
  v5[1] = v5;
  *(_QWORD *)(a1 + 48) = v5;
  return a1;
}
