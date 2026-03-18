/*
 * XREFs of ?PrepareSequenceForIteration@CKeyframeAnimation@@AEAAXI@Z @ 0x1800505B4
 * Callers:
 *     ?Calculate@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x18004ECF0 (-Calculate@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z.c)
 *     ?Play@CKeyframeAnimation@@AEAAXPEAVCExpressionValueStack@@@Z @ 0x18004F74C (-Play@CKeyframeAnimation@@AEAAXPEAVCExpressionValueStack@@@Z.c)
 *     ?Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z @ 0x18006FDA0 (-Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z.c)
 *     ?ProgressSeek@CKeyframeAnimation@@AEAAJM@Z @ 0x1800D8810 (-ProgressSeek@CKeyframeAnimation@@AEAAJM@Z.c)
 *     ?TimeSeek@CKeyframeAnimation@@AEAAJM@Z @ 0x1800EB7C0 (-TimeSeek@CKeyframeAnimation@@AEAAJM@Z.c)
 *     ?StartAsTriggeredAnimation@CKeyframeAnimation@@UEAAJXZ @ 0x180222910 (-StartAsTriggeredAnimation@CKeyframeAnimation@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CKeyframeAnimation::PrepareSequenceForIteration(CKeyframeAnimation *this, int a2)
{
  int v2; // eax
  int v4; // xmm1_4
  char v5; // cl
  int v6; // eax
  __int64 v7; // rax
  __int64 v8; // rdx
  char v9; // cl

  v2 = *((_DWORD *)this + 141);
  v4 = (int)FLOAT_1_0;
  if ( v2 )
  {
    if ( v2 == 2 )
    {
      v5 = *((_BYTE *)this + 573) >> 3;
      if ( (a2 & 1) != 0 )
        v5 = ~v5;
    }
    else
    {
      v5 = 0;
    }
  }
  else
  {
    v5 = *((_BYTE *)this + 573) >> 3;
  }
  v6 = *((_DWORD *)this + 134);
  if ( v6 >= 0 && a2 == v6 && *((float *)this + 136) != 1.0 )
    v4 = *((_DWORD *)this + 136);
  v7 = *((_QWORD *)this + 48);
  *(_BYTE *)(v7 + 140) &= ~8u;
  *(_BYTE *)(v7 + 140) |= 8 * (v5 & 1);
  v8 = *((_QWORD *)this + 48);
  v9 = *(_BYTE *)(v8 + 140) & 0xEF | (*((float *)this + 130) >= 0.0 ? 0 : 0x10);
  *(_BYTE *)(v8 + 140) = v9;
  *(_BYTE *)(v8 + 96) = (v9 & 0x10) != 0;
  *(_DWORD *)(*((_QWORD *)this + 48) + 132LL) = 0;
  *(_DWORD *)(*((_QWORD *)this + 48) + 136LL) = v4;
}
