/*
 * XREFs of ?ConfigureTimer@KeyframeSequence@@QEAAXXZ @ 0x18004F554
 * Callers:
 *     ?UpdateTime@CKeyframeAnimation@@AEAAXH@Z @ 0x18004F31C (-UpdateTime@CKeyframeAnimation@@AEAAXH@Z.c)
 *     ?Play@KeyframeSequence@@QEAAXXZ @ 0x18004F7F8 (-Play@KeyframeSequence@@QEAAXXZ.c)
 *     ?Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z @ 0x18006FDA0 (-Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z.c)
 *     ?ProgressSeek@CKeyframeAnimation@@AEAAJM@Z @ 0x1800D8810 (-ProgressSeek@CKeyframeAnimation@@AEAAJM@Z.c)
 *     ?TimeSeek@CKeyframeAnimation@@AEAAJM@Z @ 0x1800EB7C0 (-TimeSeek@CKeyframeAnimation@@AEAAJM@Z.c)
 *     ?StartAsTriggeredAnimation@CKeyframeAnimation@@UEAAJXZ @ 0x180222910 (-StartAsTriggeredAnimation@CKeyframeAnimation@@UEAAJXZ.c)
 *     ?Repeat@KeyframeSequence@@QEAAXH@Z @ 0x180256AD8 (-Repeat@KeyframeSequence@@QEAAXH@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall KeyframeSequence::ConfigureTimer(KeyframeSequence *this)
{
  float v1; // xmm1_4
  bool v2; // dl
  int v3; // r9d
  int v4; // r8d
  float v5; // xmm1_4
  int v6; // eax

  v1 = *((float *)this + 34);
  v2 = (*((_BYTE *)this + 140) & 0x10) != 0;
  if ( v1 == 1.0 )
  {
    v3 = *((_DWORD *)this + 30);
    v4 = v3;
  }
  else
  {
    v4 = *((_DWORD *)this + 30);
    v3 = (int)(float)((float)v4 * v1);
  }
  v5 = *((float *)this + 33);
  if ( v5 == 0.0 )
    v6 = 0;
  else
    v6 = (int)(float)((float)v4 * v5);
  *((_DWORD *)this + 20) = v6;
  *((_DWORD *)this + 21) = v3;
  *((_DWORD *)this + 22) = v4;
  *((_BYTE *)this + 96) = v2;
  *((_DWORD *)this + 23) = v6;
  *((_BYTE *)this + 140) |= 0x20u;
}
