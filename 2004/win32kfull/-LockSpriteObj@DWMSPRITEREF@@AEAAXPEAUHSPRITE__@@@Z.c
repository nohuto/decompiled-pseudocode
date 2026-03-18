/*
 * XREFs of ?LockSpriteObj@DWMSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z @ 0x1C001FBA8
 * Callers:
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z @ 0x1C001F384 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x1C001FB78 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z.c)
 *     ?vSpDwmZorderSprite@@YAXPEAUHSPRITE__@@0@Z @ 0x1C001FF8C (-vSpDwmZorderSprite@@YAXPEAUHSPRITE__@@0@Z.c)
 *     ?GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHHHHPEBG@Z @ 0x1C0028F80 (-GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHH.c)
 *     ?hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z @ 0x1C0029534 (-hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z.c)
 *     ?DwmMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@K@Z @ 0x1C0052FE4 (-DwmMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@K@Z.c)
 *     GreTransferSpriteStateToDwmState @ 0x1C0053B00 (GreTransferSpriteStateToDwmState.c)
 *     ?vSpDwmMigrateSpriteLSurfReference@@YAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@PEAVSURFACE@@1@Z @ 0x1C0054018 (-vSpDwmMigrateSpriteLSurfReference@@YAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@PEAVSURFACE@@1@Z.c)
 *     CheckAndProcessSurfaceComplete @ 0x1C026FD80 (CheckAndProcessSurfaceComplete.c)
 * Callees:
 *     <none>
 */

void __fastcall DWMSPRITEREF::LockSpriteObj(DWMSPRITEREF *this, HSPRITE a2)
{
  HSPRITE v3; // rcx

  if ( a2 )
  {
    v3 = a2;
    LOBYTE(a2) = 15;
    *(_QWORD *)this = HmgLock(v3, a2);
  }
}
