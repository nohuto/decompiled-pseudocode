/*
 * XREFs of sub_1801019D8 @ 0x1801019D8
 * Callers:
 *     sub_180101D50 @ 0x180101D50 (sub_180101D50.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18011E768 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall sub_1801019D8(__int64 a1, int *a2)
{
  _DWORD *v4; // rax
  _DWORD *v5; // r8
  int v6; // ecx
  __int64 result; // rax

  v4 = operator new(0x20uLL);
  v5 = v4;
  if ( v4 )
  {
    v4[2] = 1;
    v4[3] = 1;
    *(_QWORD *)v4 = &std::_Ref_count_obj<Spectre::Engine::DistanceFromCameraSceneNodeTraversal>::`vftable';
    v6 = *a2;
    *((_QWORD *)v4 + 2) = &Spectre::Engine::DistanceFromCameraSceneNodeTraversal::`vftable';
    v4[6] = v6;
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
