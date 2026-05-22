/*
 * XREFs of ??0GazeHidParser@@QEAA@XZ @ 0x1801294CC
 * Callers:
 *     ??0GazeHidDevice@@QEAA@PEAX0KK@Z @ 0x18009AC68 (--0GazeHidDevice@@QEAA@PEAX0KK@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800130F0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memset_0 @ 0x18003C540 (memset_0.c)
 */

GazeHidParser *__fastcall GazeHidParser::GazeHidParser(GazeHidParser *this)
{
  __int128 v2; // xmm1
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  _QWORD *v5; // rax
  _OWORD v7[4]; // [rsp+20h] [rbp-48h] BYREF

  memset_0(v7, 0, sizeof(v7));
  v2 = v7[1];
  *(_OWORD *)this = v7[0];
  *((_QWORD *)this + 8) = 0LL;
  v3 = v7[2];
  *((_OWORD *)this + 1) = v2;
  v4 = v7[3];
  *((_OWORD *)this + 2) = v3;
  *((_OWORD *)this + 3) = v4;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  v5 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x28uLL);
  *v5 = v5;
  v5[1] = v5;
  v5[2] = v5;
  *((_WORD *)v5 + 12) = 257;
  *((_QWORD *)this + 9) = v5;
  return this;
}
