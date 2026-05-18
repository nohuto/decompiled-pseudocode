/*
 * XREFs of sub_1800ACB08 @ 0x1800ACB08
 * Callers:
 *     sub_1800AEA40 @ 0x1800AEA40 (sub_1800AEA40.c)
 * Callees:
 *     sub_1800111C8 @ 0x1800111C8 (sub_1800111C8.c)
 *     sub_1800ACBBC @ 0x1800ACBBC (sub_1800ACBBC.c)
 *     ??2@YAPEAX_K@Z @ 0x180124038 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall sub_1800ACB08(__int64 a1, _QWORD *a2)
{
  _DWORD *v4; // rax
  _DWORD *v5; // rbx
  __int64 v6; // rdx
  __int128 v8; // [rsp+20h] [rbp-18h] BYREF

  v4 = operator new(0x6F8uLL);
  v5 = v4;
  if ( v4 )
  {
    v4[2] = 1;
    v4[3] = 1;
    *(_QWORD *)v4 = &std::_Ref_count_obj<Spectre::Engine::Camera>::`vftable';
    v8 = 0LL;
    v6 = a2[1];
    if ( v6 )
    {
      _InterlockedAdd((volatile signed __int32 *)(v6 + 8), 1u);
      v6 = a2[1];
    }
    *(_QWORD *)&v8 = *a2;
    *((_QWORD *)&v8 + 1) = v6;
    sub_1800ACBBC(v4 + 4, &v8);
  }
  else
  {
    v5 = 0LL;
  }
  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)a1 = v5 + 4;
  *(_QWORD *)(a1 + 8) = v5;
  sub_1800111C8(a1, (__int64)(v5 + 4));
  return a1;
}
