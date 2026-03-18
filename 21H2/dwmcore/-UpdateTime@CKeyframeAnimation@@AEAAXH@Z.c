/*
 * XREFs of ?UpdateTime@CKeyframeAnimation@@AEAAXH@Z @ 0x18004F31C
 * Callers:
 *     ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18004E1B0 (-CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x18004E930 (-ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z.c)
 * Callees:
 *     ?ConfigureTimer@KeyframeSequence@@QEAAXXZ @ 0x18004F554 (-ConfigureTimer@KeyframeSequence@@QEAAXXZ.c)
 *     ?GetAnimationTimeLength@CKeyframeAnimation@@QEBAMXZ @ 0x18004F5C0 (-GetAnimationTimeLength@CKeyframeAnimation@@QEBAMXZ.c)
 */

void __fastcall CKeyframeAnimation::UpdateTime(CKeyframeAnimation *this, int a2)
{
  KeyframeSequence *v3; // r11
  int v4; // r10d
  __int64 v5; // r11
  int v6; // eax
  int v7; // ecx
  __int64 v8; // rax
  int v9; // ecx

  if ( *((char *)this + 572) < 0 )
  {
    if ( *((_DWORD *)this + 141) == 4 )
    {
      CKeyframeAnimation::GetAnimationTimeLength(this);
      KeyframeSequence::ConfigureTimer(v3);
      *(_DWORD *)(v5 + 92) = v4;
    }
    else
    {
      v6 = *((_DWORD *)this + 121);
      v7 = *((_DWORD *)this + 120);
      if ( v6 < v7 )
      {
        v9 = v7 - v6;
        if ( a2 < v9 )
          v9 = a2;
        *((_DWORD *)this + 121) = v9 + v6;
        a2 -= v9;
      }
      v8 = *((_QWORD *)this + 48);
      if ( (*(_BYTE *)(v8 + 140) & 2) != 0 )
        *(_DWORD *)(v8 + 92) += a2;
    }
  }
}
