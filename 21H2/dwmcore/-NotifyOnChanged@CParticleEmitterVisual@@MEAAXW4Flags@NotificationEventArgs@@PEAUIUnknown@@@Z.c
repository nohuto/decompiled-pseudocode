/*
 * XREFs of ?NotifyOnChanged@CParticleEmitterVisual@@MEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1801E0C80
 * Callers:
 *     <none>
 * Callees:
 *     ??R?$default_delete@VCSpawner@EmitterShapes@@@std@@QEBAXPEAVCSpawner@EmitterShapes@@@Z @ 0x18016C8EC (--R-$default_delete@VCSpawner@EmitterShapes@@@std@@QEBAXPEAVCSpawner@EmitterShapes@@@Z.c)
 *     ?AnimateRemainingParticles@CParticleEmitterVisual@@IEAAJXZ @ 0x1801DEB88 (-AnimateRemainingParticles@CParticleEmitterVisual@@IEAAJXZ.c)
 */

__int64 __fastcall CParticleEmitterVisual::NotifyOnChanged(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v4; // edi
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rax

  v4 = a2;
  if ( a2 == 1 )
  {
    v4 = 6;
  }
  else
  {
    v6 = *(_QWORD *)(a1 + 720);
    if ( v6 && a3 == v6 )
    {
      *(_BYTE *)(a1 + 6358) = 0;
    }
    else if ( a2 == 4 )
    {
      v7 = *(_QWORD *)(a1 + 6312);
      *(_QWORD *)(a1 + 6312) = 0LL;
      if ( v7 )
        std::default_delete<EmitterShapes::CSpawner>::operator()(0LL, v7);
    }
    else if ( a2 - 8 <= 1 )
    {
      v8 = *(_QWORD *)(a1 + 712);
      if ( v8 )
      {
        if ( v8 == a3 )
        {
          *(_BYTE *)(a1 + 6356) = 0;
          CParticleEmitterVisual::AnimateRemainingParticles((CParticleEmitterVisual *)a1);
        }
      }
    }
  }
  return CResource::NotifyOnChanged(a1, v4, a3);
}
