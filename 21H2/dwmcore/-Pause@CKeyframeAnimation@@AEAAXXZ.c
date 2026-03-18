/*
 * XREFs of ?Pause@CKeyframeAnimation@@AEAAXXZ @ 0x18004F718
 * Callers:
 *     ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18004E1B0 (-CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x18004E930 (-ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CKeyframeAnimation::Pause(CKeyframeAnimation *this)
{
  char v1; // al

  if ( (*((_BYTE *)this + 573) & 1) != 0 )
  {
    v1 = *((_BYTE *)this + 572);
    if ( v1 < 0 )
    {
      *((_BYTE *)this + 572) = v1 & 0x7F;
      *(_BYTE *)(*((_QWORD *)this + 48) + 140LL) &= ~2u;
    }
  }
}
