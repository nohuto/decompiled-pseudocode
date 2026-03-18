/*
 * XREFs of ?UpdateTime@CKeyframeAnimation@@AEAAXH@Z @ 0x1801D3108
 * Callers:
 *     ?ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x18008B108 (-ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z.c)
 * Callees:
 *     ?GetAnimationTimeLength@CKeyframeAnimation@@QEBAMXZ @ 0x180089BB4 (-GetAnimationTimeLength@CKeyframeAnimation@@QEBAMXZ.c)
 *     ?ConfigureTimer@KeyframeSequence@@QEAAXXZ @ 0x18008BDEC (-ConfigureTimer@KeyframeSequence@@QEAAXXZ.c)
 */

void __fastcall CKeyframeAnimation::UpdateTime(CKeyframeAnimation *this, int a2)
{
  KeyframeSequence *v3; // r11
  int v4; // r10d
  __int64 v5; // r11
  int v6; // eax
  int v7; // ecx
  int v8; // ecx
  __int64 v9; // rax

  if ( *((char *)this + 540) < 0 )
  {
    if ( *((_DWORD *)this + 133) == 4 )
    {
      CKeyframeAnimation::GetAnimationTimeLength(this);
      KeyframeSequence::ConfigureTimer(v3);
      *(_DWORD *)(v5 + 92) = v4;
    }
    else
    {
      v6 = *((_DWORD *)this + 113);
      v7 = *((_DWORD *)this + 112);
      if ( v6 < v7 )
      {
        v8 = v7 - v6;
        if ( a2 < v8 )
          v8 = a2;
        *((_DWORD *)this + 113) = v8 + v6;
        a2 -= v8;
      }
      v9 = *((_QWORD *)this + 45);
      if ( (*(_BYTE *)(v9 + 140) & 2) != 0 )
        *(_DWORD *)(v9 + 92) += a2;
    }
  }
}
