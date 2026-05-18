/*
 * XREFs of sub_180076790 @ 0x180076790
 * Callers:
 *     sub_180078CA0 @ 0x180078CA0 (sub_180078CA0.c)
 * Callees:
 *     sub_1800111C8 @ 0x1800111C8 (sub_1800111C8.c)
 *     sub_18011FFF8 @ 0x18011FFF8 (sub_18011FFF8.c)
 *     ??2@YAPEAX_K@Z @ 0x180124038 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180076790(__int64 a1, unsigned int *a2, _QWORD *a3)
{
  _DWORD *v6; // rax
  _DWORD *v7; // rbx
  __int64 v8; // rdx
  __int128 v10; // [rsp+20h] [rbp-28h] BYREF

  v6 = operator new(0x118uLL);
  v7 = v6;
  if ( v6 )
  {
    v6[2] = 1;
    v6[3] = 1;
    *(_QWORD *)v6 = &std::_Ref_count_obj<Spectre::Utils::JsonConfigurationManager>::`vftable';
    v10 = 0LL;
    v8 = a3[1];
    if ( v8 )
    {
      _InterlockedAdd((volatile signed __int32 *)(v8 + 8), 1u);
      v8 = a3[1];
    }
    *(_QWORD *)&v10 = *a3;
    *((_QWORD *)&v10 + 1) = v8;
    sub_18011FFF8(v6 + 4, *a2, &v10);
  }
  else
  {
    v7 = 0LL;
  }
  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)a1 = v7 + 4;
  *(_QWORD *)(a1 + 8) = v7;
  sub_1800111C8(a1, (__int64)(v7 + 4));
  return a1;
}
