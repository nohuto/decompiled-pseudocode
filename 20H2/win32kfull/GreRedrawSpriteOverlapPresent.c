/*
 * XREFs of GreRedrawSpriteOverlapPresent @ 0x1C00C3120
 * Callers:
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C00482D8 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 * Callees:
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C008513C (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?vSpRedrawSpriteOverlapPresent@@YAXPEAUHDEV__@@@Z @ 0x1C00C31E8 (-vSpRedrawSpriteOverlapPresent@@YAXPEAUHDEV__@@@Z.c)
 *     ??0SEMOBJEXORSHARED@@QEAA@PEAUHSEMAPHORE__@@H@Z @ 0x1C00C32E0 (--0SEMOBJEXORSHARED@@QEAA@PEAUHSEMAPHORE__@@H@Z.c)
 */

__int64 __fastcall GreRedrawSpriteOverlapPresent(__int64 a1)
{
  __int64 v2; // rdi
  int v3; // eax
  int v5; // eax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  GreIncNonRBLockCount(ghsemSprite);
  v2 = 0LL;
  if ( *(_DWORD *)(a1 + 148) )
  {
    do
    {
      v6 = *(_QWORD *)(*(_QWORD *)(a1 + 152) + 8 * v2);
      v5 = PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v6);
      SEMOBJEXORSHARED::SEMOBJEXORSHARED((SEMOBJEXORSHARED *)&v7, ghsemSprite, v5);
      vSpRedrawSpriteOverlapPresent(*(HDEV *)(*(_QWORD *)(a1 + 152) + 8 * v2));
      SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)&v7);
      v2 = (unsigned int)(v2 + 1);
    }
    while ( (unsigned int)v2 < *(_DWORD *)(a1 + 148) );
  }
  else
  {
    v7 = *(_QWORD *)(a1 + 88);
    v3 = PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v7);
    SEMOBJEXORSHARED::SEMOBJEXORSHARED((SEMOBJEXORSHARED *)&v6, ghsemSprite, v3);
    vSpRedrawSpriteOverlapPresent(*(HDEV *)(a1 + 88));
    EtwTraceGreLockReleaseSemaphore(L"hsem", v6);
    GreReleaseSemaphoreInternal(v6);
  }
  return GreDecNonRBLockCount(ghsemSprite);
}
