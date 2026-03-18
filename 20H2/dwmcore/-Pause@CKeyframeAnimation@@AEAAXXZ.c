/*
 * XREFs of ?Pause@CKeyframeAnimation@@AEAAXXZ @ 0x18001B22C
 * Callers:
 *     ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180025CC0 (-CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x180026448 (-ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CKeyframeAnimation::Pause(CKeyframeAnimation *this)
{
  char v1; // al

  if ( (*((_BYTE *)this + 541) & 1) != 0 )
  {
    v1 = *((_BYTE *)this + 540);
    if ( v1 < 0 )
    {
      *((_BYTE *)this + 540) = v1 & 0x7F;
      *(_BYTE *)(*((_QWORD *)this + 45) + 140LL) &= ~2u;
    }
  }
}
