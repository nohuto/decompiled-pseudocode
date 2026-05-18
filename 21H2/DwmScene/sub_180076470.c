/*
 * XREFs of sub_180076470 @ 0x180076470
 * Callers:
 *     sub_180071BE8 @ 0x180071BE8 (sub_180071BE8.c)
 *     sub_180078C20 @ 0x180078C20 (sub_180078C20.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180124038 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall sub_180076470(__int64 a1)
{
  _DWORD *v2; // rax
  _DWORD *v3; // rdx
  __int64 result; // rax

  v2 = operator new(0x38uLL);
  v3 = v2;
  if ( v2 )
  {
    v2[2] = 1;
    v2[3] = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj<Spectre::Engine::Engine::EngineSceneData>::`vftable';
    *((_OWORD *)v2 + 1) = 0LL;
    *((_OWORD *)v2 + 2) = 0LL;
    *((_QWORD *)v2 + 2) = &Spectre::Engine::Engine::EngineSceneData::`vftable';
    *((_QWORD *)v2 + 3) = 0LL;
    *((_QWORD *)v2 + 4) = 0LL;
    *((_QWORD *)v2 + 5) = 0LL;
    *((_QWORD *)v2 + 6) = 0LL;
  }
  else
  {
    v3 = 0LL;
  }
  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)a1 = v3 + 4;
  result = a1;
  *(_QWORD *)(a1 + 8) = v3;
  return result;
}
