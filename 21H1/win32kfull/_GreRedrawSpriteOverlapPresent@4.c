/*
 * XREFs of _GreRedrawSpriteOverlapPresent@4 @ 0x303E4
 * Callers:
 *     ?zzzBltValidBits@@YG?AW4BltBitsResult@@PAUtagSMWP@@@Z @ 0x339E2 (-zzzBltValidBits@@YG-AW4BltBitsResult@@PAUtagSMWP@@@Z.c)
 * Callees:
 *     ??0SEMOBJEXORSHARED@@QAE@PAUHSEMAPHORE__@@H@Z @ 0x2350A (--0SEMOBJEXORSHARED@@QAE@PAUHSEMAPHORE__@@H@Z.c)
 *     ?vSpRedrawSpriteOverlapPresent@@YGXPAUHDEV__@@@Z @ 0x3046E (-vSpRedrawSpriteOverlapPresent@@YGXPAUHDEV__@@@Z.c)
 */

int __thiscall GreRedrawSpriteOverlapPresent(_DWORD *this)
{
  unsigned int v3; // esi
  int v4; // eax
  HDEV v5; // [esp+0h] [ebp-18h]
  int v6; // [esp+10h] [ebp-8h] BYREF
  int v7; // [esp+14h] [ebp-4h] BYREF

  GreIncNonRBLockCount(_ghsemSprite);
  if ( this[26] )
  {
    v3 = 0;
    do
    {
      v6 = *(_DWORD *)(this[27] + 4 * v3);
      v4 = PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v6);
      SEMOBJEXORSHARED::SEMOBJEXORSHARED((SEMOBJEXORSHARED *)&v7, _ghsemSprite, v4);
      vSpRedrawSpriteOverlapPresent(v5);
      EtwTraceGreLockReleaseSemaphore(L"hsem", v7);
      GreReleaseSemaphoreInternal(v7);
      ++v3;
    }
    while ( v3 < this[26] );
  }
  else
  {
    v6 = this[16];
    if ( PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v6) == 1 )
    {
      GreAcquireSemaphoreSharedInternal(_ghsemSprite);
      EtwTraceGreLockAcquireSemaphoreShared(L"hsem", _ghsemSprite);
    }
    else
    {
      GreAcquireSemaphore(_ghsemSprite);
    }
    vSpRedrawSpriteOverlapPresent(v5);
    EtwTraceGreLockReleaseSemaphore(L"hsem", _ghsemSprite);
    GreReleaseSemaphoreInternal(_ghsemSprite);
  }
  return GreDecNonRBLockCount(_ghsemSprite);
}
