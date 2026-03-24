/*
 * XREFs of ?Pause@CKeyframeAnimation@@AEAAXXZ @ 0x1800197F8
 * Callers:
 *     ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800AAFA0 (-CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x1800AB728 (-ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CKeyframeAnimation::Pause(CKeyframeAnimation *this)
{
  char v1; // al

  if ( (*((_BYTE *)this + 549) & 1) != 0 )
  {
    v1 = *((_BYTE *)this + 548);
    if ( v1 < 0 )
    {
      *((_BYTE *)this + 548) = v1 & 0x7F;
      *(_BYTE *)(*((_QWORD *)this + 45) + 140LL) &= ~2u;
    }
  }
}
