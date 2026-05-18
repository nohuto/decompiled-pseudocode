/*
 * XREFs of sub_180099AB4 @ 0x180099AB4
 * Callers:
 *     sub_18009B848 @ 0x18009B848 (sub_18009B848.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180124038 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall sub_180099AB4(__int64 a1, __int64 *a2, __int64 *a3)
{
  _DWORD *v6; // rax
  _DWORD *v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 result; // rax

  v6 = operator new(0x28uLL);
  v7 = v6;
  if ( v6 )
  {
    v6[2] = 1;
    v6[3] = 1;
    *(_QWORD *)v6 = &std::_Ref_count_obj<Spectre::Engine::MeshInstance::MaterialLoadedFnc>::`vftable';
    v8 = *a3;
    v9 = *a2;
    *((_QWORD *)v6 + 2) = &Spectre::Engine::MeshInstance::MaterialLoadedFnc::`vftable';
    *((_QWORD *)v6 + 3) = v9;
    *((_QWORD *)v6 + 4) = v8;
  }
  else
  {
    v7 = 0LL;
  }
  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)a1 = v7 + 4;
  result = a1;
  *(_QWORD *)(a1 + 8) = v7;
  return result;
}
