/*
 * XREFs of _UserGetHwndProcess@4 @ 0xC6856
 * Callers:
 *     ?bSpDwmCreateLogicalSurface@@YGHPAUHDEV__@@PAVDWMSPRITE@@PAVSFMLOGICALSURFACE@@PAUtagSIZE@@PAPAV3@@Z @ 0xC6572 (-bSpDwmCreateLogicalSurface@@YGHPAUHDEV__@@PAVDWMSPRITE@@PAVSFMLOGICALSURFACE@@PAUtagSIZE@@PAPAV.c)
 *     _GreTransferSpriteStateToDwmState@8 @ 0xE11CA (_GreTransferSpriteStateToDwmState@8.c)
 * Callees:
 *     <none>
 */

int __thiscall UserGetHwndProcess(void *this)
{
  int v1; // eax
  int v2; // eax

  v1 = ValidateHwnd(this);
  if ( v1 && (v2 = *(_DWORD *)(v1 + 8)) != 0 )
    return **(_DWORD **)(v2 + 232);
  else
    return 0;
}
