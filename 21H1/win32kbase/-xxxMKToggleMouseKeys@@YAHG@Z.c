/*
 * XREFs of ?xxxMKToggleMouseKeys@@YAHG@Z @ 0x1C018B1B0
 * Callers:
 *     <none>
 * Callees:
 *     ?TurnOffMouseKeys@@YAXXZ @ 0x1C0189E20 (-TurnOffMouseKeys@@YAXXZ.c)
 *     ?xxxMKButtonSetState@@YAHG@Z @ 0x1C018A100 (-xxxMKButtonSetState@@YAHG@Z.c)
 *     ApiSetEditionPostAccessibility @ 0x1C01CF630 (ApiSetEditionPostAccessibility.c)
 *     ApiSetEditionPostRitSound @ 0x1C01CFA4C (ApiSetEditionPostRitSound.c)
 */

_BOOL8 __fastcall xxxMKToggleMouseKeys()
{
  BOOL v0; // edi
  __int64 v1; // rdx
  __int16 v2; // bx

  v0 = 1;
  if ( (gdwPUDFlags & 0x2000) == 0 )
  {
    if ( ((unsigned __int8)gLockBits | (unsigned __int8)(gLatchBits | gPhysModifierState)) == 17 )
    {
      if ( (dword_1C0251BA4 & 4) != 0 )
      {
        v0 = gbMKMouseMode != 0;
        TurnOffMouseKeys();
      }
    }
    else
    {
      v1 = (unsigned int)(1 << (2 * (gNumLockVk & 3) + 1));
      if ( (((unsigned int)dword_1C0251BA4 >> 7) & 1) == (((unsigned __int8)v1 & *((_BYTE *)&gafAsyncKeyState
                                                                                 + ((unsigned __int64)(unsigned __int8)gNumLockVk >> 2))) != 0) )
      {
        gbMKMouseMode = 1;
        ApiSetEditionPostRitSound(3LL, v1, 0LL);
      }
      else
      {
        gbMKMouseMode = 0;
        ApiSetEditionPostRitSound(2LL, v1, 0LL);
        v2 = gwMKCurrentButton;
        gwMKCurrentButton = 3;
        xxxMKButtonSetState(1);
        gwMKCurrentButton = v2;
      }
      ApiSetEditionPostAccessibility(3LL);
    }
  }
  return v0;
}
