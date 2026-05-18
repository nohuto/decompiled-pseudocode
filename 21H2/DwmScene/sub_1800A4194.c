/*
 * XREFs of sub_1800A4194 @ 0x1800A4194
 * Callers:
 *     sub_1800A52D8 @ 0x1800A52D8 (sub_1800A52D8.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180124038 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall sub_1800A4194(__int64 a1, _QWORD *a2)
{
  _DWORD *v4; // rax
  _DWORD *v5; // r8
  __int64 result; // rax

  v4 = operator new(0x38uLL);
  v5 = v4;
  if ( v4 )
  {
    v4[2] = 1;
    v4[3] = 1;
    *(_QWORD *)v4 = &std::_Ref_count_obj<Spectre::Engine::ShaderProgram>::`vftable';
    *((_QWORD *)v4 + 2) = 0LL;
    *((_QWORD *)v4 + 3) = 0LL;
    *((_QWORD *)v4 + 4) = 0LL;
    *((_QWORD *)v4 + 2) = *a2;
    *((_QWORD *)v4 + 3) = a2[1];
    *((_QWORD *)v4 + 4) = a2[2];
    *a2 = 0LL;
    a2[1] = 0LL;
    a2[2] = 0LL;
    *((_QWORD *)v4 + 5) = a2[3];
    *((_QWORD *)v4 + 6) = a2[4];
    a2[3] = 0LL;
    a2[4] = 0LL;
  }
  else
  {
    v5 = 0LL;
  }
  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)a1 = v5 + 4;
  result = a1;
  *(_QWORD *)(a1 + 8) = v5;
  return result;
}
