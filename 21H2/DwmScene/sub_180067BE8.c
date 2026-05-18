/*
 * XREFs of sub_180067BE8 @ 0x180067BE8
 * Callers:
 *     sub_180027A54 @ 0x180027A54 (sub_180027A54.c)
 *     sub_18003DFB4 @ 0x18003DFB4 (sub_18003DFB4.c)
 *     sub_180042FF4 @ 0x180042FF4 (sub_180042FF4.c)
 *     sub_180067D30 @ 0x180067D30 (sub_180067D30.c)
 *     sub_180067DC0 @ 0x180067DC0 (sub_180067DC0.c)
 *     sub_1800685E4 @ 0x1800685E4 (sub_1800685E4.c)
 *     sub_18006D75C @ 0x18006D75C (sub_18006D75C.c)
 *     sub_18009F074 @ 0x18009F074 (sub_18009F074.c)
 *     sub_1800A0A5C @ 0x1800A0A5C (sub_1800A0A5C.c)
 *     sub_1800CC3E0 @ 0x1800CC3E0 (sub_1800CC3E0.c)
 *     sub_1800CE3AC @ 0x1800CE3AC (sub_1800CE3AC.c)
 *     sub_1800CE3F0 @ 0x1800CE3F0 (sub_1800CE3F0.c)
 *     sub_1800CF1B0 @ 0x1800CF1B0 (sub_1800CF1B0.c)
 *     sub_1800D041C @ 0x1800D041C (sub_1800D041C.c)
 *     sub_1800D1D48 @ 0x1800D1D48 (sub_1800D1D48.c)
 *     sub_1800D3610 @ 0x1800D3610 (sub_1800D3610.c)
 *     sub_18012A392 @ 0x18012A392 (sub_18012A392.c)
 * Callees:
 *     sub_1800D14B0 @ 0x1800D14B0 (sub_1800D14B0.c)
 *     sub_1800D14C8 @ 0x1800D14C8 (sub_1800D14C8.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 */

// Hidden C++ exception states: #wind=1
void **__fastcall sub_180067BE8(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rcx
  void **result; // rax

  *(_QWORD *)a1 = &Spectre::Engine::RendererResource::`vftable';
  v2 = sub_1800D14C8(a1);
  sub_1800D14B0(v2, *(unsigned int *)(a1 + 48), 0LL, -1LL);
  _InterlockedExchangeAdd(&dword_180220BB8[*(int *)(a1 + 44)], 0xFFFFFFFF);
  v3 = -*(_QWORD *)(a1 + 64);
  v4 = sub_1800D14C8(dword_180220BB8);
  sub_1800D14B0(v4, *(unsigned int *)(a1 + 56), 2LL, v3);
  v5 = *(_QWORD *)(a1 + 32);
  if ( v5 >= 0x10 )
  {
    v6 = v5 + 1;
    v7 = *(_QWORD *)(a1 + 8);
    if ( v6 >= 0x1000 )
    {
      v8 = v6 + 39;
      v9 = *(_QWORD *)(v7 - 8);
      v10 = v7 - v9;
      if ( (unsigned __int64)(v10 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v10, v8);
        JUMPOUT(0x180067CB2LL);
      }
      v7 = v9;
    }
    j_j__o_free(v7);
  }
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 15LL;
  *(_BYTE *)(a1 + 8) = 0;
  result = &Spectre::Engine::IVisitable::`vftable';
  *(_QWORD *)a1 = &Spectre::Engine::IVisitable::`vftable';
  return result;
}
