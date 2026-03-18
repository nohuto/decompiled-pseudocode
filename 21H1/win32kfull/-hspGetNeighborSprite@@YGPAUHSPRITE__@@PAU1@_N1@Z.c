/*
 * XREFs of ?hspGetNeighborSprite@@YGPAUHSPRITE__@@PAU1@_N1@Z @ 0xA5C84
 * Callers:
 *     ?hspCreateDwmSpriteObj@@YGPAUHSPRITE__@@PAUHWND__@@KPAUHDEV__@@H@Z @ 0x1EF6E (-hspCreateDwmSpriteObj@@YGPAUHSPRITE__@@PAUHWND__@@KPAUHDEV__@@H@Z.c)
 *     ?GreCreateSpriteInternal@@YGPAXPAUHDEV__@@PAUHWND__@@PAUtagRECT@@PAUtagMINIWINDOWINFO@@KHHHHHPBG@Z @ 0x1F714 (-GreCreateSpriteInternal@@YGPAXPAUHDEV__@@PAUHWND__@@PAUtagRECT@@PAUtagMINIWINDOWINFO@@KHHHHHPBG.c)
 *     ?DwmSetPointerShape@@YGKPAU_SURFOBJ@@00PAU_XLATEOBJ@@JJJJPAU_RECTL@@K@Z @ 0xD014E (-DwmSetPointerShape@@YGKPAU_SURFOBJ@@00PAU_XLATEOBJ@@JJJJPAU_RECTL@@K@Z.c)
 *     ?DwmMovePointer@@YGXPAU_SURFOBJ@@JJPAU_RECTL@@K@Z @ 0xD03E2 (-DwmMovePointer@@YGXPAU_SURFOBJ@@JJPAU_RECTL@@K@Z.c)
 *     ?vSpDwmDestroyCursorSprites@@YGXPAUHDEV__@@@Z @ 0xD07F2 (-vSpDwmDestroyCursorSprites@@YGXPAUHDEV__@@@Z.c)
 * Callees:
 *     <none>
 */

int __userpurge hspGetNeighborSprite@<eax>(char a1@<dl>, int a2@<ecx>, HSPRITE a3, bool a4, bool a5)
{
  int v5; // edi
  _DWORD *v7; // eax
  int v8; // esi
  int v9; // eax
  _DWORD *v11; // [esp+Ch] [ebp-4h]

  v5 = 0;
  v11 = 0;
  v7 = 0;
  if ( a2 )
  {
    v7 = (_DWORD *)HmgShareLockCheck(a2, 15);
    v11 = v7;
  }
  if ( v7 )
  {
    if ( a1 )
      v8 = v7[4];
    else
      v8 = v7[5];
    if ( (_BYTE)a3 && (struct DwmState *)v8 != (struct DwmState *)((char *)g_pDwmState + 44) )
    {
      v9 = v7[7];
      do
      {
        if ( v9 == *(_DWORD *)(v8 != 0 ? v8 - 16 + 0x1C : 28) )
          break;
        v8 = a1 ? *(_DWORD *)v8 : *(_DWORD *)(v8 + 4);
      }
      while ( (struct DwmState *)v8 != (struct DwmState *)((char *)g_pDwmState + 44) );
      v7 = v11;
      v5 = 0;
    }
    if ( (struct DwmState *)v8 != (struct DwmState *)((char *)g_pDwmState + 44) )
      v5 = *(v8 != 0 ? (_DWORD *)(v8 - 16) : 0);
    DEC_SHARE_REF_CNT(v7);
  }
  return v5;
}
