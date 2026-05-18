/*
 * XREFs of sub_18008559C @ 0x18008559C
 * Callers:
 *     sub_180086D34 @ 0x180086D34 (sub_180086D34.c)
 * Callees:
 *     sub_1800110E8 @ 0x1800110E8 (sub_1800110E8.c)
 *     ??2@YAPEAX_K@Z @ 0x18011E768 (--2@YAPEAX_K@Z.c)
 */

void __fastcall sub_18008559C(__int64 *a1, __int64 a2)
{
  _DWORD *v4; // rax

  v4 = operator new(0x18uLL);
  if ( v4 )
  {
    v4[2] = 1;
    v4[3] = 1;
    *(_QWORD *)v4 = &std::_Ref_count<Spectre::Engine::SceneNode>::`vftable';
    *((_QWORD *)v4 + 2) = a2;
  }
  *a1 = a2;
  a1[1] = (__int64)v4;
  sub_1800110E8((__int64)a1, a2);
}
